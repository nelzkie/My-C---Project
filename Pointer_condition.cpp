//
//  Pointer_condition.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/4/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Pointer_condition.h"
#include<iostream>
#include<string>



Pointer_condition::Pointer_condition(){
    int ival = 1024;
    int *pi = 0;
    int *pi2 = &ival;
    
    if(pi){
        std::cout<<"woah"<<std::endl;
        
    }
}
