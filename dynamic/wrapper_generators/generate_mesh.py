#!/usr/bin/env python

"""
This scipt automatically generates Python bindings using a rule based approach
"""
import sys
from pyplusplus import module_builder
from pyplusplus.module_builder import call_policies
from pygccxml import parser
import generate_bindings

def update_builder(builder):

    include_classes = ["ChastePoint<3>", "PottsMesh<3>"]
    
    for eachClass in include_classes:
        builder.class_(eachClass).include()  
        new_name = generate_bindings.template_replace(eachClass)
        if(new_name != eachClass):
            builder.class_(eachClass).rename(new_name) 

    # Do not return the non-const reference to the location
    returns_non_const_ref = builder.class_('ChastePoint<3>').member_functions(return_type = "::boost::numeric::ublas::c_vector<double, 3> &")
    returns_non_const_ref.exclude()
    
    builder.class_('PottsMesh<3>').member_functions("GetElement").exclude()
    
    # Debug output
    # builder.print_declarations(chaste_point)
        
    return builder