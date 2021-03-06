// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "engine.h"
#include "enginesingleton.pypp.hpp"

namespace bp = boost::python;

static boost::python::object instance_351501f927ec85974859d496ede21fb4(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::Engine * result = ::osiris::DynamicSingleton<osiris::Engine>::instance();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::Engine * >( result ) );
}

static boost::python::object exists_a1b29df08af0347f30a8baedede5e424(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = ::osiris::DynamicSingleton<osiris::Engine>::exists();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object create_0150857bd650ccdbe4085cf3e01384ff(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::Engine * result = ::osiris::DynamicSingleton<osiris::Engine>::create();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::Engine * >( result ) );
}

static void destroy_b3bcd065a90cd947aa9ffc4e429d50e8(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DynamicSingleton<osiris::Engine>::destroy();
    __pythreadSaver.restore();
}

void register_EngineSingleton_class(){

    ::boost::python::class_< ::osiris::DynamicSingleton< osiris::Engine >, ::boost::noncopyable >( "EngineSingleton", ::boost::python::init< >() )    
        .def( 
            "instance"
            , (boost::python::object (*)(  ))( &instance_351501f927ec85974859d496ede21fb4 ) )    
        .def( 
            "exists"
            , (boost::python::object (*)(  ))( &exists_a1b29df08af0347f30a8baedede5e424 ) )    
        .def( 
            "create"
            , (boost::python::object (*)(  ))( &create_0150857bd650ccdbe4085cf3e01384ff ) )    
        .def( 
            "destroy"
            , (void (*)(  ))( &destroy_b3bcd065a90cd947aa9ffc4e429d50e8 ) )    
        .staticmethod( "instance" )    
        .staticmethod( "exists" )    
        .staticmethod( "create" )    
        .staticmethod( "destroy" );

}
