#include <iostream>     //  eqv. to stdio.h

using namespace std;    //  removes need for std::

int main(void)
{
    int x;

    cout << "hello, world!\n" << "please insert an integer: ";

    cin >> x;
    cout << x/3 << ' ' << x*2 << '\n';

    cout << "your math has been solved!\n";

    return 0;
}