

#include <iostream>
using namespace std;
class rec {
public:
    int height;
    int width;
    int calcArea() {
        return height * width;
    }
};

int main()
{
    //Heap
    // بوينتلر الارري بالستاك ثابت ما بقدر احركه بينما بالهيب بتحرك مش ثابت

    rec *r = new rec;
    r->height = 9;
    r->width = 7;
    cout << r->calcArea();
    //البوينتر بيوصلهم عن طريق ->
    int size; cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << &arr[i]<<" ";//address
        //الارري عبارة عن بوينتر باشر ع اول مكان 
    }
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    for (int i = 0; i < size; i++) {
        cout << *arr++ << " ";
    }

}

