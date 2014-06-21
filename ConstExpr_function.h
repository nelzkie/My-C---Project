//
//  ConstExpr_function.h
//  c++_Primer
//
//  Created by Bellchan on 6/7/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__ConstExpr_function__
#define __c___Primer__ConstExpr_function__

#include <iostream>
class ConstExpr_function{
public:
    constexpr ConstExpr_function(); // this is a literal type. It is one of the requirements of constexpr to use a constexpr function
    constexpr int new_sz();
    constexpr size_t scaler(size_t cnt);
    
    
};
#endif /* defined(__c___Primer__ConstExpr_function__) */
