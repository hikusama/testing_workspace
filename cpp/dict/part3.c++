#include <iostream>

using namespace std;

int main()
{

    int input = 5;
    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (j >= input - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}