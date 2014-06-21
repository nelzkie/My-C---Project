//
//  Basic_Functions.h
//  c++_Primer
//
//  Created by Bellchan on 5/31/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#ifndef __c___Primer__Basic_Functions__
#define __c___Primer__Basic_Functions__

#include <iostream>
#include<vector>
class Basic_Functions{
public:
    Basic_Functions();
    char& get_val(std::string& str,size_t ix);
    std::string& printval(std::string& str);
    std::string printval2(std::string& str);
    std::string& printval3(std::string str);
    
    size_t count_calls();
    
    const std::string &manip();
    std::vector<std::string> process();
    
    
    
private:
    std::string sample = "wow";
};

#endif /* defined(__c___Primer__Basic_Functions__) */
