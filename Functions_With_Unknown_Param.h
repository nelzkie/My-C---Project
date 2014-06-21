//
//  Functions_With_Unknown_Param.h
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Functions_With_Unknown_Param__
#define __c___Primer__Functions_With_Unknown_Param__

#include <iostream>
class Functions_With_Unknown_Param{
public:
    Functions_With_Unknown_Param();
    void error_msg(std::initializer_list<std::string> il);
    void error_msg2(std::initializer_list<int> il);
};
#endif /* defined(__c___Primer__Functions_With_Unknown_Param__) */
