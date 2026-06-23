
#include <iostream>
using namespace std;
//overriding

class shape {
protected:
    string color;
public:
    shape() {
        cout << "shape \n";
        color = "white";
    }
    shape(string c) {
        color = c;
    }
    void setc(string c) {
        color = c;
    }
    string getc() {
        return color;
    }
    ~shape() {
        cout << " end shape" << endl;
    };
    class rec :public shape {
    protected:
        int height;
        int width;
    public:
        rec() {
            cout << "rec";
            width = 1;
            height = 1;
        }
        rec(int h, int w, string c) {
            height = h;
            width = w;
            color = c;
        }

        void setheight(int h) {
            height = h;
        }
        void setwidth(int w) {
            width = w;
        }

        int geth() {
            return height;
        }
        int getw() {
            return width;
        }
        void print() {
            cout << width << height << color;
        }
        double calcarea() {
            return height * width;
        }
        ~rec() {
            cout << "end rec" << endl;
        }
    };

    class sq :public rec {
    public:sq() {
        cout << " square ";
    }
          sq(string c, int h, int w) {
              color = c;
              if (h == w) {
                  width = w;
                  height = h;
              }
              else {
                  width = height = h;
              }
          }
          //overriding
          void setheight(int h) {
              height = width = h;
          }
          void setwidth(int w) {
              width = height = w;
          }
          ~sq() {
              cout << "end sq" << endl;
          }
    };


int main()
{
    rec r( 10,30,"blue");// لما بتعامل مع الوراثة تنفيذ الكونستركتر بتم من الاب للابن  
    cout << r.calcarea();//  اذا ما لقيه بطلع عالكلاس اللي ورث منه الاولوية انو يدور عالميثود بالكلاس نفسه 
    cout << endl << "=====================";
    sq s;
    s.setheight(9);
    cout << s.calcarea() << endl;
}

