// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "_idbdriverptr__value_traits.pypp.hpp"
#include "idbdriverlist.pypp.hpp"

namespace bp = boost::python;

void register_IDbDriverList_class(){

    { //::std::list<boost::shared_ptr<osiris::IDbDriver>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbDriver>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbDriver> > > >
        typedef ::boost::python::class_< ::std::list<boost::shared_ptr<osiris::IDbDriver>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbDriver>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbDriver> > > > > IDbDriverList_exposer_t;
        IDbDriverList_exposer_t IDbDriverList_exposer = IDbDriverList_exposer_t( "IDbDriverList" );
        ::boost::python::scope IDbDriverList_scope( IDbDriverList_exposer );
        IDbDriverList_exposer.def( ::boost::python::indexing::list_suite< ::std::list<boost::shared_ptr<osiris::IDbDriver>, osiris::StdAllocator<boost::shared_ptr<osiris::IDbDriver>, osiris::NedAllocator<boost::shared_ptr<osiris::IDbDriver> > > > >() );
    }

}
