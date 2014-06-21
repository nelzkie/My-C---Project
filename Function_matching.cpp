//
//  Function_matching.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/8/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Function_matching.h"
using namespace std;
Function_matching::Function_matching(){
    
    int i = 45;
    func('a'); // char is a size_t type which is an unsigned int
    /**  manip(3.14);  **/      // the literal 3.14 is a double. That type can be converted to either long or float. Because there are two posible arithmetic conversion, the call is ambigous
}
void Function_matching::func(int x, int y){
    
    cout<< " Choose the int " << endl;
}

void Function_matching::func(double x, double y){
    
    cout<< " Choose the double " << endl;
}

void Function_matching::manip(float x){
        cout<< " Choose the float " << endl;
}

void Function_matching::manip(long x){
        cout<< " Choose the long " << endl;
}