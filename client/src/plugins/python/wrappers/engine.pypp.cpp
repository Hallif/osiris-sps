// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "engine.h"
#include "osirislink.h"
#include "httpurl.h"
#include "ids.h"
#include "engine.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getMachineID_4b47e902ccdbc62b20fb64af5a76b95c( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getMachineID();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getAliveDelta_782c52620115bceb9667b42306487358( ::osiris::Engine const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::TimeDuration result = inst.getAliveDelta();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getVersionMajor_e31b0630060a43a20426e878c4e5892e(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = ::osiris::Engine::getVersionMajor();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getVersionMinor_3a7ef9e5373c881e0229d95981073ad5(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = ::osiris::Engine::getVersionMinor();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getPlatformName_d3e5fc19dc0862434f256c52861ed89d(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = ::osiris::Engine::getPlatformName();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDefaultHttpUserAgent_2f851f31cbbcd64b6325df8f3064b338(  ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = ::osiris::Engine::getDefaultHttpUserAgent();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void stop_700ff65d2863d59305ed889f430d04a8( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.stop();
    __pythreadSaver.restore();
}

static boost::python::object processFile_b8aa549988ab97ca780ae9837479f9f5( ::osiris::Engine & inst, ::osiris::String const & filename, ::osiris::String const & password ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.processFile(filename, password);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object processFile_5a29e8dbf70dc283bd27d0c6e8c1e695( ::osiris::Engine & inst, ::boost::shared_ptr< osiris::File > file, ::osiris::String const & password ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.processFile(file, password);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object processLink_9b8fbe0dd949d39c3fa553929b9361b4( ::osiris::Engine & inst, ::osiris::OsirisLink const & link, ::osiris::String & href ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.processLink(link, href);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object createSystemConnection_0875eb26e17ee2252615e462252615e5( ::osiris::Engine const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IDbConnection> result = inst.createSystemConnection();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void waitJobs_e155bdfc593270c3a1ac4c91909a07fc( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.waitJobs();
    __pythreadSaver.restore();
}

static boost::python::object hasBackgroundJobs_8f9855717985741c9142d2104f3700cc( ::osiris::Engine const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.hasBackgroundJobs();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getBackgroundJobs_35eb45321a2eca5f900014268e8b4841( ::osiris::Engine const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > result = inst.getBackgroundJobs();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getLastCompletedBackgroundJobs_1b639c4419ca8e0bbb5392eaf44adec4( ::osiris::Engine const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > result = inst.getLastCompletedBackgroundJobs();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void clearCompletedBackgroundJobs_abed5e43576f5804d7e9ce36bda2e4b2( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.clearCompletedBackgroundJobs();
    __pythreadSaver.restore();
}

static boost::python::object peekBackgroundJobID_499269a8f8f971827059fb3b59acf186( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.peekBackgroundJobID();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void startExtensionsJob_91c7b96fabf201b9b2034c2ea43625d9( ::osiris::Engine & inst, ::osiris::String const & jobType, ::std::string const & extensionID, ::osiris::String const & downloadUrl ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.startExtensionsJob(jobType, extensionID, downloadUrl);
    __pythreadSaver.restore();
}

static boost::python::object createTCPSocket_01fd05a12ffa2e80cfed0ee944e570b6( ::osiris::Engine & inst, ::boost::shared_ptr< boost::asio::io_service > io_service, bool outgoing, bool unsafe ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::TCPSocket> result = inst.createTCPSocket(io_service, outgoing, unsafe);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object createUDPSocket_69794cf57438f3ddeea48239f984a891( ::osiris::Engine & inst, ::boost::shared_ptr< boost::asio::io_service > io_service, bool outgoing, bool unsafe ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::UDPSocket> result = inst.createUDPSocket(io_service, outgoing, unsafe);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object createHttpClient_04d77f2763e5592773ff51eaa6f6a8d5( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::HttpClient> result = inst.createHttpClient();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getTimeOffset_7a4e96d9cb8b91e14fac972ac6af46dd( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    int result = inst.getTimeOffset();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getTimeDST_6bbc7a81c0787d08db883ee95890e0d6( ::osiris::Engine & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    int result = inst.getTimeDST();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void addBackgroundJob_e09c9d3c351c5cb61b5a6f1448b1dbba( ::osiris::Engine & inst, ::boost::shared_ptr< osiris::IBackgroundJob > job ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.addBackgroundJob(job);
    __pythreadSaver.restore();
}

static void enableLogger_adfdf0400e3d2b399fbcff24f6428355( ::osiris::Engine & inst, bool enable ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.enableLogger(enable);
    __pythreadSaver.restore();
}

static boost::python::object executeCommand_97c77a971db760799f0f5215a9238660( ::osiris::Engine & inst, ::osiris::String const & command ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.executeCommand(command);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object formatSystemDate_e23b982efbb9229ee54dd5aa99326cf4( ::osiris::Engine & inst, ::boost::posix_time::ptime const & time, ::osiris::DateTime::DateTimePattern pattern=(::osiris::DateTime::dpShortDateTimePattern) ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.formatSystemDate(time, pattern);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getAliveSince_5be7e77d9a839f86defab4fd78631774( ::osiris::Engine const & inst, ::osiris::TimeDuration const & duration ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getAliveSince(duration);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getBackgroundJob_02924fd29e1e0abb9d770d202b7390f5( ::osiris::Engine const & inst, ::osiris::uint32 id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IBackgroundJob> result = inst.getBackgroundJob(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getText_a75fa186c592d83668cbef145eba6be1( ::osiris::Engine const & inst, ::osiris::String const & key ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.getText(key);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getVersionName_8625b023e27848aa6e3493b745c3c5e9( bool user ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = ::osiris::Engine::getVersionName(user);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object parseUrlXml_2ffcafc2811fedcd7568fa0925bb3b7b( ::osiris::Engine & inst, ::osiris::HttpUrl & url ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::XMLDocument> result = inst.parseUrlXml(url);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object start_0374dcfe77529993e57d1446e65d4523( ::osiris::Engine & inst, bool recovery ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.start(recovery);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

void register_Engine_class(){

    { //::osiris::Engine
        typedef ::boost::python::class_< ::osiris::Engine, ::boost::python::bases< ::osiris::DynamicSingleton< osiris::Engine > >, ::boost::noncopyable > Engine_exposer_t;
        Engine_exposer_t Engine_exposer = Engine_exposer_t( "Engine", ::boost::python::no_init );
        ::boost::python::scope Engine_scope( Engine_exposer );
        Engine_exposer.def( ::boost::python::init< >() );
        { //::osiris::Engine::getMachineID
        
            typedef boost::python::object ( *getMachineID_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "getMachineID"
                , getMachineID_function_type( &getMachineID_4b47e902ccdbc62b20fb64af5a76b95c ) );
        
        }
        { //::osiris::Engine::getAliveDelta
        
            typedef boost::python::object ( *getAliveDelta_function_type )( ::osiris::Engine const & );
            
            Engine_exposer.def( 
                "getAliveDelta"
                , getAliveDelta_function_type( &getAliveDelta_782c52620115bceb9667b42306487358 ) );
        
        }
        { //::osiris::Engine::getVersionMajor
        
            typedef boost::python::object ( *getVersionMajor_function_type )(  );
            
            Engine_exposer.def( 
                "getVersionMajor"
                , getVersionMajor_function_type( &getVersionMajor_e31b0630060a43a20426e878c4e5892e ) );
        
        }
        { //::osiris::Engine::getVersionMinor
        
            typedef boost::python::object ( *getVersionMinor_function_type )(  );
            
            Engine_exposer.def( 
                "getVersionMinor"
                , getVersionMinor_function_type( &getVersionMinor_3a7ef9e5373c881e0229d95981073ad5 ) );
        
        }
        { //::osiris::Engine::getPlatformName
        
            typedef boost::python::object ( *getPlatformName_function_type )(  );
            
            Engine_exposer.def( 
                "getPlatformName"
                , getPlatformName_function_type( &getPlatformName_d3e5fc19dc0862434f256c52861ed89d ) );
        
        }
        { //::osiris::Engine::getDefaultHttpUserAgent
        
            typedef boost::python::object ( *getDefaultHttpUserAgent_function_type )(  );
            
            Engine_exposer.def( 
                "getDefaultHttpUserAgent"
                , getDefaultHttpUserAgent_function_type( &getDefaultHttpUserAgent_2f851f31cbbcd64b6325df8f3064b338 ) );
        
        }
        { //::osiris::Engine::stop
        
            typedef void ( *stop_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "stop"
                , stop_function_type( &stop_700ff65d2863d59305ed889f430d04a8 ) );
        
        }
        { //::osiris::Engine::processFile
        
            typedef boost::python::object ( *processFile_function_type )( ::osiris::Engine &,::osiris::String const &,::osiris::String const & );
            
            Engine_exposer.def( 
                "processFile"
                , processFile_function_type( &processFile_b8aa549988ab97ca780ae9837479f9f5 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("filename"), ::boost::python::arg("password") ) );
        
        }
        { //::osiris::Engine::processFile
        
            typedef boost::python::object ( *processFile_function_type )( ::osiris::Engine &,::boost::shared_ptr<osiris::File>,::osiris::String const & );
            
            Engine_exposer.def( 
                "processFile"
                , processFile_function_type( &processFile_5a29e8dbf70dc283bd27d0c6e8c1e695 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("file"), ::boost::python::arg("password") ) );
        
        }
        { //::osiris::Engine::processLink
        
            typedef boost::python::object ( *processLink_function_type )( ::osiris::Engine &,::osiris::OsirisLink const &,::osiris::String & );
            
            Engine_exposer.def( 
                "processLink"
                , processLink_function_type( &processLink_9b8fbe0dd949d39c3fa553929b9361b4 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("link"), ::boost::python::arg("href") ) );
        
        }
        { //::osiris::Engine::createSystemConnection
        
            typedef boost::python::object ( *createSystemConnection_function_type )( ::osiris::Engine const & );
            
            Engine_exposer.def( 
                "createSystemConnection"
                , createSystemConnection_function_type( &createSystemConnection_0875eb26e17ee2252615e462252615e5 ) );
        
        }
        { //::osiris::Engine::waitJobs
        
            typedef void ( *waitJobs_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "waitJobs"
                , waitJobs_function_type( &waitJobs_e155bdfc593270c3a1ac4c91909a07fc ) );
        
        }
        { //::osiris::Engine::hasBackgroundJobs
        
            typedef boost::python::object ( *hasBackgroundJobs_function_type )( ::osiris::Engine const & );
            
            Engine_exposer.def( 
                "hasBackgroundJobs"
                , hasBackgroundJobs_function_type( &hasBackgroundJobs_8f9855717985741c9142d2104f3700cc ) );
        
        }
        { //::osiris::Engine::getBackgroundJobs
        
            typedef boost::python::object ( *getBackgroundJobs_function_type )( ::osiris::Engine const & );
            
            Engine_exposer.def( 
                "getBackgroundJobs"
                , getBackgroundJobs_function_type( &getBackgroundJobs_35eb45321a2eca5f900014268e8b4841 ) );
        
        }
        { //::osiris::Engine::getLastCompletedBackgroundJobs
        
            typedef boost::python::object ( *getLastCompletedBackgroundJobs_function_type )( ::osiris::Engine const & );
            
            Engine_exposer.def( 
                "getLastCompletedBackgroundJobs"
                , getLastCompletedBackgroundJobs_function_type( &getLastCompletedBackgroundJobs_1b639c4419ca8e0bbb5392eaf44adec4 ) );
        
        }
        { //::osiris::Engine::clearCompletedBackgroundJobs
        
            typedef void ( *clearCompletedBackgroundJobs_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "clearCompletedBackgroundJobs"
                , clearCompletedBackgroundJobs_function_type( &clearCompletedBackgroundJobs_abed5e43576f5804d7e9ce36bda2e4b2 ) );
        
        }
        { //::osiris::Engine::peekBackgroundJobID
        
            typedef boost::python::object ( *peekBackgroundJobID_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "peekBackgroundJobID"
                , peekBackgroundJobID_function_type( &peekBackgroundJobID_499269a8f8f971827059fb3b59acf186 ) );
        
        }
        { //::osiris::Engine::startExtensionsJob
        
            typedef void ( *startExtensionsJob_function_type )( ::osiris::Engine &,::osiris::String const &,::std::string const &,::osiris::String const & );
            
            Engine_exposer.def( 
                "startExtensionsJob"
                , startExtensionsJob_function_type( &startExtensionsJob_91c7b96fabf201b9b2034c2ea43625d9 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("jobType"), ::boost::python::arg("extensionID"), ::boost::python::arg("downloadUrl") ) );
        
        }
        { //::osiris::Engine::createTCPSocket
        
            typedef boost::python::object ( *createTCPSocket_function_type )( ::osiris::Engine &,::boost::shared_ptr<boost::asio::io_service>,bool,bool );
            
            Engine_exposer.def( 
                "createTCPSocket"
                , createTCPSocket_function_type( &createTCPSocket_01fd05a12ffa2e80cfed0ee944e570b6 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("io_service"), ::boost::python::arg("outgoing"), ::boost::python::arg("unsafe") ) );
        
        }
        { //::osiris::Engine::createUDPSocket
        
            typedef boost::python::object ( *createUDPSocket_function_type )( ::osiris::Engine &,::boost::shared_ptr<boost::asio::io_service>,bool,bool );
            
            Engine_exposer.def( 
                "createUDPSocket"
                , createUDPSocket_function_type( &createUDPSocket_69794cf57438f3ddeea48239f984a891 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("io_service"), ::boost::python::arg("outgoing"), ::boost::python::arg("unsafe") ) );
        
        }
        { //::osiris::Engine::createHttpClient
        
            typedef boost::python::object ( *createHttpClient_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "createHttpClient"
                , createHttpClient_function_type( &createHttpClient_04d77f2763e5592773ff51eaa6f6a8d5 ) );
        
        }
        { //::osiris::Engine::getTimeOffset
        
            typedef boost::python::object ( *getTimeOffset_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "getTimeOffset"
                , getTimeOffset_function_type( &getTimeOffset_7a4e96d9cb8b91e14fac972ac6af46dd ) );
        
        }
        { //::osiris::Engine::getTimeDST
        
            typedef boost::python::object ( *getTimeDST_function_type )( ::osiris::Engine & );
            
            Engine_exposer.def( 
                "getTimeDST"
                , getTimeDST_function_type( &getTimeDST_6bbc7a81c0787d08db883ee95890e0d6 ) );
        
        }
        { //::osiris::Engine::addBackgroundJob
        
            typedef void ( *addBackgroundJob_function_type )( ::osiris::Engine &,::boost::shared_ptr<osiris::IBackgroundJob> );
            
            Engine_exposer.def( 
                "addBackgroundJob"
                , addBackgroundJob_function_type( &addBackgroundJob_e09c9d3c351c5cb61b5a6f1448b1dbba )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("job") ) );
        
        }
        { //::osiris::Engine::enableLogger
        
            typedef void ( *enableLogger_function_type )( ::osiris::Engine &,bool );
            
            Engine_exposer.def( 
                "enableLogger"
                , enableLogger_function_type( &enableLogger_adfdf0400e3d2b399fbcff24f6428355 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("enable") ) );
        
        }
        { //::osiris::Engine::executeCommand
        
            typedef boost::python::object ( *executeCommand_function_type )( ::osiris::Engine &,::osiris::String const & );
            
            Engine_exposer.def( 
                "executeCommand"
                , executeCommand_function_type( &executeCommand_97c77a971db760799f0f5215a9238660 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("command") ) );
        
        }
        { //::osiris::Engine::formatSystemDate
        
            typedef boost::python::object ( *formatSystemDate_function_type )( ::osiris::Engine &,::boost::posix_time::ptime const &,::osiris::DateTime::DateTimePattern );
            
            Engine_exposer.def( 
                "formatSystemDate"
                , formatSystemDate_function_type( &formatSystemDate_e23b982efbb9229ee54dd5aa99326cf4 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("time"), ::boost::python::arg("pattern")=(::osiris::DateTime::dpShortDateTimePattern) ) );
        
        }
        { //::osiris::Engine::getAliveSince
        
            typedef boost::python::object ( *getAliveSince_function_type )( ::osiris::Engine const &,::osiris::TimeDuration const & );
            
            Engine_exposer.def( 
                "getAliveSince"
                , getAliveSince_function_type( &getAliveSince_5be7e77d9a839f86defab4fd78631774 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("duration") ) );
        
        }
        { //::osiris::Engine::getBackgroundJob
        
            typedef boost::python::object ( *getBackgroundJob_function_type )( ::osiris::Engine const &,::osiris::uint32 );
            
            Engine_exposer.def( 
                "getBackgroundJob"
                , getBackgroundJob_function_type( &getBackgroundJob_02924fd29e1e0abb9d770d202b7390f5 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::Engine::getText
        
            typedef boost::python::object ( *getText_function_type )( ::osiris::Engine const &,::osiris::String const & );
            
            Engine_exposer.def( 
                "getText"
                , getText_function_type( &getText_a75fa186c592d83668cbef145eba6be1 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("key") ) );
        
        }
        { //::osiris::Engine::getVersionName
        
            typedef boost::python::object ( *getVersionName_function_type )( bool );
            
            Engine_exposer.def( 
                "getVersionName"
                , getVersionName_function_type( &getVersionName_8625b023e27848aa6e3493b745c3c5e9 )
                , ( ::boost::python::arg("user") ) );
        
        }
        { //::osiris::Engine::parseUrlXml
        
            typedef boost::python::object ( *parseUrlXml_function_type )( ::osiris::Engine &,::osiris::HttpUrl & );
            
            Engine_exposer.def( 
                "parseUrlXml"
                , parseUrlXml_function_type( &parseUrlXml_2ffcafc2811fedcd7568fa0925bb3b7b )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("url") ) );
        
        }
        { //::osiris::Engine::start
        
            typedef boost::python::object ( *start_function_type )( ::osiris::Engine &,bool );
            
            Engine_exposer.def( 
                "start"
                , start_function_type( &start_0374dcfe77529993e57d1446e65d4523 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("recovery") ) );
        
        }
        Engine_exposer.staticmethod( "getVersionMajor" );
        Engine_exposer.staticmethod( "getVersionMinor" );
        Engine_exposer.staticmethod( "getPlatformName" );
        Engine_exposer.staticmethod( "getDefaultHttpUserAgent" );
        Engine_exposer.staticmethod( "getVersionName" );
        { //property "aliveDelta"[fget=::osiris::Engine::getAliveDelta]
        
            typedef ::osiris::TimeDuration ( ::osiris::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "aliveDelta"
                , fget( &::osiris::Engine::getAliveDelta )
                , "get property, built on top of \"osiris::TimeDuration osiris::Engine::getAliveDelta() const [member function]\"" );
        
        }
        { //property "backgroundJobs"[fget=::osiris::Engine::getBackgroundJobs]
        
            typedef ::boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > ( ::osiris::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "backgroundJobs"
                , fget( &::osiris::Engine::getBackgroundJobs )
                , "get property, built on top of \"boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > osiris::Engine::getBackgroundJobs() const [member function]\"" );
        
        }
        { //property "lastCompletedBackgroundJobs"[fget=::osiris::Engine::getLastCompletedBackgroundJobs]
        
            typedef ::boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > ( ::osiris::Engine::*fget )(  ) const;
            
            Engine_exposer.add_property( 
                "lastCompletedBackgroundJobs"
                , fget( &::osiris::Engine::getLastCompletedBackgroundJobs )
                , "get property, built on top of \"boost::shared_ptr<std::deque<boost::shared_ptr<osiris::IBackgroundJob>, osiris::StdAllocator<boost::shared_ptr<osiris::IBackgroundJob>, osiris::NedAllocator<boost::shared_ptr<osiris::IBackgroundJob> > > > > osiris::Engine::getLastCompletedBackgroundJobs() const [member function]\"" );
        
        }
    }

}
