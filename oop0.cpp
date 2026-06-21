
#include <iostream>
using namespace std;

class rec {
private:
    int height;
    int width;
public:
    void setwidth(int  w) {
        if (w < 0)
            width = -1 * w;
        else
            width = w;
    }

    int getw() {
        return width;
    }

    void setheight(int h) {
        if (h < 0)
            height = -1 * h;
        else
            height = h;
    }
    x
    int getheight() {
        return height;
    }


    int calcArea() {
        return height * width;
    }
};

int main()
{
    rec s;
    
    s.setwidth(2);
    s.setheight(-10);
    cout << s.calcArea();
}

