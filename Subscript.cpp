//
//  Subscript.cpp
//  c++_Primer_chapter_3
//
//  Created by Bellchan on 5/11/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Subscript.h"
using namespace std;

Subscript::Subscript(){
    /************************ The Subcript operator ************************
     
     [] operator ---> Subscript([]) operator
     
     ***************************/
    
    string s("some thing");
    if(!s.empty()){
        s[0] = toupper(s[0]);
    }
    cout<< s <<endl;
    
    for(decltype(s.size())i = 0; i != s.size() && !isspace(s[i]);i++){
        s[i] = toupper(s[i]);
    }
    cout<< s << endl;
    
}