// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/set.hpp"

#include "mesh_headers.hpp"

namespace bp = boost::python;

struct PottsMesh_less__3__greater__wrapper : PottsMesh< 3 >, bp::wrapper< PottsMesh< 3 > > {

    PottsMesh_less__3__greater__wrapper(::std::vector< Node<3> * > nodes, ::std::vector< PottsElement<3> * > pottsElements, ::std::vector< std::set< unsigned int > > vonNeumannNeighbouringNodeIndices, ::std::vector< std::set< unsigned int > > mooreNeighbouringNodeIndices )
    : PottsMesh<3>( nodes, pottsElements, vonNeumannNeighbouringNodeIndices, mooreNeighbouringNodeIndices )
      , bp::wrapper< PottsMesh< 3 > >(){
        // constructor
    
    }

    PottsMesh_less__3__greater__wrapper( )
    : PottsMesh<3>( )
      , bp::wrapper< PottsMesh< 3 > >(){
        // null constructor
    
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->PottsMesh< 3 >::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        PottsMesh< 3 >::Clear( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 3 > GetCentroidOfElement( unsigned int index ) {
        if( bp::override func_GetCentroidOfElement = this->get_override( "GetCentroidOfElement" ) )
            return func_GetCentroidOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetCentroidOfElement( index );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 3 > default_GetCentroidOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetCentroidOfElement( index );
    }

    virtual unsigned int GetNumElements(  ) const  {
        if( bp::override func_GetNumElements = this->get_override( "GetNumElements" ) )
            return func_GetNumElements(  );
        else{
            return this->PottsMesh< 3 >::GetNumElements(  );
        }
    }
    
    unsigned int default_GetNumElements(  ) const  {
        return PottsMesh< 3 >::GetNumElements( );
    }

    virtual unsigned int GetNumNodes(  ) const  {
        if( bp::override func_GetNumNodes = this->get_override( "GetNumNodes" ) )
            return func_GetNumNodes(  );
        else{
            return this->PottsMesh< 3 >::GetNumNodes(  );
        }
    }
    
    unsigned int default_GetNumNodes(  ) const  {
        return PottsMesh< 3 >::GetNumNodes( );
    }

    virtual double GetSurfaceAreaOfElement( unsigned int index ) {
        if( bp::override func_GetSurfaceAreaOfElement = this->get_override( "GetSurfaceAreaOfElement" ) )
            return func_GetSurfaceAreaOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetSurfaceAreaOfElement( index );
        }
    }
    
    double default_GetSurfaceAreaOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetSurfaceAreaOfElement( index );
    }

    virtual double GetVolumeOfElement( unsigned int index ) {
        if( bp::override func_GetVolumeOfElement = this->get_override( "GetVolumeOfElement" ) )
            return func_GetVolumeOfElement( index );
        else{
            return this->PottsMesh< 3 >::GetVolumeOfElement( index );
        }
    }
    
    double default_GetVolumeOfElement( unsigned int index ) {
        return PottsMesh< 3 >::GetVolumeOfElement( index );
    }

    unsigned int SolveBoundaryElementMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveBoundaryElementMapping( index );
    }

    unsigned int SolveElementMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveElementMapping( index );
    }

    virtual unsigned int SolveNodeMapping( unsigned int index ) const {
        if( bp::override func_SolveNodeMapping = this->get_override( "SolveNodeMapping" ) )
            return func_SolveNodeMapping( index );
        else{
            return this->PottsMesh< 3 >::SolveNodeMapping( index );
        }
    }
    
    virtual unsigned int default_SolveNodeMapping( unsigned int index ) const {
        return PottsMesh< 3 >::SolveNodeMapping( index );
    }

};

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< std::set< unsigned int > >{

    static bool const equality_comparable = false;
    

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

BOOST_PYTHON_MODULE(_chaste_project_Angiogenesis_mesh){
    { //::std::vector< std::set< unsigned int > >
        typedef bp::class_< std::vector< std::set< unsigned int > > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< std::set< unsigned int > > >() );
    }

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > vector_less__double__greater__exposer_t;
        vector_less__double__greater__exposer_t vector_less__double__greater__exposer = vector_less__double__greater__exposer_t( "vector_less__double__greater_" );
        bp::scope vector_less__double__greater__scope( vector_less__double__greater__exposer );
        vector_less__double__greater__exposer.def( bp::indexing::vector_suite< std::vector< double > >() );
    }

    { //::std::vector< PottsElement<3> * >
        typedef bp::class_< std::vector< PottsElement<3> * > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< PottsElement<3> * > >::with_policies(bp::return_internal_reference< >()) );
    }

    { //::std::vector< Node<3> * >
        typedef bp::class_< std::vector< Node<3> * > > __type_exposer_t;
        __type_exposer_t __type_exposer = __type_exposer_t( "__type" );
        bp::scope __type_scope( __type_exposer );
        __type_exposer.def( bp::indexing::vector_suite< std::vector< Node<3> * > >::with_policies(bp::return_internal_reference< >()) );
    }

    { //::std::set< unsigned int >
        typedef bp::class_< std::set< unsigned int > > set_less__unsigned_int__greater__exposer_t;
        set_less__unsigned_int__greater__exposer_t set_less__unsigned_int__greater__exposer = set_less__unsigned_int__greater__exposer_t( "set_less__unsigned_int__greater_" );
        bp::scope set_less__unsigned_int__greater__scope( set_less__unsigned_int__greater__exposer );
        set_less__unsigned_int__greater__exposer.def( bp::indexing::set_suite< std::set< unsigned int > >() );
    }

    { //::ChastePoint< 3 >
        typedef bp::class_< ChastePoint< 3 > > ChastePoint3_exposer_t;
        ChastePoint3_exposer_t ChastePoint3_exposer = ChastePoint3_exposer_t( "ChastePoint3", bp::init< bp::optional< double, double, double > >(( bp::arg("v1")=0, bp::arg("v2")=0, bp::arg("v3")=0 )) );
        bp::scope ChastePoint3_scope( ChastePoint3_exposer );
        bp::implicitly_convertible< double, ChastePoint< 3 > >();
        ChastePoint3_exposer.def( bp::init< std::vector< double > >(( bp::arg("coords") )) );
        bp::implicitly_convertible< std::vector< double >, ChastePoint< 3 > >();
        ChastePoint3_exposer.def( bp::init< boost::numeric::ublas::c_vector< double, 3 > >(( bp::arg("location") )) );
        bp::implicitly_convertible< boost::numeric::ublas::c_vector< double, 3 >, ChastePoint< 3 > >();
        { //::ChastePoint< 3 >::GetWithDefault
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef double ( exported_class_t::*GetWithDefault_function_type)( unsigned int,double ) const;
            
            ChastePoint3_exposer.def( 
                "GetWithDefault"
                , GetWithDefault_function_type( &::ChastePoint< 3 >::GetWithDefault )
                , ( bp::arg("i"), bp::arg("def")=0. ) );
        
        }
        { //::ChastePoint< 3 >::IsSamePoint
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef bool ( exported_class_t::*IsSamePoint_function_type)( ::ChastePoint< 3 > const & ) const;
            
            ChastePoint3_exposer.def( 
                "IsSamePoint"
                , IsSamePoint_function_type( &::ChastePoint< 3 >::IsSamePoint )
                , ( bp::arg("rPoint") ) );
        
        }
        { //::ChastePoint< 3 >::SetCoordinate
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef void ( exported_class_t::*SetCoordinate_function_type)( unsigned int,double ) ;
            
            ChastePoint3_exposer.def( 
                "SetCoordinate"
                , SetCoordinate_function_type( &::ChastePoint< 3 >::SetCoordinate )
                , ( bp::arg("i"), bp::arg("value") ) );
        
        }
        { //::ChastePoint< 3 >::operator[]
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef double ( exported_class_t::*__getitem___function_type)( unsigned int ) const;
            
            ChastePoint3_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::ChastePoint< 3 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::ChastePoint< 3 >::rGetLocation
        
            typedef ChastePoint< 3 > exported_class_t;
            typedef ::boost::numeric::ublas::c_vector< double, 3 > const & ( exported_class_t::*rGetLocation_function_type)(  ) const;
            
            ChastePoint3_exposer.def( 
                "rGetLocation"
                , rGetLocation_function_type( &::ChastePoint< 3 >::rGetLocation )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
    }

    bp::class_< PottsMesh_less__3__greater__wrapper, boost::noncopyable >( "PottsMesh3", bp::init< std::vector< Node<3> * >, std::vector< PottsElement<3> * >, std::vector< std::set< unsigned int > >, std::vector< std::set< unsigned int > > >(( bp::arg("nodes"), bp::arg("pottsElements"), bp::arg("vonNeumannNeighbouringNodeIndices"), bp::arg("mooreNeighbouringNodeIndices") )) )    
        .def( bp::init< >() )    
        .def( 
            "AddElement"
            , (unsigned int ( ::PottsMesh<3>::* )( ::PottsElement< 3 > * ))( &::PottsMesh< 3 >::AddElement )
            , ( bp::arg("pNewElement") ) )    
        .def( 
            "Clear"
            , (void ( ::PottsMesh<3>::* )(  ))(&::PottsMesh< 3 >::Clear)
            , (void ( PottsMesh_less__3__greater__wrapper::* )(  ))(&PottsMesh_less__3__greater__wrapper::default_Clear) )    
        .def( 
            "ConstructFromMeshReader"
            , (void ( ::PottsMesh<3>::* )( ::AbstractMeshReader< 3, 3 > & ))( &::PottsMesh< 3 >::ConstructFromMeshReader )
            , ( bp::arg("rMeshReader") ) )    
        .def( 
            "DeleteElement"
            , (void ( ::PottsMesh<3>::* )( unsigned int ))( &::PottsMesh< 3 >::DeleteElement )
            , ( bp::arg("index") ) )    
        .def( 
            "DeleteNode"
            , (void ( ::PottsMesh<3>::* )( unsigned int ))( &::PottsMesh< 3 >::DeleteNode )
            , ( bp::arg("index") ) )    
        .def( 
            "DivideElement"
            , (unsigned int ( ::PottsMesh<3>::* )( ::PottsElement< 3 > *,bool ))( &::PottsMesh< 3 >::DivideElement )
            , ( bp::arg("pElement"), bp::arg("placeOriginalElementBelow")=(bool)(false) ) )    
        .def( 
            "GetCentroidOfElement"
            , (::boost::numeric::ublas::c_vector< double, 3 > ( ::PottsMesh<3>::* )( unsigned int ))(&::PottsMesh< 3 >::GetCentroidOfElement)
            , (::boost::numeric::ublas::c_vector< double, 3 > ( PottsMesh_less__3__greater__wrapper::* )( unsigned int ))(&PottsMesh_less__3__greater__wrapper::default_GetCentroidOfElement)
            , ( bp::arg("index") ) )    
        .def( 
            "GetElementIteratorBegin"
            , (::PottsMesh< 3 >::PottsElementIterator ( ::PottsMesh<3>::* )( bool ))( &::PottsMesh< 3 >::GetElementIteratorBegin )
            , ( bp::arg("skipDeletedElements")=(bool)(true) ) )    
        .def( 
            "GetElementIteratorEnd"
            , (::PottsMesh< 3 >::PottsElementIterator ( ::PottsMesh<3>::* )(  ))( &::PottsMesh< 3 >::GetElementIteratorEnd ) )    
        .def( 
            "GetMooreNeighbouringNodeIndices"
            , (::std::set< unsigned int > ( ::PottsMesh<3>::* )( unsigned int ))( &::PottsMesh< 3 >::GetMooreNeighbouringNodeIndices )
            , ( bp::arg("nodeIndex") ) )    
        .def( 
            "GetNeighbouringElementIndices"
            , (::std::set< unsigned int > ( ::PottsMesh<3>::* )( unsigned int ))( &::PottsMesh< 3 >::GetNeighbouringElementIndices )
            , ( bp::arg("elementIndex") ) )    
        .def( 
            "GetNumAllElements"
            , (unsigned int ( ::PottsMesh<3>::* )(  )const)( &::PottsMesh< 3 >::GetNumAllElements ) )    
        .def( 
            "GetNumElements"
            , (unsigned int ( ::PottsMesh<3>::* )(  )const)(&::PottsMesh< 3 >::GetNumElements)
            , (unsigned int ( PottsMesh_less__3__greater__wrapper::* )(  )const)(&PottsMesh_less__3__greater__wrapper::default_GetNumElements) )    
        .def( 
            "GetNumNodes"
            , (unsigned int ( ::PottsMesh<3>::* )(  )const)(&::PottsMesh< 3 >::GetNumNodes)
            , (unsigned int ( PottsMesh_less__3__greater__wrapper::* )(  )const)(&PottsMesh_less__3__greater__wrapper::default_GetNumNodes) )    
        .def( 
            "GetSurfaceAreaOfElement"
            , (double ( ::PottsMesh<3>::* )( unsigned int ))(&::PottsMesh< 3 >::GetSurfaceAreaOfElement)
            , (double ( PottsMesh_less__3__greater__wrapper::* )( unsigned int ))(&PottsMesh_less__3__greater__wrapper::default_GetSurfaceAreaOfElement)
            , ( bp::arg("index") ) )    
        .def( 
            "GetVolumeOfElement"
            , (double ( ::PottsMesh<3>::* )( unsigned int ))(&::PottsMesh< 3 >::GetVolumeOfElement)
            , (double ( PottsMesh_less__3__greater__wrapper::* )( unsigned int ))(&PottsMesh_less__3__greater__wrapper::default_GetVolumeOfElement)
            , ( bp::arg("index") ) )    
        .def( 
            "GetVonNeumannNeighbouringNodeIndices"
            , (::std::set< unsigned int > ( ::PottsMesh<3>::* )( unsigned int ))( &::PottsMesh< 3 >::GetVonNeumannNeighbouringNodeIndices )
            , ( bp::arg("nodeIndex") ) )    
        .def( 
            "RemoveDeletedElements"
            , (void ( ::PottsMesh<3>::* )(  ))( &::PottsMesh< 3 >::RemoveDeletedElements ) )    
        .def( 
            "SolveBoundaryElementMapping"
            , (unsigned int ( PottsMesh_less__3__greater__wrapper::* )( unsigned int )const)(&PottsMesh_less__3__greater__wrapper::SolveBoundaryElementMapping)
            , ( bp::arg("index") ) )    
        .def( 
            "SolveElementMapping"
            , (unsigned int ( PottsMesh_less__3__greater__wrapper::* )( unsigned int )const)(&PottsMesh_less__3__greater__wrapper::SolveElementMapping)
            , ( bp::arg("index") ) )    
        .def( 
            "SolveNodeMapping"
            , (unsigned int ( PottsMesh_less__3__greater__wrapper::* )( unsigned int )const)(&PottsMesh_less__3__greater__wrapper::default_SolveNodeMapping)
            , ( bp::arg("index") ) );

    { //::Instantiation
    
        typedef int ( *Instantiation_function_type )(  );
        
        bp::def( 
            "Instantiation"
            , Instantiation_function_type( &::Instantiation ) );
    
    }
}
