#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

int main()
{
    string num[10] = {
        "zero",
        "one",
        "two", 
        "three", 
        "four", 
        "five", 
        "six", 
        "seven", 
        "eight", 
        "nine"
    };
    int a, b;
    // scanf("%d %d", &a, &b);
    cin >> a, b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9 && i >= 1)
        {
            cout << num[i] << endl;
        }
        else
        {
            if (i % 2)
            {
                cout << "odd" << endl;
            }
            else
            {
                cout << "even" << endl;
            }
        }
    }
    return 0;
}
