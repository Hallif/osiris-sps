// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "httpvirtualdirectory.h"
#include "datetime.h"
#include "httppath.h"
#include "httpsessionstate.h"
#include "httpenumerateddirectorycallback.h"
#include "httpdirectorycallback.h"
#include "httpvirtualdirectory.pypp.hpp"

namespace bp = boost::python;

struct HttpVirtualDirectory_wrapper : ::osiris::HttpVirtualDirectory, ::osiris::PythonWrapper< ::osiris::HttpVirtualDirectory > {

    HttpVirtualDirectory_wrapper(::osiris::String const & name )
    : ::osiris::HttpVirtualDirectory( boost::ref(name) )
      , ::osiris::PythonWrapper< ::osiris::HttpVirtualDirectory >(){
        // constructor
    
    }

    static boost::python::object getHandlers( ::osiris::HttpVirtualDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::NedAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > const & result = inst.getHandlers();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::NedAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > const & >( result ) );
    }

    virtual bool handle( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_handle = this->get_override( "handle" ) )
            return func_handle( session, boost::ref(path) );
        else{
            __pystate.leave();
            return this->::osiris::HttpVirtualDirectory::handle( session, boost::ref(path) );
        }
    }
    
    virtual bool default_handle( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::HttpVirtualDirectory::handle( session, boost::ref(path) );
    }

    static void addHandler( ::osiris::HttpVirtualDirectory & inst, ::boost::shared_ptr< osiris::IHttpDirectoryHandler > handler ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.addHandler(handler);
        __pythreadSaver.restore();
    }

    static void removeHandler( ::osiris::HttpVirtualDirectory & inst, ::boost::shared_ptr< osiris::IHttpDirectoryHandler > handler ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.removeHandler(handler);
        __pythreadSaver.restore();
    }

    virtual ::boost::shared_ptr< osiris::HttpSessionState > createSessionState( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::TimeDuration const & duration ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_createSessionState = this->get_override( "createSessionState" ) )
            return func_createSessionState( session, boost::ref(duration) );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::createSessionState( session, boost::ref(duration) );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSessionState > default_createSessionState( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::TimeDuration const & duration ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::createSessionState( session, boost::ref(duration) );
    }

    virtual ::osiris::String getSessionCookie( ::boost::shared_ptr< osiris::HttpSession > session ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSessionCookie = this->get_override( "getSessionCookie" ) )
            return func_getSessionCookie( session );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::getSessionCookie( session );
        }
    }
    
    ::osiris::String default_getSessionCookie( ::boost::shared_ptr< osiris::HttpSession > session ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::getSessionCookie( session );
    }

    virtual bool isAccessible( ::boost::shared_ptr< osiris::HttpSession > session ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_isAccessible = this->get_override( "isAccessible" ) )
            return func_isAccessible( session );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::isAccessible( session );
        }
    }
    
    bool default_isAccessible( ::boost::shared_ptr< osiris::HttpSession > session ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::isAccessible( session );
    }

    virtual bool process( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_process = this->get_override( "process" ) )
            return func_process( session, boost::ref(path) );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::process( session, boost::ref(path) );
        }
    }
    
    bool default_process( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::process( session, boost::ref(path) );
    }

};

void register_HttpVirtualDirectory_class(){

    { //::osiris::HttpVirtualDirectory
        typedef ::boost::python::class_< HttpVirtualDirectory_wrapper, ::boost::python::bases< ::osiris::IHttpDirectory >, ::boost::noncopyable > HttpVirtualDirectory_exposer_t;
        HttpVirtualDirectory_exposer_t HttpVirtualDirectory_exposer = HttpVirtualDirectory_exposer_t( "HttpVirtualDirectory", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("name") )) );
        ::boost::python::scope HttpVirtualDirectory_scope( HttpVirtualDirectory_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::HttpVirtualDirectory >();
        { //::osiris::HttpVirtualDirectory::getHandlers
        
            typedef boost::python::object ( *getHandlers_function_type )( ::osiris::HttpVirtualDirectory const & );
            
            HttpVirtualDirectory_exposer.def( 
                "getHandlers"
                , getHandlers_function_type( &HttpVirtualDirectory_wrapper::getHandlers ) );
        
        }
        { //::osiris::HttpVirtualDirectory::handle
        
            typedef bool ( HttpVirtualDirectory_wrapper::*handle_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            
            HttpVirtualDirectory_exposer.def( 
                "handle"
                , handle_function_type( &HttpVirtualDirectory_wrapper::default_handle )
                , ( ::boost::python::arg("session"), ::boost::python::arg("path") ) );
        
        }
        { //::osiris::HttpVirtualDirectory::addHandler
        
            typedef void ( *addHandler_function_type )( ::osiris::HttpVirtualDirectory &,::boost::shared_ptr<osiris::IHttpDirectoryHandler> );
            
            HttpVirtualDirectory_exposer.def( 
                "addHandler"
                , addHandler_function_type( &HttpVirtualDirectory_wrapper::addHandler )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("handler") ) );
        
        }
        { //::osiris::HttpVirtualDirectory::removeHandler
        
            typedef void ( *removeHandler_function_type )( ::osiris::HttpVirtualDirectory &,::boost::shared_ptr<osiris::IHttpDirectoryHandler> );
            
            HttpVirtualDirectory_exposer.def( 
                "removeHandler"
                , removeHandler_function_type( &HttpVirtualDirectory_wrapper::removeHandler )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("handler") ) );
        
        }
        { //::osiris::IHttpDirectory::createSessionState
        
            typedef ::boost::shared_ptr< osiris::HttpSessionState > ( ::osiris::IHttpDirectory::*createSessionState_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::TimeDuration const & ) const;
            typedef ::boost::shared_ptr< osiris::HttpSessionState > ( HttpVirtualDirectory_wrapper::*default_createSessionState_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::TimeDuration const & ) const;
            
            HttpVirtualDirectory_exposer.def( 
                "createSessionState"
                , createSessionState_function_type(&::osiris::IHttpDirectory::createSessionState)
                , default_createSessionState_function_type(&HttpVirtualDirectory_wrapper::default_createSessionState)
                , ( ::boost::python::arg("session"), ::boost::python::arg("duration") ) );
        
        }
        { //::osiris::IHttpDirectory::getSessionCookie
        
            typedef ::osiris::String ( ::osiris::IHttpDirectory::*getSessionCookie_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) const;
            typedef ::osiris::String ( HttpVirtualDirectory_wrapper::*default_getSessionCookie_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) const;
            
            HttpVirtualDirectory_exposer.def( 
                "getSessionCookie"
                , getSessionCookie_function_type(&::osiris::IHttpDirectory::getSessionCookie)
                , default_getSessionCookie_function_type(&HttpVirtualDirectory_wrapper::default_getSessionCookie)
                , ( ::boost::python::arg("session") ) );
        
        }
        { //::osiris::IHttpDirectory::isAccessible
        
            typedef bool ( ::osiris::IHttpDirectory::*isAccessible_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) ;
            typedef bool ( HttpVirtualDirectory_wrapper::*default_isAccessible_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) ;
            
            HttpVirtualDirectory_exposer.def( 
                "isAccessible"
                , isAccessible_function_type(&::osiris::IHttpDirectory::isAccessible)
                , default_isAccessible_function_type(&HttpVirtualDirectory_wrapper::default_isAccessible)
                , ( ::boost::python::arg("session") ) );
        
        }
        { //::osiris::IHttpDirectory::process
        
            typedef bool ( ::osiris::IHttpDirectory::*process_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            typedef bool ( HttpVirtualDirectory_wrapper::*default_process_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            
            HttpVirtualDirectory_exposer.def( 
                "process"
                , process_function_type(&::osiris::IHttpDirectory::process)
                , default_process_function_type(&HttpVirtualDirectory_wrapper::default_process)
                , ( ::boost::python::arg("session"), ::boost::python::arg("path") ) );
        
        }
        { //property "handlers"[fget=::osiris::HttpVirtualDirectory::getHandlers]
        
            typedef ::std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::NedAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > const & ( ::osiris::HttpVirtualDirectory::*fget )(  ) const;
            
            HttpVirtualDirectory_exposer.add_property( 
                "handlers"
                , ::boost::python::make_function( 
                      fget( &::osiris::HttpVirtualDirectory::getHandlers )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"std::list<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::StdAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler>, osiris::NedAllocator<boost::shared_ptr<osiris::IHttpDirectoryHandler> > > > const & osiris::HttpVirtualDirectory::getHandlers() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::HttpVirtualDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpVirtualDirectory >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpVirtualDirectory >, boost::shared_ptr< ::osiris::Object > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpVirtualDirectory >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::IHttpDirectory > > >();
    }

}
