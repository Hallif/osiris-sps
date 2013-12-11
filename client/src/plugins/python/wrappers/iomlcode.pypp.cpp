// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "iomlcode.h"
<<<<<<< HEAD
#include "omlhtmlwrapper.h"
#include "omla.h"
#include "omlimg.h"
#include "omlnoparse.h"
#include "omlpopup.h"
#include "omlsize.h"
#include "omlgoto.h"
#include "omllist.h"
#include "omlreplace.h"
#include "iomlxsl.h"
#include "omlview.h"
#include "omluser.h"
#include "omlhtml.h"
#include "omldebug.h"
=======
#include "omllang.h"
#include "omlemail.h"
#include "iomlxsl.h"
#include "omlview.h"
#include "omluser.h"
#include "omlpopup.h"
#include "omlnoparse.h"
#include "omlhtmlwrapper.h"
#include "omlimg.h"
#include "omla.h"
>>>>>>> d0e943fe8f07f3262e5d61d5aab09c2b04880641
#include "omlnobr.h"
#include "omlmore.h"
#include "omlless.h"
#include "omlsystem.h"
#include "omldebug.h"
#include "omlcode.h"
#include "omlobject.h"
#include "omlsize.h"
#include "omlgoto.h"
#include "omlanchor.h"
#include "omlquote.h"
#include "omldate.h"
#include "omlreplace.h"
#include "omllist.h"
#include "omlhtml.h"
#include "omlif.h"
#include "omltext.h"
#include "omlurl.h"
#include "omltab.h"
#include "iomlcode.pypp.hpp"

namespace bp = boost::python;

struct IOMLCode_wrapper : ::osiris::IOMLCode, ::osiris::PythonWrapper< ::osiris::IOMLCode > {

    IOMLCode_wrapper(::osiris::String const & tag )
    : ::osiris::IOMLCode( boost::ref(tag) )
      , ::osiris::PythonWrapper< ::osiris::IOMLCode >(){
        // constructor
    
    }

    static boost::python::object getTag( ::osiris::IOMLCode const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = inst.getTag();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void mapDefaultParamTo( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & paramName ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.mapDefaultParamTo(i, paramName);
        __pythreadSaver.restore();
    }

    static void removeTag( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & tag, bool const recursive ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.removeTag(i, tag, recursive);
        __pythreadSaver.restore();
    }

    static boost::python::object allowedParentTags( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & tags ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.allowedParentTags(context, i, tags);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void allowedChildsTags( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & tags ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.allowedChildsTags(context, i, tags);
        __pythreadSaver.restore();
    }

    static void removeTextSpacer2( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLItem > i, bool const recursive, bool const alsoBR ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.removeTextSpacer2(i, recursive, alsoBR);
        __pythreadSaver.restore();
    }

    static boost::python::object getText( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & id ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::getText(context, id);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object cleanUrl( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & url ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::cleanUrl(context, url);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encode( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encode(context, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeToJavascriptString( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeToJavascriptString(context, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeToMeasure( ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeToMeasure(context, i, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeToCss( ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeToCss(context, i, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeToAttribute( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeToAttribute(context, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeToUrlGet( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeToUrlGet(context, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeBody( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text, bool postProcess, bool preserveStartLineSpaces=false, bool convertCR=true ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeBody(context, text, postProcess, preserveStartLineSpaces, convertCR);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeResourceUrl( ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & href ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeResourceUrl(context, i, href);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeResourceUrlEx( ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & href, ::osiris::String & entityID ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeResourceUrlEx(context, i, href, entityID);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeUrl( ::boost::shared_ptr< osiris::OMLContext > context, ::boost::shared_ptr< osiris::OMLItem > i, ::osiris::String const & href, ::osiris::OMLRenderUrlDestination destination, bool onlyExternalWithoutConfirm ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeUrl(context, i, href, destination, onlyExternalWithoutConfirm);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object encodeOML( ::boost::shared_ptr< osiris::OMLContext > context, ::osiris::String const & text ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::encodeOML(context, text);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual ::osiris::String processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processOsml = this->get_override( "processOsml" ) )
            return func_processOsml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::IOMLCode::processOsml( i, context );
        }
    }
    
    ::osiris::String default_processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IOMLCode::processOsml( i, context );
    }

    virtual bool allowRowMode(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_allowRowMode = this->get_override( "allowRowMode" ) )
            return func_allowRowMode(  );
        else{
            __pystate.leave();
            return this->::osiris::IOMLCode::allowRowMode(  );
        }
    }
    
    bool default_allowRowMode(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IOMLCode::allowRowMode( );
    }

    virtual ::osiris::String processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const {
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_processHtml = this->get_override( "processHtml" );
        return func_processHtml( i, context );
    }

    static boost::python::object extractProtocol( ::osiris::String const & url ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = ::osiris::IOMLCode::extractProtocol(url);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void removeBR( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLItem > i ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.removeBR(i);
        __pythreadSaver.restore();
    }

    static void removeChilds( ::osiris::IOMLCode const & inst, ::boost::shared_ptr< osiris::OMLItem > i ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.removeChilds(i);
        __pythreadSaver.restore();
    }

};

void register_IOMLCode_class(){

    { //::osiris::IOMLCode
        typedef ::boost::python::class_< IOMLCode_wrapper, ::boost::noncopyable > IOMLCode_exposer_t;
        IOMLCode_exposer_t IOMLCode_exposer = IOMLCode_exposer_t( "IOMLCode", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("tag") )) );
        ::boost::python::scope IOMLCode_scope( IOMLCode_exposer );
        { //::osiris::IOMLCode::getTag
        
            typedef boost::python::object ( *getTag_function_type )( ::osiris::IOMLCode const & );
            
            IOMLCode_exposer.def( 
                "getTag"
                , getTag_function_type( &IOMLCode_wrapper::getTag ) );
        
        }
        { //::osiris::IOMLCode::mapDefaultParamTo
        
            typedef void ( *mapDefaultParamTo_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "mapDefaultParamTo"
                , mapDefaultParamTo_function_type( &IOMLCode_wrapper::mapDefaultParamTo )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i"), ::boost::python::arg("paramName") ) );
        
        }
        { //::osiris::IOMLCode::removeTag
        
            typedef void ( *removeTag_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const &,bool const );
            
            IOMLCode_exposer.def( 
                "removeTag"
                , removeTag_function_type( &IOMLCode_wrapper::removeTag )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i"), ::boost::python::arg("tag"), ::boost::python::arg("recursive") ) );
        
        }
        { //::osiris::IOMLCode::allowedParentTags
        
            typedef boost::python::object ( *allowedParentTags_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "allowedParentTags"
                , allowedParentTags_function_type( &IOMLCode_wrapper::allowedParentTags )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("tags") ) );
        
        }
        { //::osiris::IOMLCode::allowedChildsTags
        
            typedef void ( *allowedChildsTags_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "allowedChildsTags"
                , allowedChildsTags_function_type( &IOMLCode_wrapper::allowedChildsTags )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("tags") ) );
        
        }
        { //::osiris::IOMLCode::removeTextSpacer2
        
            typedef void ( *removeTextSpacer2_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLItem>,bool const,bool const );
            
            IOMLCode_exposer.def( 
                "removeTextSpacer2"
                , removeTextSpacer2_function_type( &IOMLCode_wrapper::removeTextSpacer2 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i"), ::boost::python::arg("recursive"), ::boost::python::arg("alsoBR") ) );
        
        }
        { //::osiris::IOMLCode::getText
        
            typedef boost::python::object ( *getText_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "getText"
                , getText_function_type( &IOMLCode_wrapper::getText )
                , ( ::boost::python::arg("context"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IOMLCode::cleanUrl
        
            typedef boost::python::object ( *cleanUrl_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "cleanUrl"
                , cleanUrl_function_type( &IOMLCode_wrapper::cleanUrl )
                , ( ::boost::python::arg("context"), ::boost::python::arg("url") ) );
        
        }
        { //::osiris::IOMLCode::encode
        
            typedef boost::python::object ( *encode_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encode"
                , encode_function_type( &IOMLCode_wrapper::encode )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeToJavascriptString
        
            typedef boost::python::object ( *encodeToJavascriptString_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeToJavascriptString"
                , encodeToJavascriptString_function_type( &IOMLCode_wrapper::encodeToJavascriptString )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeToMeasure
        
            typedef boost::python::object ( *encodeToMeasure_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeToMeasure"
                , encodeToMeasure_function_type( &IOMLCode_wrapper::encodeToMeasure )
                , ( ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeToCss
        
            typedef boost::python::object ( *encodeToCss_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeToCss"
                , encodeToCss_function_type( &IOMLCode_wrapper::encodeToCss )
                , ( ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeToAttribute
        
            typedef boost::python::object ( *encodeToAttribute_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeToAttribute"
                , encodeToAttribute_function_type( &IOMLCode_wrapper::encodeToAttribute )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeToUrlGet
        
            typedef boost::python::object ( *encodeToUrlGet_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeToUrlGet"
                , encodeToUrlGet_function_type( &IOMLCode_wrapper::encodeToUrlGet )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::encodeBody
        
            typedef boost::python::object ( *encodeBody_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const &,bool,bool,bool );
            
            IOMLCode_exposer.def( 
                "encodeBody"
                , encodeBody_function_type( &IOMLCode_wrapper::encodeBody )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text"), ::boost::python::arg("postProcess"), ::boost::python::arg("preserveStartLineSpaces")=(bool)(false), ::boost::python::arg("convertCR")=(bool)(true) ) );
        
        }
        { //::osiris::IOMLCode::encodeResourceUrl
        
            typedef boost::python::object ( *encodeResourceUrl_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeResourceUrl"
                , encodeResourceUrl_function_type( &IOMLCode_wrapper::encodeResourceUrl )
                , ( ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("href") ) );
        
        }
        { //::osiris::IOMLCode::encodeResourceUrlEx
        
            typedef boost::python::object ( *encodeResourceUrlEx_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const &,::osiris::String & );
            
            IOMLCode_exposer.def( 
                "encodeResourceUrlEx"
                , encodeResourceUrlEx_function_type( &IOMLCode_wrapper::encodeResourceUrlEx )
                , ( ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("href"), ::boost::python::arg("entityID") ) );
        
        }
        { //::osiris::IOMLCode::encodeUrl
        
            typedef boost::python::object ( *encodeUrl_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::boost::shared_ptr<osiris::OMLItem>,::osiris::String const &,::osiris::OMLRenderUrlDestination,bool );
            
            IOMLCode_exposer.def( 
                "encodeUrl"
                , encodeUrl_function_type( &IOMLCode_wrapper::encodeUrl )
                , ( ::boost::python::arg("context"), ::boost::python::arg("i"), ::boost::python::arg("href"), ::boost::python::arg("destination"), ::boost::python::arg("onlyExternalWithoutConfirm") ) );
        
        }
        { //::osiris::IOMLCode::encodeOML
        
            typedef boost::python::object ( *encodeOML_function_type )( ::boost::shared_ptr<osiris::OMLContext>,::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "encodeOML"
                , encodeOML_function_type( &IOMLCode_wrapper::encodeOML )
                , ( ::boost::python::arg("context"), ::boost::python::arg("text") ) );
        
        }
        { //::osiris::IOMLCode::processOsml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( IOMLCode_wrapper::*default_processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            IOMLCode_exposer.def( 
                "processOsml"
                , processOsml_function_type(&::osiris::IOMLCode::processOsml)
                , default_processOsml_function_type(&IOMLCode_wrapper::default_processOsml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::IOMLCode::allowRowMode
        
            typedef bool ( ::osiris::IOMLCode::*allowRowMode_function_type )(  ) const;
            typedef bool ( IOMLCode_wrapper::*default_allowRowMode_function_type )(  ) const;
            
            IOMLCode_exposer.def( 
                "allowRowMode"
                , allowRowMode_function_type(&::osiris::IOMLCode::allowRowMode)
                , default_allowRowMode_function_type(&IOMLCode_wrapper::default_allowRowMode) );
        
        }
        { //::osiris::IOMLCode::processHtml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processHtml_function_type )( ::boost::shared_ptr<osiris::OMLItem>,::boost::shared_ptr<osiris::OMLContext> ) const;
            
            IOMLCode_exposer.def( 
                "processHtml"
                , ( processHtml_function_type(&::osiris::IOMLCode::processHtml) )
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::IOMLCode::extractProtocol
        
            typedef boost::python::object ( *extractProtocol_function_type )( ::osiris::String const & );
            
            IOMLCode_exposer.def( 
                "extractProtocol"
                , extractProtocol_function_type( &IOMLCode_wrapper::extractProtocol )
                , ( ::boost::python::arg("url") ) );
        
        }
        { //::osiris::IOMLCode::removeBR
        
            typedef void ( *removeBR_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLItem> );
            
            IOMLCode_exposer.def( 
                "removeBR"
                , removeBR_function_type( &IOMLCode_wrapper::removeBR )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i") ) );
        
        }
        { //::osiris::IOMLCode::removeChilds
        
            typedef void ( *removeChilds_function_type )( ::osiris::IOMLCode const &,::boost::shared_ptr<osiris::OMLItem> );
            
            IOMLCode_exposer.def( 
                "removeChilds"
                , removeChilds_function_type( &IOMLCode_wrapper::removeChilds )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i") ) );
        
        }
        IOMLCode_exposer.def_readwrite( "m_tag", &::osiris::IOMLCode::m_tag );
        IOMLCode_exposer.staticmethod( "getText" );
        IOMLCode_exposer.staticmethod( "cleanUrl" );
        IOMLCode_exposer.staticmethod( "encode" );
        IOMLCode_exposer.staticmethod( "encodeToJavascriptString" );
        IOMLCode_exposer.staticmethod( "encodeToMeasure" );
        IOMLCode_exposer.staticmethod( "encodeToCss" );
        IOMLCode_exposer.staticmethod( "encodeToAttribute" );
        IOMLCode_exposer.staticmethod( "encodeToUrlGet" );
        IOMLCode_exposer.staticmethod( "encodeBody" );
        IOMLCode_exposer.staticmethod( "encodeResourceUrl" );
        IOMLCode_exposer.staticmethod( "encodeResourceUrlEx" );
        IOMLCode_exposer.staticmethod( "encodeUrl" );
        IOMLCode_exposer.staticmethod( "encodeOML" );
        IOMLCode_exposer.staticmethod( "extractProtocol" );
        { //property "tag"[fget=::osiris::IOMLCode::getTag]
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*fget )(  ) const;
            
            IOMLCode_exposer.add_property( 
                "tag"
                , fget( &::osiris::IOMLCode::getTag )
                , "get property, built on top of \"osiris::String osiris::IOMLCode::getTag() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IOMLCode >, boost::shared_ptr< ::osiris::Object > >();
<<<<<<< HEAD
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLHtmlWrapper >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLA >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLImg >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLNoParse >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLPopup >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLSize >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLGoto >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLList >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLReplace >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IOMLXsl >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLView >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLUser >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLHtml >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLDebug >, boost::shared_ptr< ::osiris::IOMLCode > >();
=======
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLLang >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLEMail >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IOMLXsl >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLView >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLUser >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLPopup >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLNoParse >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLHtmlWrapper >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLImg >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLA >, boost::shared_ptr< ::osiris::IOMLCode > >();
>>>>>>> d0e943fe8f07f3262e5d61d5aab09c2b04880641
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLNoBR >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLMore >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLLess >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLSystem >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLDebug >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLCode >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLObject >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLSize >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLGoto >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLAnchor >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLQuote >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLDate >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLReplace >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLList >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLHtml >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLIf >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLText >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLUrl >, boost::shared_ptr< ::osiris::IOMLCode > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::OMLTab >, boost::shared_ptr< ::osiris::IOMLCode > >();
    }

}
