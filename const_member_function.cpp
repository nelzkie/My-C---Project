//
//  const_member_function.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/15/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "const_member_function.h"
using namespace std;
const_member_function::const_member_function(){
    init();
    
}

void const_member_function::init(){
    foobar();

    
}

void const_member_function::foobar(){
    cout << "nonconst Foobar" << endl;
}



void const_member_function::foobar() const{ // this is a const member function
    cout << "Foobar const" << endl;
}
