
#include <iostream>
using namespace std;
   
//encapsulation 


class account {
private:
    int id;
    string name;
    double balance;
public:
    void setname(string n) {
        name = n;
    }
    string getname() {
        return name;
    }
    void setid(int n) {
        id = n;
    }
    int getid() {
        return id;
    }
    void setbalance(double b) {
        if (b < 0) {
            balance = b * (-1);
        }
        else
        balance = b;
    }
    double getbalance() {
        return balance;
    }
    void print() {
        cout << name << id << balance;
    }
};

int main()
{
    account a;
    a.setname("lolo");
    a.setid(1);
    a.setbalance(1200);
    a.print();
    cout << a.getname();
    cout << a.getid();
    cout << a.getbalance();





}

