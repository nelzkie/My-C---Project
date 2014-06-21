//
//  Reference_function.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/2/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Reference_function.h"
using namespace std;

Reference_function::Reference_function(){
    
    string s ;
    
   string& fine = foo(s) ; // fine, reference to non-temporary object
    
    const string& also_fine = foo(s) ; // fine, reference to const extends the life of the temporary object
    
    //string& not_fine = bar(s) ; // *** error *** reference to non-const can't bind to a temporary object
}

std::string & Reference_function::foo( std::string& str ) { return str ; }

std::string Reference_function:: bar( std::string& str ) { return str ; }