#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    vector<int> graded;
    int remainder = 0, num; 
    for(int i: grades){
        remainder = i%5;
        
        if(remainder >= 5){
            num = i + (5 - remainder);
        }else{
            num = num - remainder;
        }
        remainder = num - i;
        if(remainder < 3 && i >= 38){
            graded.push_back(num);
        }else{
            graded.push_back(i);
        }
        
    }
    return graded;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));
    vector<int> grades;
/* 73
67
38
33
*/
    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";


    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
