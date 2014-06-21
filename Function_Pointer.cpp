//
//  Function_Pointer.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/2/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Function_Pointer.h"
using namespace std;

Function_Pointer::Function_Pointer(){

    shit();

}

void Function_Pointer::shit(){
    
    goofy = foo;
    goofy();
}

void Function_Pointer::foo(){
    cout << "foo" << endl;
    
}

 bool  Function_Pointer:: lenghtCompare(const std::string &s1, const std::string &s2){
    
    
    return true;
}


/****************************** Function Pointer Parameters  **************************/

void Function_Pointer:: useBigger(const std::string &s1, bool pf(const std::string &,const std::string &)){
    
}



