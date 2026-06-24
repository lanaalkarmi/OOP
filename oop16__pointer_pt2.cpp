
#include <iostream>
using namespace std;

//pointer --> متغير محتواه عنوان (address)
//ليش لازم 


int main()
{
	int x = 7;
	int* ptr = &x;
	cout << x << " " << &x << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	// هاي يعني جيب القيمة اللي مخزنة بهاد الادريس 
	*ptr = 6; // the value of x
	// زي كانو غير المحتوى تاع اكس 
	cout << x << " " << &x << endl;// الادريس بضل زيما هو لاني بس فيرت القيمة ما طبيت بالادريس
	cout << ptr << endl;
	cout << *ptr << endl;

// لما اعمل اكتر من متغير من نوع int المسافة بينهم بتكون 4 بايت


}
