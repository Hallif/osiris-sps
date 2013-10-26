// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "iserver.h"
#include "iconnection.h"
#include "ihttpserver.h"
#include "iserver.pypp.hpp"

namespace bp = boost::python;

struct IServer_wrapper : ::osiris::IServer, ::osiris::PythonWrapper< ::osiris::IServer > {

    IServer_wrapper(::boost::optional< unsigned int > workerThreadsCount=boost::none )
    : ::osiris::IServer( workerThreadsCount )
      , ::osiris::PythonWrapper< ::osiris::IServer >(){
        // constructor
    
    }

    static boost::python::object getEndpoint( ::osiris::IServer const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> result = inst.getEndpoint();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getListening( ::osiris::IServer const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getListening();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual bool bind( ::osiris::String const & bindIP=(osiris::String::EMPTY), ::osiris::uint32 port=0 ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_bind = this->get_override( "bind" ) )
            return func_bind( boost::ref(bindIP), port );
        else{
            __pystate.leave();
            return this->::osiris::IServer::bind( boost::ref(bindIP), port );
        }
    }
    
    bool default_bind( ::osiris::String const & bindIP=(osiris::String::EMPTY), ::osiris::uint32 port=0 ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IServer::bind( boost::ref(bindIP), port );
    }

    virtual void stop(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_stop = this->get_override( "stop" ) )
            func_stop(  );
        else{
            __pystate.leave();
            this->::osiris::IServer::stop(  );
        }
    }
    
    void default_stop(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IServer::stop( );
    }

    virtual bool onEnter(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEnter = this->get_override( "onEnter" ) )
            return func_onEnter(  );
        else{
            __pystate.leave();
            return this->::osiris::IServer::onEnter(  );
        }
    }
    
    virtual bool default_onEnter(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IServer::onEnter( );
    }

    virtual ::boost::shared_ptr< osiris::IConnection > createConnection(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_createConnection = this->get_override( "createConnection" );
        return func_createConnection(  );
    }

    static boost::python::object getBindAddress( ::osiris::IServer const & inst, ::boost::asio::ip::address & address ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getBindAddress(address);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getBindPort( ::osiris::IServer const & inst, ::osiris::uint32 & port ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getBindPort(port);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual bool onAccept( ::boost::shared_ptr< osiris::IConnection > connection ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onAccept = this->get_override( "onAccept" ) )
            return func_onAccept( connection );
        else{
            __pystate.leave();
            return this->::osiris::IServer::onAccept( connection );
        }
    }
    
    virtual bool default_onAccept( ::boost::shared_ptr< osiris::IConnection > connection ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IServer::onAccept( connection );
    }

};

void register_IServer_class(){

    { //::osiris::IServer
        typedef ::boost::python::class_< IServer_wrapper, ::boost::noncopyable > IServer_exposer_t;
        IServer_exposer_t IServer_exposer = IServer_exposer_t( "IServer", ::boost::python::init< ::boost::python::optional< ::boost::optional< unsigned int > > >(( ::boost::python::arg("workerThreadsCount")=boost::none )) );
        ::boost::python::scope IServer_scope( IServer_exposer );
        { //::osiris::IServer::getEndpoint
        
            typedef boost::python::object ( *getEndpoint_function_type )( ::osiris::IServer const & );
            
            IServer_exposer.def( 
                "getEndpoint"
                , getEndpoint_function_type( &IServer_wrapper::getEndpoint ) );
        
        }
        { //::osiris::IServer::getListening
        
            typedef boost::python::object ( *getListening_function_type )( ::osiris::IServer const & );
            
            IServer_exposer.def( 
                "getListening"
                , getListening_function_type( &IServer_wrapper::getListening ) );
        
        }
        { //::osiris::IServer::bind
        
            typedef bool ( ::osiris::IServer::*bind_function_type )( ::osiris::String const &,::osiris::uint32 ) ;
            typedef bool ( IServer_wrapper::*default_bind_function_type )( ::osiris::String const &,::osiris::uint32 ) ;
            
            IServer_exposer.def( 
                "bind"
                , bind_function_type(&::osiris::IServer::bind)
                , default_bind_function_type(&IServer_wrapper::default_bind)
                , ( ::boost::python::arg("bindIP")=(osiris::String::EMPTY), ::boost::python::arg("port")=(::osiris::uint32)(0) ) );
        
        }
        { //::osiris::IServer::stop
        
            typedef void ( ::osiris::IServer::*stop_function_type )(  ) ;
            typedef void ( IServer_wrapper::*default_stop_function_type )(  ) ;
            
            IServer_exposer.def( 
                "stop"
                , stop_function_type(&::osiris::IServer::stop)
                , default_stop_function_type(&IServer_wrapper::default_stop) );
        
        }
        { //::osiris::IServer::onEnter
        
            typedef bool ( IServer_wrapper::*onEnter_function_type )(  ) ;
            
            IServer_exposer.def( 
                "onEnter"
                , onEnter_function_type( &IServer_wrapper::default_onEnter ) );
        
        }
        { //::osiris::IServer::createConnection
        
            typedef ::boost::shared_ptr< osiris::IConnection > ( IServer_wrapper::*createConnection_function_type )(  ) ;
            
            IServer_exposer.def( 
                "createConnection"
                , createConnection_function_type( &IServer_wrapper::createConnection ) );
        
        }
        { //::osiris::IServer::getBindAddress
        
            typedef boost::python::object ( *getBindAddress_function_type )( ::osiris::IServer const &,::boost::asio::ip::address & );
            
            IServer_exposer.def( 
                "getBindAddress"
                , getBindAddress_function_type( &IServer_wrapper::getBindAddress )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("address") ) );
        
        }
        { //::osiris::IServer::getBindPort
        
            typedef boost::python::object ( *getBindPort_function_type )( ::osiris::IServer const &,::osiris::uint32 & );
            
            IServer_exposer.def( 
                "getBindPort"
                , getBindPort_function_type( &IServer_wrapper::getBindPort )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("port") ) );
        
        }
        { //::osiris::IServer::onAccept
        
            typedef bool ( IServer_wrapper::*onAccept_function_type )( ::boost::shared_ptr< osiris::IConnection > ) ;
            
            IServer_exposer.def( 
                "onAccept"
                , onAccept_function_type( &IServer_wrapper::default_onAccept )
                , ( ::boost::python::arg("connection") ) );
        
        }
        { //property "endpoint"[fget=::osiris::IServer::getEndpoint]
        
            typedef ::boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> ( ::osiris::IServer::*fget )(  ) const;
            
            IServer_exposer.add_property( 
                "endpoint"
                , fget( &::osiris::IServer::getEndpoint )
                , "get property, built on top of \"boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> osiris::IServer::getEndpoint() const [member function]\"" );
        
        }
        { //property "listening"[fget=::osiris::IServer::getListening]
        
            typedef bool ( ::osiris::IServer::*fget )(  ) const;
            
            IServer_exposer.add_property( 
                "listening"
                , fget( &::osiris::IServer::getListening )
                , "get property, built on top of \"bool osiris::IServer::getListening() const [member function]\"" );
        
        }
    }

}
