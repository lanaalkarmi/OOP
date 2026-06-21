
#include <iostream>
using namespace std;

// constructor --> 1. Defult constructor   2. parametrized constructor
// constructor is a special method
// name same as class name
// doesn't have " return " data type 


class Person {
private:
    int age; 
    string name;
public:

     // defult constructor ( no parameters ) 
    // Prevents the system from assigning garbage/negative values if the user forgets to provide data.
   // It initializes the object with standard, pre-defined default values for all users.
  // we have ONLY one defult constructor
    
    Person() {
      age = 18;
      name = " ";
    }
    

    // parametrized constructor 
    // works like a setter - assignment operation 
    // order matters in this type of constructors 
    // its allowed to have more than one parametrized constructor 

    Person(int a, string n) {
        age = a;
        name = n;
    }
    Person(int a) {
        age = a;
    }

    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
    void print() {
        cout << name << " " << age << endl;
    }

};

int main()
{
    Person p;
    p.setName("lana");
    Person p2( 20 , "lana" );
    p.print();

}

