//
//  return_this_pointer.h
//  c++_Primer
//
//  Created by Bellchan on 6/21/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__return_this_pointer__
#define __c___Primer__return_this_pointer__

#include <iostream>

class return_this_pointer{
    int value;
public:
    return_this_pointer(int n);
    return_this_pointer &add(int n);
    return_this_pointer &mul(int n);
    return_this_pointer &print();
};

#endif /* defined(__c___Primer__return_this_pointer__) */
