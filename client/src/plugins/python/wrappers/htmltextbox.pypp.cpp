// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmltextbox.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmltextbox.pypp.hpp"

namespace bp = boost::python;

struct HtmlTextBox_wrapper : ::osiris::HtmlTextBox, ::osiris::PythonWrapper< ::osiris::HtmlTextBox > {

    HtmlTextBox_wrapper( )
    : ::osiris::HtmlTextBox( )
      , ::osiris::PythonWrapper< ::osiris::HtmlTextBox >(){
        // null constructor
    
    }

    static boost::python::object getPassword( ::osiris::HtmlTextBox const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getPassword();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getHidden( ::osiris::HtmlTextBox const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getHidden();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getMaxLength( ::osiris::HtmlTextBox const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::uint32 result = inst.getMaxLength();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getSize( ::osiris::HtmlTextBox const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::uint32 result = inst.getSize();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlTextBox::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlTextBox::renderAttributes( boost::ref(writer) );
    }

    static void setHidden( ::osiris::HtmlTextBox & inst, bool hidden ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setHidden(hidden);
        __pythreadSaver.restore();
    }

    static void setMaxLength( ::osiris::HtmlTextBox & inst, ::osiris::uint32 const & maxlength ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setMaxLength(maxlength);
        __pythreadSaver.restore();
    }

    static void setPassword( ::osiris::HtmlTextBox & inst, bool password ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setPassword(password);
        __pythreadSaver.restore();
    }

    static void setSize( ::osiris::HtmlTextBox & inst, ::osiris::uint32 const & size ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setSize(size);
        __pythreadSaver.restore();
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(nullptr) ) const {
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

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlInput::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlInput::onInit( );
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
            this->::osiris::IHtmlInput::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlInput::onRender( boost::ref(writer) );
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

void register_HtmlTextBox_class(){

    { //::osiris::HtmlTextBox
        typedef ::boost::python::class_< HtmlTextBox_wrapper, ::boost::python::bases< ::osiris::IHtmlInput >, ::boost::noncopyable > HtmlTextBox_exposer_t;
        HtmlTextBox_exposer_t HtmlTextBox_exposer = HtmlTextBox_exposer_t( "HtmlTextBox", ::boost::python::init< >() );
        ::boost::python::scope HtmlTextBox_scope( HtmlTextBox_exposer );
        { //::osiris::HtmlTextBox::getPassword
        
            typedef boost::python::object ( *getPassword_function_type )( ::osiris::HtmlTextBox const & );
            
            HtmlTextBox_exposer.def( 
                "getPassword"
                , getPassword_function_type( &HtmlTextBox_wrapper::getPassword ) );
        
        }
        { //::osiris::HtmlTextBox::getHidden
        
            typedef boost::python::object ( *getHidden_function_type )( ::osiris::HtmlTextBox const & );
            
            HtmlTextBox_exposer.def( 
                "getHidden"
                , getHidden_function_type( &HtmlTextBox_wrapper::getHidden ) );
        
        }
        { //::osiris::HtmlTextBox::getMaxLength
        
            typedef boost::python::object ( *getMaxLength_function_type )( ::osiris::HtmlTextBox const & );
            
            HtmlTextBox_exposer.def( 
                "getMaxLength"
                , getMaxLength_function_type( &HtmlTextBox_wrapper::getMaxLength ) );
        
        }
        { //::osiris::HtmlTextBox::getSize
        
            typedef boost::python::object ( *getSize_function_type )( ::osiris::HtmlTextBox const & );
            
            HtmlTextBox_exposer.def( 
                "getSize"
                , getSize_function_type( &HtmlTextBox_wrapper::getSize ) );
        
        }
        { //::osiris::HtmlTextBox::renderAttributes
        
            typedef void ( ::osiris::HtmlTextBox::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTextBox_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTextBox_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::HtmlTextBox::renderAttributes)
                , default_renderAttributes_function_type(&HtmlTextBox_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::HtmlTextBox::setHidden
        
            typedef void ( *setHidden_function_type )( ::osiris::HtmlTextBox &,bool );
            
            HtmlTextBox_exposer.def( 
                "setHidden"
                , setHidden_function_type( &HtmlTextBox_wrapper::setHidden )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("hidden") ) );
        
        }
        { //::osiris::HtmlTextBox::setMaxLength
        
            typedef void ( *setMaxLength_function_type )( ::osiris::HtmlTextBox &,::osiris::uint32 const & );
            
            HtmlTextBox_exposer.def( 
                "setMaxLength"
                , setMaxLength_function_type( &HtmlTextBox_wrapper::setMaxLength )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("maxlength") ) );
        
        }
        { //::osiris::HtmlTextBox::setPassword
        
            typedef void ( *setPassword_function_type )( ::osiris::HtmlTextBox &,bool );
            
            HtmlTextBox_exposer.def( 
                "setPassword"
                , setPassword_function_type( &HtmlTextBox_wrapper::setPassword )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("password") ) );
        
        }
        { //::osiris::HtmlTextBox::setSize
        
            typedef void ( *setSize_function_type )( ::osiris::HtmlTextBox &,::osiris::uint32 const & );
            
            HtmlTextBox_exposer.def( 
                "setSize"
                , setSize_function_type( &HtmlTextBox_wrapper::setSize )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("size") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlTextBox_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlTextBox_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlTextBox_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlTextBox_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlTextBox_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlTextBox_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlTextBox_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlTextBox_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlTextBox_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlTextBox_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlTextBox_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlTextBox_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(nullptr) ) );
        
        }
        { //::osiris::IHtmlInput::onInit
        
            typedef void ( HtmlTextBox_wrapper::*onInit_function_type )(  ) ;
            
            HtmlTextBox_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlTextBox_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlTextBox_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlTextBox_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlTextBox_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlTextBox_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlTextBox_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlTextBox_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlTextBox_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlTextBox_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlTextBox_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlInput::onRender
        
            typedef void ( HtmlTextBox_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTextBox_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlTextBox_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlTextBox_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTextBox_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlTextBox_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTextBox_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTextBox_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlTextBox_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlTextBox_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTextBox_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlTextBox_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "password"[fget=::osiris::HtmlTextBox::getPassword, fset=::osiris::HtmlTextBox::setPassword]
        
            typedef bool ( ::osiris::HtmlTextBox::*fget )(  ) const;
            typedef void ( ::osiris::HtmlTextBox::*fset )( bool ) ;
            
            HtmlTextBox_exposer.add_property( 
                "password"
                , fget( &::osiris::HtmlTextBox::getPassword )
                , fset( &::osiris::HtmlTextBox::setPassword )
                , "get\\set property, built on top of \"bool osiris::HtmlTextBox::getPassword() const [member function]\" and \"void osiris::HtmlTextBox::setPassword(bool password) [member function]\"" );
        
        }
        { //property "hidden"[fget=::osiris::HtmlTextBox::getHidden, fset=::osiris::HtmlTextBox::setHidden]
        
            typedef bool ( ::osiris::HtmlTextBox::*fget )(  ) const;
            typedef void ( ::osiris::HtmlTextBox::*fset )( bool ) ;
            
            HtmlTextBox_exposer.add_property( 
                "hidden"
                , fget( &::osiris::HtmlTextBox::getHidden )
                , fset( &::osiris::HtmlTextBox::setHidden )
                , "get\\set property, built on top of \"bool osiris::HtmlTextBox::getHidden() const [member function]\" and \"void osiris::HtmlTextBox::setHidden(bool hidden) [member function]\"" );
        
        }
        { //property "maxLength"[fget=::osiris::HtmlTextBox::getMaxLength, fset=::osiris::HtmlTextBox::setMaxLength]
        
            typedef ::osiris::uint32 ( ::osiris::HtmlTextBox::*fget )(  ) const;
            typedef void ( ::osiris::HtmlTextBox::*fset )( ::osiris::uint32 const & ) ;
            
            HtmlTextBox_exposer.add_property( 
                "maxLength"
                , fget( &::osiris::HtmlTextBox::getMaxLength )
                , fset( &::osiris::HtmlTextBox::setMaxLength )
                , "get\\set property, built on top of \"osiris::uint32 osiris::HtmlTextBox::getMaxLength() const [member function]\" and \"void osiris::HtmlTextBox::setMaxLength(osiris::uint32 const & maxlength) [member function]\"" );
        
        }
        { //property "size"[fget=::osiris::HtmlTextBox::getSize, fset=::osiris::HtmlTextBox::setSize]
        
            typedef ::osiris::uint32 ( ::osiris::HtmlTextBox::*fget )(  ) const;
            typedef void ( ::osiris::HtmlTextBox::*fset )( ::osiris::uint32 const & ) ;
            
            HtmlTextBox_exposer.add_property( 
                "size"
                , fget( &::osiris::HtmlTextBox::getSize )
                , fset( &::osiris::HtmlTextBox::setSize )
                , "get\\set property, built on top of \"osiris::uint32 osiris::HtmlTextBox::getSize() const [member function]\" and \"void osiris::HtmlTextBox::setSize(osiris::uint32 const & size) [member function]\"" );
        
        }
    }

}
