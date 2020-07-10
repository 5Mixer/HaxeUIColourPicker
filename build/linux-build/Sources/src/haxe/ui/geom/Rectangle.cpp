// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <hxinc/haxe/ui/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c81183e02c625e87_9_new,"haxe.ui.geom.Rectangle","new",0x4dea32e1,"haxe.ui.geom.Rectangle.new","haxe/ui/geom/Rectangle.hx",9,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_18_get_right,"haxe.ui.geom.Rectangle","get_right",0xfaea2174,"haxe.ui.geom.Rectangle.get_right","haxe/ui/geom/Rectangle.hx",18,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_20_set_right,"haxe.ui.geom.Rectangle","set_right",0xde3b0d80,"haxe.ui.geom.Rectangle.set_right","haxe/ui/geom/Rectangle.hx",20,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_27_get_bottom,"haxe.ui.geom.Rectangle","get_bottom",0xa945b653,"haxe.ui.geom.Rectangle.get_bottom","haxe/ui/geom/Rectangle.hx",27,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_29_set_bottom,"haxe.ui.geom.Rectangle","set_bottom",0xacc354c7,"haxe.ui.geom.Rectangle.set_bottom","haxe/ui/geom/Rectangle.hx",29,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_34_inflate,"haxe.ui.geom.Rectangle","inflate",0x683bd388,"haxe.ui.geom.Rectangle.inflate","haxe/ui/geom/Rectangle.hx",34,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_39_containsPoint,"haxe.ui.geom.Rectangle","containsPoint",0x0d24a772,"haxe.ui.geom.Rectangle.containsPoint","haxe/ui/geom/Rectangle.hx",39,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_47_containsRect,"haxe.ui.geom.Rectangle","containsRect",0x5d309442,"haxe.ui.geom.Rectangle.containsRect","haxe/ui/geom/Rectangle.hx",47,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_54_intersects,"haxe.ui.geom.Rectangle","intersects",0x37312253,"haxe.ui.geom.Rectangle.intersects","haxe/ui/geom/Rectangle.hx",54,0xebbd5690)
HX_LOCAL_STACK_FRAME(_hx_pos_c81183e02c625e87_70_toString,"haxe.ui.geom.Rectangle","toString",0x787eba8b,"haxe.ui.geom.Rectangle.toString","haxe/ui/geom/Rectangle.hx",70,0xebbd5690)
namespace haxe{
namespace ui{
namespace geom{

void Rectangle_obj::__construct(hx::Null< Float >  __o_left,hx::Null< Float >  __o_top,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
            		Float left = __o_left.Default(0);
            		Float top = __o_top.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_9_new)
HXLINE(  10)		this->left = left;
HXLINE(  11)		this->top = top;
HXLINE(  12)		this->width = width;
HXLINE(  13)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x714cfe11;
}

Float Rectangle_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_18_get_right)
HXDLIN(  18)		return (this->left + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float value){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_20_set_right)
HXLINE(  21)		this->width = (value - this->left);
HXLINE(  22)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

Float Rectangle_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_27_get_bottom)
HXDLIN(  27)		return (this->top + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float value){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_29_set_bottom)
HXLINE(  30)		this->height = (value - this->top);
HXLINE(  31)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_34_inflate)
HXLINE(  35)		 ::haxe::ui::geom::Rectangle _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp->left = (_hx_tmp->left - dx);
HXDLIN(  35)		 ::haxe::ui::geom::Rectangle _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp1->width = (_hx_tmp1->width + (dx * ( (Float)(2) )));
HXLINE(  36)		 ::haxe::ui::geom::Rectangle _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp2->top = (_hx_tmp2->top - dy);
HXDLIN(  36)		 ::haxe::ui::geom::Rectangle _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp3->height = (_hx_tmp3->height + (dy * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

bool Rectangle_obj::containsPoint(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_39_containsPoint)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		bool _hx_tmp1;
HXDLIN(  40)		bool _hx_tmp2;
HXDLIN(  40)		if ((x >= this->left)) {
HXLINE(  40)			_hx_tmp2 = (x < (this->left + this->width));
            		}
            		else {
HXLINE(  40)			_hx_tmp2 = false;
            		}
HXDLIN(  40)		if (_hx_tmp2) {
HXLINE(  40)			_hx_tmp1 = (y >= this->top);
            		}
            		else {
HXLINE(  40)			_hx_tmp1 = false;
            		}
HXDLIN(  40)		if (_hx_tmp1) {
HXLINE(  40)			_hx_tmp = (y < (this->top + this->height));
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return true;
            		}
HXLINE(  43)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::haxe::ui::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_47_containsRect)
HXDLIN(  47)		bool _hx_tmp;
HXDLIN(  47)		if (!((rect->width <= 0))) {
HXDLIN(  47)			_hx_tmp = (rect->height <= 0);
            		}
            		else {
HXDLIN(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			bool _hx_tmp1;
HXDLIN(  48)			bool _hx_tmp2;
HXDLIN(  48)			if ((rect->left > this->left)) {
HXLINE(  48)				_hx_tmp2 = (rect->top > this->top);
            			}
            			else {
HXLINE(  48)				_hx_tmp2 = false;
            			}
HXDLIN(  48)			if (_hx_tmp2) {
HXLINE(  48)				Float _hx_tmp3 = rect->get_right();
HXDLIN(  48)				_hx_tmp1 = (_hx_tmp3 < this->get_right());
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = false;
            			}
HXDLIN(  48)			if (_hx_tmp1) {
HXLINE(  48)				Float _hx_tmp4 = rect->get_bottom();
HXDLIN(  48)				return (_hx_tmp4 < this->get_bottom());
            			}
            			else {
HXLINE(  48)				return false;
            			}
            		}
            		else {
HXLINE(  50)			bool _hx_tmp5;
HXDLIN(  50)			bool _hx_tmp6;
HXDLIN(  50)			if ((rect->left >= this->left)) {
HXLINE(  50)				_hx_tmp6 = (rect->top >= this->top);
            			}
            			else {
HXLINE(  50)				_hx_tmp6 = false;
            			}
HXDLIN(  50)			if (_hx_tmp6) {
HXLINE(  50)				Float _hx_tmp7 = rect->get_right();
HXDLIN(  50)				_hx_tmp5 = (_hx_tmp7 <= this->get_right());
            			}
            			else {
HXLINE(  50)				_hx_tmp5 = false;
            			}
HXDLIN(  50)			if (_hx_tmp5) {
HXLINE(  50)				Float _hx_tmp8 = rect->get_bottom();
HXDLIN(  50)				return (_hx_tmp8 <= this->get_bottom());
            			}
            			else {
HXLINE(  50)				return false;
            			}
            		}
HXLINE(  47)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

bool Rectangle_obj::intersects( ::haxe::ui::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_54_intersects)
HXLINE(  55)		Float x0;
HXDLIN(  55)		if ((this->left < rect->left)) {
HXLINE(  55)			x0 = rect->left;
            		}
            		else {
HXLINE(  55)			x0 = this->left;
            		}
HXLINE(  56)		Float x1;
HXDLIN(  56)		Float x11 = this->get_right();
HXDLIN(  56)		if ((x11 > rect->get_right())) {
HXLINE(  56)			x1 = rect->get_right();
            		}
            		else {
HXLINE(  56)			x1 = this->get_right();
            		}
HXLINE(  58)		if ((x1 <= x0)) {
HXLINE(  59)			return false;
            		}
HXLINE(  62)		Float y0;
HXDLIN(  62)		if ((this->top < rect->top)) {
HXLINE(  62)			y0 = rect->top;
            		}
            		else {
HXLINE(  62)			y0 = this->top;
            		}
HXLINE(  63)		Float y1;
HXDLIN(  63)		Float y11 = this->get_bottom();
HXDLIN(  63)		if ((y11 > rect->get_bottom())) {
HXLINE(  63)			y1 = rect->get_bottom();
            		}
            		else {
HXLINE(  63)			y1 = this->get_bottom();
            		}
HXLINE(  65)		return (y1 > y0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

::String Rectangle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c81183e02c625e87_70_toString)
HXDLIN(  70)		::String _hx_tmp = ((((HX_("{left: ",28,99,97,94) + this->left) + HX_(", top: ",87,1d,4b,05)) + this->top) + HX_(", bottom: ",c5,a4,aa,cd));
HXDLIN(  70)		::String _hx_tmp1 = ((_hx_tmp + this->get_bottom()) + HX_(", right: ",8e,3d,30,7b));
HXDLIN(  70)		::String _hx_tmp2 = ((_hx_tmp1 + this->get_right()) + HX_(", width: ",38,46,cd,98));
HXDLIN(  70)		return ((((_hx_tmp2 + this->width) + HX_(", height: ",c1,fc,44,9e)) + this->height) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )


Rectangle_obj::Rectangle_obj()
{
}

hx::Val Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_right() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bottom() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inflate") ) { return hx::Val( inflate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return hx::Val( set_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersects") ) { return hx::Val( intersects_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return hx::Val( containsRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return hx::Val( containsPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Rectangle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_right(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bottom(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("bottom",eb,e6,78,65));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,left),HX_("left",07,08,b0,47)},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,top),HX_("top",95,66,58,00)},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_("height",e7,07,4c,02)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Rectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("top",95,66,58,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("inflate",87,9c,1b,0c),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("containsRect",e3,ce,1c,a6),
	HX_("intersects",b4,c2,eb,e3),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	Rectangle_obj _hx_dummy;
	Rectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.geom.Rectangle",6f,2e,85,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace geom
