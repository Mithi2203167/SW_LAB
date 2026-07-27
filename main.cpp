#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Hello from Conflict Branch!" << endl;
    cout << "5 + 7 = " << add(5, 7) << endl;

    return 0;
}