// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "portalspeer.h"
#include "portalspeer.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getID_9e6ff7201b5dbd6a1137ad1dca3bdf67( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint64 result = inst.getID();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getEndpoint_7b72498bd0fbe1354ea1f08b4f7a0cc3( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> result = inst.getEndpoint();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getIP_6b77da11cc7cfbb4a9c55770a484d102( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.getIP();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getPort_4565f44a8525672a88766e920ffcb1ba( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getPort();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getRetries_7cd7350892dbb1d52a5e73bd2e06977e( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint16 result = inst.getRetries();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getOrigin_c4d220696b691fce0d1b0f41537d2994( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.getOrigin();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getLastContactDate_2d2bf1ebe76602d32760bdc44b7bc27b( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DateTime result = inst.getLastContactDate();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getSupernode_c53e37d3e2d8fc7169c61c67b7e651d8( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getSupernode();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getCacheable_72216b31e006804c749cde62f34dfebd( ::osiris::PortalsPeer const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getCacheable();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object makeID_e12a87fe1d0ad5b02df910e2c728f295( ::osiris::String const & ip, ::osiris::uint32 port ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint64 result = ::osiris::PortalsPeer::makeID(ip, port);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object makeID_55887a0b670ec875004ecca5539bf765( ::boost::shared_ptr< osiris::IPAddress > address ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint64 result = ::osiris::PortalsPeer::makeID(address);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object makeID_4bb913a43bf1ffad58aef6df3133dee7( ::boost::asio::ip::basic_endpoint< boost::asio::ip::tcp > const & endpoint ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint64 result = ::osiris::PortalsPeer::makeID(endpoint);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

void register_PortalsPeer_class(){

    { //::osiris::PortalsPeer
        typedef ::boost::python::class_< ::osiris::PortalsPeer, ::boost::noncopyable > PortalsPeer_exposer_t;
        PortalsPeer_exposer_t PortalsPeer_exposer = PortalsPeer_exposer_t( "PortalsPeer", ::boost::python::init< ::boost::shared_ptr< boost::recursive_mutex >, ::boost::asio::ip::basic_endpoint< boost::asio::ip::tcp > const &, ::boost::python::optional< ::osiris::String const & > >(( ::boost::python::arg("mutex"), ::boost::python::arg("endpoint"), ::boost::python::arg("origin")=osiris::String::EMPTY )) );
        ::boost::python::scope PortalsPeer_scope( PortalsPeer_exposer );
        { //::osiris::PortalsPeer::getID
        
            typedef boost::python::object ( *getID_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getID"
                , getID_function_type( &getID_9e6ff7201b5dbd6a1137ad1dca3bdf67 ) );
        
        }
        { //::osiris::PortalsPeer::getEndpoint
        
            typedef boost::python::object ( *getEndpoint_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getEndpoint"
                , getEndpoint_function_type( &getEndpoint_7b72498bd0fbe1354ea1f08b4f7a0cc3 ) );
        
        }
        { //::osiris::PortalsPeer::getIP
        
            typedef boost::python::object ( *getIP_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getIP"
                , getIP_function_type( &getIP_6b77da11cc7cfbb4a9c55770a484d102 ) );
        
        }
        { //::osiris::PortalsPeer::getPort
        
            typedef boost::python::object ( *getPort_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getPort"
                , getPort_function_type( &getPort_4565f44a8525672a88766e920ffcb1ba ) );
        
        }
        { //::osiris::PortalsPeer::getRetries
        
            typedef boost::python::object ( *getRetries_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getRetries"
                , getRetries_function_type( &getRetries_7cd7350892dbb1d52a5e73bd2e06977e ) );
        
        }
        { //::osiris::PortalsPeer::getOrigin
        
            typedef boost::python::object ( *getOrigin_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getOrigin"
                , getOrigin_function_type( &getOrigin_c4d220696b691fce0d1b0f41537d2994 ) );
        
        }
        { //::osiris::PortalsPeer::getLastContactDate
        
            typedef boost::python::object ( *getLastContactDate_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getLastContactDate"
                , getLastContactDate_function_type( &getLastContactDate_2d2bf1ebe76602d32760bdc44b7bc27b ) );
        
        }
        { //::osiris::PortalsPeer::getSupernode
        
            typedef boost::python::object ( *getSupernode_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getSupernode"
                , getSupernode_function_type( &getSupernode_c53e37d3e2d8fc7169c61c67b7e651d8 ) );
        
        }
        { //::osiris::PortalsPeer::getCacheable
        
            typedef boost::python::object ( *getCacheable_function_type )( ::osiris::PortalsPeer const & );
            
            PortalsPeer_exposer.def( 
                "getCacheable"
                , getCacheable_function_type( &getCacheable_72216b31e006804c749cde62f34dfebd ) );
        
        }
        { //::osiris::PortalsPeer::makeID
        
            typedef boost::python::object ( *makeID_function_type )( ::osiris::String const &,::osiris::uint32 );
            
            PortalsPeer_exposer.def( 
                "makeID"
                , makeID_function_type( &makeID_e12a87fe1d0ad5b02df910e2c728f295 )
                , ( ::boost::python::arg("ip"), ::boost::python::arg("port") ) );
        
        }
        { //::osiris::PortalsPeer::makeID
        
            typedef boost::python::object ( *makeID_function_type )( ::boost::shared_ptr<osiris::IPAddress> );
            
            PortalsPeer_exposer.def( 
                "makeID"
                , makeID_function_type( &makeID_55887a0b670ec875004ecca5539bf765 )
                , ( ::boost::python::arg("address") ) );
        
        }
        { //::osiris::PortalsPeer::makeID
        
            typedef boost::python::object ( *makeID_function_type )( ::boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> const & );
            
            PortalsPeer_exposer.def( 
                "makeID"
                , makeID_function_type( &makeID_4bb913a43bf1ffad58aef6df3133dee7 )
                , ( ::boost::python::arg("endpoint") ) );
        
        }
        PortalsPeer_exposer.def( ::boost::python::self < ::boost::python::self );
        PortalsPeer_exposer.def( ::boost::python::self == ::boost::python::self );
        PortalsPeer_exposer.staticmethod( "makeID" );
        { //property "id"[fget=::osiris::PortalsPeer::getID]
        
            typedef ::osiris::uint64 ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "id"
                , fget( &::osiris::PortalsPeer::getID )
                , "get property, built on top of \"osiris::uint64 osiris::PortalsPeer::getID() const [member function]\"" );
        
        }
        { //property "endpoint"[fget=::osiris::PortalsPeer::getEndpoint]
        
            typedef ::boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "endpoint"
                , fget( &::osiris::PortalsPeer::getEndpoint )
                , "get property, built on top of \"boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> osiris::PortalsPeer::getEndpoint() const [member function]\"" );
        
        }
        { //property "ip"[fget=::osiris::PortalsPeer::getIP]
        
            typedef ::osiris::String ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "ip"
                , fget( &::osiris::PortalsPeer::getIP )
                , "get property, built on top of \"osiris::String osiris::PortalsPeer::getIP() const [member function]\"" );
        
        }
        { //property "port"[fget=::osiris::PortalsPeer::getPort]
        
            typedef ::osiris::uint32 ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "port"
                , fget( &::osiris::PortalsPeer::getPort )
                , "get property, built on top of \"osiris::uint32 osiris::PortalsPeer::getPort() const [member function]\"" );
        
        }
        { //property "retries"[fget=::osiris::PortalsPeer::getRetries]
        
            typedef ::osiris::uint16 ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "retries"
                , fget( &::osiris::PortalsPeer::getRetries )
                , "get property, built on top of \"osiris::uint16 osiris::PortalsPeer::getRetries() const [member function]\"" );
        
        }
        { //property "origin"[fget=::osiris::PortalsPeer::getOrigin]
        
            typedef ::osiris::String ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "origin"
                , fget( &::osiris::PortalsPeer::getOrigin )
                , "get property, built on top of \"osiris::String osiris::PortalsPeer::getOrigin() const [member function]\"" );
        
        }
        { //property "lastContactDate"[fget=::osiris::PortalsPeer::getLastContactDate]
        
            typedef ::osiris::DateTime ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "lastContactDate"
                , fget( &::osiris::PortalsPeer::getLastContactDate )
                , "get property, built on top of \"osiris::DateTime osiris::PortalsPeer::getLastContactDate() const [member function]\"" );
        
        }
        { //property "supernode"[fget=::osiris::PortalsPeer::getSupernode]
        
            typedef bool ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "supernode"
                , fget( &::osiris::PortalsPeer::getSupernode )
                , "get property, built on top of \"bool osiris::PortalsPeer::getSupernode() const [member function]\"" );
        
        }
        { //property "cacheable"[fget=::osiris::PortalsPeer::getCacheable]
        
            typedef bool ( ::osiris::PortalsPeer::*fget )(  ) const;
            
            PortalsPeer_exposer.add_property( 
                "cacheable"
                , fget( &::osiris::PortalsPeer::getCacheable )
                , "get property, built on top of \"bool osiris::PortalsPeer::getCacheable() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::PortalsPeer > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::PortalsPeer >, boost::shared_ptr< ::osiris::Object > >();
    }

}
