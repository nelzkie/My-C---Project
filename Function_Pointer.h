//
//  Function_Pointer.h
//  c++_Primer
//
//  Created by Bellchan on 6/2/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Function_Pointer__
#define __c___Primer__Function_Pointer__

#include <iostream>
class Function_Pointer{
public:
    Function_Pointer();
    static bool lenghtCompare(const std::string &, const std::string &);
    bool (*pf) (const std::string &, const std::string &); // this means that pf is a pointer that points to a funtion that has two const parameters and returns a bool.
    bool *pf2 (const std::string&, const std::string &); // ths means that pf2 is a function that returns a pointer to bool
    
    
    void shit();
    
    static void foo();  // c++ wont let you use a plain funtion pointer to non-static member. So we need to declare it as static

     void (*goofy)();
    
    
    void useBigger(const std::string &s1, bool pf(const std::string &,const std::string &));
    
    
};
#endif /* defined(__c___Primer__Function_Pointer__) */
