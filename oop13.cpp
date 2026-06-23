
#include <iostream>
using namespace std;
class calculater {
public:
    static double sum(int a, int b)
    {
        return a + b;
    }
    static double subtract(int a, int b)
    {
        return a - b;
    }

    static double multi(int a, int b)
    {
        return a * b;
    }

    static double divide(int a, int b)
    {
        return a / b;
    }

};

int main()
{
    cout << calculater::sum(9, 10);
}

