#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> n,f;
    int q,input;
    cin>>q;
    for(int i = 0;i < q; i++){
        cin>>input;
        n.push_back(input);
    }

    cin>>q;
    for(int i = 0;i < q; i++){
        cin>>input;
        f.push_back(input);
    }
    
    
        for (size_t i = 0; i < f.size(); i++)
    {

        for (int j = 0; j < n.size(); j++)
        {
            if (f[i] == n[j])
            {
                cout <<"Yes " << j+1 << endl;
                break;
            }

            if (f[i] > n[j-1] && f[i] < n[j])
            {
                cout <<"No " << j+1 << endl;
                break;
            }else if(j == 0 && n[j] < f[i]){
                cout <<"No " << j+1 << endl;
                break;
            }else if(j == n.size()-1 && n[j] < f[i]){

            }
        }
    }
    
    return 0;
}
