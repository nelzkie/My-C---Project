//
//  Const_Pointer_vs_Pointer_to_const.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Const_Pointer_vs_Pointer_to_const.h"

using namespace std;

Const_Pointer_vs_Pointer_to_const::Const_Pointer_vs_Pointer_to_const(){
    /*************************************
     
     Pointer to conts.
     
     You cannot change the value of which the pointer is pointing to but you can change the address of the pointer
     
    *************************************/
    
    const double pi = 3.14;
    const double pi2 = 3.1418;
    
    const double *cptr =  &pi;
    
    std::cout<<"************** Pointer to costant ************* \n\n" << "Address: " << cptr << "  Value: " <<*cptr <<std::endl;
    
    
    
    // Changed address of the pointer
    cptr = &pi2;
    std::cout<<" Address :  " << cptr << "  The value is : " << *cptr;
    
    
    
    
    /*************************************
     
     Constant pointer. (*const)
     
     You cannot change the address of which the pointer is pointing to but you can change the value, if the variable which the pointer is pointing to is not a constant
     
     
     *************************************/
    
    int errNumb = 0;
    int *const curErr = &errNumb; // this is how to declare Constant Pointer. By assigning const after (*).
    
    cout<<"\n\n\n**************** Constant Pointer ****************** \n" << endl;
    cout<< " Original Value " << *curErr << endl;
    
    *curErr = 42;
    cout<<" Change value : " << *curErr <<endl;

    
    // Here you cannot change both the value and the address of the pointer which is pointing to becoz pi3 is constant
    const double pi3 = 3.1416;
    const double pi4 = 3.1416;
    const double *const pip = &pi3;

    
    
    
    
    
    
}