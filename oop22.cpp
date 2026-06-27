
#include <iostream>
using namespace  std;


//polymorphism --> تعدد الاشكال
// قدرة الاب انو يتشكل بشكل الابناء
//و هاد كلو بصير ب run time يعني بتعامل مع heap
//


class shape {
protected:
    int height;
public:
    shape() {
        height = 0;
    }
    shape(int height) {
        this->height = height;
    }
    void setheight(int height) {
        this->height = height;
    }
    int getheight() {
        return height;
    }
    virtual int calcarea() = 0;

};
class rec :public shape {
    int width;
public:
    rec() {
        width = 0;
    }
    rec(int width, int height) {
        this->height = height;
        this->width = width;
    }
    void setwidth(int width) {
        this->width = width;
    }
    int getwidth() {
        return width;
    }
    int calcarea() {
        return width * height;
    }

};
class tri :public shape {
    int base;
public:
    tri() {
        base = 0;
    }
    tri(int height, int base) {
        this->height = height;
        this->base = base;
    }
    void setbase(int base) {
        this->base = base;
    }
    int getbase() {
        return base;
    }
    int calcarea() {
        return 0.5 * base * height;
    }
    shape *shapefactory(char c){
        if (c == 'r') {
            int a, b;
            cin >> a >> b;
            return new rec(a,b);
        }
        else {
            int a, b;
            cin >> a >> b;
            return new tri(a, b);
        }
};


int main()
{
    shape* p = new tri(7,9);// بوينتر من نوع shape باشر ع ادريس من نوع rec 
    cout << p->calcarea()<<endl;//مع البويتار لما بدتا توصل لاي شي بنستخدم السهم مو الدوت
    shape *s= shapefactory('r');




}

