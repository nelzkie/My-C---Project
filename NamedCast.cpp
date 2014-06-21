//
//  NamedCast.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/25/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "NamedCast.h"
NamedCast::NamedCast(){
    
    /************************* Static Cast ************************
     
     “static_cast is often useful when a larger arithmetic type is assigned to a smaller type”
     
     **********************************/
    
    int i,j;
    
    double slope = static_cast<double>(j); // casting via static_cast
    
    
    
    
    /*************************************************
     Using static cast to retrive a pointer value that was from a void pointer(void*)
     
     **********************************/
    
    void *p = &i; // address of any nonconst object can be stored in a void*
    double *dp = static_cast<double*>(p); // converts void* back to the original pointer type
    
    
    
    
    
    /************************* Const Cast ************************
     
     Const_cast changes only a low-level const in its operand
     
     **********************************/
    
    const char *pc;
    char *p2 = const_cast<char*>(pc); // but writing through p2 is undefined
    
    
    
    
    
    
    
    
}