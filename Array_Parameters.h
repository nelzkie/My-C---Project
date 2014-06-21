//
//  Array_Parameters.h
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Array_Parameters__
#define __c___Primer__Array_Parameters__

#include <iostream>
class Array_Parameters{
public:
    Array_Parameters();
    void PrintSome(const int[]);
    void PrintSome2(int (&arr) [10]);
    void  errr_msg(std::initializer_list<std::string> il);
    int getint(int&);

};
#endif /* defined(__c___Primer__Array_Parameters__) */
