// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ipaddress.h"
#include "ipaddress.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getIP_32999fbf07323c9f80e570a813bfa961( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getIP();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getPort_738d5dca4426fcac34cf27d9bd6e9a63( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getPort();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isLocalAddress_5a51fbafa82dc510d399c0257b31abcd( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isLocalAddress();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isPrivateAddress_6b01a27198c1ea530dc0bfea70e3dbf9( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isPrivateAddress();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isAny_edddd4d2bdbc030d3e3e09114121f4f2( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isAny();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object setEndpoint_149d86b9a54209e270da806866b57cfe( ::osiris::IPAddress & inst, ::osiris::String const & ip, ::osiris::uint32 port ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.setEndpoint(ip, port);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object toNative_fe8bacf449c67715a56d6388b5e77507( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::sockaddr_in result = inst.toNative();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object toString_fc3c99ef8ddfbf8b4a2044728058c718( ::osiris::IPAddress const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.toString();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void clear_8c276be2894f2513b34096ff62055825( ::osiris::IPAddress & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.clear();
    __pythreadSaver.restore();
}

static boost::python::object fromString_ef6b03c612b005e64e31bcd0ea9e9d48( ::osiris::IPAddress & inst, ::osiris::String const & ip ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.fromString(ip);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void setIP_d0e55deba0e3c4a4e9bf44bd550fe8f8( ::osiris::IPAddress & inst, ::osiris::uint32 ip ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setIP(ip);
    __pythreadSaver.restore();
}

static void setPort_76a55649e9666c068a6373719b232825( ::osiris::IPAddress & inst, ::osiris::uint32 port ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setPort(port);
    __pythreadSaver.restore();
}

void register_IPAddress_class(){

    { //::osiris::IPAddress
        typedef ::boost::python::class_< ::osiris::IPAddress > IPAddress_exposer_t;
        IPAddress_exposer_t IPAddress_exposer = IPAddress_exposer_t( "IPAddress", ::boost::python::init< >() );
        ::boost::python::scope IPAddress_scope( IPAddress_exposer );
        IPAddress_exposer.def( ::boost::python::init< ::osiris::uint8, ::osiris::uint8, ::osiris::uint8, ::osiris::uint8, ::osiris::uint32 >(( ::boost::python::arg("a"), ::boost::python::arg("b"), ::boost::python::arg("c"), ::boost::python::arg("d"), ::boost::python::arg("port") )) );
        IPAddress_exposer.def( ::boost::python::init< ::osiris::uint32, ::osiris::uint32 >(( ::boost::python::arg("ip"), ::boost::python::arg("port") )) );
        IPAddress_exposer.def( ::boost::python::init< ::osiris::IPAddress const & >(( ::boost::python::arg("second") )) );
        { //::osiris::IPAddress::getIP
        
            typedef boost::python::object ( *getIP_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "getIP"
                , getIP_function_type( &getIP_32999fbf07323c9f80e570a813bfa961 ) );
        
        }
        { //::osiris::IPAddress::getPort
        
            typedef boost::python::object ( *getPort_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "getPort"
                , getPort_function_type( &getPort_738d5dca4426fcac34cf27d9bd6e9a63 ) );
        
        }
        { //::osiris::IPAddress::isLocalAddress
        
            typedef boost::python::object ( *isLocalAddress_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "isLocalAddress"
                , isLocalAddress_function_type( &isLocalAddress_5a51fbafa82dc510d399c0257b31abcd ) );
        
        }
        { //::osiris::IPAddress::isPrivateAddress
        
            typedef boost::python::object ( *isPrivateAddress_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "isPrivateAddress"
                , isPrivateAddress_function_type( &isPrivateAddress_6b01a27198c1ea530dc0bfea70e3dbf9 ) );
        
        }
        { //::osiris::IPAddress::isAny
        
            typedef boost::python::object ( *isAny_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "isAny"
                , isAny_function_type( &isAny_edddd4d2bdbc030d3e3e09114121f4f2 ) );
        
        }
        { //::osiris::IPAddress::setEndpoint
        
            typedef boost::python::object ( *setEndpoint_function_type )( ::osiris::IPAddress &,::osiris::String const &,::osiris::uint32 );
            
            IPAddress_exposer.def( 
                "setEndpoint"
                , setEndpoint_function_type( &setEndpoint_149d86b9a54209e270da806866b57cfe )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("ip"), ::boost::python::arg("port") ) );
        
        }
        { //::osiris::IPAddress::toNative
        
            typedef boost::python::object ( *toNative_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "toNative"
                , toNative_function_type( &toNative_fe8bacf449c67715a56d6388b5e77507 ) );
        
        }
        { //::osiris::IPAddress::toString
        
            typedef boost::python::object ( *toString_function_type )( ::osiris::IPAddress const & );
            
            IPAddress_exposer.def( 
                "toString"
                , toString_function_type( &toString_fc3c99ef8ddfbf8b4a2044728058c718 ) );
        
        }
        { //::osiris::IPAddress::clear
        
            typedef void ( *clear_function_type )( ::osiris::IPAddress & );
            
            IPAddress_exposer.def( 
                "clear"
                , clear_function_type( &clear_8c276be2894f2513b34096ff62055825 ) );
        
        }
        { //::osiris::IPAddress::fromString
        
            typedef boost::python::object ( *fromString_function_type )( ::osiris::IPAddress &,::osiris::String const & );
            
            IPAddress_exposer.def( 
                "fromString"
                , fromString_function_type( &fromString_ef6b03c612b005e64e31bcd0ea9e9d48 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("ip") ) );
        
        }
        IPAddress_exposer.def( ::boost::python::self != ::boost::python::self );
        IPAddress_exposer.def( ::boost::python::self < ::boost::python::self );
        IPAddress_exposer.def( ::boost::python::self <= ::boost::python::self );
        { //::osiris::IPAddress::operator=
        
            typedef ::osiris::IPAddress & ( ::osiris::IPAddress::*assign_function_type )( ::osiris::IPAddress const & ) ;
            
            IPAddress_exposer.def( 
                "assign"
                , assign_function_type( &::osiris::IPAddress::operator= )
                , ( ::boost::python::arg("second") )
                , bp::return_self< >() );
        
        }
        IPAddress_exposer.def( ::boost::python::self == ::boost::python::self );
        { //::osiris::IPAddress::setIP
        
            typedef void ( *setIP_function_type )( ::osiris::IPAddress &,::osiris::uint32 );
            
            IPAddress_exposer.def( 
                "setIP"
                , setIP_function_type( &setIP_d0e55deba0e3c4a4e9bf44bd550fe8f8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("ip") ) );
        
        }
        { //::osiris::IPAddress::setPort
        
            typedef void ( *setPort_function_type )( ::osiris::IPAddress &,::osiris::uint32 );
            
            IPAddress_exposer.def( 
                "setPort"
                , setPort_function_type( &setPort_76a55649e9666c068a6373719b232825 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("port") ) );
        
        }
        IPAddress_exposer.def_readonly( "ANY", ::osiris::IPAddress::ANY );
        IPAddress_exposer.def_readonly( "any_addr", ::osiris::IPAddress::any_addr );
        IPAddress_exposer.def_readonly( "any_port", ::osiris::IPAddress::any_port );
        { //property "ip"[fget=::osiris::IPAddress::getIP, fset=::osiris::IPAddress::setIP]
        
            typedef ::osiris::uint32 ( ::osiris::IPAddress::*fget )(  ) const;
            typedef void ( ::osiris::IPAddress::*fset )( ::osiris::uint32 ) ;
            
            IPAddress_exposer.add_property( 
                "ip"
                , fget( &::osiris::IPAddress::getIP )
                , fset( &::osiris::IPAddress::setIP )
                , "get\\set property, built on top of \"osiris::uint32 osiris::IPAddress::getIP() const [member function]\" and \"void osiris::IPAddress::setIP(osiris::uint32 ip) [member function]\"" );
        
        }
        { //property "port"[fget=::osiris::IPAddress::getPort, fset=::osiris::IPAddress::setPort]
        
            typedef ::osiris::uint32 ( ::osiris::IPAddress::*fget )(  ) const;
            typedef void ( ::osiris::IPAddress::*fset )( ::osiris::uint32 ) ;
            
            IPAddress_exposer.add_property( 
                "port"
                , fget( &::osiris::IPAddress::getPort )
                , fset( &::osiris::IPAddress::setPort )
                , "get\\set property, built on top of \"osiris::uint32 osiris::IPAddress::getPort() const [member function]\" and \"void osiris::IPAddress::setPort(osiris::uint32 port) [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::IPAddress > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IPAddress >, boost::shared_ptr< ::osiris::Object > >();
    }

}
