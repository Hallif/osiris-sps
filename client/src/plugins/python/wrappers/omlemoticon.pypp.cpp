// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "omlemoticon.h"
#include "omlemoticon.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getCode_e9678af792082f1908fa860dfacb86a6( ::osiris::OMLEmoticon const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getCode();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getName_0ef9029696fd7c04f2360fa3ecc4b7df( ::osiris::OMLEmoticon const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getName();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

void register_OMLEmoticon_class(){

    { //::osiris::OMLEmoticon
        typedef ::boost::python::class_< ::osiris::OMLEmoticon, ::boost::noncopyable > OMLEmoticon_exposer_t;
        OMLEmoticon_exposer_t OMLEmoticon_exposer = OMLEmoticon_exposer_t( "OMLEmoticon", ::boost::python::init< ::osiris::String const &, ::osiris::String const & >(( ::boost::python::arg("code"), ::boost::python::arg("name") )) );
        ::boost::python::scope OMLEmoticon_scope( OMLEmoticon_exposer );
        { //::osiris::OMLEmoticon::getCode
        
            typedef boost::python::object ( *getCode_function_type )( ::osiris::OMLEmoticon const & );
            
            OMLEmoticon_exposer.def( 
                "getCode"
                , getCode_function_type( &getCode_e9678af792082f1908fa860dfacb86a6 ) );
        
        }
        { //::osiris::OMLEmoticon::getName
        
            typedef boost::python::object ( *getName_function_type )( ::osiris::OMLEmoticon const & );
            
            OMLEmoticon_exposer.def( 
                "getName"
                , getName_function_type( &getName_0ef9029696fd7c04f2360fa3ecc4b7df ) );
        
        }
        { //property "code"[fget=::osiris::OMLEmoticon::getCode]
        
            typedef ::osiris::String const & ( ::osiris::OMLEmoticon::*fget )(  ) const;
            
            OMLEmoticon_exposer.add_property( 
                "code"
                , ::boost::python::make_function( 
                      fget( &::osiris::OMLEmoticon::getCode )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::OMLEmoticon::getCode() const [member function]\"" );
        
        }
        { //property "name"[fget=::osiris::OMLEmoticon::getName]
        
            typedef ::osiris::String const & ( ::osiris::OMLEmoticon::*fget )(  ) const;
            
            OMLEmoticon_exposer.add_property( 
                "name"
                , ::boost::python::make_function( 
                      fget( &::osiris::OMLEmoticon::getName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::OMLEmoticon::getName() const [member function]\"" );
        
        }
    }

}
