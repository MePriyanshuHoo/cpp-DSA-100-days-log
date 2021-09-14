#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 6;
    int *p = &i;
    int **p2 = &p;

    cout << " address of p pointer : " << p2 << " = " << &p << endl;
    cout << "address of int i :" << *p2 << " = " << p << " = " << &i << endl;
    cout << "value of int i :" << **p2 << " = " << *p << " = " << i << endl;

    // when passing double pointer to any function; in most of cases it is only useful if you change **p2 value
    // unless your p is pointing to ay array

    return 0;
}
