// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlliteral.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlliteral.pypp.hpp"

namespace bp = boost::python;

struct HtmlLiteral_wrapper : ::osiris::HtmlLiteral, ::osiris::PythonWrapper< ::osiris::HtmlLiteral > {

    HtmlLiteral_wrapper(::osiris::String const & html=osiris::String::EMPTY )
    : ::osiris::HtmlLiteral( boost::ref(html) )
      , ::osiris::PythonWrapper< ::osiris::HtmlLiteral >(){
        // constructor
    
    }

    static boost::python::object getHtml( ::osiris::HtmlLiteral const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getHtml();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlLiteral::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlLiteral::onRender( boost::ref(writer) );
    }

    static void setHtml( ::osiris::HtmlLiteral & inst, ::osiris::String const & html ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setHtml(html);
        __pythreadSaver.restore();
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(osiris::null) ) const {
        return ::osiris::IHtmlControl::encodeEvent( boost::ref(eventName), boost::python::ptr(e) );
    }

    virtual ::boost::shared_ptr< osiris::HttpSession > getSession(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSession = this->get_override( "getSession" ) )
            return func_getSession(  );
        else{
            __pystate.leave();
            return this->::osiris::IHtmlControl::getSession(  );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSession > default_getSession(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHtmlControl::getSession( );
    }

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onInit( );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoad( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onPreRender( );
    }

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
    }

    virtual void renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderChilds = this->get_override( "renderChilds" ) )
            func_renderChilds( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
        }
    }
    
    void default_renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
    }

    void saveViewState( ::osiris::DataTree & states ){
        ::osiris::IHtmlControl::saveViewState( boost::ref(states) );
    }

};

void register_HtmlLiteral_class(){

    { //::osiris::HtmlLiteral
        typedef ::boost::python::class_< HtmlLiteral_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > HtmlLiteral_exposer_t;
        HtmlLiteral_exposer_t HtmlLiteral_exposer = HtmlLiteral_exposer_t( "HtmlLiteral", ::boost::python::init< ::boost::python::optional< ::osiris::String const & > >(( ::boost::python::arg("html")=osiris::String::EMPTY )) );
        ::boost::python::scope HtmlLiteral_scope( HtmlLiteral_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::HtmlLiteral >();
        { //::osiris::HtmlLiteral::getHtml
        
            typedef boost::python::object ( *getHtml_function_type )( ::osiris::HtmlLiteral const & );
            
            HtmlLiteral_exposer.def( 
                "getHtml"
                , getHtml_function_type( &HtmlLiteral_wrapper::getHtml ) );
        
        }
        { //::osiris::HtmlLiteral::onRender
        
            typedef void ( HtmlLiteral_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlLiteral_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlLiteral_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlLiteral::setHtml
        
            typedef void ( *setHtml_function_type )( ::osiris::HtmlLiteral &,::osiris::String const & );
            
            HtmlLiteral_exposer.def( 
                "setHtml"
                , setHtml_function_type( &HtmlLiteral_wrapper::setHtml )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("html") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlLiteral_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlLiteral_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlLiteral_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlLiteral_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlLiteral_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlLiteral_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlLiteral_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlLiteral_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlLiteral_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlLiteral_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlLiteral_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlLiteral_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( HtmlLiteral_wrapper::*onInit_function_type )(  ) ;
            
            HtmlLiteral_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlLiteral_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlLiteral_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlLiteral_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlLiteral_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlLiteral_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlLiteral_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlLiteral_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlLiteral_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlLiteral_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlLiteral_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlLiteral_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlLiteral_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlLiteral_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlLiteral_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlLiteral_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlLiteral_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlLiteral_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlLiteral_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlLiteral_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlLiteral_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlLiteral_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlLiteral_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "html"[fget=::osiris::HtmlLiteral::getHtml, fset=::osiris::HtmlLiteral::setHtml]
        
            typedef ::osiris::String const & ( ::osiris::HtmlLiteral::*fget )(  ) const;
            typedef void ( ::osiris::HtmlLiteral::*fset )( ::osiris::String const & ) ;
            
            HtmlLiteral_exposer.add_property( 
                "html"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlLiteral::getHtml )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlLiteral::setHtml )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlLiteral::getHtml() const [member function]\" and \"void osiris::HtmlLiteral::setHtml(osiris::String const & html) [member function]\"" );
        
        }
    }

}
