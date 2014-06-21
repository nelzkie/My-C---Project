//
//  Function_matching.h
//  c++_Primer
//
//  Created by Bellchan on 6/8/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Function_matching__
#define __c___Primer__Function_matching__

#include <iostream>
class Function_matching{
public:
    Function_matching();
    void func(int,int = 1);
    void func(double,double = 1.0);
    
    void manip(float);
    void manip(long);
};
#endif /* defined(__c___Primer__Function_matching__) */
