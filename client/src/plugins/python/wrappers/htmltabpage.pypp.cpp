// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmltabpage.h"
#include "ideportalcontrol.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmltabpage.pypp.hpp"

namespace bp = boost::python;

struct HtmlTabPage_wrapper : ::osiris::HtmlTabPage, ::osiris::PythonWrapper< ::osiris::HtmlTabPage > {

    HtmlTabPage_wrapper(::osiris::int32 index )
    : ::osiris::HtmlTabPage( index )
      , ::osiris::PythonWrapper< ::osiris::HtmlTabPage >(){
        // constructor
    
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

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlDiv::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlDiv::onRender( boost::ref(writer) );
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

void register_HtmlTabPage_class(){

    { //::osiris::HtmlTabPage
        typedef ::boost::python::class_< HtmlTabPage_wrapper, ::boost::python::bases< ::osiris::HtmlDiv >, ::boost::noncopyable > HtmlTabPage_exposer_t;
        HtmlTabPage_exposer_t HtmlTabPage_exposer = HtmlTabPage_exposer_t( "HtmlTabPage", ::boost::python::init< ::osiris::int32 >(( ::boost::python::arg("index") )) );
        ::boost::python::scope HtmlTabPage_scope( HtmlTabPage_exposer );
        ::boost::python::implicitly_convertible< ::osiris::int32, ::osiris::HtmlTabPage >();
        HtmlTabPage_exposer.def_readwrite( "m_index", &::osiris::HtmlTabPage::m_index );
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlTabPage_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlTabPage_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlTabPage_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlTabPage_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlTabPage_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlTabPage_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlTabPage_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlTabPage_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlTabPage_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlTabPage_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlTabPage_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlTabPage_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( HtmlTabPage_wrapper::*onInit_function_type )(  ) ;
            
            HtmlTabPage_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlTabPage_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlTabPage_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlTabPage_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlTabPage_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlTabPage_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlTabPage_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlTabPage_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlTabPage_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlTabPage_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlTabPage_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::HtmlDiv::onRender
        
            typedef void ( HtmlTabPage_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabPage_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlTabPage_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlTabPage_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTabPage_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlTabPage_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTabPage_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabPage_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlTabPage_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTabPage_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabPage_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlTabPage_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlTabPage_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTabPage_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlTabPage_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HtmlTabPage > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlTabPage >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlTabPage >, boost::shared_ptr< ::boost::signals::trackable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlTabPage >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::IHtmlControl > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlTabPage >, boost::shared_ptr< ::osiris::Object > >();
    }

}
