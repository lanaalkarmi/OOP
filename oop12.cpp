#include <iostream>
using namespace std;

//static --> attribute & method

//static attribute --> يعني عندي اتربيوت معين حيكون مشترك بين جميع الاوبجيكتس ( بالقيمة )
// static method --> بقدر اني اوصل لهاي الميثود عن طريق الكلاس نفسه بدون الحاجة الى اوبحكيت

class student {
    string name;
    int id;
    static int count;// الستاتك ما بقدر اعطيه قيمة اوليه من جوا الكلاس
    // بخليها global
public:
    student() {
       //كلما اعمل اوبجيكت بزيد الكاونت 
        count++;
        id = count;
    }
    student(string n, int i) {
        name = n;
        id = i;
    }
    int get_id() {
        return id;
    }
   static  int getcount() {
        return count;
    }

};
int student::count = 0;//هاي الجملة معناها عندي بكلاس الستيودنت اتربيوت من  نوع int تعال اوصله عن طريق النقطتين الراسيتين و اي اشي ستاتك بوصله عن طريقتهم و اعطيها قيمة ابتدائية بتساوي صفر

int main()
{
    student s;
    cout << s.get_id()<<endl;
    student s1;
    cout << s1.get_id()<<endl;
    cout << student::getcount() << endl;
}

