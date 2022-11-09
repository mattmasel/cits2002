#include <iostream>

using namespace std;

void outputWithNewline(char *x)
{
    cout << x << endl;
}

void outputWithNewline(int x)
{
    cout << x << endl;
}

void swapInts(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int number;
    char *word = new char;
    
    cout << "enter a word: ";
    cin >> word;
    
    cout << "enter a number: ";
    cin >> number;
    
    outputWithNewline(number);
    outputWithNewline(word);
    delete word;

    int new_number = 10;

    swapInts(number, new_number);
    outputWithNewline(number);

    return 0;
}
