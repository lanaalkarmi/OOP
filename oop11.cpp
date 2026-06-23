#include <iostream>
using namespace std;

//OOP principles : Encapsulation , Inheritance , Abstract

//abstraction --> شيء خالي بشكل كامل من التفاصيل 

class shape{
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
    virtual int calcArea() = 0; //خليناه ابستراكت مجرد عشان نجبر الابناء يعملوا override
      // مجرد ما عملت مبثود وحدة ابستراكت صار الكلاس كله ابستراكت 
    
   
};

class  rec :public shape {
private:
    int width;
public:
    rec() { // ما بنحط الطول لانو ورثانه من كلاس الاب
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
    int calcArea() {
        return height *width;
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
    int calcArea() {
        return 0.5*height *base; //just changed the body
    }
};



int main()
{
  
    rec r(10, 10);
    cout << r.calcArea() << endl;

    tri t(10, 10);
    cout << t.calcArea() << endl;



}

