// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "portalsportalssystem.h"
#include "portalssystemsingleton.pypp.hpp"

namespace bp = boost::python;

static boost::python::object instance_e7963aa443a9019f4cafd455eb8048c9(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::PortalsSystem * result = ::osiris::DynamicSingleton<osiris::PortalsSystem>::instance();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::PortalsSystem * >( result ) );
}

static boost::python::object exists_9d1ef5dc67c98be43795535d0e311c9b(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = ::osiris::DynamicSingleton<osiris::PortalsSystem>::exists();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object create_cb819e1c1b4e145075cb4f1aa308b84f(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::PortalsSystem * result = ::osiris::DynamicSingleton<osiris::PortalsSystem>::create();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::PortalsSystem * >( result ) );
}

static void destroy_1c686a4d6ae68cbc646345d8c34b648d(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DynamicSingleton<osiris::PortalsSystem>::destroy();
    __pythreadSaver.restore();
}

void register_PortalsSystemSingleton_class(){

    ::boost::python::class_< ::osiris::DynamicSingleton< osiris::PortalsSystem >, ::boost::noncopyable >( "PortalsSystemSingleton", ::boost::python::init< >() )    
        .def( 
            "instance"
            , (boost::python::object (*)(  ))( &instance_e7963aa443a9019f4cafd455eb8048c9 ) )    
        .def( 
            "exists"
            , (boost::python::object (*)(  ))( &exists_9d1ef5dc67c98be43795535d0e311c9b ) )    
        .def( 
            "create"
            , (boost::python::object (*)(  ))( &create_cb819e1c1b4e145075cb4f1aa308b84f ) )    
        .def( 
            "destroy"
            , (void (*)(  ))( &destroy_1c686a4d6ae68cbc646345d8c34b648d ) )    
        .staticmethod( "instance" )    
        .staticmethod( "exists" )    
        .staticmethod( "create" )    
        .staticmethod( "destroy" );

}
