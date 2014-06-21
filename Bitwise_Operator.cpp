//
//  Bitwise_Operator.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/25/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Bitwise_Operator.h"

using namespace std;


 void Bitwise_Operator::PrintBinary(unsigned int n){
    for(int i = 0; i < 32; i++){
        cout<< (((n >> i) % 2) ? '1' : 0);
    }
}
void Bitwise_Operator::Init(){
    /*********************
     NOTE:
     Digits are 0 or 1
     Digits are multiples of powers of 2
     
     *******************/
    
    
    unsigned int a = 60;	  // 60 = 0011 1100
    unsigned int b = 13;	  // 13 = 0000 1101
    int c = 0;
    unsigned int a2 = 11;
    
  
    c  = 1 << -3 ;
    bitset<32> x1(2UL);
    cout << x1 << endl;
    
    
    
    c = a & b;             // 12 = 0000 1100
    cout << "\nLine 1 - Value of c is : " << c << endl;
    bitset<32> x2(c);
    cout << x2 << endl;
    
    
    c = a | b;             // 61 = 0011 1101
    cout << "\nLine 2 - Value of c is: " << c << endl ;
    
    c = a ^ b;             // 49 = 0011 0001
    cout << "\nLine 3 - Value of c is: " << c << endl ;
    
    c = ~a;                // -61 = 1100 0011
    cout << "\nLine 4 - Value of c is: " << c << endl ;
    
    c = a << 2;            // 240 = 1111 0000
    cout << "\nLine 5 - Value of c is: " << c << endl ;
    
    c = a >> 2;            // 15 = 0000 1111
    cout << "\nLine 6 - Value of c is: " << c << endl ;
    


}


Bitwise_Operator::Bitwise_Operator(){

    
    
}


