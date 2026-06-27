
#include <iostream>
using namespace std;
// copy constructor --> هو اشي ميني جاهز بالذاكرة و انا بعدل عليه


class Account {
private:
    int id;
    string name;
    double balance;
public:
    Account() {
        id = 1;
        name = " ";
        balance = 0;
    }

    Account(int i, string n, double b) {
        id = i;
        name = n;
        balance = b;
    }

    

    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }
    void setbalance(double b) {
        balance = b;
    }

    int getid() {
        return id;
    }
    string getName() {
        return name;
    }
    double getbalance() {
        return balance;
    }

    void display() {
        cout << id << " " << name << " " << balance << endl;
    }

    void setData(int i, string n, double b) {
        id = i;
        name = n;
        balance = b;
    }

    Account( const Account& o) { // عشان اقدر اوصل للمعلومات اللي بدي اياها لازم اخلي b ياشر عنفس المكان اللي باشر عليه a بالذاكرة معناها لازم احط اشارة &
        id = o.id;
        name = o.name;
        balance = o.balance;
    }
};






int main()
{
    Account a(1, "lana" , 3000);
    Account b(a) ; // هيك بوصل للادريس ومنها بصير قادرة اوصل لكل المعلومات
    //copy constructor
    Account b = a;
    // تستقبل object 
    b.display();

}

