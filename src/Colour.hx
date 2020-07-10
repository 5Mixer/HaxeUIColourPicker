package ;

// Modified from FlxColor

abstract Colour(Int) from Int to Int {
	/**
	 * Performs implicit casting from an ARGB hex string to a color.
	 * @param   argb  ARGB hex string
	 * @return  Colour based on hex string
	 */
	@:from public static inline function fromString(argb:String):Colour {
		return new Colour(Std.parseInt(argb));
	}

	public static inline function fromHSL(h:Float, s:Float, l:Float) {
		var r, g, b;

		if (s == 0) {
			r = g = b = l; // achromatic
		} else {
			var hue2rgb = function hue2rgb(p:Float, q:Float, t:Float) {
				if (t < 0)
					t += 1;
				if (t > 1)
					t -= 1;
				if (t < 1 / 6)
					return p + (q - p) * 6 * t;
				if (t < 1 / 2)
					return q;
				if (t < 2 / 3)
					return p + (q - p) * (2 / 3 - t) * 6;
				return p;
			}

			var q = l < 0.5 ? l * (1 + s) : l + s - l * s;
			var p = 2 * l - q;
			r = hue2rgb(p, q, h + 1 / 3);
			g = hue2rgb(p, q, h);
			b = hue2rgb(p, q, h - 1 / 3);
		}

		return fromARGBi(255, Math.round(r * 255), Math.round(g * 255), Math.round(b * 255));
	}

	/**
	 * Creates a new color from integer color components.
	 * @param   a   Alpha channel value
	 * @param   r   Red channel value
	 * @param   g   Green channel value
	 * @param   b   Blue channel value
	 * @return  Colour based on color components
	 */
	public static inline function fromARGBi(a:Int, r:Int, g:Int, b:Int):Colour {
		return new Colour((a << 24) | (r << 16) | (g << 8) | b);
	}

	/**
	 * Creates a new color from floating point color components.
	 * @param   a   Alpha channel value
	 * @param   r   Red channel value
	 * @param   g   Green channel value
	 * @param   b   Blue channel value
	 * @return  Colour based on color components
	 */
	public static inline function fromARGBf(a:Float, r:Float, g:Float, b:Float):Colour {
		return fromARGBi(Std.int(a * 255), Std.int(r * 255), Std.int(g * 255), Std.int(b * 255));
	}

	/**
	 * Constructs a new color.
	 * @param   argb  Colour formatted as ARGB integer
	 */
	inline function new(argb:Int)
		this = argb;

	public var int(get, set):Int;

	inline function get_int()
		return (this);

	inline function set_int(i:Int) {
		this = i;
		return this;
	}

	/**
	 * Integer color channel getters and setters.
	 */
	public var ai(get, set):Int;

	inline function get_ai()
		return (this >> 24) & 0xff;

	inline function set_ai(ai:Int) {
		this = fromARGBi(ai, ri, gi, bi);
		return ai;
	}

	public var ri(get, set):Int;

	inline function get_ri()
		return (this >> 16) & 0xff;

	inline function set_ri(ri:Int) {
		this = fromARGBi(ai, ri, gi, bi);
		return ri;
	}

	public var gi(get, set):Int;

	inline function get_gi()
		return (this >> 8) & 0xff;

	inline function set_gi(gi:Int) {
		this = fromARGBi(ai, ri, gi, bi);
		return gi;
	}

	public var bi(get, set):Int;

	inline function get_bi()
		return this & 0xff;

	inline function set_bi(bi:Int) {
		this = fromARGBi(ai, ri, gi, bi);
		return bi;
	}

	public var af(get, set):Float;

	inline function get_af()
		return ai / 255;

	inline function set_af(af:Float) {
		this = fromARGBf(af, rf, gf, bf);
		return af;
	}

	public var rf(get, set):Float;

	inline function get_rf()
		return ri / 255;

	inline function set_rf(rf:Float) {
		this = fromARGBf(af, rf, gf, bf);
		return rf;
	}

	public var gf(get, set):Float;

	inline function get_gf()
		return gi / 255;

	inline function set_gf(gf:Float) {
		this = fromARGBf(af, rf, gf, bf);
		return gf;
	}

	public var bf(get, set):Float;

	inline function get_bf()
		return bi / 255;

	inline function set_bf(bf:Float) {
		this = fromARGBf(af, rf, gf, bf);
		return bf;
	}
}