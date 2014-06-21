
//
//  ConstExpr_function.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "ConstExpr_function.h"
constexpr ConstExpr_function::ConstExpr_function(){ // never forget to declare the constructor as  const if your using a literal class
    
}

constexpr int ConstExpr_function::new_sz(){
    return 42;
}


constexpr size_t ConstExpr_function::scaler(size_t cnt){ // scaler() returns a constant expression if its argument is a constant expression too.
    
    return new_sz() * cnt; // will return constant expression if argument is constant expression too
}