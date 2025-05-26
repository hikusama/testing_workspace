// #include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

class Student
{
    int id;
    string name;
    int age;
    string status;

public:
    void setId(int id) { this->id = id; }

    void setStatus(string status) { this->status = status; }

    void setName(string name) { this->name = name; }

    void setAge(int age) { this->age = age; }

    int getId() { return this->id; }
    string getStatus() { return this->status; }
    string getName() { return this->name; }
    int getAge() { return this->age;}
};

void header()
{
    cout << "\n[1] Add\n";
    cout << "[2] Delete\n";
    cout << "[3] Update\n";
    cout << "[4] Show\n";
    cout << "[5] Save\n";
    cout << "[0] Exit\n";
    cout << "\nAction: ";
}

void add(vector<Student> &v, int &id)
{
    Student s;
    string name;
    int age;
    // cout << "ID: ";
    // cin >> id;
    cout << "Name: ";
nm:
    cin.ignore();
    getline(cin, name);
    if (name.empty())
    {
        goto nm;
    }
    if (name.length() > 30)
    {
        cout << "\n\033[Name must be 30 characters only!\033[0m\n";
        goto nm;
    }
ag:
    cout << "Age: ";
    try
    {
        cin >> age;
    }
    catch (const std::exception &e)
    {
        cout << "\n\033[31mInvalid age!\033[0m\n";
        goto ag;
    }
    if (age == 0)
    {
        goto ag;
    }
    if (age > 99)
    {
        cout << "\n\033[31mAge must be less 100\033[0m\n";
        goto ag;
    }
    id++;

    s.setId(id);
    s.setName(name);
    s.setAge(age);
    s.setStatus("\033[31munsaved\033[0m");

    v.push_back(s);
    system("cls");

    cout << "\n\033[32mAdded Successfully...\033[0m\n";
}
void update(vector<Student> v) {}
void remove(vector<Student> v) {}

void show(vector<Student> v)
{
    cout << "\n___________________________________________________________________________\n";
    cout << "|" << setw(5) << "ID" << setw(3) << "|" << setw(2) << " Name" << setw(25) << "|" << setw(5) << "Age" << setw(3) << "|" << setw(9) << "Status" << setw(17) << "| Total rows: " << v.size() << endl;
    for (auto i : v)
    {
        cout << "|" << setw(to_string(i.getId()).length() + 3)
             << i.getId() << setw(6 - to_string(i.getId()).length())
             << "| " << setw(2) << i.getName()
             << setw(29 - i.getName().length())
             << "|" << setw(to_string(i.getAge()).length() + 2)
             << i.getAge()
             << setw(6 - to_string(i.getAge()).length())
             << "|"
             << setw(3 + i.getStatus().length()) << i.getStatus() << setw(19 - i.getStatus().length())
             << "|" << endl;
    }
}

void save(vector<Student> &student)
{
    string database = "Student.csv";
    fstream file(database);
    if (!file.is_open())
    {
        cerr << "\n\033[31mError opening a " << database << " Database!.\033[0m" << endl;
    }
    else
    {
        try
        {
            for (auto &s : student)
            {
                file << s.getId() << "," << s.getName() << "," << s.getAge() << "\n";
                s.setStatus("\033[32msaved\033[0m");
            }
            system("cls");
            cout << "\n\033[32mSaved Successfully....\033[0m\n";
        }
        catch (const std::exception &e)
        {
            system("cls");
            cerr << "\n\033[31mError saving a file\033[0m\n";
        }
    }

    file.close();
}

int load(vector<Student> &student)
{
    int aiID = 0;
    string database = "Student.csv";
    fstream file(database);
    string line;
    if (!file.is_open())
    {
        cerr << "\n\033[31mError opening a " << database << " Database!.\033[0m" << endl;
    }
    else
    {
        int i = 0;
        try
        {
            while (getline(file, line))
            {
                stringstream ss(line);
                string id, name, age;

                getline(ss, id, ',');
                getline(ss, name, ',');
                getline(ss, age);

                Student s;
                s.setId(stoi(id));
                s.setName(name);
                s.setAge(stoi(age));
                s.setStatus("\033[32msaved\033[0m");
                student.push_back(s);
                cout << "Data loded: [" << i + 1 << "] ";
                for (size_t io = 0; io < i; io++)
                {
                    cout << "=";
                    if (i - 1 == io)
                        cout << ">";
                }
                this_thread::sleep_for(chrono::milliseconds(200));
                system("cls");
                aiID = stoi(id);
                i++;
            }
            if (i > 0)
            {

                cout << "\n\033[32mData loaded Successfully........\033[0m" << endl;
            }
            else
            {
                cout << "\n\033[32m<-- Database initialized -->\033[0m" << endl;
            }
        }
        catch (const exception &e)
        {
            cout << "\n\033[31mData load error: \033[0m" << e.what() << endl;
        }
    }
    file.close();
    return aiID;
}

int main()
{
    vector<Student> v;
    int aiID = 0;
    string ch;
    load(v);

    while (true)
    {
        show(v);
        header();
    chwr:
        getline(cin, ch); 
        if (ch.length() != 1 || ch[0] < '0' || ch[0] > '5')
        {
            if (ch == "0")
            {
                cout << "Program exited.";
                break;
            }
            cout << "\033[31mInvalid input.\033[0m\n";
            cout << "Action: ";
            goto chwr;
        }

        switch (ch[0])
        {
        case '1':
            add(v, aiID);
            break;
        case '2':
            remove(v);
            break;
        case '3':
            update(v);
            break;
        case '4':
            show(v);
            break;
        case '5':
            save(v);
            break;
        }

        // Loop continues
    }

    return 0;
}
