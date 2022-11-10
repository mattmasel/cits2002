#include <iostream>
#include <fstream>

using namespace std;

template <typename T>           //  NOTHING TO DO WITH FILES JUST TESTING
T add(const T a, const T b) {
    return a + b;
}

int main(void)
{
    ifstream source("helloworld.cpp");
    //ofstream destination("test.txt");

    char x[BUFSIZ];

    while(source) {
        source >> x;
        cout << x << ' ';
    }
    cout << endl;
    source.close();

    cout << add(3.123, 4.0) << endl;

    return 0;
}
