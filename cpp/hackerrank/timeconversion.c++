#include <bits/stdc++.h>
#include <sstream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string temp,tm,hrs,f;
    int hh;
    temp = s;
    f = s;
    tm = s.substr(8,10);
    hrs = temp.substr(0,2);
    hh = stoi(hrs);
    
    if (tm == "PM")
    {
        if (hh < 12)
        {
            hh += 12;
            hrs = to_string(hh);
        }  
    }
    else if (tm == "AM")
    {
        if (hh == 12)
        {
            hrs = "00";
        }
    }
    f = f.substr(0,8);
    f = f.substr(2,7);
    hrs += f;
    return hrs;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    // cout.close();

    return 0;
}
