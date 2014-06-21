//
//  NullPointer_sample.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/4/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "NullPointer_sample.h"
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
NullPointer_sample::NullPointer_sample(){
    
    
    /***********************
     Note:
     Dereferencing null pointer gives you an undefined behavior
     
     **************************/
    
    
    int *p1 = nullptr; // equivalent to int *p1 = 0;
    int *p2 = 0;// directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL;// equivalent to int *p3 = 0;”
    


    
}

