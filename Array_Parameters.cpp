//
//  Array_Parameters.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Array_Parameters.h"
using namespace std;

Array_Parameters::Array_Parameters(){
    
    /****************
     NOTE:
     
     Always remember that any array operation is usually a pointer operation
     
     *****************/
    
    int i = 0, j[2] = {1,2};
    int k[] = {1,2,3,4,5,6,7,8,9,0};
    

    
    PrintSome(&i);
    PrintSome(j);
    PrintSome2(k); // should also pass an array of 10 ints as argument
    
}

void Array_Parameters::PrintSome(const int[] ){
    
    
}






/************************* Array Reference Parameters  **************************/

void Array_Parameters::PrintSome2(int (&arr)[10]) {  //int (&arr)[10] means arr is a reference to an array of 10 ints
    
    
    
    // size_of returns the size in bytes.
    int i = sizeof(arr) / sizeof(arr[0]); // divide arr by itself
    
    for(auto elem : arr){
        cout << elem << endl;
    }
    
    cout << i << endl;
    
}


/************************* Returning pointer to an array **************************/
using arrrT = int[10];

auto func(int i) -> int (*)[10];













