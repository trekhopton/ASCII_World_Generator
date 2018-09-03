#include"tools.h"
#include <sys/ioctl.h>

void tools::clearScreen(){
    std::cout << "\033[2J";
}
void tools::setCursor(point pos){
    std::cout << "\033[" << pos.y << ";" << pos.x << "H";
}
void tools::setCursor(int x, int y){
    std::cout << "\033[" << y << ";" << x << "H";
}
void tools::moveCursor(tools::direction dir, int dist){
    std::cout << "\033[" << dist << static_cast<char>(dir);
}
void tools::moveCursor(tools::direction dir){
    std::cout << "\033[" << static_cast<char>(dir);
}
point tools::screenSize(){
    struct winsize w;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&w);
    point p( w.ws_col, w.ws_row);
    return p;
}
void tools::endColour(){
    std::cout << "\033[0m";
}
