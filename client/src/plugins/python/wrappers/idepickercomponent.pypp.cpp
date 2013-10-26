// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idepickercomponent.h"
#include "ideskin.h"
#include "idesession.h"
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
#include "idepickercomponent.pypp.hpp"

namespace bp = boost::python;

struct IdePickerComponent_wrapper : ::osiris::IdePickerComponent, ::osiris::PythonWrapper< ::osiris::IdePickerComponent > {

    IdePickerComponent_wrapper( )
    : ::osiris::IdePickerComponent( )
      , ::osiris::PythonWrapper< ::osiris::IdePickerComponent >(){
        // null constructor
    
    }

    virtual void onLoad(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerComponent::onLoad(  );
        }
    }
    
    void default_onLoad(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerComponent::onLoad( );
    }

    virtual void onPreRender(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerComponent::onPreRender(  );
        }
    }
    
    void default_onPreRender(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerComponent::onPreRender( );
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

    virtual ::osiris::String getTemplateName(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplateName = this->get_override( "getTemplateName" ) )
            return func_getTemplateName(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerSelect::getTemplateName(  );
        }
    }
    
    ::osiris::String default_getTemplateName(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerSelect::getTemplateName( );
    }

    virtual ::osiris::String getValue(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerSelect::getValue(  );
        }
    }
    
    ::osiris::String default_getValue(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerSelect::getValue( );
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

    virtual void onInit(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::onInit(  );
        }
    }
    
    void default_onInit(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::onInit( );
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

    virtual void setTemplateName( ::osiris::String const & templateName ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setTemplateName = this->get_override( "setTemplateName" ) )
            func_setTemplateName( boost::ref(templateName) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::setTemplateName( boost::ref(templateName) );
        }
    }
    
    void default_setTemplateName( ::osiris::String const & templateName ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::setTemplateName( boost::ref(templateName) );
    }

    virtual void setValue( ::osiris::String const & val ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setValue = this->get_override( "setValue" ) )
            func_setValue( boost::ref(val) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::setValue( boost::ref(val) );
        }
    }
    
    void default_setValue( ::osiris::String const & val ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::setValue( boost::ref(val) );
    }

};

void register_IdePickerComponent_class(){

    ::boost::python::class_< IdePickerComponent_wrapper, ::boost::python::bases< ::osiris::IdePickerSelect >, ::boost::noncopyable >( "IdePickerComponent", ::boost::python::init< >() )    
        .def( 
            "onLoad"
            , (void ( ::osiris::IdePickerComponent::* )(  ) )(&::osiris::IdePickerComponent::onLoad)
            , (void ( IdePickerComponent_wrapper::* )(  ) )(&IdePickerComponent_wrapper::default_onLoad) )    
        .def( 
            "onPreRender"
            , (void ( ::osiris::IdePickerComponent::* )(  ) )(&::osiris::IdePickerComponent::onPreRender)
            , (void ( IdePickerComponent_wrapper::* )(  ) )(&IdePickerComponent_wrapper::default_onPreRender) )    
        .def( 
            "decodeEvent"
            , (bool ( IdePickerComponent_wrapper::* )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const)(&IdePickerComponent_wrapper::decodeEvent)
            , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) )    
        .def( 
            "encodeEvent"
            , (::osiris::String ( IdePickerComponent_wrapper::* )( ::osiris::String const &,::osiris::HtmlEvent const * ) const)(&IdePickerComponent_wrapper::encodeEvent)
            , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) )    
        .def( 
            "getSession"
            , (::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::* )(  ) const)(&::osiris::IHtmlControl::getSession)
            , (::boost::shared_ptr< osiris::HttpSession > ( IdePickerComponent_wrapper::* )(  ) const)(&IdePickerComponent_wrapper::default_getSession) )    
        .def( 
            "getTemplateName"
            , (::osiris::String ( ::osiris::IdePickerSelect::* )(  ) const)(&::osiris::IdePickerSelect::getTemplateName)
            , (::osiris::String ( IdePickerComponent_wrapper::* )(  ) const)(&IdePickerComponent_wrapper::default_getTemplateName) )    
        .def( 
            "getValue"
            , (::osiris::String ( ::osiris::IdePickerSelect::* )(  ) const)(&::osiris::IdePickerSelect::getValue)
            , (::osiris::String ( IdePickerComponent_wrapper::* )(  ) const)(&IdePickerComponent_wrapper::default_getValue) )    
        .def( 
            "onEvent"
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::String const &,::osiris::IEvent * ) )(&IdePickerComponent_wrapper::default_onEvent)
            , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) )    
        .def( 
            "onInit"
            , (void ( ::osiris::IdePickerSelect::* )(  ) )(&::osiris::IdePickerSelect::onInit)
            , (void ( IdePickerComponent_wrapper::* )(  ) )(&IdePickerComponent_wrapper::default_onInit) )    
        .def( 
            "onLoadViewState"
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::DataTree const & ) )(&IdePickerComponent_wrapper::default_onLoadViewState)
            , ( ::boost::python::arg("state") ) )    
        .def( 
            "onRender"
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::HtmlWriter & ) )(&IdePickerComponent_wrapper::default_onRender)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "onSaveViewState"
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::DataTree & ) )(&IdePickerComponent_wrapper::default_onSaveViewState)
            , ( ::boost::python::arg("state") ) )    
        .def( 
            "renderAttributes"
            , (void ( ::osiris::IHtmlControl::* )( ::osiris::HtmlWriter & ) )(&::osiris::IHtmlControl::renderAttributes)
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::HtmlWriter & ) )(&IdePickerComponent_wrapper::default_renderAttributes)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "renderChilds"
            , (void ( ::osiris::IHtmlControl::* )( ::osiris::HtmlWriter & ) )(&::osiris::IHtmlControl::renderChilds)
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::HtmlWriter & ) )(&IdePickerComponent_wrapper::default_renderChilds)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "saveViewState"
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::DataTree & ) )(&IdePickerComponent_wrapper::saveViewState)
            , ( ::boost::python::arg("states") ) )    
        .def( 
            "setTemplateName"
            , (void ( ::osiris::IdePickerSelect::* )( ::osiris::String const & ) )(&::osiris::IdePickerSelect::setTemplateName)
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::String const & ) )(&IdePickerComponent_wrapper::default_setTemplateName)
            , ( ::boost::python::arg("templateName") ) )    
        .def( 
            "setValue"
            , (void ( ::osiris::IdePickerSelect::* )( ::osiris::String const & ) )(&::osiris::IdePickerSelect::setValue)
            , (void ( IdePickerComponent_wrapper::* )( ::osiris::String const & ) )(&IdePickerComponent_wrapper::default_setValue)
            , ( ::boost::python::arg("val") ) );

}
