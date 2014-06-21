//
//  Decltype_specifier.cpp
//  c++_Primer
//
//  Created by Bellchan on 5/10/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "Decltype_specifier.h"
using namespace std;
Decltype_specifier::Decltype_specifier(){
    
    int i= 50;
    const int ci = 0, &cj = ci;
    
    decltype(i) sum = 52; // sum has whatever the type of i returns which is int
    decltype(ci) x = 0; // x has a type constant int (cons int)

    /***************************** dcltype and reference  *********************************/
    int i2 = 32, *p = &i2, &r = i2;
    decltype(r + 0)b; // additions yields an int; b is an uninitalized int

    
      /***************************** Using deference pointer *********************************/
    decltype(*p) c = i; // when we use a dereference pointer we get the object to which the pointer points to which is a reference to int (&i2). so the type of c is a reference to int
    
    
    /***************************** Using a parenthesis variable ********************
     
     NOTE: decltyp of a parenthesized variable is always a REFERENCE(&)
     
     ********************************/
    decltype((i)) d = i2; // d is reference to int  because i is an int and puting a parenthesis variable in decltype makes it reference(&)
    
    
    
    
    cout << "\n\n\n    decltype  " << c << endl;
    
}