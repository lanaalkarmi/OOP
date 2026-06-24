
#include <iostream>
using namespace std;

//pointer --> متغير محتواه عنوان (address)



int main()
{
	int x = 7; 

	//cout << x <<" "<< &x << endl;;// اي متغير بعمله بحجز مكان بالذاكرة مخزن بادريس معين
	// لحتى اعرف وين مخزن بالذاكرة بستخدم اشارة الريفيرنس &\
	//الريفيرنس هي عبارة عن ال address و لازم يكون بنفس نوع الاشي اللي باشر عليه
	//بينعمل عشان ياشر عندي ع اشي معين
	int* ptr = &x
		
		;// عملنا بوينتر عن طريق int *ptr و بعدها 
	// حكيناله تعال اشر عندي عالادريس الحاص ب المتغير اكس &x
	
	cout << x << " " << &x << endl;
	cout << ptr << " " << &ptr << endl;
	// ptr --> it will print the address of x == (&x)
	// & ptr --> it will print the address of the variable ptr 


}

