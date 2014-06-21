//
//  Trailing_return_type.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Trailing_return_type.h"
Trailing_return_type::Trailing_return_type (){
    
    
}

auto func(int i) -> int (*)[10]{
    static int x[10]; // declaring a variable "static" means that it will be only freed once the program itself is terminated and not the function
    return &x;
    
}
