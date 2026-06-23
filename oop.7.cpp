#include <iostream>
using namespace std;

//inheritance --> is a

class person {
protected:
	string name;
	int age;
	string address;
public:
	person() {
		name = "";
		age = 18;
		address = "";
	}
	person(string n, int a, string ad) {
		name = n;
		age = a;
		address = ad;
	}
	void setname(string n) {
		name = n;
	}
	void setage(int a) {
		age = a;
	}
	void setad(string ad) {
		address = ad;
	}

	string getname() {
		return name;
	}
	string getad() {
		return address;
	}

	int getage() {
		return age;
	}
	void print() {
		cout << name << address << age << endl;
	}
};
class Student :public person {
private:
	int mark;
	int id;
public:
	Student() {
		mark = 0;
		id = 0;
	}
	Student(int m, int i, string n, int a, string ad) {

		mark = m;
		id = i;
	}

	//OR 

	Student(int m, int i, string n, int a, string ad) : person(n, a, ad) {
		name = n;
		age = a;
		address = ad;
		mark = m;
		id = i;
	}



	void setmark(int m) {
		mark = m;
	}
	void setid(int i) {
		id = i;
	}
	int getmark() {
		return mark;
	}

	void printinfo() {
		print();
		cout << mark << id;
	}

};


int main()
{
	person p;

}
