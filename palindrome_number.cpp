#include <iostream>
using namespace std;

int main()
{
    int input_num, original_number, reversed_number, digit;
    cout << "Enter a number: ";
    cin >> input_num;
    original_number = input_num;
    reversed_number = 0;

    for (; input_num != 0; input_num /= 10)
    {
        digit = input_num % 10;
        reversed_number = (reversed_number * 10) + digit;
    }

    if(reversed_number == original_number)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}