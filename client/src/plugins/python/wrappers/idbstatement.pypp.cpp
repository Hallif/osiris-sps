// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idbstatement.h"
#include "idbstatement.pypp.hpp"

namespace bp = boost::python;

struct IDbStatement_wrapper : ::osiris::IDbStatement, ::osiris::PythonWrapper< ::osiris::IDbStatement > {

    IDbStatement_wrapper( )
    : ::osiris::IDbStatement( )
      , ::osiris::PythonWrapper< ::osiris::IDbStatement >(){
        // null constructor
    
    }

    static boost::python::object getParameters( ::osiris::IDbStatement const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::std::deque<boost::shared_ptr<osiris::IDbParameter>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbParameter>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbParameter> > > > const & result = inst.getParameters();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::std::deque<boost::shared_ptr<osiris::IDbParameter>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbParameter>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbParameter> > > > const & >( result ) );
    }

    static boost::python::object addParameter( ::osiris::IDbStatement & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IDbParameter> result = inst.addParameter();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void execute( ::osiris::IDbStatement & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.execute();
        __pythreadSaver.restore();
    }

    virtual ::osiris::uint32 neededParameters(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_neededParameters = this->get_override( "neededParameters" );
        return func_neededParameters(  );
    }

    virtual void close(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_close = this->get_override( "close" );
        func_close(  );
    }

    virtual void run(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_run = this->get_override( "run" );
        func_run(  );
    }

    virtual ::boost::shared_ptr< osiris::IDbParameter > createParameter( ::osiris::uint32 index ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_createParameter = this->get_override( "createParameter" );
        return func_createParameter( index );
    }

    static boost::python::object getParameter( ::osiris::IDbStatement const & inst, ::osiris::uint32 index ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IDbParameter> result = inst.getParameter(index);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

};

void register_IDbStatement_class(){

    { //::osiris::IDbStatement
        typedef ::boost::python::class_< IDbStatement_wrapper, ::boost::noncopyable > IDbStatement_exposer_t;
        IDbStatement_exposer_t IDbStatement_exposer = IDbStatement_exposer_t( "IDbStatement", ::boost::python::init< >() );
        ::boost::python::scope IDbStatement_scope( IDbStatement_exposer );
        { //::osiris::IDbStatement::getParameters
        
            typedef boost::python::object ( *getParameters_function_type )( ::osiris::IDbStatement const & );
            
            IDbStatement_exposer.def( 
                "getParameters"
                , getParameters_function_type( &IDbStatement_wrapper::getParameters ) );
        
        }
        { //::osiris::IDbStatement::addParameter
        
            typedef boost::python::object ( *addParameter_function_type )( ::osiris::IDbStatement & );
            
            IDbStatement_exposer.def( 
                "addParameter"
                , addParameter_function_type( &IDbStatement_wrapper::addParameter ) );
        
        }
        { //::osiris::IDbStatement::execute
        
            typedef void ( *execute_function_type )( ::osiris::IDbStatement & );
            
            IDbStatement_exposer.def( 
                "execute"
                , execute_function_type( &IDbStatement_wrapper::execute ) );
        
        }
        { //::osiris::IDbStatement::neededParameters
        
            typedef ::osiris::uint32 ( ::osiris::IDbStatement::*neededParameters_function_type )(  ) ;
            
            IDbStatement_exposer.def( 
                "neededParameters"
                , ( neededParameters_function_type(&::osiris::IDbStatement::neededParameters) ) );
        
        }
        { //::osiris::IDbStatement::close
        
            typedef void ( ::osiris::IDbStatement::*close_function_type )(  ) ;
            
            IDbStatement_exposer.def( 
                "close"
                , ( close_function_type(&::osiris::IDbStatement::close) ) );
        
        }
        { //::osiris::IDbStatement::run
        
            typedef void ( IDbStatement_wrapper::*run_function_type )(  ) ;
            
            IDbStatement_exposer.def( 
                "run"
                , run_function_type( &IDbStatement_wrapper::run ) );
        
        }
        { //::osiris::IDbStatement::createParameter
        
            typedef ::boost::shared_ptr< osiris::IDbParameter > ( IDbStatement_wrapper::*createParameter_function_type )( ::osiris::uint32 ) ;
            
            IDbStatement_exposer.def( 
                "createParameter"
                , createParameter_function_type( &IDbStatement_wrapper::createParameter )
                , ( ::boost::python::arg("index") ) );
        
        }
        { //::osiris::IDbStatement::getParameter
        
            typedef boost::python::object ( *getParameter_function_type )( ::osiris::IDbStatement const &,::osiris::uint32 );
            
            IDbStatement_exposer.def( 
                "getParameter"
                , getParameter_function_type( &IDbStatement_wrapper::getParameter )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("index") ) );
        
        }
        { //property "parameters"[fget=::osiris::IDbStatement::getParameters]
        
            typedef ::std::deque<boost::shared_ptr<osiris::IDbParameter>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbParameter>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbParameter> > > > const & ( ::osiris::IDbStatement::*fget )(  ) const;
            
            IDbStatement_exposer.add_property( 
                "parameters"
                , ::boost::python::make_function( 
                      fget( &::osiris::IDbStatement::getParameters )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"std::deque<boost::shared_ptr<osiris::IDbParameter>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbParameter>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbParameter> > > > const & osiris::IDbStatement::getParameters() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::IDbStatement > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IDbStatement >, boost::shared_ptr< ::osiris::Object > >();
    }

}
