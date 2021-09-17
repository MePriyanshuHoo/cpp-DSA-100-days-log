#include <iostream>
using namespace std;
int f(int const r);
int const f2(int r);

int main()
{
    //constant var
    //can not change it
    //requires initialazation while defining

    const int ci = 10;
    int const ci2 = 11;

    ///////////-------------- refrence

    //refrence can also be constant
    int const &rci = ci;

    // constant can refer to a const or non-const var
    int i = 0;
    int const &cri = i;

    // now  you can change i simply
    i++;
    // but you can not change it by cri
    // paths are constant not memory

    // constant variables can only have contant refrence variable

    ///////////-------------- pointers
    // same as refrence variable
    int const *pci = &i;

    ///////////-------------- functions
    //constant functions assures that they will not change varible you have passed them

       return 0;
}
int f(int const r)
{
    // this can not change r
    return 0;
}
