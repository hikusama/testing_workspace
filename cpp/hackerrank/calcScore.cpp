#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student
{

public:
    vector<int> scores;
    Student() {

    };
    void input()
    {
        for(int i = 0;i < 5;i++){
            int num;
            cin>>num;
            this->scores.push_back(num);
        }
    }
    int calculateTotalScore(){

        int sum = 0;


        for(int i : scores){
            sum += i;
        }
        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
