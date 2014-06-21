//
//  PointerDeclarations_primer.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/4/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "PointerDeclarations_primer.h"
using namespace std;
PointerDeclarations_primer::PointerDeclarations_primer(){
    
    
    
    
    int ival =  1024;
    int ival2 = 500;
    int &refVal = ival;
    
    int &refVal3 = refVal;
    
    int *p = &refVal3;
    
    
    
    
    std::cout << "Hello, World!\n" << *p << "  " << p <<std::endl;
    
    int &r2 = *p;
    std::cout<<r2<<std::endl;
    
    *p = 42; // this will change the value of ival to 42
    std::cout<< ival << "  "  << *p << std::endl;
    
    *p = ival2; // this will change the value of ival to 500 ( the value of ival2)
    std::cout<< ival << "  " << *p << std::endl;
    
    
    p = &ival2; // p will point to a new address which is now ival2
    std::cout<< ival << "  " << *p << std::endl;
    
    std::cout<< "\n\n"<<std::endl;
    
    
    
    
    
    
    
    
    
    /*******  Pointer to Pointer  ********/
    int ival3 = 1024;
    int *pi = &ival3;
    
    int **ppi = &pi; // this is a pointer to pointer
    
    std::cout<< "****** This is a pointer to pointer  ***** \n" << *pi << "   " << **ppi <<endl;
    
    
    /************ References to a pointer  **************/
    int i = 42;
    int *p2;
    int *&r = p2; // r is a reference to the pointer p
    r  = &i; // r refers to a poiter; assigning &i to r makes the pointer p pointes to i
    cout<<"\n ***** This is a reference to a pointer ****  \n" << *p2 << "  " << *r << endl;
    
    *r = 0; // dereferencing r yields i, the objct to which p points; changes i to 0
    cout<<"\n ***** This is a reference to a pointer ****  \n" << *p2;
    
}