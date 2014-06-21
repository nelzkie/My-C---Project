//
//  Using_Marker_array.cpp
//  c++_Primer
//
//  Created by Bellchan on 6/4/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Using_Marker_array.h"
using namespace std;
Using_Marker_array::Using_Marker_array (){
    
    /*******************************
     
     Usig Marker to Specify the Extent of an array
     
     NOTE: functions dont know the size of an array parameter
     
     **************************************/
    
    

    int j[10] = {1,2,3,4,5,6,7,8,9,0};
    print2(begin(j), end(j));
    
    
}


/******************* C-Style ************************/

void Using_Marker_array::  print(const char *cp){
    if(cp){ // check is cp is not a null pointer
        while (cp) { // as long as the character it points to is not a null character
            cout << *cp++ << endl;
        }
    }
}



/******************* Using Standard Library Conventon  ************************/

void Using_Marker_array:: print2(const int *beg,const int *end){
    // print every element starting at beg upto but not including end
    while(beg != end){
        cout<< *beg++ << endl;
    }
}