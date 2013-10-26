// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlroller.h"
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
#include "htmlroller.pypp.hpp"

namespace bp = boost::python;

struct HtmlRoller_wrapper : ::osiris::HtmlRoller, ::osiris::PythonWrapper< ::osiris::HtmlRoller > {

    HtmlRoller_wrapper( )
    : ::osiris::HtmlRoller( )
      , ::osiris::PythonWrapper< ::osiris::HtmlRoller >(){
        // null constructor
    
    }

    static boost::python::object getAllowClose( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getAllowClose();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getStartClose( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getStartClose();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getCssTable( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCssTable();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getCssHeaderOpen( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCssHeaderOpen();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getCssHeaderOpenHover( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCssHeaderOpenHover();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getCssHeaderClose( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCssHeaderClose();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getCssHeaderCloseHover( ::osiris::HtmlRoller const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getCssHeaderCloseHover();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getHeader( ::osiris::HtmlRoller & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlDiv> result = inst.getHeader();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getBody( ::osiris::HtmlRoller & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlDiv> result = inst.getBody();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::HtmlRoller::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlRoller::onPreRender( );
    }

    static void setAllowClose( ::osiris::HtmlRoller & inst, bool allowClose ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setAllowClose(allowClose);
        __pythreadSaver.restore();
    }

    static void setCssHeaderClose( ::osiris::HtmlRoller & inst, ::osiris::String const & cssHeaderClose ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCssHeaderClose(cssHeaderClose);
        __pythreadSaver.restore();
    }

    static void setCssHeaderCloseHover( ::osiris::HtmlRoller & inst, ::osiris::String const & cssHeaderCloseHover ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCssHeaderCloseHover(cssHeaderCloseHover);
        __pythreadSaver.restore();
    }

    static void setCssHeaderOpen( ::osiris::HtmlRoller & inst, ::osiris::String const & cssHeaderOpen ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCssHeaderOpen(cssHeaderOpen);
        __pythreadSaver.restore();
    }

    static void setCssHeaderOpenHover( ::osiris::HtmlRoller & inst, ::osiris::String const & cssHeaderOpenHover ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCssHeaderOpenHover(cssHeaderOpenHover);
        __pythreadSaver.restore();
    }

    static void setCssTable( ::osiris::HtmlRoller & inst, ::osiris::String const & cssTable ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setCssTable(cssTable);
        __pythreadSaver.restore();
    }

    static void setStartClose( ::osiris::HtmlRoller & inst, bool startClose ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setStartClose(startClose);
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

void register_HtmlRoller_class(){

    { //::osiris::HtmlRoller
        typedef ::boost::python::class_< HtmlRoller_wrapper, ::boost::python::bases< ::osiris::HtmlDiv >, ::boost::noncopyable > HtmlRoller_exposer_t;
        HtmlRoller_exposer_t HtmlRoller_exposer = HtmlRoller_exposer_t( "HtmlRoller", ::boost::python::no_init );
        ::boost::python::scope HtmlRoller_scope( HtmlRoller_exposer );
        HtmlRoller_exposer.def( ::boost::python::init< >() );
        { //::osiris::HtmlRoller::getAllowClose
        
            typedef boost::python::object ( *getAllowClose_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getAllowClose"
                , getAllowClose_function_type( &HtmlRoller_wrapper::getAllowClose ) );
        
        }
        { //::osiris::HtmlRoller::getStartClose
        
            typedef boost::python::object ( *getStartClose_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getStartClose"
                , getStartClose_function_type( &HtmlRoller_wrapper::getStartClose ) );
        
        }
        { //::osiris::HtmlRoller::getCssTable
        
            typedef boost::python::object ( *getCssTable_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getCssTable"
                , getCssTable_function_type( &HtmlRoller_wrapper::getCssTable ) );
        
        }
        { //::osiris::HtmlRoller::getCssHeaderOpen
        
            typedef boost::python::object ( *getCssHeaderOpen_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getCssHeaderOpen"
                , getCssHeaderOpen_function_type( &HtmlRoller_wrapper::getCssHeaderOpen ) );
        
        }
        { //::osiris::HtmlRoller::getCssHeaderOpenHover
        
            typedef boost::python::object ( *getCssHeaderOpenHover_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getCssHeaderOpenHover"
                , getCssHeaderOpenHover_function_type( &HtmlRoller_wrapper::getCssHeaderOpenHover ) );
        
        }
        { //::osiris::HtmlRoller::getCssHeaderClose
        
            typedef boost::python::object ( *getCssHeaderClose_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getCssHeaderClose"
                , getCssHeaderClose_function_type( &HtmlRoller_wrapper::getCssHeaderClose ) );
        
        }
        { //::osiris::HtmlRoller::getCssHeaderCloseHover
        
            typedef boost::python::object ( *getCssHeaderCloseHover_function_type )( ::osiris::HtmlRoller const & );
            
            HtmlRoller_exposer.def( 
                "getCssHeaderCloseHover"
                , getCssHeaderCloseHover_function_type( &HtmlRoller_wrapper::getCssHeaderCloseHover ) );
        
        }
        { //::osiris::HtmlRoller::getHeader
        
            typedef boost::python::object ( *getHeader_function_type )( ::osiris::HtmlRoller & );
            
            HtmlRoller_exposer.def( 
                "getHeader"
                , getHeader_function_type( &HtmlRoller_wrapper::getHeader ) );
        
        }
        { //::osiris::HtmlRoller::getBody
        
            typedef boost::python::object ( *getBody_function_type )( ::osiris::HtmlRoller & );
            
            HtmlRoller_exposer.def( 
                "getBody"
                , getBody_function_type( &HtmlRoller_wrapper::getBody ) );
        
        }
        { //::osiris::HtmlRoller::onPreRender
        
            typedef void ( HtmlRoller_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlRoller_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlRoller_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::HtmlRoller::setAllowClose
        
            typedef void ( *setAllowClose_function_type )( ::osiris::HtmlRoller &,bool );
            
            HtmlRoller_exposer.def( 
                "setAllowClose"
                , setAllowClose_function_type( &HtmlRoller_wrapper::setAllowClose )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("allowClose") ) );
        
        }
        { //::osiris::HtmlRoller::setCssHeaderClose
        
            typedef void ( *setCssHeaderClose_function_type )( ::osiris::HtmlRoller &,::osiris::String const & );
            
            HtmlRoller_exposer.def( 
                "setCssHeaderClose"
                , setCssHeaderClose_function_type( &HtmlRoller_wrapper::setCssHeaderClose )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssHeaderClose") ) );
        
        }
        { //::osiris::HtmlRoller::setCssHeaderCloseHover
        
            typedef void ( *setCssHeaderCloseHover_function_type )( ::osiris::HtmlRoller &,::osiris::String const & );
            
            HtmlRoller_exposer.def( 
                "setCssHeaderCloseHover"
                , setCssHeaderCloseHover_function_type( &HtmlRoller_wrapper::setCssHeaderCloseHover )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssHeaderCloseHover") ) );
        
        }
        { //::osiris::HtmlRoller::setCssHeaderOpen
        
            typedef void ( *setCssHeaderOpen_function_type )( ::osiris::HtmlRoller &,::osiris::String const & );
            
            HtmlRoller_exposer.def( 
                "setCssHeaderOpen"
                , setCssHeaderOpen_function_type( &HtmlRoller_wrapper::setCssHeaderOpen )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssHeaderOpen") ) );
        
        }
        { //::osiris::HtmlRoller::setCssHeaderOpenHover
        
            typedef void ( *setCssHeaderOpenHover_function_type )( ::osiris::HtmlRoller &,::osiris::String const & );
            
            HtmlRoller_exposer.def( 
                "setCssHeaderOpenHover"
                , setCssHeaderOpenHover_function_type( &HtmlRoller_wrapper::setCssHeaderOpenHover )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssHeaderOpenHover") ) );
        
        }
        { //::osiris::HtmlRoller::setCssTable
        
            typedef void ( *setCssTable_function_type )( ::osiris::HtmlRoller &,::osiris::String const & );
            
            HtmlRoller_exposer.def( 
                "setCssTable"
                , setCssTable_function_type( &HtmlRoller_wrapper::setCssTable )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssTable") ) );
        
        }
        { //::osiris::HtmlRoller::setStartClose
        
            typedef void ( *setStartClose_function_type )( ::osiris::HtmlRoller &,bool );
            
            HtmlRoller_exposer.def( 
                "setStartClose"
                , setStartClose_function_type( &HtmlRoller_wrapper::setStartClose )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("startClose") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlRoller_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlRoller_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlRoller_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlRoller_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlRoller_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlRoller_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlRoller_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlRoller_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlRoller_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlRoller_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlRoller_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlRoller_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( HtmlRoller_wrapper::*onInit_function_type )(  ) ;
            
            HtmlRoller_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlRoller_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlRoller_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlRoller_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlRoller_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlRoller_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlRoller_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlRoller_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::HtmlDiv::onRender
        
            typedef void ( HtmlRoller_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlRoller_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlRoller_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlRoller_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlRoller_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlRoller_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlRoller_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlRoller_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlRoller_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlRoller_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlRoller_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlRoller_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlRoller_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlRoller_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlRoller_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "allowClose"[fget=::osiris::HtmlRoller::getAllowClose, fset=::osiris::HtmlRoller::setAllowClose]
        
            typedef bool ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( bool ) ;
            
            HtmlRoller_exposer.add_property( 
                "allowClose"
                , fget( &::osiris::HtmlRoller::getAllowClose )
                , fset( &::osiris::HtmlRoller::setAllowClose )
                , "get\\set property, built on top of \"bool osiris::HtmlRoller::getAllowClose() const [member function]\" and \"void osiris::HtmlRoller::setAllowClose(bool allowClose) [member function]\"" );
        
        }
        { //property "startClose"[fget=::osiris::HtmlRoller::getStartClose, fset=::osiris::HtmlRoller::setStartClose]
        
            typedef bool ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( bool ) ;
            
            HtmlRoller_exposer.add_property( 
                "startClose"
                , fget( &::osiris::HtmlRoller::getStartClose )
                , fset( &::osiris::HtmlRoller::setStartClose )
                , "get\\set property, built on top of \"bool osiris::HtmlRoller::getStartClose() const [member function]\" and \"void osiris::HtmlRoller::setStartClose(bool startClose) [member function]\"" );
        
        }
        { //property "cssTable"[fget=::osiris::HtmlRoller::getCssTable, fset=::osiris::HtmlRoller::setCssTable]
        
            typedef ::osiris::String const & ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( ::osiris::String const & ) ;
            
            HtmlRoller_exposer.add_property( 
                "cssTable"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlRoller::getCssTable )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlRoller::setCssTable )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlRoller::getCssTable() const [member function]\" and \"void osiris::HtmlRoller::setCssTable(osiris::String const & cssTable) [member function]\"" );
        
        }
        { //property "cssHeaderOpen"[fget=::osiris::HtmlRoller::getCssHeaderOpen, fset=::osiris::HtmlRoller::setCssHeaderOpen]
        
            typedef ::osiris::String const & ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( ::osiris::String const & ) ;
            
            HtmlRoller_exposer.add_property( 
                "cssHeaderOpen"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlRoller::getCssHeaderOpen )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlRoller::setCssHeaderOpen )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlRoller::getCssHeaderOpen() const [member function]\" and \"void osiris::HtmlRoller::setCssHeaderOpen(osiris::String const & cssHeaderOpen) [member function]\"" );
        
        }
        { //property "cssHeaderOpenHover"[fget=::osiris::HtmlRoller::getCssHeaderOpenHover, fset=::osiris::HtmlRoller::setCssHeaderOpenHover]
        
            typedef ::osiris::String const & ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( ::osiris::String const & ) ;
            
            HtmlRoller_exposer.add_property( 
                "cssHeaderOpenHover"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlRoller::getCssHeaderOpenHover )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlRoller::setCssHeaderOpenHover )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlRoller::getCssHeaderOpenHover() const [member function]\" and \"void osiris::HtmlRoller::setCssHeaderOpenHover(osiris::String const & cssHeaderOpenHover) [member function]\"" );
        
        }
        { //property "cssHeaderClose"[fget=::osiris::HtmlRoller::getCssHeaderClose, fset=::osiris::HtmlRoller::setCssHeaderClose]
        
            typedef ::osiris::String const & ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( ::osiris::String const & ) ;
            
            HtmlRoller_exposer.add_property( 
                "cssHeaderClose"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlRoller::getCssHeaderClose )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlRoller::setCssHeaderClose )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlRoller::getCssHeaderClose() const [member function]\" and \"void osiris::HtmlRoller::setCssHeaderClose(osiris::String const & cssHeaderClose) [member function]\"" );
        
        }
        { //property "cssHeaderCloseHover"[fget=::osiris::HtmlRoller::getCssHeaderCloseHover, fset=::osiris::HtmlRoller::setCssHeaderCloseHover]
        
            typedef ::osiris::String const & ( ::osiris::HtmlRoller::*fget )(  ) const;
            typedef void ( ::osiris::HtmlRoller::*fset )( ::osiris::String const & ) ;
            
            HtmlRoller_exposer.add_property( 
                "cssHeaderCloseHover"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlRoller::getCssHeaderCloseHover )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::HtmlRoller::setCssHeaderCloseHover )
                , "get\\set property, built on top of \"osiris::String const & osiris::HtmlRoller::getCssHeaderCloseHover() const [member function]\" and \"void osiris::HtmlRoller::setCssHeaderCloseHover(osiris::String const & cssHeaderCloseHover) [member function]\"" );
        
        }
    }

}
