// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ideskin.h"
#include "idesession.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "idevoteeditor.h"
#include "idesearchquery.h"
#include "idetablequery.h"
#include "ideassistant.h"
#include "idepickerobject.h"
#include "idemailbox.h"
#include "idesearchglobalparams.h"
#include "idesearchresults.h"
#include "iportalpagehtmlcontrol.pypp.hpp"

namespace bp = boost::python;

struct IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper : ::osiris::IPortalPageControl< osiris::IHtmlControl >, ::osiris::PythonWrapper< ::osiris::IPortalPageControl< osiris::IHtmlControl > > {

    IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper( )
    : ::osiris::IPortalPageControl<osiris::IHtmlControl>( )
      , ::osiris::PythonWrapper< ::osiris::IPortalPageControl< osiris::IHtmlControl > >(){
        // null constructor
    
    }

    static boost::python::object getPage( ::osiris::IPortalPageControl< osiris::IHtmlControl > const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IPortalPage> result = inst.getPage();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getPortal( ::osiris::IPortalPageControl< osiris::IHtmlControl > const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::Portal> result = inst.getPortal();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getSessionAccount( ::osiris::IPortalPageControl< osiris::IHtmlControl > const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IdeSession> result = inst.getSessionAccount();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getDatabase( ::osiris::IPortalPageControl< osiris::IHtmlControl > const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IPortalDatabase> result = inst.getDatabase();
        __pythreadSaver.restore();
        return boost::python::object( result );
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
            this->::osiris::IHtmlControl::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onRender( boost::ref(writer) );
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

void register_IPortalPageHtmlControl_class(){

    { //::osiris::IPortalPageControl< osiris::IHtmlControl >
        typedef ::boost::python::class_< IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper, ::boost::python::bases< ::osiris::IPageControl< osiris::IHtmlControl > >, ::boost::noncopyable > IPortalPageHtmlControl_exposer_t;
        IPortalPageHtmlControl_exposer_t IPortalPageHtmlControl_exposer = IPortalPageHtmlControl_exposer_t( "IPortalPageHtmlControl", ::boost::python::init< >() );
        ::boost::python::scope IPortalPageHtmlControl_scope( IPortalPageHtmlControl_exposer );
        { //::osiris::IPortalPageControl< osiris::IHtmlControl >::getPage
        
            typedef ::osiris::IPortalPageControl< osiris::IHtmlControl > exported_class_t;
            typedef boost::python::object ( *getPage_function_type )( ::osiris::IPortalPageControl<osiris::IHtmlControl> const & );
            
            IPortalPageHtmlControl_exposer.def( 
                "getPage"
                , getPage_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::getPage ) );
        
        }
        { //::osiris::IPortalPageControl< osiris::IHtmlControl >::getPortal
        
            typedef ::osiris::IPortalPageControl< osiris::IHtmlControl > exported_class_t;
            typedef boost::python::object ( *getPortal_function_type )( ::osiris::IPortalPageControl<osiris::IHtmlControl> const & );
            
            IPortalPageHtmlControl_exposer.def( 
                "getPortal"
                , getPortal_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::getPortal ) );
        
        }
        { //::osiris::IPortalPageControl< osiris::IHtmlControl >::getSessionAccount
        
            typedef ::osiris::IPortalPageControl< osiris::IHtmlControl > exported_class_t;
            typedef boost::python::object ( *getSessionAccount_function_type )( ::osiris::IPortalPageControl<osiris::IHtmlControl> const & );
            
            IPortalPageHtmlControl_exposer.def( 
                "getSessionAccount"
                , getSessionAccount_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::getSessionAccount ) );
        
        }
        { //::osiris::IPortalPageControl< osiris::IHtmlControl >::getDatabase
        
            typedef ::osiris::IPortalPageControl< osiris::IHtmlControl > exported_class_t;
            typedef boost::python::object ( *getDatabase_function_type )( ::osiris::IPortalPageControl<osiris::IHtmlControl> const & );
            
            IPortalPageHtmlControl_exposer.def( 
                "getDatabase"
                , getDatabase_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::getDatabase ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IPortalPageHtmlControl_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IPortalPageHtmlControl_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*default_getSession_function_type )(  ) const;
            
            IPortalPageHtmlControl_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onInit_function_type )(  ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onInit"
                , onInit_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onLoad_function_type )(  ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onLoad"
                , onLoad_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onPreRender_function_type )(  ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onRender"
                , onRender_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IPortalPageHtmlControl_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IPortalPageControl_less__osiris_scope_IHtmlControl__greater__wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "page"[fget=::osiris::IPortalPageControl<osiris::IHtmlControl>::getPage]
        
            typedef ::osiris::IPortalPageControl<osiris::IHtmlControl> fget_class_t;
            
            typedef ::boost::shared_ptr<osiris::IPortalPage> ( fget_class_t::*fget )(  ) const;
            
            IPortalPageHtmlControl_exposer.add_property( 
                "page"
                , fget( &::osiris::IPortalPageControl<osiris::IHtmlControl>::getPage )
                , "get property, built on top of \"boost::shared_ptr<osiris::IPortalPage> osiris::IPortalPageControl<osiris::IHtmlControl>::getPage() const [member function]\"" );
        
        }
        { //property "portal"[fget=::osiris::IPortalPageControl<osiris::IHtmlControl>::getPortal]
        
            typedef ::osiris::IPortalPageControl<osiris::IHtmlControl> fget_class_t;
            
            typedef ::boost::shared_ptr<osiris::Portal> ( fget_class_t::*fget )(  ) const;
            
            IPortalPageHtmlControl_exposer.add_property( 
                "portal"
                , fget( &::osiris::IPortalPageControl<osiris::IHtmlControl>::getPortal )
                , "get property, built on top of \"boost::shared_ptr<osiris::Portal> osiris::IPortalPageControl<osiris::IHtmlControl>::getPortal() const [member function]\"" );
        
        }
        { //property "sessionAccount"[fget=::osiris::IPortalPageControl<osiris::IHtmlControl>::getSessionAccount]
        
            typedef ::osiris::IPortalPageControl<osiris::IHtmlControl> fget_class_t;
            
            typedef ::boost::shared_ptr<osiris::IdeSession> ( fget_class_t::*fget )(  ) const;
            
            IPortalPageHtmlControl_exposer.add_property( 
                "sessionAccount"
                , fget( &::osiris::IPortalPageControl<osiris::IHtmlControl>::getSessionAccount )
                , "get property, built on top of \"boost::shared_ptr<osiris::IdeSession> osiris::IPortalPageControl<osiris::IHtmlControl>::getSessionAccount() const [member function]\"" );
        
        }
        { //property "database"[fget=::osiris::IPortalPageControl<osiris::IHtmlControl>::getDatabase]
        
            typedef ::osiris::IPortalPageControl<osiris::IHtmlControl> fget_class_t;
            
            typedef ::boost::shared_ptr<osiris::IPortalDatabase> ( fget_class_t::*fget )(  ) const;
            
            IPortalPageHtmlControl_exposer.add_property( 
                "database"
                , fget( &::osiris::IPortalPageControl<osiris::IHtmlControl>::getDatabase )
                , "get property, built on top of \"boost::shared_ptr<osiris::IPortalDatabase> osiris::IPortalPageControl<osiris::IHtmlControl>::getDatabase() const [member function]\"" );
        
        }
    }

}
