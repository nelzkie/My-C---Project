//
//  Type_Aliases.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/10/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Type_Aliases.h"
using namespace std;

Type_Aliases::Type_Aliases(){
    /***************************
     
     Typedef
     
     Typedefs allow the programmer to create an alias for a data type, and use the aliased name instead of the actual type name. To declare a typedef, simply use the typedef keyword, followed by the type to alias, followed by the alias name
     
     ******************************/
    
    typedef  int miles; // making an alias
    miles howfar = 200; // miles is now a declarator
    
    cout<<" \n\n\nUsing typedef keyword \n "<<howfar<<endl;
    
    
    /***************************
     
     Using (c++11)
     
     Using is similar to typedef
     
     “starts with the keyword using followed by the alias name and an (=)”
     
     ******************************/
    
    using meters = int;
    meters howlong = 12;
    
    cout<<"\n\nUsing the keyword using(c++11) as alternative to typedef\n" << howlong<<endl;
    
    
    /***************************
     
     Can also be use in compoud types like pointers and references
     
     ******************************/
   
    using pint = int *;
    using rint = int &;
    int sample = 24;
    
    rint refsample = sample;
    pint pointersample = &sample;
    
    cout<<"\n\nPointer alias\n" << pointersample << "   " <<refsample <<endl;
    
}

void Type_Aliases::sampleFunction(){
    cout<< "\n\nThis is using a fuction as an alias"<<endl;
}
