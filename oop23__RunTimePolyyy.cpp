#include <iostream>
#include <exception>// بالتطبيقات بفرضوا انو ابستلراكت كلاس و بالتالي ما بزبط ناخد منه اوبجيكت
using namespace std;

//تطبيقات run time poly.

//exeption --> الخطا الناتج عن المبرمج(استثناء(
// فهو بلتقط الحطا و بكمل تنفيذ باقي البرنامج ما بوقف
//error --> الحطا الناتج من بيئة البرنامج نفسها المبرمج ما الو علاقة فيها
class zeroex :public exception {
public:
	const char* what() const throw() {//لما احكيله char لازم ارجعله اشي سترينج 
		//و هاد ميثود جاهز بنضيفه ويما هو بس بنعمله اوفررايد
		return "cant divide by zero ";
	}
};
class negativeex : public exception {

public :
	const char* what() const throw() {
		return " cant divide by negative number ";
	}
};

int divide(int a, int b)
{
	if (b == 0) {
		//throw exception();
		// برميلي اوبجيكت من كلاس الاكسبشن
		throw new zeroex();
	}
	else if (b < 0) {
		throw new negativeex();
	}
	
	else {
		return a / b;
	}
}

int main()
{
   
	try {
		cout << divide(7, -1);

	}
	catch (zeroex* e) {
		// كاتش اللي بتلتقط اوبجيكت من كلاس الاكسبن و ما بتشتغل بدون تراي
		//هيك صار بقدر يوصل لكل الميثودز اللي بكلاس الاكشبشن ولكت عنا ميثود كثير مهمة اللي هي WHAT 
		// بتحكيلنا شو الغلط اللي عنا
		cout << e->what()<< endl;

	//}
	catch (negativeex* e) {
		cout << e->what();
	}

	//one try .. several catches 
	//ولكن مرات بزبطش نضل نعمل كاتشز ف بنعملها ب poly.
	// ف دول الكاتش بناخد بوينتر من الاكسبشن و بيتشكل او باشر باشكال ابناءه 
	// متل هيك
	catch (exception* e)
	{
		cout << e->what() << endl;
	}
	
	cout << "byeeee";
}

