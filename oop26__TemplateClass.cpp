
#include <iostream>
using namespace std;

//template class

template<class T>
class employee {
public:
    T id;
};

int main()
{
    employee <string>i;
    i.id = "957";
    cout << i.id;
   
}
