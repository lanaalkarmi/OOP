#include <iostream>
using namespace std;

// composition --> has a

class Auther {
    string name;
    string email;
    int age;
public:
    Auther() {}
    Auther(string n, string e, int a) {
        name = n;
        email = e;
        age = a;
    }
    void setname(string n) {
        name = n;
    }
    void setemail(string e) {
        email = e;
    }
    void setage(int a) {
        age = a;
    }

    string getname() {
        return name;
    }
    
    string getemail() {
        return email;
    }
    int getage() {
        return age;
    }

    void dispaly() {
        cout << age << " " << name << " " << email;
    }



};

class Book { // book han an auther
    string name;
    int price;
    Auther a;
public:
    Book() {}
    Book(string n, int p, Auther ath) {
        name = n;
        price = p;
        a = ath;
    }

    void settitle(string t) {
        name = t;
    }
    void setprice(int p) {
        price = p;
    }

    void setauther(Auther& x) {
        a = x;
    }

    string getname() {
        return name;
    }
    int getprice() {
        return price;
    }
    Auther getauther() {
        return a;
    }

    void print() {
        cout << name << " " << price << endl;
        a.dispaly();
    }

};

int main()
{
    Auther a("lana", "lanaaaa", 22);
    Auther a1("lana", "lanaa", 2);
    Book b (" c++", 22, a);
    b.setauther(a1);
    b.print();
   cout << b.getauther(); // هون رح يعطيني ايرور لاني ما بقدر اطبع اوبجيكت
   cout << b.getauther().getname();//هيك بزبط



}

