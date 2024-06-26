// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "tutorial_headers.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_chaste_project_PyChaste_tutorial){
    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< double > >() );
    }

    { //::Hello
        typedef bp::class_< Hello > Hello_exposer_t;
        Hello_exposer_t Hello_exposer = Hello_exposer_t( "Hello", bp::init< std::string const & >(( bp::arg("rMessage") )) );
        bp::scope Hello_scope( Hello_exposer );
        bp::implicitly_convertible< std::string const &, Hello >();
        { //::Hello::Complain
        
            typedef void ( ::Hello::*Complain_function_type)( ::std::string const & ) ;
            
            Hello_exposer.def( 
                "Complain"
                , Complain_function_type( &::Hello::Complain )
                , ( bp::arg("rComplaint") ) );
        
        }
        { //::Hello::GetMessage
        
            typedef ::std::string ( ::Hello::*GetMessage_function_type)(  ) ;
            
            Hello_exposer.def( 
                "GetMessage"
                , GetMessage_function_type( &::Hello::GetMessage ) );
        
        }
        { //::Hello::GetVector
        
            typedef ::std::vector< double > ( ::Hello::*GetVector_function_type)(  ) ;
            
            Hello_exposer.def( 
                "GetVector"
                , GetVector_function_type( &::Hello::GetVector ) );
        
        }
        { //::Hello::SetVector
        
            typedef void ( ::Hello::*SetVector_function_type)( ::std::vector< double > ) ;
            
            Hello_exposer.def( 
                "SetVector"
                , SetVector_function_type( &::Hello::SetVector )
                , ( bp::arg("vectorInput") ) );
        
        }
    }
}
