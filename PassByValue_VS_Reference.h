//
//  PassByValue_VS_Reference.h
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__PassByValue_VS_Reference__
#define __c___Primer__PassByValue_VS_Reference__

#include <iostream>
class PassByValue_VS_Reference{
public:
    void init();
    void PassByValue(int number);
    void PassByReference(int &number);
};
#endif /* defined(__c___Primer__PassByValue_VS_Reference__) */
