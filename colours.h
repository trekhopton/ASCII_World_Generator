#include <string>

#ifndef COLOURS_H
#define COLOURS_H

class colours{
public:
    //foreground colours
    static std::string green;
    static std::string blue;
    static std::string blueL;
    static std::string greenL;
    static std::string red;
    static std::string redL;
    static std::string yellow;
    static std::string yellowL;
    static std::string cyan;
    static std::string cyanL;

    //backgound colours
    static std::string greenB;
    static std::string greenLB;
    static std::string blueB;
    static std::string blueLB;
    static std::string redB;
    static std::string redLB;
    static std::string yellowB;
    static std::string yellowLB;
    static std::string cyanB;
    static std::string cyanLB;
    //misc
    static std::string bold;
    static std::string dim;
    static std::string end;
    static std::string endB;
};

#endif
