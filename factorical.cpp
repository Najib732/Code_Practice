#include <iostream>
using namespace std;

void Factorial(int number)
{

    int store = 1;

    for (int i = 1; i <= number; i++)
    {
        store = store * i;
    }

    cout << store;
}

int main()
{

    Factorial(6);
}