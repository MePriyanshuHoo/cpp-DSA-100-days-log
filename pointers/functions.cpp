#include <iostream>
using namespace std;
int pointerprint(int *P)
{

    cout << P << endl;
    return 0;
}

int addonepointer(int *p)
{

    cout << p << endl;
    p++;
    cout << p << endl;
    return 0;
}

int arraytofunction(int *array)
{
    cout << array << endl;
    for (int c = 0; c < 3; c++)
    {
        cout << *(array + c) << endl;
    }
    return 0;
}
int main()
{
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70};
    int *p = &a[0];

    //  passing pointer to a function
    pointerprint(p);

    //performing oprations on pointer

    cout << p << endl;
    addonepointer(p);
    cout << p << endl;

    /*
    output 
    "0x61fe0c
    0x61fe0c
    0x61fe0c
    0x61fe10
    0x61fe0c"

    basically passing pointer to function and changing them doesnt actually changes real pointer same as other datatypes
    */

    //passing an array
    arraytofunction(a);
    // this pass as pointer to array a

    // since we are assing array as pointer we can move pointer and pass a part of array also
    arraytofunction(a + 3);
    ///now this will ignore first 3 indexes

    return 0;
}
