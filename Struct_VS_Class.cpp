//
//  Struct_VS_Class.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/11/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Struct_VS_Class.h"
using namespace std;

/***************************************
 
 A struct default is public
 
 ******************************************/
struct person{
    string name = "nelzkie";
    
};

/***************************************
 
 A class default is private
 
 ******************************************/

class person_t{
    string name_t = "nelzkie_2";
};

Struct_VS_Class::Struct_VS_Class(){
    person_t _t;
    //_t.name_t; // error because name_t is a private variable in class person_t
    person p;
    cout<<p.name<<endl;
}


