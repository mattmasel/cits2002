#include <iostream>

using namespace std;

int main(void)
{
    int *x = new int;

    cout << "enter a number: ";
    cin >> *x;
    cout << *x << endl;

    delete x;
    return 0;
}
