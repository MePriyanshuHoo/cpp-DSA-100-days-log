#include <iostream>
using namespace std;

int main()
{
    // pointers are datatypes storing allocated address of other datatypes

    int i = 5;
    // here as I've defineed a new variable a new memmory has allocated in my CPU

    int *p = &i;
    //  Defined a pointer which stores address of an int, here i's

    cout << i << " is stored at" << p << " = " << &i << endl;
    // output : "5 is stored at0x61fe14 = 0x61fe14"

    cout << i << " = " << *p << endl;
    cout << &i << " = " << p << endl;
    // p = address of i = &i
    // *p = value of i = i

    // value of i can be access by *p

    *p++;
    // add 1 to value stored at address contained in p

    p++;
    //move p's address to next value stored
    //not sure what is stored next to i
    //it may be a garbage or a valueble thing
    /***********alert*********/
    // do not play with garbage pointers it may have stored anything

    // since arrays are continues memorry allocation we can access next index by adding 1 to pointer
    int a[3] = {0, 1, 2};
    int *ap = &a[0];

    cout << *ap << endl;
    // prints index 0
    ap++;
    cout << *ap << endl;
    // prints index 1

    int *ap = &a[0];

    /*************FUN PART************/

    cout << a << " = " << ap << endl;

    // a[] i array but memmory is assigned at name of a
    // but a doesn't contains value of a[0] so a stores his own address

    /**********diffrence in pointer to a[0] and a*************/
    // sizeof(a) == size of memmory allocated array
    //but sizeof(ap) == size of memmory allocated to store pointer datatype

    //&a == a == ap != &ap
    // *a == *ap

    //can't reallocate or change value of a
    // you can't do (a = ap) but you can do (ap = a)

        return 0;
}
