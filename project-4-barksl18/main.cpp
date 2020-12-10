#include <iostream>
using namespace std;

void PrintArray2() {
    int array1[10];
    int* array2 = new int[10];
    cout << array1 << endl; // line 3
    cout << array2 << endl; // line 4
    delete [] array2;
}

void foo1(int xval){
    int x = xval;
    cout << &x << endl;
    cout << x << endl;
}

void foo2(int dummy){
    int y = dummy;
    cout << &y << endl;
    cout << y << endl;
}

void printVariableInformation() {
    double f = 23.7;
    int i = 5;
    bool b = false;

//    cout << &f << endl;
//    cout << &i << endl;
//    cout << &b << endl;
}

void printArrayInformation() {
    int arrayOfIntegers[10];

    int i;
    int init = 0;

    for (i = 20; i <= 40; i++) {
        if (i % 2 == 0) {
            arrayOfIntegers[init] = i;
            init = init + 1;
        }
    }

    cout << arrayOfIntegers        << endl;
    cout << &(arrayOfIntegers[0])  << endl;
    cout << arrayOfIntegers + 0    << endl;
    cout << arrayOfIntegers[0]     << endl;
    cout << *(arrayOfIntegers + 0) << endl;
    cout << &(arrayOfIntegers[1])  << endl;
    cout << arrayOfIntegers + 1    << endl;
    cout << arrayOfIntegers[1]     << endl;
    cout << *(arrayOfIntegers + 1) << endl;
    cout << (*arrayOfIntegers) + 1 << endl;
    //cout << &(arrayOfIntegers[10]) << endl;
    //cout << arrayOfIntegers + 10   << endl;
    //cout << arrayOfIntegers[10]    << endl;
}

int main(int argc, char* argv[]) {

    printVariableInformation();
    //printArrayInformation();
    foo1(5);
    foo2(8);
    PrintArray2();

    return 0;
}