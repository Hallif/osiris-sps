// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "xmldocument.h"
#include "buffer.h"
#include "xmlnode.h"
#include "httpurl.h"
#include "xmlschema.h"
#include "xmldocument.pypp.hpp"

namespace bp = boost::python;

struct XMLDocument_wrapper : ::osiris::XMLDocument, ::osiris::PythonWrapper< ::osiris::XMLDocument > {

    XMLDocument_wrapper(::boost::shared_ptr< osiris::XMLSchema > schema=osiris::null )
    : ::osiris::XMLDocument( schema )
      , ::osiris::PythonWrapper< ::osiris::XMLDocument >(){
        // constructor
    
    }

    static boost::python::object getRoot( ::osiris::XMLDocument const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::XMLNode> result = inst.getRoot();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void clear(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::clear(  );
        }
    }
    
    void default_clear(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::clear( );
    }

    virtual void onStartDocument(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onStartDocument = this->get_override( "onStartDocument" ) )
            func_onStartDocument(  );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::onStartDocument(  );
        }
    }
    
    virtual void default_onStartDocument(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::onStartDocument( );
    }

    virtual void onEndDocument(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEndDocument = this->get_override( "onEndDocument" ) )
            func_onEndDocument(  );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::onEndDocument(  );
        }
    }
    
    virtual void default_onEndDocument(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::onEndDocument( );
    }

    virtual void onStartElement( ::osiris::String const & name, ::osiris::StringCollection< osiris::String, osiris::StringCollectionTraits< osiris::String > > const & attributes ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onStartElement = this->get_override( "onStartElement" ) )
            func_onStartElement( boost::ref(name), boost::ref(attributes) );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::onStartElement( boost::ref(name), boost::ref(attributes) );
        }
    }
    
    virtual void default_onStartElement( ::osiris::String const & name, ::osiris::StringCollection< osiris::String, osiris::StringCollectionTraits< osiris::String > > const & attributes ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::onStartElement( boost::ref(name), boost::ref(attributes) );
    }

    static boost::python::object create( ::osiris::XMLDocument & inst, ::osiris::String const & root ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::XMLNode> result = inst.create(root);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onCharacters( ::osiris::String const & str ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onCharacters = this->get_override( "onCharacters" ) )
            func_onCharacters( boost::ref(str) );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::onCharacters( boost::ref(str) );
        }
    }
    
    virtual void default_onCharacters( ::osiris::String const & str ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::onCharacters( boost::ref(str) );
    }

    virtual void onEndElement( ::osiris::String const & name ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEndElement = this->get_override( "onEndElement" ) )
            func_onEndElement( boost::ref(name) );
        else{
            __pystate.leave();
            this->::osiris::XMLDocument::onEndElement( boost::ref(name) );
        }
    }
    
    virtual void default_onEndElement( ::osiris::String const & name ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::XMLDocument::onEndElement( boost::ref(name) );
    }

    static void setRoot( ::osiris::XMLDocument & inst, ::boost::shared_ptr< osiris::XMLNode > root ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setRoot(root);
        __pythreadSaver.restore();
    }

    static boost::python::object writeBuffer( ::osiris::XMLDocument const & inst, ::osiris::Buffer & buffer, ::osiris::String const & encoding=("UTF-8") ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.writeBuffer(buffer, encoding);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object writeFile( ::osiris::XMLDocument const & inst, ::osiris::String const & filename, ::osiris::String const & encoding=("UTF-8") ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.writeFile(filename, encoding);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object writeStream( ::osiris::XMLDocument const & inst, ::boost::shared_ptr< osiris::IStream > stream, ::osiris::String const & encoding=("UTF-8") ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.writeStream(stream, encoding);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object writeString( ::osiris::XMLDocument const & inst, ::osiris::String & str ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.writeString(str);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object writeStringUTF8( ::osiris::XMLDocument const & inst, ::std::string & str ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.writeStringUTF8(str);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onError( ::osiris::String const & msg ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onError = this->get_override( "onError" ) )
            func_onError( boost::ref(msg) );
        else{
            __pystate.leave();
            this->::osiris::IXMLHandler::onError( boost::ref(msg) );
        }
    }
    
    virtual void default_onError( ::osiris::String const & msg ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXMLHandler::onError( boost::ref(msg) );
    }

    virtual void onWarning( ::osiris::String const & msg ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onWarning = this->get_override( "onWarning" ) )
            func_onWarning( boost::ref(msg) );
        else{
            __pystate.leave();
            this->::osiris::IXMLHandler::onWarning( boost::ref(msg) );
        }
    }
    
    virtual void default_onWarning( ::osiris::String const & msg ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXMLHandler::onWarning( boost::ref(msg) );
    }

};

void register_XMLDocument_class(){

    { //::osiris::XMLDocument
        typedef ::boost::python::class_< XMLDocument_wrapper, ::boost::python::bases< ::osiris::IXMLHandler >, ::boost::noncopyable > XMLDocument_exposer_t;
        XMLDocument_exposer_t XMLDocument_exposer = XMLDocument_exposer_t( "XMLDocument", ::boost::python::init< ::boost::python::optional< ::boost::shared_ptr< osiris::XMLSchema > > >(( ::boost::python::arg("schema")=osiris::null )) );
        ::boost::python::scope XMLDocument_scope( XMLDocument_exposer );
        ::boost::python::implicitly_convertible< ::boost::shared_ptr< osiris::XMLSchema >, ::osiris::XMLDocument >();
        { //::osiris::XMLDocument::getRoot
        
            typedef boost::python::object ( *getRoot_function_type )( ::osiris::XMLDocument const & );
            
            XMLDocument_exposer.def( 
                "getRoot"
                , getRoot_function_type( &XMLDocument_wrapper::getRoot ) );
        
        }
        { //::osiris::XMLDocument::clear
        
            typedef void ( ::osiris::XMLDocument::*clear_function_type )(  ) ;
            typedef void ( XMLDocument_wrapper::*default_clear_function_type )(  ) ;
            
            XMLDocument_exposer.def( 
                "clear"
                , clear_function_type(&::osiris::XMLDocument::clear)
                , default_clear_function_type(&XMLDocument_wrapper::default_clear) );
        
        }
        { //::osiris::XMLDocument::onStartDocument
        
            typedef void ( XMLDocument_wrapper::*onStartDocument_function_type )(  ) ;
            
            XMLDocument_exposer.def( 
                "onStartDocument"
                , onStartDocument_function_type( &XMLDocument_wrapper::default_onStartDocument ) );
        
        }
        { //::osiris::XMLDocument::onEndDocument
        
            typedef void ( XMLDocument_wrapper::*onEndDocument_function_type )(  ) ;
            
            XMLDocument_exposer.def( 
                "onEndDocument"
                , onEndDocument_function_type( &XMLDocument_wrapper::default_onEndDocument ) );
        
        }
        { //::osiris::XMLDocument::onStartElement
        
            typedef void ( XMLDocument_wrapper::*onStartElement_function_type )( ::osiris::String const &,::osiris::StringCollection< osiris::String, osiris::StringCollectionTraits< osiris::String > > const & ) ;
            
            XMLDocument_exposer.def( 
                "onStartElement"
                , onStartElement_function_type( &XMLDocument_wrapper::default_onStartElement )
                , ( ::boost::python::arg("name"), ::boost::python::arg("attributes") ) );
        
        }
        { //::osiris::XMLDocument::create
        
            typedef boost::python::object ( *create_function_type )( ::osiris::XMLDocument &,::osiris::String const & );
            
            XMLDocument_exposer.def( 
                "create"
                , create_function_type( &XMLDocument_wrapper::create )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("root") ) );
        
        }
        { //::osiris::XMLDocument::onCharacters
        
            typedef void ( XMLDocument_wrapper::*onCharacters_function_type )( ::osiris::String const & ) ;
            
            XMLDocument_exposer.def( 
                "onCharacters"
                , onCharacters_function_type( &XMLDocument_wrapper::default_onCharacters )
                , ( ::boost::python::arg("str") ) );
        
        }
        { //::osiris::XMLDocument::onEndElement
        
            typedef void ( XMLDocument_wrapper::*onEndElement_function_type )( ::osiris::String const & ) ;
            
            XMLDocument_exposer.def( 
                "onEndElement"
                , onEndElement_function_type( &XMLDocument_wrapper::default_onEndElement )
                , ( ::boost::python::arg("name") ) );
        
        }
        { //::osiris::XMLDocument::setRoot
        
            typedef void ( *setRoot_function_type )( ::osiris::XMLDocument &,::boost::shared_ptr<osiris::XMLNode> );
            
            XMLDocument_exposer.def( 
                "setRoot"
                , setRoot_function_type( &XMLDocument_wrapper::setRoot )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("root") ) );
        
        }
        { //::osiris::XMLDocument::writeBuffer
        
            typedef boost::python::object ( *writeBuffer_function_type )( ::osiris::XMLDocument const &,::osiris::Buffer &,::osiris::String const & );
            
            XMLDocument_exposer.def( 
                "writeBuffer"
                , writeBuffer_function_type( &XMLDocument_wrapper::writeBuffer )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("buffer"), ::boost::python::arg("encoding")=("UTF-8") ) );
        
        }
        { //::osiris::XMLDocument::writeFile
        
            typedef boost::python::object ( *writeFile_function_type )( ::osiris::XMLDocument const &,::osiris::String const &,::osiris::String const & );
            
            XMLDocument_exposer.def( 
                "writeFile"
                , writeFile_function_type( &XMLDocument_wrapper::writeFile )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("filename"), ::boost::python::arg("encoding")=("UTF-8") ) );
        
        }
        { //::osiris::XMLDocument::writeStream
        
            typedef boost::python::object ( *writeStream_function_type )( ::osiris::XMLDocument const &,::boost::shared_ptr<osiris::IStream>,::osiris::String const & );
            
            XMLDocument_exposer.def( 
                "writeStream"
                , writeStream_function_type( &XMLDocument_wrapper::writeStream )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("stream"), ::boost::python::arg("encoding")=("UTF-8") ) );
        
        }
        { //::osiris::XMLDocument::writeString
        
            typedef boost::python::object ( *writeString_function_type )( ::osiris::XMLDocument const &,::osiris::String & );
            
            XMLDocument_exposer.def( 
                "writeString"
                , writeString_function_type( &XMLDocument_wrapper::writeString )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("str") ) );
        
        }
        { //::osiris::XMLDocument::writeStringUTF8
        
            typedef boost::python::object ( *writeStringUTF8_function_type )( ::osiris::XMLDocument const &,::std::string & );
            
            XMLDocument_exposer.def( 
                "writeStringUTF8"
                , writeStringUTF8_function_type( &XMLDocument_wrapper::writeStringUTF8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("str") ) );
        
        }
        { //::osiris::IXMLHandler::onError
        
            typedef void ( XMLDocument_wrapper::*onError_function_type )( ::osiris::String const & ) ;
            
            XMLDocument_exposer.def( 
                "onError"
                , onError_function_type( &XMLDocument_wrapper::default_onError )
                , ( ::boost::python::arg("msg") ) );
        
        }
        { //::osiris::IXMLHandler::onWarning
        
            typedef void ( XMLDocument_wrapper::*onWarning_function_type )( ::osiris::String const & ) ;
            
            XMLDocument_exposer.def( 
                "onWarning"
                , onWarning_function_type( &XMLDocument_wrapper::default_onWarning )
                , ( ::boost::python::arg("msg") ) );
        
        }
        { //property "root"[fget=::osiris::XMLDocument::getRoot, fset=::osiris::XMLDocument::setRoot]
        
            typedef ::boost::shared_ptr<osiris::XMLNode> ( ::osiris::XMLDocument::*fget )(  ) const;
            typedef void ( ::osiris::XMLDocument::*fset )( ::boost::shared_ptr<osiris::XMLNode> ) ;
            
            XMLDocument_exposer.add_property( 
                "root"
                , fget( &::osiris::XMLDocument::getRoot )
                , fset( &::osiris::XMLDocument::setRoot )
                , "get\\set property, built on top of \"boost::shared_ptr<osiris::XMLNode> osiris::XMLDocument::getRoot() const [member function]\" and \"void osiris::XMLDocument::setRoot(boost::shared_ptr<osiris::XMLNode> root) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::XMLDocument > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::XMLDocument >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::XMLDocument > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::XMLDocument >, boost::shared_ptr< ::osiris::IXMLHandler > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::XMLDocument >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::XMLDocument >, boost::shared_ptr< ::osiris::Object > >();
    }

}
