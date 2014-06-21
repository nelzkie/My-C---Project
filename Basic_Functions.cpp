//
//  Basic_Functions.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Basic_Functions.h"
using namespace std;

Basic_Functions::Basic_Functions(){
    
    
    
    
    
    
    
    
    
    
    
    string s("a value");
    cout<< s << endl;
    get_val(s, 0) ='A';
    cout << s << "   " << sample << endl;
    
    
    
    
    string  sample = "This is a sample";
    //cout << sample<< endl;
    
    string i1 = printval(sample) = "haha"; // printval is a reference to the sample
   // cout<< i1 <<endl;
    
    string i2 = printval2(sample) = "hehe"; // printval2 is not declared as a reference but its parameter does
    //cout << i2 << endl;
    
    string i3 = printval3(sample) = "huhuh";
   // cout << i3 << endl;
    
    
    for(size_t i = 0; i < 10; i++){
        //cout<<count_calls() << endl;
        
    }
    
    for(auto v : process()){
        cout << v << endl;
    }
    

    
    
    

}

char& Basic_Functions::get_val(std::string &str, size_t ix){
    
    return str[ix];
}

string& Basic_Functions::printval(std::string &str){
    
    return str;
}
string Basic_Functions::printval2(std::string &str){
    return str;
}

string& Basic_Functions::printval3(std::string str){
    
    return str;
}



/***************************** Local Static objects ****************************************/

size_t Basic_Functions::count_calls(){
    static size_t ctr = 0;
    
    return  ++ctr;
}

/***************************** Never Return a Reference of Pointer toa Local Object ****************************************/

const string &Basic_Functions::manip(){
    
    string ret = "aw";
    
    return ret;
}


/***************************** List initializing return values ****************************************/

vector<string> Basic_Functions:: process(){
    return {"hahahahaha","hehehehe"};
}






