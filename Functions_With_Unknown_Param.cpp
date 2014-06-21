//
//  Functions_With_Unknown_Param.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Functions_With_Unknown_Param.h"
using namespace std;

Functions_With_Unknown_Param::Functions_With_Unknown_Param(){
    
    error_msg({"fuck","gwapo","nelson"});
    error_msg2({1,2,3,4,5,6,7,8,9,0});
}

void Functions_With_Unknown_Param::error_msg(std::initializer_list<std::string> il){
    for(auto beg = il.begin(); beg != il.end(); ++beg){
        cout<< *beg << " ";
    }
        
}

void Functions_With_Unknown_Param::error_msg2(std::initializer_list<int> il){
    for(auto beg = il.begin(); beg != il.end(); ++beg){
        cout<< *(il.end()) << " ";
    }
}