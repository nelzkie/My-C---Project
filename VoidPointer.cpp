//
//  VoidPointer.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/4/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "VoidPointer.h"
#include<string>
#include<iostream>
VoidPointer::VoidPointer(){
    double obj = 3.14, *pd = &obj;
    
    
    /*********************************************
     NOTE:
     A Void pointer (void*) does not mean anything. It is a pointer but the type that it points to is unknown
     
     *********************************************/
    
    void *pv = &obj; // obj can be an object of any type
    pv = pd; // void pointer can hold a pointer of any type
    std::cout<< *pd << std::endl ;
    
    int i = 42;
    int *pl = &i;
    std::cout<<*pl<<std::endl;
    *pl = *pl * *pl; // this multiplies the value pl to pl (42 * 42)
    std::cout<<*pl<<std::endl;

}