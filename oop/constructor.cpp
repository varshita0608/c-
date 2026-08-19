#include <iostream>
using namespace std;

class box{
    public: 
    int width, height;

    box() { width=0; height=0;}
    box(int w, int h) { width=w; height=h;}
};

int main() {
    box b1;
    box b2(10,20);
    return 0;
}