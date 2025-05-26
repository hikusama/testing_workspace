#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> rs; 
    stringstream ss(str);
    string token;
    while (getline(ss, token ,','))
    {
        rs.push_back(stoi(token));
    }
    
    return rs;
}

int main() {
    string str;
    cin >> str;
    cin.ignore();
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}