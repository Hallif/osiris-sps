// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "_isearchoptionsptr__value_traits.pypp.hpp"
#include "searchqueryoptions.pypp.hpp"

namespace bp = boost::python;

void register_SearchQueryOptions_class(){

    { //::std::map<osiris::PortalObjectType, boost::shared_ptr<osiris::ISearchOptions>, std::less<osiris::PortalObjectType>, osiris::StdAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> >, osiris::SysAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> > > > >
        typedef ::boost::python::class_< ::std::map<osiris::PortalObjectType, boost::shared_ptr<osiris::ISearchOptions>, std::less<osiris::PortalObjectType>, osiris::StdAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> >, osiris::SysAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> > > > > > SearchQueryOptions_exposer_t;
        SearchQueryOptions_exposer_t SearchQueryOptions_exposer = SearchQueryOptions_exposer_t( "SearchQueryOptions" );
        ::boost::python::scope SearchQueryOptions_scope( SearchQueryOptions_exposer );
        SearchQueryOptions_exposer.def( ::boost::python::indexing::map_suite< ::std::map<osiris::PortalObjectType, boost::shared_ptr<osiris::ISearchOptions>, std::less<osiris::PortalObjectType>, osiris::StdAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> >, osiris::SysAllocator<std::pair<osiris::PortalObjectType const, boost::shared_ptr<osiris::ISearchOptions> > > > > >() );
    }

}
