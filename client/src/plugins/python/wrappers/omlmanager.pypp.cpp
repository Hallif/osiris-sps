// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "omlmanager.h"
#include "omlmanager.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getEmoticons_e8cbaac7bf74ed32213f6f86cd3c55f3( ::osiris::OMLManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::list<boost::shared_ptr<osiris::OMLEmoticon>, osiris::StdAllocator<boost::shared_ptr<osiris::OMLEmoticon>, osiris::NedAllocator<boost::shared_ptr<osiris::OMLEmoticon> > > > const & result = inst.getEmoticons();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::std::list<boost::shared_ptr<osiris::OMLEmoticon>, osiris::StdAllocator<boost::shared_ptr<osiris::OMLEmoticon>, osiris::NedAllocator<boost::shared_ptr<osiris::OMLEmoticon> > > > const & >( result ) );
}

static boost::python::object getEventBeforeParse_60721ed6ba01c7c098e466d3426481d4( ::osiris::OMLManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::EventSource> result = inst.getEventBeforeParse();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getEventAfterParse_8564df047090f6db51a8ea5c75b9198f( ::osiris::OMLManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::EventSource> result = inst.getEventAfterParse();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getEventBeforeReverseParse_5857772f4ad6ca97d555b7633d40de4f( ::osiris::OMLManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::EventSource> result = inst.getEventBeforeReverseParse();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getEventAfterReverseParse_6cc4eb3800ffc473c1a2c96312f618ea( ::osiris::OMLManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::EventSource> result = inst.getEventAfterReverseParse();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object parse_cb3db087d0bf262ebc0d47262bc14d25( ::osiris::OMLManager & inst, ::osiris::String const & text, ::boost::shared_ptr< osiris::IPage > page, bool full, bool secure, bool row, ::osiris::OMLRenderMode mode, ::osiris::String const & refID, ::osiris::String const & fullUrl ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.parse(text, page, full, secure, row, mode, refID, fullUrl);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object parse_9906fa1cc80b1bdb637d074f725df4cb( ::osiris::OMLManager & inst, ::osiris::String const & text, ::boost::shared_ptr< osiris::IPage > page, bool enableWarning, bool full, bool secure, bool row, ::osiris::OMLRenderMode mode, ::osiris::String const & refID, ::osiris::String const & fullUrl ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::OMLContext> result = inst.parse(text, page, enableWarning, full, secure, row, mode, refID, fullUrl);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object reverseParse_160a4dd2d97f16d5cbb8da6bdd1ca7df( ::osiris::OMLManager & inst, ::osiris::String const & htmlText, ::std::string const & format ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.reverseParse(htmlText, format);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object parseCss_e5d2781e6ebaec084e67e3a55b2d05d3( ::osiris::OMLManager & inst, ::osiris::String const & cssText, ::boost::shared_ptr< osiris::IPage > page, bool secure, bool encode ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.parseCss(cssText, page, secure, encode);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void addReplace_9c958192a28490cbb18d9251c1d994af( ::osiris::OMLManager & inst, ::osiris::String const & tag, ::osiris::int32 const minParams, ::osiris::int32 const maxParams, ::osiris::String const & replaceHtml, ::osiris::String const & replacePlain, bool allowedInRowMode=false, ::osiris::String const & mapDefaultParamTo=(osiris::String::EMPTY) ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.addReplace(tag, minParams, maxParams, replaceHtml, replacePlain, allowedInRowMode, mapDefaultParamTo);
    __pythreadSaver.restore();
}

static void addHtmlWrapper_1f8f1a3f06d1a0865ffdedabd1b16582( ::osiris::OMLManager & inst, ::osiris::String const & tag, ::osiris::String const & htmlTag, bool allowedInRowMode, ::osiris::String const & parentTag=(osiris::String::EMPTY), ::osiris::String const & childsTag=(osiris::String::EMPTY), ::osiris::String const & mapDefaultParamTo=(osiris::String::EMPTY) ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.addHtmlWrapper(tag, htmlTag, allowedInRowMode, parentTag, childsTag, mapDefaultParamTo);
    __pythreadSaver.restore();
}

static boost::python::object processItemForHtml_29e7fff58fa721668891908c10eb5328( ::osiris::OMLManager & inst, ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.processItemForHtml(i, context);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object processItemForOsml_d3b4fe52a4c8d3d4fb9caa66aa2e0f43( ::osiris::OMLManager & inst, ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.processItemForOsml(i, context);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void add_aae3181fa1313d0e80cc0eec7cbc82de( ::osiris::OMLManager & inst, ::boost::shared_ptr< osiris::IOMLCode > code ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.add(code);
    __pythreadSaver.restore();
}

static boost::python::object isKnownTag_d473ad5889426000401a1d5aaacfb9c5( ::osiris::OMLManager & inst, ::osiris::String const & tag ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isKnownTag(tag);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void remove_73b94b7c8487ffd763e45bd8f6a47b77( ::osiris::OMLManager & inst, ::boost::shared_ptr< osiris::IOMLCode > code ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.remove(code);
    __pythreadSaver.restore();
}

static boost::python::object getHtml_895921274f954abc6fbc5ad188dc389c( ::osiris::OMLManager::EventAfterParse const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getHtml();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static void setHtml_9cb24108f9e73a36fda18caf8ce7b48d( ::osiris::OMLManager::EventAfterParse & inst, ::osiris::String const & html ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setHtml(html);
    __pythreadSaver.restore();
}

static boost::python::object getOml_2b7ec6592bfface955e4159fbf55efe8( ::osiris::OMLManager::EventAfterReverseParse const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getOml();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static void setOml_c3d1342fa36f2af4e929cdd71fd9d760( ::osiris::OMLManager::EventAfterReverseParse & inst, ::osiris::String const & oml ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setOml(oml);
    __pythreadSaver.restore();
}

static boost::python::object getOml_169e898af947926209080da2a6dc7c97( ::osiris::OMLManager::EventBeforeParse const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getOml();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static void setOml_91ec87c61eb075b7be66dbdcbe3ec600( ::osiris::OMLManager::EventBeforeParse & inst, ::osiris::String const & oml ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setOml(oml);
    __pythreadSaver.restore();
}

static boost::python::object getSource_c8b94be560a4fc0a4fb406c919ba6961( ::osiris::OMLManager::EventBeforeReverseParse const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.getSource();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

static boost::python::object getFormat_dfca73be3c37fb564c69840c3855e7af( ::osiris::OMLManager::EventBeforeReverseParse const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string const & result = inst.getFormat();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::std::string const & >( result ) );
}

static void setFormat_6d6485bc5194b107c11d4d21bd53d5b3( ::osiris::OMLManager::EventBeforeReverseParse & inst, ::std::string const & format ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setFormat(format);
    __pythreadSaver.restore();
}

static void setSource_aff12dcee0f781779467d1233ed57ba9( ::osiris::OMLManager::EventBeforeReverseParse & inst, ::osiris::String const & source ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setSource(source);
    __pythreadSaver.restore();
}

void register_OMLManager_class(){

    { //::osiris::OMLManager
        typedef ::boost::python::class_< ::osiris::OMLManager, ::boost::python::bases< ::osiris::StaticSingleton< osiris::OMLManager, true > >, ::boost::noncopyable > OMLManager_exposer_t;
        OMLManager_exposer_t OMLManager_exposer = OMLManager_exposer_t( "OMLManager", ::boost::python::init< >() );
        ::boost::python::scope OMLManager_scope( OMLManager_exposer );
        { //::osiris::OMLManager::EventAfterParse
            typedef ::boost::python::class_< ::osiris::OMLManager::EventAfterParse, ::boost::python::bases< ::osiris::IEvent >, ::boost::noncopyable > EventAfterParse_exposer_t;
            EventAfterParse_exposer_t EventAfterParse_exposer = EventAfterParse_exposer_t( "EventAfterParse", ::boost::python::no_init );
            ::boost::python::scope EventAfterParse_scope( EventAfterParse_exposer );
            { //::osiris::OMLManager::EventAfterParse::getHtml
            
                typedef boost::python::object ( *getHtml_function_type )( ::osiris::OMLManager::EventAfterParse const & );
                
                EventAfterParse_exposer.def( 
                    "getHtml"
                    , getHtml_function_type( &getHtml_895921274f954abc6fbc5ad188dc389c ) );
            
            }
            { //::osiris::OMLManager::EventAfterParse::setHtml
            
                typedef void ( *setHtml_function_type )( ::osiris::OMLManager::EventAfterParse &,::osiris::String const & );
                
                EventAfterParse_exposer.def( 
                    "setHtml"
                    , setHtml_function_type( &setHtml_9cb24108f9e73a36fda18caf8ce7b48d )
                    , ( ::boost::python::arg("inst"), ::boost::python::arg("html") ) );
            
            }
            { //property "html"[fget=::osiris::OMLManager::EventAfterParse::getHtml, fset=::osiris::OMLManager::EventAfterParse::setHtml]
            
                typedef ::osiris::String const & ( ::osiris::OMLManager::EventAfterParse::*fget )(  ) const;
                typedef void ( ::osiris::OMLManager::EventAfterParse::*fset )( ::osiris::String const & ) ;
                
                EventAfterParse_exposer.add_property( 
                    "html"
                    , ::boost::python::make_function( 
                          fget( &::osiris::OMLManager::EventAfterParse::getHtml )
                        , bp::return_value_policy< bp::copy_const_reference >() ) 
                    , fset( &::osiris::OMLManager::EventAfterParse::setHtml )
                    , "get\\set property, built on top of \"osiris::String const & osiris::OMLManager::EventAfterParse::getHtml() const [member function]\" and \"void osiris::OMLManager::EventAfterParse::setHtml(osiris::String const & html) [member function]\"" );
            
            }
        }
        { //::osiris::OMLManager::EventAfterReverseParse
            typedef ::boost::python::class_< ::osiris::OMLManager::EventAfterReverseParse, ::boost::python::bases< ::osiris::IEvent >, ::boost::noncopyable > EventAfterReverseParse_exposer_t;
            EventAfterReverseParse_exposer_t EventAfterReverseParse_exposer = EventAfterReverseParse_exposer_t( "EventAfterReverseParse", ::boost::python::no_init );
            ::boost::python::scope EventAfterReverseParse_scope( EventAfterReverseParse_exposer );
            { //::osiris::OMLManager::EventAfterReverseParse::getOml
            
                typedef boost::python::object ( *getOml_function_type )( ::osiris::OMLManager::EventAfterReverseParse const & );
                
                EventAfterReverseParse_exposer.def( 
                    "getOml"
                    , getOml_function_type( &getOml_2b7ec6592bfface955e4159fbf55efe8 ) );
            
            }
            { //::osiris::OMLManager::EventAfterReverseParse::setOml
            
                typedef void ( *setOml_function_type )( ::osiris::OMLManager::EventAfterReverseParse &,::osiris::String const & );
                
                EventAfterReverseParse_exposer.def( 
                    "setOml"
                    , setOml_function_type( &setOml_c3d1342fa36f2af4e929cdd71fd9d760 )
                    , ( ::boost::python::arg("inst"), ::boost::python::arg("oml") ) );
            
            }
            { //property "oml"[fget=::osiris::OMLManager::EventAfterReverseParse::getOml, fset=::osiris::OMLManager::EventAfterReverseParse::setOml]
            
                typedef ::osiris::String const & ( ::osiris::OMLManager::EventAfterReverseParse::*fget )(  ) const;
                typedef void ( ::osiris::OMLManager::EventAfterReverseParse::*fset )( ::osiris::String const & ) ;
                
                EventAfterReverseParse_exposer.add_property( 
                    "oml"
                    , ::boost::python::make_function( 
                          fget( &::osiris::OMLManager::EventAfterReverseParse::getOml )
                        , bp::return_value_policy< bp::copy_const_reference >() ) 
                    , fset( &::osiris::OMLManager::EventAfterReverseParse::setOml )
                    , "get\\set property, built on top of \"osiris::String const & osiris::OMLManager::EventAfterReverseParse::getOml() const [member function]\" and \"void osiris::OMLManager::EventAfterReverseParse::setOml(osiris::String const & oml) [member function]\"" );
            
            }
        }
        { //::osiris::OMLManager::EventBeforeParse
            typedef ::boost::python::class_< ::osiris::OMLManager::EventBeforeParse, ::boost::python::bases< ::osiris::IEvent >, ::boost::noncopyable > EventBeforeParse_exposer_t;
            EventBeforeParse_exposer_t EventBeforeParse_exposer = EventBeforeParse_exposer_t( "EventBeforeParse", ::boost::python::no_init );
            ::boost::python::scope EventBeforeParse_scope( EventBeforeParse_exposer );
            { //::osiris::OMLManager::EventBeforeParse::getOml
            
                typedef boost::python::object ( *getOml_function_type )( ::osiris::OMLManager::EventBeforeParse const & );
                
                EventBeforeParse_exposer.def( 
                    "getOml"
                    , getOml_function_type( &getOml_169e898af947926209080da2a6dc7c97 ) );
            
            }
            { //::osiris::OMLManager::EventBeforeParse::setOml
            
                typedef void ( *setOml_function_type )( ::osiris::OMLManager::EventBeforeParse &,::osiris::String const & );
                
                EventBeforeParse_exposer.def( 
                    "setOml"
                    , setOml_function_type( &setOml_91ec87c61eb075b7be66dbdcbe3ec600 )
                    , ( ::boost::python::arg("inst"), ::boost::python::arg("oml") ) );
            
            }
            { //property "oml"[fget=::osiris::OMLManager::EventBeforeParse::getOml, fset=::osiris::OMLManager::EventBeforeParse::setOml]
            
                typedef ::osiris::String const & ( ::osiris::OMLManager::EventBeforeParse::*fget )(  ) const;
                typedef void ( ::osiris::OMLManager::EventBeforeParse::*fset )( ::osiris::String const & ) ;
                
                EventBeforeParse_exposer.add_property( 
                    "oml"
                    , ::boost::python::make_function( 
                          fget( &::osiris::OMLManager::EventBeforeParse::getOml )
                        , bp::return_value_policy< bp::copy_const_reference >() ) 
                    , fset( &::osiris::OMLManager::EventBeforeParse::setOml )
                    , "get\\set property, built on top of \"osiris::String const & osiris::OMLManager::EventBeforeParse::getOml() const [member function]\" and \"void osiris::OMLManager::EventBeforeParse::setOml(osiris::String const & oml) [member function]\"" );
            
            }
        }
        { //::osiris::OMLManager::EventBeforeReverseParse
            typedef ::boost::python::class_< ::osiris::OMLManager::EventBeforeReverseParse, ::boost::python::bases< ::osiris::IEvent >, ::boost::noncopyable > EventBeforeReverseParse_exposer_t;
            EventBeforeReverseParse_exposer_t EventBeforeReverseParse_exposer = EventBeforeReverseParse_exposer_t( "EventBeforeReverseParse", ::boost::python::no_init );
            ::boost::python::scope EventBeforeReverseParse_scope( EventBeforeReverseParse_exposer );
            { //::osiris::OMLManager::EventBeforeReverseParse::getSource
            
                typedef boost::python::object ( *getSource_function_type )( ::osiris::OMLManager::EventBeforeReverseParse const & );
                
                EventBeforeReverseParse_exposer.def( 
                    "getSource"
                    , getSource_function_type( &getSource_c8b94be560a4fc0a4fb406c919ba6961 ) );
            
            }
            { //::osiris::OMLManager::EventBeforeReverseParse::getFormat
            
                typedef boost::python::object ( *getFormat_function_type )( ::osiris::OMLManager::EventBeforeReverseParse const & );
                
                EventBeforeReverseParse_exposer.def( 
                    "getFormat"
                    , getFormat_function_type( &getFormat_dfca73be3c37fb564c69840c3855e7af ) );
            
            }
            { //::osiris::OMLManager::EventBeforeReverseParse::setFormat
            
                typedef void ( *setFormat_function_type )( ::osiris::OMLManager::EventBeforeReverseParse &,::std::string const & );
                
                EventBeforeReverseParse_exposer.def( 
                    "setFormat"
                    , setFormat_function_type( &setFormat_6d6485bc5194b107c11d4d21bd53d5b3 )
                    , ( ::boost::python::arg("inst"), ::boost::python::arg("format") ) );
            
            }
            { //::osiris::OMLManager::EventBeforeReverseParse::setSource
            
                typedef void ( *setSource_function_type )( ::osiris::OMLManager::EventBeforeReverseParse &,::osiris::String const & );
                
                EventBeforeReverseParse_exposer.def( 
                    "setSource"
                    , setSource_function_type( &setSource_aff12dcee0f781779467d1233ed57ba9 )
                    , ( ::boost::python::arg("inst"), ::boost::python::arg("source") ) );
            
            }
            { //property "source"[fget=::osiris::OMLManager::EventBeforeReverseParse::getSource, fset=::osiris::OMLManager::EventBeforeReverseParse::setSource]
            
                typedef ::osiris::String const & ( ::osiris::OMLManager::EventBeforeReverseParse::*fget )(  ) const;
                typedef void ( ::osiris::OMLManager::EventBeforeReverseParse::*fset )( ::osiris::String const & ) ;
                
                EventBeforeReverseParse_exposer.add_property( 
                    "source"
                    , ::boost::python::make_function( 
                          fget( &::osiris::OMLManager::EventBeforeReverseParse::getSource )
                        , bp::return_value_policy< bp::copy_const_reference >() ) 
                    , fset( &::osiris::OMLManager::EventBeforeReverseParse::setSource )
                    , "get\\set property, built on top of \"osiris::String const & osiris::OMLManager::EventBeforeReverseParse::getSource() const [member function]\" and \"void osiris::OMLManager::EventBeforeReverseParse::setSource(osiris::String const & source) [member function]\"" );
            
            }
            { //property "format"[fget=::osiris::OMLManager::EventBeforeReverseParse::getFormat, fset=::osiris::OMLManager::EventBeforeReverseParse::setFormat]
            
                typedef ::std::string const & ( ::osiris::OMLManager::EventBeforeReverseParse::*fget )(  ) const;
                typedef void ( ::osiris::OMLManager::EventBeforeReverseParse::*fset )( ::std::string const & ) ;
                
                EventBeforeReverseParse_exposer.add_property( 
                    "format"
                    , ::boost::python::make_function( 
                          fget( &::osiris::OMLManager::EventBeforeReverseParse::getFormat )
                        , bp::return_value_policy< bp::copy_const_reference >() ) 
                    , fset( &::osiris::OMLManager::EventBeforeReverseParse::setFormat )
                    , "get\\set property, built on top of \"std::string const & osiris::OMLManager::EventBeforeReverseParse::getFormat() const [member function]\" and \"void osiris::OMLManager::EventBeforeReverseParse::setFormat(std::string const & format) [member function]\"" );
            
            }
        }
        { //::osiris::OMLManager::getEmoticons
        
            typedef boost::python::object ( *getEmoticons_function_type )( ::osiris::OMLManager const & );
            
            OMLManager_exposer.def( 
                "getEmoticons"
                , getEmoticons_function_type( &getEmoticons_e8cbaac7bf74ed32213f6f86cd3c55f3 ) );
        
        }
        { //::osiris::OMLManager::getEventBeforeParse
        
            typedef boost::python::object ( *getEventBeforeParse_function_type )( ::osiris::OMLManager const & );
            
            OMLManager_exposer.def( 
                "getEventBeforeParse"
                , getEventBeforeParse_function_type( &getEventBeforeParse_60721ed6ba01c7c098e466d3426481d4 ) );
        
        }
        { //::osiris::OMLManager::getEventAfterParse
        
            typedef boost::python::object ( *getEventAfterParse_function_type )( ::osiris::OMLManager const & );
            
            OMLManager_exposer.def( 
                "getEventAfterParse"
                , getEventAfterParse_function_type( &getEventAfterParse_8564df047090f6db51a8ea5c75b9198f ) );
        
        }
        { //::osiris::OMLManager::getEventBeforeReverseParse
        
            typedef boost::python::object ( *getEventBeforeReverseParse_function_type )( ::osiris::OMLManager const & );
            
            OMLManager_exposer.def( 
                "getEventBeforeReverseParse"
                , getEventBeforeReverseParse_function_type( &getEventBeforeReverseParse_5857772f4ad6ca97d555b7633d40de4f ) );
        
        }
        { //::osiris::OMLManager::getEventAfterReverseParse
        
            typedef boost::python::object ( *getEventAfterReverseParse_function_type )( ::osiris::OMLManager const & );
            
            OMLManager_exposer.def( 
                "getEventAfterReverseParse"
                , getEventAfterReverseParse_function_type( &getEventAfterReverseParse_6cc4eb3800ffc473c1a2c96312f618ea ) );
        
        }
        { //::osiris::OMLManager::parse
        
            typedef boost::python::object ( *parse_function_type )( ::osiris::OMLManager &,::osiris::String const &,::boost::shared_ptr<osiris::IPage>,bool,bool,bool,::osiris::OMLRenderMode,::osiris::String const &,::osiris::String const & );
            
            OMLManager_exposer.def( 
                "parse"
                , parse_function_type( &parse_cb3db087d0bf262ebc0d47262bc14d25 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("text"), ::boost::python::arg("page"), ::boost::python::arg("full"), ::boost::python::arg("secure"), ::boost::python::arg("row"), ::boost::python::arg("mode"), ::boost::python::arg("refID"), ::boost::python::arg("fullUrl") ) );
        
        }
        { //::osiris::OMLManager::parse
        
            typedef boost::python::object ( *parse_function_type )( ::osiris::OMLManager &,::osiris::String const &,::boost::shared_ptr<osiris::IPage>,bool,bool,bool,bool,::osiris::OMLRenderMode,::osiris::String const &,::osiris::String const & );
            
            OMLManager_exposer.def( 
                "parse"
                , parse_function_type( &parse_9906fa1cc80b1bdb637d074f725df4cb )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("text"), ::boost::python::arg("page"), ::boost::python::arg("enableWarning"), ::boost::python::arg("full"), ::boost::python::arg("secure"), ::boost::python::arg("row"), ::boost::python::arg("mode"), ::boost::python::arg("refID"), ::boost::python::arg("fullUrl") ) );
        
        }
        { //::osiris::OMLManager::reverseParse
        
            typedef boost::python::object ( *reverseParse_function_type )( ::osiris::OMLManager &,::osiris::String const &,::std::string const & );
            
            OMLManager_exposer.def( 
                "reverseParse"
                , reverseParse_function_type( &reverseParse_160a4dd2d97f16d5cbb8da6bdd1ca7df )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("htmlText"), ::boost::python::arg("format") ) );
        
        }
        { //::osiris::OMLManager::parseCss
        
            typedef boost::python::object ( *parseCss_function_type )( ::osiris::OMLManager &,::osiris::String const &,::boost::shared_ptr<osiris::IPage>,bool,bool );
            
            OMLManager_exposer.def( 
                "parseCss"
                , parseCss_function_type( &parseCss_e5d2781e6ebaec084e67e3a55b2d05d3 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("cssText"), ::boost::python::arg("page"), ::boost::python::arg("secure"), ::boost::python::arg("encode") ) );
        
        }
        { //::osiris::OMLManager::addReplace
        
            typedef void ( *addReplace_function_type )( ::osiris::OMLManager &,::osiris::String const &,::osiris::int32 const,::osiris::int32 const,::osiris::String const &,::osiris::String const &,bool,::osiris::String const & );
            
            OMLManager_exposer.def( 
                "addReplace"
                , addReplace_function_type( &addReplace_9c958192a28490cbb18d9251c1d994af )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("tag"), ::boost::python::arg("minParams"), ::boost::python::arg("maxParams"), ::boost::python::arg("replaceHtml"), ::boost::python::arg("replacePlain"), ::boost::python::arg("allowedInRowMode")=(bool)(false), ::boost::python::arg("mapDefaultParamTo")=(osiris::String::EMPTY) ) );
        
        }
        { //::osiris::OMLManager::addHtmlWrapper
        
            typedef void ( *addHtmlWrapper_function_type )( ::osiris::OMLManager &,::osiris::String const &,::osiris::String const &,bool,::osiris::String const &,::osiris::String const &,::osiris::String const & );
            
            OMLManager_exposer.def( 
                "addHtmlWrapper"
                , addHtmlWrapper_function_type( &addHtmlWrapper_1f8f1a3f06d1a0865ffdedabd1b16582 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("tag"), ::boost::python::arg("htmlTag"), ::boost::python::arg("allowedInRowMode"), ::boost::python::arg("parentTag")=(osiris::String::EMPTY), ::boost::python::arg("childsTag")=(osiris::String::EMPTY), ::boost::python::arg("mapDefaultParamTo")=(osiris::String::EMPTY) ) );
        
        }
        { //::osiris::OMLManager::processItemForHtml
        
            typedef boost::python::object ( *processItemForHtml_function_type )( ::osiris::OMLManager &,::boost::shared_ptr<osiris::OMLItem>,::boost::shared_ptr<osiris::OMLContext> );
            
            OMLManager_exposer.def( 
                "processItemForHtml"
                , processItemForHtml_function_type( &processItemForHtml_29e7fff58fa721668891908c10eb5328 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::OMLManager::processItemForOsml
        
            typedef boost::python::object ( *processItemForOsml_function_type )( ::osiris::OMLManager &,::boost::shared_ptr<osiris::OMLItem>,::boost::shared_ptr<osiris::OMLContext> );
            
            OMLManager_exposer.def( 
                "processItemForOsml"
                , processItemForOsml_function_type( &processItemForOsml_d3b4fe52a4c8d3d4fb9caa66aa2e0f43 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::OMLManager::add
        
            typedef void ( *add_function_type )( ::osiris::OMLManager &,::boost::shared_ptr<osiris::IOMLCode> );
            
            OMLManager_exposer.def( 
                "add"
                , add_function_type( &add_aae3181fa1313d0e80cc0eec7cbc82de )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("code") ) );
        
        }
        { //::osiris::OMLManager::isKnownTag
        
            typedef boost::python::object ( *isKnownTag_function_type )( ::osiris::OMLManager &,::osiris::String const & );
            
            OMLManager_exposer.def( 
                "isKnownTag"
                , isKnownTag_function_type( &isKnownTag_d473ad5889426000401a1d5aaacfb9c5 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("tag") ) );
        
        }
        { //::osiris::OMLManager::remove
        
            typedef void ( *remove_function_type )( ::osiris::OMLManager &,::boost::shared_ptr<osiris::IOMLCode> );
            
            OMLManager_exposer.def( 
                "remove"
                , remove_function_type( &remove_73b94b7c8487ffd763e45bd8f6a47b77 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("code") ) );
        
        }
        { //property "emoticons"[fget=::osiris::OMLManager::getEmoticons]
        
            typedef ::std::list<boost::shared_ptr<osiris::OMLEmoticon>, osiris::StdAllocator<boost::shared_ptr<osiris::OMLEmoticon>, osiris::NedAllocator<boost::shared_ptr<osiris::OMLEmoticon> > > > const & ( ::osiris::OMLManager::*fget )(  ) const;
            
            OMLManager_exposer.add_property( 
                "emoticons"
                , ::boost::python::make_function( 
                      fget( &::osiris::OMLManager::getEmoticons )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"std::list<boost::shared_ptr<osiris::OMLEmoticon>, osiris::StdAllocator<boost::shared_ptr<osiris::OMLEmoticon>, osiris::NedAllocator<boost::shared_ptr<osiris::OMLEmoticon> > > > const & osiris::OMLManager::getEmoticons() const [member function]\"" );
        
        }
        { //property "eventBeforeParse"[fget=::osiris::OMLManager::getEventBeforeParse]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::OMLManager::*fget )(  ) const;
            
            OMLManager_exposer.add_property( 
                "eventBeforeParse"
                , fget( &::osiris::OMLManager::getEventBeforeParse )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::OMLManager::getEventBeforeParse() const [member function]\"" );
        
        }
        { //property "eventAfterParse"[fget=::osiris::OMLManager::getEventAfterParse]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::OMLManager::*fget )(  ) const;
            
            OMLManager_exposer.add_property( 
                "eventAfterParse"
                , fget( &::osiris::OMLManager::getEventAfterParse )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::OMLManager::getEventAfterParse() const [member function]\"" );
        
        }
        { //property "eventBeforeReverseParse"[fget=::osiris::OMLManager::getEventBeforeReverseParse]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::OMLManager::*fget )(  ) const;
            
            OMLManager_exposer.add_property( 
                "eventBeforeReverseParse"
                , fget( &::osiris::OMLManager::getEventBeforeReverseParse )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::OMLManager::getEventBeforeReverseParse() const [member function]\"" );
        
        }
        { //property "eventAfterReverseParse"[fget=::osiris::OMLManager::getEventAfterReverseParse]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::OMLManager::*fget )(  ) const;
            
            OMLManager_exposer.add_property( 
                "eventAfterReverseParse"
                , fget( &::osiris::OMLManager::getEventAfterReverseParse )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::OMLManager::getEventAfterReverseParse() const [member function]\"" );
        
        }
    }

}
