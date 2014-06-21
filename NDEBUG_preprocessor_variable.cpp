//
//  NDEBUG_preprocessor_variable.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/8/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "NDEBUG_preprocessor_variable.h"
using namespace std;
NDEBUG_preprocessor_variable::NDEBUG_preprocessor_variable(){
    
#ifdef  NDEBUG
    
    std::cerr<<__func__<< " aw " << std::endl; // __func__ is a local static defined by the compiler that holds the funtion's name. Basically its a reserved word
    print();
    
#endif
}

void NDEBUG_preprocessor_variable::print(){
    if(true){
        cerr << "Error : " << __FILE__ // string literal containing the name of the file. Defined by the compiler
        << " : in function " << __func__
        << " at line " <<__LINE__ // integer literal containing the current line number
        << endl
        <<         "Compiled on  " << __DATE__ // string literal contaning the date the file was compiled
        << "  at  " << __TIME__ // string literal containing the time the file was compiled
        << endl;
    }
}