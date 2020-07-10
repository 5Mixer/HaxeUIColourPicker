package ;

import haxe.ui.containers.Box;
import haxe.ui.events.MouseEvent;
import haxe.ui.events.UIEvent;
import haxe.ui.containers.Box;
import kha.graphics2.Graphics;
using kha.graphics2.GraphicsExtension;

class ColourPicker extends Box {
    public var selectedColour:Colour;
    public var colourSpaceImage:kha.Image;

    public var h:Float = 0;
    public var s:Float = 0;
    public var l:Float = 0;
    
    public function new() {
        super();
        registerEvent(MouseEvent.CLICK, onViewClick);
        registerEvent(UIEvent.READY, generateImage);
        registerEvent(MouseEvent.MOUSE_MOVE, onMouseMove);
    }

    function generateImage(e) {
        colourSpaceImage = kha.Image.createRenderTarget(Math.ceil(width), Math.ceil(height));
        colourSpaceImage.g2.begin(true, kha.Color.Red);
        colourSpaceImage.g2.end();
        colourSpaceImage.g1.begin();
        for (x in 0...Math.ceil(width)) {
            for (y in 0...Math.ceil(height)) {
                var h = 0;
                var s = x / width;
                var l = y / height;
                var colour = kha.Color.fromValue(Colour.fromHSL(h, s, l));
                colourSpaceImage.g1.setPixel(x,y, colour);
            }
        }
        colourSpaceImage.g1.end();
    }
    
    public override function renderTo(g:Graphics) {
        if (this.isReady == false || this.hidden == true) {
            return;
        }

        g.color = kha.Color.White;
        g.drawImage(colourSpaceImage, screenX, screenY);

        g.color = kha.Color.Black;
        g.drawCircle(left + s*width, top + l * height, 12, 6);
        g.color = kha.Color.White;
        g.drawCircle(left + s*width, top + l * height, 12, 3);

        super.renderTo(g);
    }

    function onMouseMove(event:MouseEvent) {
        trace('$event');
        s = event.localX / width;
        l = event.localY / height;
    }
    
    function onViewClick(event:MouseEvent) {
        var x = event.localX;
        var y = event.localY;
        var cx = this.width;
        var cy = this.height;
        if (x < cx / 2 && y < cy / 2) {
            dispatch(new UIEvent(UIEvent.CHANGE));
        } else if (x > cx / 2 &&  y < cy / 2) {
            dispatch(new UIEvent(UIEvent.CHANGE));
        } else if (x < cx / 2 && y > cy / 2) {
            dispatch(new UIEvent(UIEvent.CHANGE));
        } else if (x > cx / 2 && y > cy / 2) {
            dispatch(new UIEvent(UIEvent.CHANGE));
        }
    }
}