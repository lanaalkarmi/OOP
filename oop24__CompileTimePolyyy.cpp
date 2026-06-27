#include <iostream>
using namespace std;

//operator overloading --> compile time poly (stack)

class distance {
	int m;
	int km;
public:
	distance() {
		this->m = 0;
		this->km = 0;
	}
	distance(int m,
		int km) {
		this->m = m;
		this->km = km;
	}
	int getm() {
		return m;
	}
	int getkm() {
		return km;
	}
	distance operator+(distance d) {
		int km = this->km + d.km;
		int m = this->m + d.m;
		distance res (km, m);
		return res;
	}
	friend ostream & operator<<(ostream& out, distance& d);
};
ostream & operator<<(ostream& out, distance & d) {
	out << d.km << " " << d.km << endl;
	return out;
}
	//كلما بشوف هالاشارة بدو يفهم انو فيه عملية طباعة ل اوبحكيت معين


int main()
{
 
	distance d1(8, 5);
	distance d2(7, 8);
	distance d3 = d1 + d2;
	cout << d3<<d2;




}
