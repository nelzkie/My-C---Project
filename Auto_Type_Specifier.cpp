//
//  Auto_Type_Specifier.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/10/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Auto_Type_Specifier.h"
using namespace std;
Auto_Type_Specifier::Auto_Type_Specifier(){
    
    /*********************
     
     we can use the keyword auto to let the compiler decides what type should be use in variable
     
     *************************/
    auto i = 500; // i is int
    auto str = "fuck that";
    
    auto i2 = 0, *p = &i2;// i2 is int and p is a pointer to int
    //auto sz = 0,pi = 3.14; // error because sz and pi is different types(inconsitent types)
    
    
    
    
    /********************* Compound types, const nd auto  *************************/
    int i3 = 100, &r = i3;
    auto a = r; // a is an int. when we use a reference, we are really using the object to which the reference refere
    const int ci = i3, &cr = ci;
    auto b = ci; // b is an it(top level const in ci is dropped)
    auto c = cr; // c is an int (cr is a reference fo ci whose const is top level)
    auto d = &i; // d i an int* (a pointer to an int)
    auto e = &ci; // e is constant int* (a pointer to constant int)
    
    
    /********************* Constat auto  *************************/
    const auto f = ci; // deduce type of ci is int; f has a type constant int
    
    
    auto &m = ci, *p2 = &ci; // m is a reference to constant int p is  pointer to constant int
    

    
    
    cout<< "\n\nAuto type specifier   " << d << "   "<< str << endl;
    
    
    
}