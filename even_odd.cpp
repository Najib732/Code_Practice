#include <iostream>
using namespace std;

string Function(int no)
{
    if (no % 2 == 0)  
    {
        return "even";
    }
    else  
    {
        return "odd";
    }
}

int main()
{
    int number;
    cout << "Insert Your Data : ";
    cin >> number;
    string result = Function(number);
    cout << result;
}
