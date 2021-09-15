#include <iostream>
using namespace std;

int addone(int &j)
{
    j++;
    return 0;
}

int main(int argc, char const *argv[])
{
    int i = 10;
    int &j = i;

    //refrence variables : i and j use the same memmory
    //need to intialize as declaire

    // usefull in function
    addone(i);
    //changes made by function will also be applied to varieble passed in function

    // can also declaire functions as refrence varieble but after execution funcionwill be terminated

    return 0;
}
