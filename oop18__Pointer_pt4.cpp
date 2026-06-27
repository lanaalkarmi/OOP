#include <iostream>
using namespace std;

//pointers with object

class test {
    int val;
public:
    void print() {
        cout << val << endl;
    }

    void setval(int val) {
       this-> val = val;// first val is the attribute & the sec int is the val
    }
};

int main()
{
    test t;
    t.setval(8);
    t.print();

}

