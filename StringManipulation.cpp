//
//  StringManipulation.cpp
//  c++_Primer_chapter_3
//
//  Created by Bellchan on 5/11/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//
#include<iostream>
#include <string>
#include<cctype>
#include "StringManipulation.h"
using namespace std;

StringManipulation::StringManipulation(){
    string s("Hello World!!!");
    decltype(s.size()) counter;
    
    for(auto c : s){
        if(ispunct(c)){
            counter++;
            
        }
        
    }
    
    
    cout<< "\n\n" << counter << " punctuation in " << s << endl;
    
    /****************************** Using reference to change the strig value ***************************************/
    
    string s1("Hello World");
    for(auto &c : s1){
        c = toupper(c);
        
    }
    cout<< s1 << endl;
    

}

