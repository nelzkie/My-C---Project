//
//  Reference_function.h
//  c++_Primer
//
//  Created by Bellchan on 6/2/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Reference_function__
#define __c___Primer__Reference_function__

#include <iostream>
class Reference_function{
public:
    Reference_function();
    std::string& foo( std::string& str );
    
    std::string bar( std::string& str );
};
#endif /* defined(__c___Primer__Reference_function__) */
