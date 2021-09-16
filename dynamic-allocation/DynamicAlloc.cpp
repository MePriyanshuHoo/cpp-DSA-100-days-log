#include <iostream>
using namespace std;
int main()
{

    // for a large size of memory datatypes you can actally define memory in HEAP memory
    //syntax is
    int *p = new int;

    //new int allots memory of int size and we store address of that memory address in p pointer

    int *pa = new int[5];
    //syntax to define array in Heap

    // heap memmory deasn't clear it self like stack memory does
    //we need to clear that manually

    delete p;
    delete[] pa;

    //this doesn't deletes pointes so we can still use them

    // it's bit tricky to define 2D array in heap memory

    int **pa2d = new int *[5];
    // made and array of pointer which will point to rows of 2D array

    for (int i = 0; i < 5; i++)
    {
        pa2d[i] = new int[6];
        for (int j = 0; j < 6; j++)
        {
            cin >> pa2d[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << pa2d[i][j] << " ";
        }
        cout << endl;
    }

    //to delete first delete all array rows

    for (int i = 0; i < 5; i++)
    {
        delete[] pa2d[i];
    }
    // now you can delete pointr's array
    delete[] pa2d;
    return 0;
}
