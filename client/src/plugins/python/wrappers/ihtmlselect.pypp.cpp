// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ihtmlselect.h"
#include "htmloption.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlcombobox.h"
#include "htmllistbox.h"
#include "ihtmlselect.pypp.hpp"

namespace bp = boost::python;

struct IHtmlSelect_wrapper : ::osiris::IHtmlSelect, ::osiris::PythonWrapper< ::osiris::IHtmlSelect > {

    IHtmlSelect_wrapper( )
    : ::osiris::IHtmlSelect( )
      , ::osiris::PythonWrapper< ::osiris::IHtmlSelect >(){
        // null constructor
    
    }

    static boost::python::object getValue( ::osiris::IHtmlSelect const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getValue();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getAutoPostBack( ::osiris::IHtmlSelect const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getAutoPostBack();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getSelected( ::osiris::IHtmlSelect const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlOption> result = inst.getSelected();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getEventChange( ::osiris::IHtmlSelect const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::EventSource> result = inst.getEventChange();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object addOption( ::osiris::IHtmlSelect & inst, ::osiris::String const & label=(osiris::String::EMPTY), ::osiris::String const & value=(osiris::String::EMPTY) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlOption> result = inst.addOption(label, value);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object addOptionGroup( ::osiris::IHtmlSelect & inst, ::osiris::String const & label=(osiris::String::EMPTY) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlOptionGroup> result = inst.addOptionGroup(label);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlSelect::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlSelect::onInit( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlSelect::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlSelect::onRender( boost::ref(writer) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlSelect::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlSelect::renderAttributes( boost::ref(writer) );
    }

    static void setAutoPostBack( ::osiris::IHtmlSelect & inst, bool autoPostBack ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setAutoPostBack(autoPostBack);
        __pythreadSaver.restore();
    }

    static void setValue( ::osiris::IHtmlSelect & inst, ::osiris::String const & value ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setValue(value);
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

void register_IHtmlSelect_class(){

    { //::osiris::IHtmlSelect
        typedef ::boost::python::class_< IHtmlSelect_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > IHtmlSelect_exposer_t;
        IHtmlSelect_exposer_t IHtmlSelect_exposer = IHtmlSelect_exposer_t( "IHtmlSelect", ::boost::python::init< >() );
        ::boost::python::scope IHtmlSelect_scope( IHtmlSelect_exposer );
        { //::osiris::IHtmlSelect::getValue
        
            typedef boost::python::object ( *getValue_function_type )( ::osiris::IHtmlSelect const & );
            
            IHtmlSelect_exposer.def( 
                "getValue"
                , getValue_function_type( &IHtmlSelect_wrapper::getValue ) );
        
        }
        { //::osiris::IHtmlSelect::getAutoPostBack
        
            typedef boost::python::object ( *getAutoPostBack_function_type )( ::osiris::IHtmlSelect const & );
            
            IHtmlSelect_exposer.def( 
                "getAutoPostBack"
                , getAutoPostBack_function_type( &IHtmlSelect_wrapper::getAutoPostBack ) );
        
        }
        { //::osiris::IHtmlSelect::getSelected
        
            typedef boost::python::object ( *getSelected_function_type )( ::osiris::IHtmlSelect const & );
            
            IHtmlSelect_exposer.def( 
                "getSelected"
                , getSelected_function_type( &IHtmlSelect_wrapper::getSelected ) );
        
        }
        { //::osiris::IHtmlSelect::getEventChange
        
            typedef boost::python::object ( *getEventChange_function_type )( ::osiris::IHtmlSelect const & );
            
            IHtmlSelect_exposer.def( 
                "getEventChange"
                , getEventChange_function_type( &IHtmlSelect_wrapper::getEventChange ) );
        
        }
        { //::osiris::IHtmlSelect::addOption
        
            typedef boost::python::object ( *addOption_function_type )( ::osiris::IHtmlSelect &,::osiris::String const &,::osiris::String const & );
            
            IHtmlSelect_exposer.def( 
                "addOption"
                , addOption_function_type( &IHtmlSelect_wrapper::addOption )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("label")=(osiris::String::EMPTY), ::boost::python::arg("value")=(osiris::String::EMPTY) ) );
        
        }
        { //::osiris::IHtmlSelect::addOptionGroup
        
            typedef boost::python::object ( *addOptionGroup_function_type )( ::osiris::IHtmlSelect &,::osiris::String const & );
            
            IHtmlSelect_exposer.def( 
                "addOptionGroup"
                , addOptionGroup_function_type( &IHtmlSelect_wrapper::addOptionGroup )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("label")=(osiris::String::EMPTY) ) );
        
        }
        { //::osiris::IHtmlSelect::onInit
        
            typedef void ( IHtmlSelect_wrapper::*onInit_function_type )(  ) ;
            
            IHtmlSelect_exposer.def( 
                "onInit"
                , onInit_function_type( &IHtmlSelect_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlSelect::onRender
        
            typedef void ( IHtmlSelect_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IHtmlSelect_exposer.def( 
                "onRender"
                , onRender_function_type( &IHtmlSelect_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlSelect::renderAttributes
        
            typedef void ( ::osiris::IHtmlSelect::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IHtmlSelect_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IHtmlSelect_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlSelect::renderAttributes)
                , default_renderAttributes_function_type(&IHtmlSelect_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlSelect::setAutoPostBack
        
            typedef void ( *setAutoPostBack_function_type )( ::osiris::IHtmlSelect &,bool );
            
            IHtmlSelect_exposer.def( 
                "setAutoPostBack"
                , setAutoPostBack_function_type( &IHtmlSelect_wrapper::setAutoPostBack )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("autoPostBack") ) );
        
        }
        { //::osiris::IHtmlSelect::setValue
        
            typedef void ( *setValue_function_type )( ::osiris::IHtmlSelect &,::osiris::String const & );
            
            IHtmlSelect_exposer.def( 
                "setValue"
                , setValue_function_type( &IHtmlSelect_wrapper::setValue )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        IHtmlSelect_exposer.def_readonly( "EVENT_ONCHANGE", ::osiris::IHtmlSelect::EVENT_ONCHANGE );
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IHtmlSelect_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IHtmlSelect_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IHtmlSelect_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IHtmlSelect_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IHtmlSelect_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IHtmlSelect_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IHtmlSelect_wrapper::*default_getSession_function_type )(  ) const;
            
            IHtmlSelect_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IHtmlSelect_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IHtmlSelect_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IHtmlSelect_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IHtmlSelect_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( IHtmlSelect_wrapper::*onLoad_function_type )(  ) ;
            
            IHtmlSelect_exposer.def( 
                "onLoad"
                , onLoad_function_type( &IHtmlSelect_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IHtmlSelect_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IHtmlSelect_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IHtmlSelect_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( IHtmlSelect_wrapper::*onPreRender_function_type )(  ) ;
            
            IHtmlSelect_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &IHtmlSelect_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IHtmlSelect_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IHtmlSelect_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IHtmlSelect_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IHtmlSelect_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IHtmlSelect_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IHtmlSelect_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IHtmlSelect_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IHtmlSelect_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IHtmlSelect_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "value"[fget=::osiris::IHtmlSelect::getValue, fset=::osiris::IHtmlSelect::setValue]
        
            typedef ::osiris::String const & ( ::osiris::IHtmlSelect::*fget )(  ) const;
            typedef void ( ::osiris::IHtmlSelect::*fset )( ::osiris::String const & ) ;
            
            IHtmlSelect_exposer.add_property( 
                "value"
                , ::boost::python::make_function( 
                      fget( &::osiris::IHtmlSelect::getValue )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , fset( &::osiris::IHtmlSelect::setValue )
                , "get\\set property, built on top of \"osiris::String const & osiris::IHtmlSelect::getValue() const [member function]\" and \"void osiris::IHtmlSelect::setValue(osiris::String const & value) [member function]\"" );
        
        }
        { //property "autoPostBack"[fget=::osiris::IHtmlSelect::getAutoPostBack, fset=::osiris::IHtmlSelect::setAutoPostBack]
        
            typedef bool ( ::osiris::IHtmlSelect::*fget )(  ) const;
            typedef void ( ::osiris::IHtmlSelect::*fset )( bool ) ;
            
            IHtmlSelect_exposer.add_property( 
                "autoPostBack"
                , fget( &::osiris::IHtmlSelect::getAutoPostBack )
                , fset( &::osiris::IHtmlSelect::setAutoPostBack )
                , "get\\set property, built on top of \"bool osiris::IHtmlSelect::getAutoPostBack() const [member function]\" and \"void osiris::IHtmlSelect::setAutoPostBack(bool autoPostBack) [member function]\"" );
        
        }
        { //property "selected"[fget=::osiris::IHtmlSelect::getSelected]
        
            typedef ::boost::shared_ptr<osiris::HtmlOption> ( ::osiris::IHtmlSelect::*fget )(  ) const;
            
            IHtmlSelect_exposer.add_property( 
                "selected"
                , fget( &::osiris::IHtmlSelect::getSelected )
                , "get property, built on top of \"boost::shared_ptr<osiris::HtmlOption> osiris::IHtmlSelect::getSelected() const [member function]\"" );
        
        }
        { //property "eventChange"[fget=::osiris::IHtmlSelect::getEventChange]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::IHtmlSelect::*fget )(  ) const;
            
            IHtmlSelect_exposer.add_property( 
                "eventChange"
                , fget( &::osiris::IHtmlSelect::getEventChange )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::IHtmlSelect::getEventChange() const [member function]\"" );
        
        }
    }

}
