#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    char c = i;
    // implicit typecasting: compiler does for us
    //char saves copy of int and reads it as char value

    cout << c << endl;

    int *p = &i;
    char *pc = (char *)p;

    // explicit typecasting : compler wouldnt accept it automaticlly
    //char poiter stores address of int and makes it reads as char

    cout << pc << " = " << p << endl;
    //but
    cout << *pc << " != " << *p << endl;

    return 0;
}