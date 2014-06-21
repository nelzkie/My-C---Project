//
//  Iterators.cpp
//  c++_Primer_chapter_3
//
//  Created by Bellchan on 5/17/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Iterators.h"
#include <string>
#include <vector>
using namespace std;
Iterators::Iterators(){
    
    string s("some string");
    if(s.begin() != s.end()){ // make sure the string is not empty by comparing begin and end. If end and begin are equal then its empty
        
        auto it = s.begin(); // denotes the first char of the  string
        string::iterator its = s.begin(); // same as (auto it = s.begin())
        *it = toupper(*it); // dereference the iterator to pass the character to toupper()
    }
    cout<< s <<endl;
    
    
    
    /******************* Moving Iterators ************************/
    
    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it); // dereference the iterator to pass the character to toupper()
    }
    cout<< "\n\n" << s << endl;
    
    
    
    
    /*******************  Iterator Types ************************/
    
    vector<int>::iterator it; // it can read and write vector<int> elements
    string::iterator it2;// it can read and write characters in a string
    vector<int>::const_iterator it3; // it can read but not write elements
    string::const_iterator it4; // it can read but not write characters
    
    
    
    
    /*******************  Begin and end operations ************************/
    
    vector<int> v;
    const vector<int> cv;
    auto it5 = v.begin(); // it1 has a type of vector<int>::iterator
    auto it6 = cv.begin(); // it2 has a type of vector<int>::const_iterator
    auto it7 = v.cbegin(); // cbegin() returns a const_iterator
    
    
    
    
    /*******************  Combining Dereference and Memeber Access ************************/
    
    vector<string> sample{"sample"};
    auto sameplit = sample.begin();
    (*sameplit).empty(); // the parenthesis say that apply the dereference first then get the fucntion using dot operator. This is dereference and member access
    //*sameplit.empty(); // this is an error;
    
    
    
    
    
    /*******************  Arrow Memeber Operator *********************
     
     The arrow operator(-> operator) combines dereference and member acces into single operation.
     it->mem is similar to (*it).mem
     
     ************************************************************/
    
    sameplit->empty(); // similar to (*sameplit).empty()
    
    vector <string>theory = {"hahahaha"
        "\n"
    "hhehehehe"
    };
    
    for(auto its = theory.begin(); its != theory.cend() && !its->empty(); ++its){
        cout<< *its << endl;
    }
    
    
    
}