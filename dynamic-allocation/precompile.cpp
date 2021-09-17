#include <iostream>
using namespace std;

#define Burrr 69
//macro during compiling time all "Burrr" will be replaced with 69

inline int max(int a, int b)
{
    return (a < b) ? a : b;
}
//this  function's 1 line code block will be replaced from "max(a,b)"
//2-3 line code block depends on compiler whether it will make it inline or not
// for 4 or more compiler won't treat it as inline function

int globalF = 69;
// this variable has scope of whole code so every function can exess it and change it1

int SuperSum(int a, int b, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0)
{
    return a + b + c + d + e + f + g;
}
//since ariable exept a,b are altready initialized
//variablher than a,b arional

int main()
{
    cout << "hello" << endl;
    cout << SuperSum(10, 20) << endl;
    cout << SuperSum(10, 20, 30) << endl;
    cout << SuperSum(10, 20, 30, 40) << endl;
    cout << SuperSum(10, 20, 30, 40, 50) << endl;
    cout << SuperSum(10, 20, 30, 40, 50, 60) << endl;
    cout << SuperSum(10, 20, 30, 40, 50, 60, 70) << endl;

    return 0;
}
