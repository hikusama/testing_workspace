// #include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Student
{
    string id;
    string name;
    string age;

public:
    void setId(string id) { this->id = id; }

public:
    void setName(string name) { this->name; }

public:
    void setAge(string age) { this->age = age; }
};

int main()
{
    vector<Student> v;
    char ch;

    while (ch != '0')
    {
        ch = header(ch);

        switch (ch)
        {
        case '1':
            add(v);
            break;

        default:
            break;
        }
    }

    return 0;
}

char header(char ch)
{
    cout << "\n[1] Add\n";
    cout << "[2] Delete\n";
    cout << "[3] Update\n";
    cout << "[4] Show\n";
    cout << "[5] Save\n";
    cout << "[0] Exit\n";
    cout << "\nAction: ";
    cin >> ch;
    return ch;
}

void add(vector<Student> v)
{
    Student s;
    string id, name, age;
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    s.setId(id);
    s.setName(name);
    s.setAge(age);
    v.push_back(s);
    cout << "Added Successfully...\n";
}
void update() {}
void remove() {}
void show(vector<Student> v)
{
    
}

void save(vector<string> student)
{
    string database = "Student.txt";
    ifstream file(database);

    if (!file.is_open())
    {
        cerr << "Error opening a " << database << " Database!." << endl;
    }
    file.close();
}
