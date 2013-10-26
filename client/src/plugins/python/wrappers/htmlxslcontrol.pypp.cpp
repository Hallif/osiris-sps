// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlxslcontrol.h"
#include "xmldocument.h"
#include "xmlstylesheet.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlxslcontrol.pypp.hpp"

namespace bp = boost::python;

struct HtmlXSLControl_wrapper : ::osiris::HtmlXSLControl, ::osiris::PythonWrapper< ::osiris::HtmlXSLControl > {

    HtmlXSLControl_wrapper(::boost::shared_ptr< osiris::XMLStylesheet > stylesheet=osiris::null, ::boost::shared_ptr< osiris::XMLDocument > document=osiris::null )
    : ::osiris::HtmlXSLControl( stylesheet, document )
      , ::osiris::PythonWrapper< ::osiris::HtmlXSLControl >(){
        // constructor
    
    }

    static boost::python::object getDocument( ::osiris::HtmlXSLControl const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::XMLDocument> result = inst.getDocument();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getStylesheet( ::osiris::HtmlXSLControl const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::XMLStylesheet> result = inst.getStylesheet();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void setChildParam( ::osiris::HtmlXSLControl & inst, ::boost::shared_ptr< osiris::IHtmlControl > child, ::osiris::String const & param ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setChildParam(child, param);
        __pythreadSaver.restore();
    }

    static void addChildParam_f5de99f95e988c2c1eb7d212c7603e6c( ::osiris::HtmlXSLControl & inst, ::boost::shared_ptr< osiris::IHtmlControl > child, ::osiris::String const & param ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.addChildParam(child, param);
        __pythreadSaver.restore();
    }

    static void addChildParam_3fc3c072fee9fa1bf7ac23fc64d41255( ::osiris::HtmlXSLControl & inst, ::boost::shared_ptr< osiris::IHtmlControl > child ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.addChildParam(child);
        __pythreadSaver.restore();
    }

    static boost::python::object getChildParam( ::osiris::HtmlXSLControl const & inst, ::boost::shared_ptr< osiris::IHtmlControl > child ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getChildParam(child);
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object hasChildParam( ::osiris::HtmlXSLControl const & inst, ::boost::shared_ptr< osiris::IHtmlControl > child ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.hasChildParam(child);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlXSLControl::onRender( boost::ref(writer) );
        }
    }
    
    void default_onRender( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlXSLControl::onRender( boost::ref(writer) );
    }

    static void setDocument( ::osiris::HtmlXSLControl & inst, ::boost::shared_ptr< osiris::XMLDocument > document ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setDocument(document);
        __pythreadSaver.restore();
    }

    static void setStylesheet( ::osiris::HtmlXSLControl & inst, ::boost::shared_ptr< osiris::XMLStylesheet > stylesheet ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setStylesheet(stylesheet);
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

void register_HtmlXSLControl_class(){

    { //::osiris::HtmlXSLControl
        typedef ::boost::python::class_< HtmlXSLControl_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > HtmlXSLControl_exposer_t;
        HtmlXSLControl_exposer_t HtmlXSLControl_exposer = HtmlXSLControl_exposer_t( "HtmlXSLControl", ::boost::python::init< ::boost::python::optional< ::boost::shared_ptr< osiris::XMLStylesheet >, ::boost::shared_ptr< osiris::XMLDocument > > >(( ::boost::python::arg("stylesheet")=osiris::null, ::boost::python::arg("document")=osiris::null )) );
        ::boost::python::scope HtmlXSLControl_scope( HtmlXSLControl_exposer );
        ::boost::python::implicitly_convertible< ::boost::shared_ptr< osiris::XMLStylesheet >, ::osiris::HtmlXSLControl >();
        { //::osiris::HtmlXSLControl::getDocument
        
            typedef boost::python::object ( *getDocument_function_type )( ::osiris::HtmlXSLControl const & );
            
            HtmlXSLControl_exposer.def( 
                "getDocument"
                , getDocument_function_type( &HtmlXSLControl_wrapper::getDocument ) );
        
        }
        { //::osiris::HtmlXSLControl::getStylesheet
        
            typedef boost::python::object ( *getStylesheet_function_type )( ::osiris::HtmlXSLControl const & );
            
            HtmlXSLControl_exposer.def( 
                "getStylesheet"
                , getStylesheet_function_type( &HtmlXSLControl_wrapper::getStylesheet ) );
        
        }
        { //::osiris::HtmlXSLControl::setChildParam
        
            typedef void ( *setChildParam_function_type )( ::osiris::HtmlXSLControl &,::boost::shared_ptr<osiris::IHtmlControl>,::osiris::String const & );
            
            HtmlXSLControl_exposer.def( 
                "setChildParam"
                , setChildParam_function_type( &HtmlXSLControl_wrapper::setChildParam )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("child"), ::boost::python::arg("param") ) );
        
        }
        { //::osiris::HtmlXSLControl::addChildParam
        
            typedef void ( *addChildParam_function_type )( ::osiris::HtmlXSLControl &,::boost::shared_ptr<osiris::IHtmlControl>,::osiris::String const & );
            
            HtmlXSLControl_exposer.def( 
                "addChildParam"
                , addChildParam_function_type( &HtmlXSLControl_wrapper::addChildParam_f5de99f95e988c2c1eb7d212c7603e6c )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("child"), ::boost::python::arg("param") ) );
        
        }
        { //::osiris::HtmlXSLControl::addChildParam
        
            typedef void ( *addChildParam_function_type )( ::osiris::HtmlXSLControl &,::boost::shared_ptr<osiris::IHtmlControl> );
            
            HtmlXSLControl_exposer.def( 
                "addChildParam"
                , addChildParam_function_type( &HtmlXSLControl_wrapper::addChildParam_3fc3c072fee9fa1bf7ac23fc64d41255 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("child") ) );
        
        }
        { //::osiris::HtmlXSLControl::getChildParam
        
            typedef boost::python::object ( *getChildParam_function_type )( ::osiris::HtmlXSLControl const &,::boost::shared_ptr<osiris::IHtmlControl> );
            
            HtmlXSLControl_exposer.def( 
                "getChildParam"
                , getChildParam_function_type( &HtmlXSLControl_wrapper::getChildParam )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("child") ) );
        
        }
        { //::osiris::HtmlXSLControl::hasChildParam
        
            typedef boost::python::object ( *hasChildParam_function_type )( ::osiris::HtmlXSLControl const &,::boost::shared_ptr<osiris::IHtmlControl> );
            
            HtmlXSLControl_exposer.def( 
                "hasChildParam"
                , hasChildParam_function_type( &HtmlXSLControl_wrapper::hasChildParam )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("child") ) );
        
        }
        { //::osiris::HtmlXSLControl::onRender
        
            typedef void ( ::osiris::HtmlXSLControl::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlXSLControl_wrapper::*default_onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlXSLControl_exposer.def( 
                "onRender"
                , onRender_function_type(&::osiris::HtmlXSLControl::onRender)
                , default_onRender_function_type(&HtmlXSLControl_wrapper::default_onRender)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlXSLControl::setDocument
        
            typedef void ( *setDocument_function_type )( ::osiris::HtmlXSLControl &,::boost::shared_ptr<osiris::XMLDocument> );
            
            HtmlXSLControl_exposer.def( 
                "setDocument"
                , setDocument_function_type( &HtmlXSLControl_wrapper::setDocument )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("document") ) );
        
        }
        { //::osiris::HtmlXSLControl::setStylesheet
        
            typedef void ( *setStylesheet_function_type )( ::osiris::HtmlXSLControl &,::boost::shared_ptr<osiris::XMLStylesheet> );
            
            HtmlXSLControl_exposer.def( 
                "setStylesheet"
                , setStylesheet_function_type( &HtmlXSLControl_wrapper::setStylesheet )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("stylesheet") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlXSLControl_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlXSLControl_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlXSLControl_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlXSLControl_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlXSLControl_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlXSLControl_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlXSLControl_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlXSLControl_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlXSLControl_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlXSLControl_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlXSLControl_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlXSLControl_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( HtmlXSLControl_wrapper::*onInit_function_type )(  ) ;
            
            HtmlXSLControl_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlXSLControl_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlXSLControl_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlXSLControl_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlXSLControl_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlXSLControl_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlXSLControl_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlXSLControl_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlXSLControl_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlXSLControl_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlXSLControl_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlXSLControl_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlXSLControl_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlXSLControl_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlXSLControl_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlXSLControl_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlXSLControl_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlXSLControl_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlXSLControl_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlXSLControl_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlXSLControl_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlXSLControl_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlXSLControl_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "document"[fget=::osiris::HtmlXSLControl::getDocument, fset=::osiris::HtmlXSLControl::setDocument]
        
            typedef ::boost::shared_ptr<osiris::XMLDocument> ( ::osiris::HtmlXSLControl::*fget )(  ) const;
            typedef void ( ::osiris::HtmlXSLControl::*fset )( ::boost::shared_ptr<osiris::XMLDocument> ) ;
            
            HtmlXSLControl_exposer.add_property( 
                "document"
                , fget( &::osiris::HtmlXSLControl::getDocument )
                , fset( &::osiris::HtmlXSLControl::setDocument )
                , "get\\set property, built on top of \"boost::shared_ptr<osiris::XMLDocument> osiris::HtmlXSLControl::getDocument() const [member function]\" and \"void osiris::HtmlXSLControl::setDocument(boost::shared_ptr<osiris::XMLDocument> document) [member function]\"" );
        
        }
        { //property "stylesheet"[fget=::osiris::HtmlXSLControl::getStylesheet, fset=::osiris::HtmlXSLControl::setStylesheet]
        
            typedef ::boost::shared_ptr<osiris::XMLStylesheet> ( ::osiris::HtmlXSLControl::*fget )(  ) const;
            typedef void ( ::osiris::HtmlXSLControl::*fset )( ::boost::shared_ptr<osiris::XMLStylesheet> ) ;
            
            HtmlXSLControl_exposer.add_property( 
                "stylesheet"
                , fget( &::osiris::HtmlXSLControl::getStylesheet )
                , fset( &::osiris::HtmlXSLControl::setStylesheet )
                , "get\\set property, built on top of \"boost::shared_ptr<osiris::XMLStylesheet> osiris::HtmlXSLControl::getStylesheet() const [member function]\" and \"void osiris::HtmlXSLControl::setStylesheet(boost::shared_ptr<osiris::XMLStylesheet> stylesheet) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HtmlXSLControl > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlXSLControl >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlXSLControl >, boost::shared_ptr< ::boost::signals::trackable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlXSLControl >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::IHtmlControl > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HtmlXSLControl >, boost::shared_ptr< ::osiris::Object > >();
    }

}
