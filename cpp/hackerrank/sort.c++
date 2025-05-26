#include <cmath>
// #include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> nums;
    int sz,t;
    cin>>sz;
    nums.resize(sz);
    
    for(int i=0;i<sz;i++){
        cin>>t;
        nums.push_back(t);
    }
    
    
    sort(nums.begin(),nums.end());
    return 0;
}
