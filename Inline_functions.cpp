//
//  Inline_constexpr_functions.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Inline_functions.h"
Inline_functions::Inline_functions(){
    
    std::string s1 = "Nelzkie",s2 = "nelz";
    std::cout<<shorterString(s1,s2)<<std::endl; // this is what you call "inline Functions"

    
}

const std::string &Inline_functions::shorterString(const std::string &s1, const std::string &s2){
    
    return s1.size() <= s2.size() ? s1 : s2;
    
    
}

constexpr int new_sz(){
    
    return 42;
}