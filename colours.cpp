#include "colours.h"

//B is for background, L is for light/bold

//foreground colours

std::string colours::green = "\033[2m\033[32m";
std::string colours::greenL = "\033[1m\033[32m";
std::string colours::blue = "\033[2m\033[34m";
std::string colours::blueL = "\033[1m\033[34m";
std::string colours::red = "\033[2m\033[31m";
std::string colours::redL = "\033[1m\033[31m";
std::string colours::yellow = "\033[2m\033[33m";
std::string colours::yellowL = "\033[1m\033[33m";
std::string colours::cyan = "\033[2m\033[33m";
std::string colours::cyanL = "\033[1m\033[33m";

//background colours

std::string colours::greenB = "\033[2m\033[42m";
std::string colours::greenLB = "\033[1m\033[42m";
std::string colours::blueB = "\033[2m\033[44m";
std::string colours::blueLB = "\033[1m\033[44m";
std::string colours::redB = "\033[2m\033[41m";
std::string colours::redLB = "\033[1m\033[41m";
std::string colours::yellowB = "\033[2m\033[43m";
std::string colours::yellowLB = "\033[1m\033[43m";
std::string colours::cyanB = "\033[2m\033[33m";
std::string colours::cyanLB = "\033[1m\033[33m";

// misc

std::string colours::bold = "\033[1m";
std::string colours::dim = "\033[2m";
std::string colours::end = "\033[0m";
