//
//  PassByValue_VS_Reference.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "PassByValue_VS_Reference.h"
using  namespace std;

void PassByValue_VS_Reference::init(){
    int num1 = 5;


    PassByValue(num1);
    
    cout << " The result of pass by value is: " << num1 << endl;
    

    
    PassByReference(num1);
    
    cout << " The result of pass by reference is: " << num1 << endl;
}

void PassByValue_VS_Reference::PassByValue(int number){
    /***************
     What will happen here is that PassByValue() will create a new copy of num1.
     So once we change the value of the number in the function what will be change is the copy not the original
     ********************/
    
    number = 500;
}

void PassByValue_VS_Reference::PassByReference(int& x){
    
    
    /***************
     We are referncing x to the num1 pass to it. So once we change the x value, we are literally changing the variable of which it is referecing to which is the num1
     ********************/
    x = 300;
}