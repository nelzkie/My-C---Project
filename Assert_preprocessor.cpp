//
//  Assert_preprocessor.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/8/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Assert_preprocessor.h"
Assert_preprocessor::Assert_preprocessor(){
    
    /************
     NOTE:
     assert macro evaluates an expression if its false or true. If its false, assert will write a message and terminates the program.
     If it is true, assert will do nothing
     
     ************/
    
    
    assert(2+2==4);
    std::cout << "Execution continues past the first assert\n";
    assert(2+2==5);
    std::cout << "Execution continues past the second assert\n";
}