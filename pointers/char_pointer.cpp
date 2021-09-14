#include <iostream>
using namespace std;
int main()
{

    // char array works different
    char str[] = "new string";
    char *p = &str[0];

    cout << str << endl;
    // in int array this prints address of a[0] but here it prints string
    cout << p << endl;
    // same for it's pointer
    /*******************8888888888888888888888888888**********************888888888888888888888888888*********/

    cout << *p << endl;
    // this prints "n"
    cout << *(p + 1) << endl;
    // this is "e"

    char c = 'f';
    char *pc = &c;
    cout << pc << endl;
    // that's gonna try to print char array (string) and wont stop till it founds null pointer
    return 0;
}
