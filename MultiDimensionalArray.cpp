//
//  MultiDimensionalArray.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/21/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "MultiDimensionalArray.h"
using namespace std;

MultiDimensionalArray::MultiDimensionalArray(){
    
    int ai[3][4]; // array of size 3; each element is a array of ints of size 4
    int arrp [3][2][4] = {0}; // initialize all elements to 0
    int arrp2 [3][2][4] = {
        {{100,200,300,400},{101,201,301,401}},
        {{102,202,302,402},{103,203,303,403}},
        {{102,202,302,402},{103,203,303,403}}
    
    }; // initialize all elements to 0
    
    
    int ai2[3][4] = {{0},{4},{8}}; // explicitly initialize inner element to 0 in each row
    for(int i = 0; i < 3;i++) {
        for(int y = 0; y < 4;y++){
            //cout<< ai2[i][y]<<endl;
        }
    }
    
    ai[2][3] = arrp2[0][0][0];
    int (&srow)[4] = ai[1];
    for(auto &x : ai){
        for(auto &y:srow){
            cout << y << endl;
        }
    }
    
    
    
    
    
    
    
    int ia[3][4] = {
        {0,1,2,3},{4,5,6,7},{8,9,10,11}
    };

    int (&row)[4] = ia[1];

    for(auto &x : ia){
        for(auto &y:row){
            
        }
    }
    
    for(auto &x:ia){
        for(auto y: row){
         
        }
    }
    
    for(int *x : ia){
        for(auto y : row){

        }
    }
    
    
    
    
    
    
    /*************************** Pointers and Multidimensional Arrays ***********************************/
    
    string strs[3][2] = {{"nelzkie","nelz"},{"gwapo","pogi"},{"handsome","cute"}};
    string (*ps)[2]  = strs;
    
    

}