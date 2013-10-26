// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "omlcode.h"
#include "omlcode.pypp.hpp"

namespace bp = boost::python;

struct OMLCode_wrapper : ::osiris::OMLCode, ::osiris::PythonWrapper< ::osiris::OMLCode > {

    OMLCode_wrapper(::osiris::OMLCode const & arg )
    : ::osiris::OMLCode( arg )
      , ::osiris::PythonWrapper< ::osiris::OMLCode >(){
        // copy constructor
        
    }

    OMLCode_wrapper(::osiris::String const & tag )
    : ::osiris::OMLCode( boost::ref(tag) )
      , ::osiris::PythonWrapper< ::osiris::OMLCode >(){
        // constructor
    
    }

    virtual ::osiris::String processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processHtml = this->get_override( "processHtml" ) )
            return func_processHtml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::OMLCode::processHtml( i, context );
        }
    }
    
    ::osiris::String default_processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLCode::processHtml( i, context );
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

};

void register_OMLCode_class(){

    { //::osiris::OMLCode
        typedef ::boost::python::class_< OMLCode_wrapper, ::boost::python::bases< ::osiris::IOMLCode > > OMLCode_exposer_t;
        OMLCode_exposer_t OMLCode_exposer = OMLCode_exposer_t( "OMLCode", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("tag") )) );
        ::boost::python::scope OMLCode_scope( OMLCode_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::OMLCode >();
        { //::osiris::OMLCode::processHtml
        
            typedef ::osiris::String ( ::osiris::OMLCode::*processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLCode_wrapper::*default_processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLCode_exposer.def( 
                "processHtml"
                , processHtml_function_type(&::osiris::OMLCode::processHtml)
                , default_processHtml_function_type(&OMLCode_wrapper::default_processHtml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::IOMLCode::allowRowMode
        
            typedef bool ( ::osiris::IOMLCode::*allowRowMode_function_type )(  ) const;
            typedef bool ( OMLCode_wrapper::*default_allowRowMode_function_type )(  ) const;
            
            OMLCode_exposer.def( 
                "allowRowMode"
                , allowRowMode_function_type(&::osiris::IOMLCode::allowRowMode)
                , default_allowRowMode_function_type(&OMLCode_wrapper::default_allowRowMode) );
        
        }
        { //::osiris::IOMLCode::processOsml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLCode_wrapper::*default_processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLCode_exposer.def( 
                "processOsml"
                , processOsml_function_type(&::osiris::IOMLCode::processOsml)
                , default_processOsml_function_type(&OMLCode_wrapper::default_processOsml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
    }

}
