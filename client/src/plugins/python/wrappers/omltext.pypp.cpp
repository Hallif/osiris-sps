// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "omltext.h"
#include "omltext.pypp.hpp"

namespace bp = boost::python;

struct OMLText_wrapper : ::osiris::OMLText, ::osiris::PythonWrapper< ::osiris::OMLText > {

    OMLText_wrapper(::osiris::OMLText const & arg )
    : ::osiris::OMLText( arg )
      , ::osiris::PythonWrapper< ::osiris::OMLText >(){
        // copy constructor
        
    }

    OMLText_wrapper(::osiris::String const & tag )
    : ::osiris::OMLText( boost::ref(tag) )
      , ::osiris::PythonWrapper< ::osiris::OMLText >(){
        // constructor
    
    }

    virtual bool allowRowMode(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_allowRowMode = this->get_override( "allowRowMode" ) )
            return func_allowRowMode(  );
        else{
            __pystate.leave();
            return this->::osiris::OMLText::allowRowMode(  );
        }
    }
    
    bool default_allowRowMode(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLText::allowRowMode( );
    }

    virtual ::osiris::String processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processHtml = this->get_override( "processHtml" ) )
            return func_processHtml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::OMLText::processHtml( i, context );
        }
    }
    
    ::osiris::String default_processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLText::processHtml( i, context );
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

void register_OMLText_class(){

    { //::osiris::OMLText
        typedef ::boost::python::class_< OMLText_wrapper, ::boost::python::bases< ::osiris::IOMLCode > > OMLText_exposer_t;
        OMLText_exposer_t OMLText_exposer = OMLText_exposer_t( "OMLText", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("tag") )) );
        ::boost::python::scope OMLText_scope( OMLText_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::OMLText >();
        { //::osiris::OMLText::allowRowMode
        
            typedef bool ( ::osiris::OMLText::*allowRowMode_function_type )(  ) const;
            typedef bool ( OMLText_wrapper::*default_allowRowMode_function_type )(  ) const;
            
            OMLText_exposer.def( 
                "allowRowMode"
                , allowRowMode_function_type(&::osiris::OMLText::allowRowMode)
                , default_allowRowMode_function_type(&OMLText_wrapper::default_allowRowMode) );
        
        }
        { //::osiris::OMLText::processHtml
        
            typedef ::osiris::String ( ::osiris::OMLText::*processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLText_wrapper::*default_processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLText_exposer.def( 
                "processHtml"
                , processHtml_function_type(&::osiris::OMLText::processHtml)
                , default_processHtml_function_type(&OMLText_wrapper::default_processHtml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::IOMLCode::processOsml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLText_wrapper::*default_processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLText_exposer.def( 
                "processOsml"
                , processOsml_function_type(&::osiris::IOMLCode::processOsml)
                , default_processOsml_function_type(&OMLText_wrapper::default_processOsml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
    }

}
