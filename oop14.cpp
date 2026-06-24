
#include <iostream>
using namespace std;

//friend --> class & function 
// friend function --> عندي فنكشن معين خارج الكلاس كله رح يكون قادر يوصل للبرايفت بكيلاس معين
// friend class --> عندي كلاس معين ملوش علاقة بكلاس تاني ولا حاى ورثان منه بقدر يوصل للاتربيوت البرايفت المودودة عندي
// friend فكرته كله انو بقدر يشوف البرايفت عند غيري بقدر اوصل ل اي اشي برايفت

class student {
    string name;
    int avg;
public:
   friend void print(student& a);// طبعا بنفدر نحطه باي مكان تحت الببلك بس الافصل تحته مباشرة 
   friend class stuInfo;
   student() {}
    student(string n, int a) {
        name = n;
        avg = a;
    }
    void setname(string n) {
        name == n;
    }
    void setavg(int a) {
        avg = a;
    }
    string getname() {
        return name;
    }
    int getavg() {
        return avg;
    }
};
// friend class --> كلاس خارجي و بقدر بوصل للبرايفت بكلاس تاني 
class stuInfo {
public:
    void edit(student & x) // لما بدي اعدل رح اعدل يا عالاسم يا عالمعدل اذا لازم يستقبل اوبجيكت من كلاس ستيودنت
    {
        x.name = "jad";
        x.avg = 98;
    }

    void print(student & a) {
        cout << a.name << " " << a.avg;
    }

    // طبعا ما رح يزبط فالحل نخلي الكلاس فريند
};
/*void print(student  & a) {
    cout << a.name << " " << a.avg;
    // هون طبعا رح يحطلي ايرور لاني قاعدرة بحاول اوصل لبرايفت اتربيوتس من برا الكلاس فالحل عن طريق الفريند بنسخ الفنكشن زيما هو و بحطه تحت الببلك
    //
    */



int main()
{
    student s("lana", 90);
    print(s);
    stuInfo stu;
    stu.edit(s);
    stu.print(s);
       
}

