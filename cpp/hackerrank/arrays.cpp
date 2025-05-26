#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    vector<int> ar(n);
    for (int i = 0; i < n;i++) {
        scanf("%d",&ar[i]);
    }
    for (int i = n-1; i >= 0;i--) {
        
        cout<<ar[i];
    }
    
    
    return 0;
}
