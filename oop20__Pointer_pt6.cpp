#include <iostream>
using namespace std;

// الاري هي عبارة عن بوينتر ثابت باشر ع اول مكان بالارري 
int main()
{
	int arr[] = { 1,2,3,4 };
	cout << arr << endl;
	cout << &arr[0] << endl;
	cout << *arr << endl;
	cout << arr + 1 << endl;
	cout << arr + 2 << endl;
	cout << *arr + 1 << endl;//1+1
	cout << *arr + 2 << endl;//1+2
	cout << *(arr + 1) << endl;// هون بدي يمشي ع كل الانديكس ف عملت الاقواس ك اولوية
	cout << *(arr + 2) << endl;//3 index 2
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(arr + i) <<" "<< endl;

	}
	for (int i = 0; i < 4; i++) {
		cout << arr++ << endl; // هون بالبداية بخطرلي انو رح يطبع الادريس و يزيد عليه ع حسب قيمة الdata type 
		// و لكن رح يعطي ايرور لانو الاري هو بوينتر ثابت ما بيتحرك
		// ف بعمل بوينتر جديد و بحركه ع هوا هالاشي 

	}
	int* p = arr;
	for (int i = 0; i < 4; i++) {
		cout << p++ << endl;

	}
	//لو بدي القيمة
	for (int i = 0; i < 4; i++) {
		cout << *(p++) << endl;

	}
	for (int i = 0; i < 4; i++) {
		cout << (*arr)+1 << endl;// 2 2 2 2 --> لانو بوينتر الارري ثابت ما بيتحرك ف بكل لفة حيضل عند اول قيمة

	}

	cout << "==================================" << endl;

	int s[] = { 1,2,3,4,5,6 };
	int sum = 0;

	for (int i = 0; i < 6; i++) {
		sum += *(a + i);
	}

	cout << sum;






}
