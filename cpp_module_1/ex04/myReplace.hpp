//
// Created by Jolynn Collin on 7/10/22.
//

#ifndef CHECK_01_MYREPLACE_H
#define CHECK_01_MYREPLACE_H

# include <fstream>
# include <iostream>
# include <string>

class myReplace {

public:
        myReplace();
        ~myReplace();

        static void replace(std::string const &filename, std::string const &find, std::string const &replace);
};


#endif //CHECK_01_MYREPLACE_H
