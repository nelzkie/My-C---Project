//
//  const_member_function.h
//  c++_Primer
//
//  Created by Bellchan on 6/15/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__const_member_function__
#define __c___Primer__const_member_function__

#include <iostream>
class const_member_function{
public:
    const_member_function();
    
    void init();
    
    
    void foobar() const;
    void foobar();
    
};
#endif /* defined(__c___Primer__const_member_function__) */
