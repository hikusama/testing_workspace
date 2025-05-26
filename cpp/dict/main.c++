#include <iostream>
#include <vector>
using namespace std;

void show(vector<string> s)
{

    cout << "All List\n";
    if (s.size() == 0)
    {
        cout << "<<-- Empty -->>\n";
    }
    else
    {
        for (auto i = 0; i < s.size() - 1; i++)
        {
            cout << i << " " << s[i] << endl;
        }
    }
}
 
void choices()
{
    cout << "[1] Add\n";
    cout << "[2] Delete\n";
    cout << "[0] Exit\n";
}

int main()
{
    vector<string> v;
    char choice;
    while (choice != '0')
    {
        choices();
        cout << "Choose: ";
        cin >> choice;
        if (choice == '1')
        {
            string val;
            cout << "Add: ";
            cin >> val;
            v.push_back(val);
            cout << "\nAdded successfully...\n";
            show(v);
        }
        else if (choice == '5')
        {
            show(v);
        }
    }

    cout << "\n\n.........Ended\n";
}
