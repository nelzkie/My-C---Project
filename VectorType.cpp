//
//  VectorType.cpp
//  c++_Primer_chapter_3
//
//  Created by Bellchan on 5/11/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "VectorType.h"
#include<vector>
#include <string>

using namespace std;

VectorType::VectorType(){
    
    /*************************
     A vector is a collection of objects, all of which have the same type
     
     ******************************/
    vector<int> ivec; // ivec holds object of type int

    vector<vector<string>> file; // vector whose elements  are vectors
    
    vector<int> ivec2(ivec); // copy element of ivec into ivec2.
    
    vector<int> ivec3 = ivec; // same as vector<int>ivec2(ivec). cop the elements of ivec into ivec 3
    
    vector<string> list = {"a","an","the"}; // List initializing a vector
    
    vector<int> ivec4(10,-1); // ten int elements, each initialized to -1;
    vector<string> svec(10,"hi"); // ten string "hi"
    vector<string> vec2{10,"hi"}; // hast ten elemens with value of "hi"

    
    
    /************************* Adding element to a vector *****************************/
    vector<int> v1;
    for(int i =  0; i<100; i++){
        v1.push_back(i); // Push_back operation takes a value and "pushes" that values as a new last element onto the "bak" of vector
    }
    
//    string word;
//    vector<string> text;
//    while(cin >> word){
//        text.push_back(word);
//    }
    
//    for(auto l:text){
//        cout<< l << endl;
//    }
    
    vector<int> v{1,2,3,4,5,6,7,8,9};
        for(auto &i :v){
            i += i;
            
        }
    
    for(auto i : v){
        cout<< i  << endl;
    }
    
    /************** Subscripting a vector **************/
    
    vector<unsigned> scores(11,0);
    unsigned grade;
    cout<<"\n\n";
    int wow;
    for(int i = 0; i < 3;i++){
        cout<<i<<endl;
       
//        if(grade <= 100){
//            ++scores[grade/10];
//            
//        }

    }
    

    
    
    
    /************** Destroying element on  vector **************/
    
    cout<<"\n\n Poppig an elemen in a vector" <<endl;
    vector<int> myvector;
    myvector.push_back(100);
    myvector.push_back(200);
    myvector.push_back(300);
    
    myvector.pop_back(); // removes the last element  in the vector which is 300
    myvector.pop_back(); // removes again the last element  in the vector which is 200


    for(auto l:myvector){
        cout<< l << endl;
    }
    
    
    
    /************** Removing a specific element on  vector **************/
    
    cout<<"\n\n Removing an specific an elemen in a vector" <<endl;
    vector<int> numbers{100,200,300,400,500,600,700,800,900,10,22,12};
    numbers.erase(std::remove(numbers.begin(),numbers.end(),600),numbers.end()); // removes the 600 element
    
    // OR
    
    numbers.erase(std::find(numbers.begin(), numbers.end(), 12)); // removes the number 12 element
    
    for(auto l:numbers){
        cout<< l << endl;
    }
    
}











