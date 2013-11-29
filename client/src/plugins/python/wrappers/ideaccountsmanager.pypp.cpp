// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ideaccountsmanager.h"
#include "ideaccountsmanager.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getAccounts_37d0513e5d32920c2ef158d1ea583aa0( ::osiris::IdeAccountsManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > > result = inst.getAccounts();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object hasAccounts_515eddacc68e0ee4f865b0e2c5c98e41( ::osiris::IdeAccountsManager const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.hasAccounts();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object add_a4442ce454ea845046d9f9431e012c00( ::osiris::IdeAccountsManager & inst, ::boost::shared_ptr< osiris::IDbConnection > database, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.add(database, id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object createAccount_1639b1374db49d3c4efbc8c3074bc553( ::osiris::IdeAccountsManager & inst, ::osiris::String const & username, ::osiris::String const & password, bool autoLogin ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IdeAccount> result = inst.createAccount(username, password, autoLogin);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object add_3b09b0ec58d56c2895012771250122b2( ::osiris::IdeAccountsManager & inst, ::boost::shared_ptr< osiris::IdeAccount > account ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.add(account);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object createAccount_167d1bfb81d5454bc9e432af4d5b5645( ::osiris::IdeAccountsManager & inst, ::boost::shared_ptr< osiris::DataAccount > dataAccount ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IdeAccount> result = inst.createAccount(dataAccount);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object exists_5db0d16c01945dfce70d29d595b72dc6( ::osiris::IdeAccountsManager const & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.exists(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getByID_dd17afe69f3b9340b0b5950c85fb8714( ::osiris::IdeAccountsManager & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IdeAccount> result = inst.getByID(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getByName_4e1af204ee0292c59a4ac6cfb09432c1( ::osiris::IdeAccountsManager & inst, ::osiris::String const & username ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IdeAccount> result = inst.getByName(username);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object hasAccount_6bd63eca7ddbbba82640f0345ede1c9a( ::osiris::IdeAccountsManager & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.hasAccount(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object remove_ab9e70964391e6998a5b38fddf983955( ::osiris::IdeAccountsManager & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.remove(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object removePhysical_8024b0ffc3f9605d46de16454757a629( ::osiris::IdeAccountsManager & inst, ::osiris::String const & id ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.removePhysical(id);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void save_47e6b4b87030a345ef9d026829e9cc48( ::osiris::IdeAccountsManager & inst, ::boost::shared_ptr< osiris::IdeAccount > account ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.save(account);
    __pythreadSaver.restore();
}

void register_IdeAccountsManager_class(){

    { //::osiris::IdeAccountsManager
        typedef ::boost::python::class_< ::osiris::IdeAccountsManager, ::boost::python::bases< ::osiris::StaticSingleton< osiris::IdeAccountsManager, true > >, ::boost::noncopyable > IdeAccountsManager_exposer_t;
        IdeAccountsManager_exposer_t IdeAccountsManager_exposer = IdeAccountsManager_exposer_t( "IdeAccountsManager", ::boost::python::no_init );
        ::boost::python::scope IdeAccountsManager_scope( IdeAccountsManager_exposer );
        IdeAccountsManager_exposer.def( ::boost::python::init< >() );
        { //::osiris::IdeAccountsManager::getAccounts
        
            typedef boost::python::object ( *getAccounts_function_type )( ::osiris::IdeAccountsManager const & );
            
            IdeAccountsManager_exposer.def( 
                "getAccounts"
                , getAccounts_function_type( &getAccounts_37d0513e5d32920c2ef158d1ea583aa0 ) );
        
        }
        { //::osiris::IdeAccountsManager::hasAccounts
        
            typedef boost::python::object ( *hasAccounts_function_type )( ::osiris::IdeAccountsManager const & );
            
            IdeAccountsManager_exposer.def( 
                "hasAccounts"
                , hasAccounts_function_type( &hasAccounts_515eddacc68e0ee4f865b0e2c5c98e41 ) );
        
        }
        { //::osiris::IdeAccountsManager::add
        
            typedef boost::python::object ( *add_function_type )( ::osiris::IdeAccountsManager &,::boost::shared_ptr<osiris::IDbConnection>,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "add"
                , add_function_type( &add_a4442ce454ea845046d9f9431e012c00 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("database"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::createAccount
        
            typedef boost::python::object ( *createAccount_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const &,::osiris::String const &,bool );
            
            IdeAccountsManager_exposer.def( 
                "createAccount"
                , createAccount_function_type( &createAccount_1639b1374db49d3c4efbc8c3074bc553 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("username"), ::boost::python::arg("password"), ::boost::python::arg("autoLogin") ) );
        
        }
        { //::osiris::IdeAccountsManager::add
        
            typedef boost::python::object ( *add_function_type )( ::osiris::IdeAccountsManager &,::boost::shared_ptr<osiris::IdeAccount> );
            
            IdeAccountsManager_exposer.def( 
                "add"
                , add_function_type( &add_3b09b0ec58d56c2895012771250122b2 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("account") ) );
        
        }
        { //::osiris::IdeAccountsManager::createAccount
        
            typedef boost::python::object ( *createAccount_function_type )( ::osiris::IdeAccountsManager &,::boost::shared_ptr<osiris::DataAccount> );
            
            IdeAccountsManager_exposer.def( 
                "createAccount"
                , createAccount_function_type( &createAccount_167d1bfb81d5454bc9e432af4d5b5645 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("dataAccount") ) );
        
        }
        { //::osiris::IdeAccountsManager::exists
        
            typedef boost::python::object ( *exists_function_type )( ::osiris::IdeAccountsManager const &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "exists"
                , exists_function_type( &exists_5db0d16c01945dfce70d29d595b72dc6 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::getByID
        
            typedef boost::python::object ( *getByID_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "getByID"
                , getByID_function_type( &getByID_dd17afe69f3b9340b0b5950c85fb8714 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::getByName
        
            typedef boost::python::object ( *getByName_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "getByName"
                , getByName_function_type( &getByName_4e1af204ee0292c59a4ac6cfb09432c1 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("username") ) );
        
        }
        { //::osiris::IdeAccountsManager::hasAccount
        
            typedef boost::python::object ( *hasAccount_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "hasAccount"
                , hasAccount_function_type( &hasAccount_6bd63eca7ddbbba82640f0345ede1c9a )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::remove
        
            typedef boost::python::object ( *remove_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "remove"
                , remove_function_type( &remove_ab9e70964391e6998a5b38fddf983955 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::removePhysical
        
            typedef boost::python::object ( *removePhysical_function_type )( ::osiris::IdeAccountsManager &,::osiris::String const & );
            
            IdeAccountsManager_exposer.def( 
                "removePhysical"
                , removePhysical_function_type( &removePhysical_8024b0ffc3f9605d46de16454757a629 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IdeAccountsManager::save
        
            typedef void ( *save_function_type )( ::osiris::IdeAccountsManager &,::boost::shared_ptr<osiris::IdeAccount> );
            
            IdeAccountsManager_exposer.def( 
                "save"
                , save_function_type( &save_47e6b4b87030a345ef9d026829e9cc48 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("account") ) );
        
        }
        { //property "accounts"[fget=::osiris::IdeAccountsManager::getAccounts]
        
            typedef ::std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > > ( ::osiris::IdeAccountsManager::*fget )(  ) const;
            
            IdeAccountsManager_exposer.add_property( 
                "accounts"
                , fget( &::osiris::IdeAccountsManager::getAccounts )
                , "get property, built on top of \"std::list<boost::shared_ptr<osiris::IdeAccount>, osiris::StdAllocator<boost::shared_ptr<osiris::IdeAccount>, osiris::SysAllocator<boost::shared_ptr<osiris::IdeAccount> > > > osiris::IdeAccountsManager::getAccounts() const [member function]\"" );
        
        }
    }

}
