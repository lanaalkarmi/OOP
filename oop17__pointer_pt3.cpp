
#include <iostream>
using namespace std;

//هل ممكن اعمل بويتنتر باشر ع اوبجيكت

class circle {
public:
	double x, y;
	double raduis;

	void print() {
		cout << this << endl;
		// this هو بوينتر جاهز باشر عالاوبجيكت اللي قام باستدعاه
	}
	};


	int main()
	{
		circle c;
		c.x = 10;
		c.y = 4;
		c.raduis = 8.9;

		// بدي اعمل بوينتر باشر ع c و البونيتر لازم يكون من نفس نوع الاشي اللي باشر عليه 
		circle* p = &c;//و مدام هاد البوينتر باشر عليها اذا عنده القدرة بوصل ل x,y,rad
		// بس ما بزبط نحكيله cout<<p.x لانو هاد بوينتر ادريس ف لازم بالاول اوصل لمحتويات البوينتر بعدها بحكيله يجيب اكس
		// اولويات رياضية 
		cout << (*p).x << endl;

		//ولكن فيه طريقة اسهل للبوينتر وهي arrow
		cout << p->x;
		//بتعامل فيها مع البوينتلر لحتى اوصل لشي دوا الاوبجيكت 
		cout << &c << endl;
		cout << p;
		//بدي اعطي قيم ل x,y,rad عن طريق البوينتر ف بنستحدم السهم

		p->x = 20;
		p->y = 9;
		p->raduis = 7.9;
		c.x = 9;
		cout << &(c.x);
		cout << endl;
		cout << &c<<endl;
		c.print();

	}

