
#include <iostream>
#include <string>
using namespace std;

// read a positive number from the user
int ReadPositiveNumber(string message)
{
    int Num = 0;
    do
    {
        cout << message << endl;
        cin >> Num;
    } while (Num <= 0);  // repeat if number is 0 or negative

    return Num;
}

// print digits of number in reverse order
void PrintReverseDigits(int Num)
{
    while (Num > 0)
    {
        cout << Num % 10 << endl;  // print last digit
        Num /= 10;                  // remove last digit
    }
}

int main()
{
    // get number and print digits in reverse
    PrintReverseDigits(ReadPositiveNumber("Enter a positive number:"));
    return 0;
}