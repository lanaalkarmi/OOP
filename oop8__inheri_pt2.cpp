
#include <iostream>
using namespace std;
// hierarchical inheritance
class shape {
protected:
    int height;
public:
    shape() {
        height = 0;

    }
    shape(int h) {
        height = h;

    }
    void setheight(int h) {
        if (h < 0) {
            height = h * -1;
        }
        else {
            height = h;
        }
    }
    int getheight() {
        return height;
    }
    int calcArea() {
        return 0;
    }
};


class  rec :public shape {
private:
    int width;
public:
    rec() {
        width = 1;
    }
    rec(int h, int w) {
        height = h;
        width = w;
    }
    rec(int h, int w) : shape(h) {
        width = w;
    }
    void setwidth(int w) {
        width = w;
    }
    int getw() {
        return width;
    }

    int calcrecarea() {
        return width * height;
    }
};

class tri : public shape {
    int base;

public:
    tri() {
        base = 1;
    }
    tri(int b, int h) : shape(h) {
        base = b;
    }
    void setbase(int b) {
        base = b;
    }
    int getbase() {
        return base;
    }

    int calctriarea() {
        return 0.5 * base * height;
    }
};


int main()
{
    
}

