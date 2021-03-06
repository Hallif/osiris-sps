// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmllinktag.h"
#include "htmlwriter.h"
#include "htmllinktag.pypp.hpp"

namespace bp = boost::python;

struct HtmlLinkTag_wrapper : ::osiris::HtmlLinkTag, ::osiris::PythonWrapper< ::osiris::HtmlLinkTag > {

    HtmlLinkTag_wrapper(::osiris::HtmlLinkTag const & arg )
    : ::osiris::HtmlLinkTag( arg )
      , ::osiris::PythonWrapper< ::osiris::HtmlLinkTag >(){
        // copy constructor
        
    }

    HtmlLinkTag_wrapper( )
    : ::osiris::HtmlLinkTag( )
      , ::osiris::PythonWrapper< ::osiris::HtmlLinkTag >(){
        // null constructor
    
    }

    static boost::python::object getRel( ::osiris::HtmlLinkTag const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getRel();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getHref( ::osiris::HtmlLinkTag const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getHref();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getType( ::osiris::HtmlLinkTag const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getType();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getTitle( ::osiris::HtmlLinkTag const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getTitle();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getHreflang( ::osiris::HtmlLinkTag const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getHreflang();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object create( ::osiris::String const & rel, ::osiris::String const & href ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlLinkTag> result = ::osiris::HtmlLinkTag::create(rel, href);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void render( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_render = this->get_override( "render" ) )
            func_render( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlLinkTag::render( boost::ref(writer) );
        }
    }
    
    void default_render( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlLinkTag::render( boost::ref(writer) );
    }

    static void setHref( ::osiris::HtmlLinkTag & inst, ::osiris::String const & href ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setHref(href);
        __pythreadSaver.restore();
    }

    static void setHreflang( ::osiris::HtmlLinkTag & inst, ::osiris::String const & hreflang ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setHreflang(hreflang);
        __pythreadSaver.restore();
    }

    static void setRel( ::osiris::HtmlLinkTag & inst, ::osiris::String const & rel ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setRel(rel);
        __pythreadSaver.restore();
    }

    static void setTitle( ::osiris::HtmlLinkTag & inst, ::osiris::String const & title ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setTitle(title);
        __pythreadSaver.restore();
    }

    static void setType( ::osiris::HtmlLinkTag & inst, ::osiris::String const & type ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setType(type);
        __pythreadSaver.restore();
    }

};

void register_HtmlLinkTag_class(){

    { //::osiris::HtmlLinkTag
        typedef ::boost::python::class_< HtmlLinkTag_wrapper, ::boost::noncopyable > HtmlLinkTag_exposer_t;
        HtmlLinkTag_exposer_t HtmlLinkTag_exposer = HtmlLinkTag_exposer_t( "HtmlLinkTag", ::boost::python::no_init );
        ::boost::python::scope HtmlLinkTag_scope( HtmlLinkTag_exposer );
        HtmlLinkTag_exposer.def( ::boost::python::init< >() );
        { //::osiris::HtmlLinkTag::getRel
        
            typedef boost::python::object ( *getRel_function_type )( ::osiris::HtmlLinkTag const & );
            
            HtmlLinkTag_exposer.def( 
                "getRel"
                , getRel_function_type( &HtmlLinkTag_wrapper::getRel ) );
        
        }
        { //::osiris::HtmlLinkTag::getHref
        
            typedef boost::python::object ( *getHref_function_type )( ::osiris::HtmlLinkTag const & );
            
            HtmlLinkTag_exposer.def( 
                "getHref"
                , getHref_function_type( &HtmlLinkTag_wrapper::getHref ) );
        
        }
        { //::osiris::HtmlLinkTag::getType
        
            typedef boost::python::object ( *getType_function_type )( ::osiris::HtmlLinkTag const & );
            
            HtmlLinkTag_exposer.def( 
                "getType"
                , getType_function_type( &HtmlLinkTag_wrapper::getType ) );
        
        }
        { //::osiris::HtmlLinkTag::getTitle
        
            typedef boost::python::object ( *getTitle_function_type )( ::osiris::HtmlLinkTag const & );
            
            HtmlLinkTag_exposer.def( 
                "getTitle"
                , getTitle_function_type( &HtmlLinkTag_wrapper::getTitle ) );
        
        }
        { //::osiris::HtmlLinkTag::getHreflang
        
            typedef boost::python::object ( *getHreflang_function_type )( ::osiris::HtmlLinkTag const & );
            
            HtmlLinkTag_exposer.def( 
                "getHreflang"
                , getHreflang_function_type( &HtmlLinkTag_wrapper::getHreflang ) );
        
        }
        { //::osiris::HtmlLinkTag::create
        
            typedef boost::python::object ( *create_function_type )( ::osiris::String const &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "create"
                , create_function_type( &HtmlLinkTag_wrapper::create )
                , ( ::boost::python::arg("rel"), ::boost::python::arg("href") ) );
        
        }
        { //::osiris::HtmlLinkTag::render
        
            typedef void ( ::osiris::HtmlLinkTag::*render_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlLinkTag_wrapper::*default_render_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlLinkTag_exposer.def( 
                "render"
                , render_function_type(&::osiris::HtmlLinkTag::render)
                , default_render_function_type(&HtmlLinkTag_wrapper::default_render)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlLinkTag::setHref
        
            typedef void ( *setHref_function_type )( ::osiris::HtmlLinkTag &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "setHref"
                , setHref_function_type( &HtmlLinkTag_wrapper::setHref )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("href") ) );
        
        }
        { //::osiris::HtmlLinkTag::setHreflang
        
            typedef void ( *setHreflang_function_type )( ::osiris::HtmlLinkTag &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "setHreflang"
                , setHreflang_function_type( &HtmlLinkTag_wrapper::setHreflang )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("hreflang") ) );
        
        }
        { //::osiris::HtmlLinkTag::setRel
        
            typedef void ( *setRel_function_type )( ::osiris::HtmlLinkTag &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "setRel"
                , setRel_function_type( &HtmlLinkTag_wrapper::setRel )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("rel") ) );
        
        }
        { //::osiris::HtmlLinkTag::setTitle
        
            typedef void ( *setTitle_function_type )( ::osiris::HtmlLinkTag &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "setTitle"
                , setTitle_function_type( &HtmlLinkTag_wrapper::setTitle )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("title") ) );
        
        }
        { //::osiris::HtmlLinkTag::setType
        
            typedef void ( *setType_function_type )( ::osiris::HtmlLinkTag &,::osiris::String const & );
            
            HtmlLinkTag_exposer.def( 
                "setType"
                , setType_function_type( &HtmlLinkTag_wrapper::setType )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("type") ) );
        
        }
        HtmlLinkTag_exposer.staticmethod( "create" );
        { //property "rel"[fget=::osiris::HtmlLinkTag::getRel, fset=::osiris::HtmlLinkTag::setRel]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLinkTag::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLinkTag::*fset )( ::osiris::String const & ) ;
            
            HtmlLinkTag_exposer.add_property( 
                "rel"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLinkTag::getRel )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLinkTag::setRel )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLinkTag::getRel() const [member function]\" and \"void osiris::HtmlLinkTag::setRel(osiris::String const & rel) [member function]\"" );
        
        }
        { //property "href"[fget=::osiris::HtmlLinkTag::getHref, fset=::osiris::HtmlLinkTag::setHref]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLinkTag::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLinkTag::*fset )( ::osiris::String const & ) ;
            
            HtmlLinkTag_exposer.add_property( 
                "href"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLinkTag::getHref )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLinkTag::setHref )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLinkTag::getHref() const [member function]\" and \"void osiris::HtmlLinkTag::setHref(osiris::String const & href) [member function]\"" );
        
        }
        { //property "type"[fget=::osiris::HtmlLinkTag::getType, fset=::osiris::HtmlLinkTag::setType]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLinkTag::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLinkTag::*fset )( ::osiris::String const & ) ;
            
            HtmlLinkTag_exposer.add_property( 
                "type"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLinkTag::getType )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLinkTag::setType )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLinkTag::getType() const [member function]\" and \"void osiris::HtmlLinkTag::setType(osiris::String const & type) [member function]\"" );
        
        }
        { //property "title"[fget=::osiris::HtmlLinkTag::getTitle, fset=::osiris::HtmlLinkTag::setTitle]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLinkTag::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLinkTag::*fset )( ::osiris::String const & ) ;
            
            HtmlLinkTag_exposer.add_property( 
                "title"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLinkTag::getTitle )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLinkTag::setTitle )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLinkTag::getTitle() const [member function]\" and \"void osiris::HtmlLinkTag::setTitle(osiris::String const & title) [member function]\"" );
        
        }
        { //property "hreflang"[fget=::osiris::HtmlLinkTag::getHreflang, fset=::osiris::HtmlLinkTag::setHreflang]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLinkTag::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLinkTag::*fset )( ::osiris::String const & ) ;
            
            HtmlLinkTag_exposer.add_property( 
                "hreflang"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLinkTag::getHreflang )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLinkTag::setHreflang )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLinkTag::getHreflang() const [member function]\" and \"void osiris::HtmlLinkTag::setHreflang(osiris::String const & hreflang) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HtmlLinkTag > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlLinkTag >, boost::shared_ptr< ::osiris::Object > >();
    }

}
