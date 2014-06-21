//
//  Trailing_return_type.h
//  c++_Primer
//
//  Created by Bellchan on 6/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Trailing_return_type__
#define __c___Primer__Trailing_return_type__

#include <iostream>
class Trailing_return_type{
public:
    Trailing_return_type();
    auto func(int i) -> int (*)[10];
};
#endif /* defined(__c___Primer__Trailing_return_type__) */
