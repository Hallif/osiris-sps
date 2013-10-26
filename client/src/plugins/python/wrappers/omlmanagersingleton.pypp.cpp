// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "omlmanager.h"
#include "omlmanagersingleton.pypp.hpp"

namespace bp = boost::python;

struct StaticSingleton_less__osiris_scope_OMLManager_comma__true__greater__wrapper : ::osiris::StaticSingleton< osiris::OMLManager, true >, ::osiris::PythonWrapper< ::osiris::StaticSingleton< osiris::OMLManager, true > > {

    StaticSingleton_less__osiris_scope_OMLManager_comma__true__greater__wrapper( )
    : ::osiris::StaticSingleton<osiris::OMLManager, true>( )
      , ::osiris::PythonWrapper< ::osiris::StaticSingleton< osiris::OMLManager, true > >(){
        // null constructor
    
    }

    static boost::python::object instance(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::OMLManager * result = ::osiris::StaticSingleton<osiris::OMLManager, true>::instance();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::OMLManager * >( result ) );
    }

};

void register_OMLManagerSingleton_class(){

    ::boost::python::class_< StaticSingleton_less__osiris_scope_OMLManager_comma__true__greater__wrapper, ::boost::noncopyable >( "OMLManagerSingleton", ::boost::python::no_init )    
        .def( ::boost::python::init< >() )    
        .def( 
            "instance"
            , (boost::python::object (*)(  ))( &StaticSingleton_less__osiris_scope_OMLManager_comma__true__greater__wrapper::instance ) )    
        .staticmethod( "instance" );

}
