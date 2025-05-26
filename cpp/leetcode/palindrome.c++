#include<iostream>
#include<algorithm>
using namespace std;

// bool isPalindrome(int x) {
//     string n = to_string(x);
    
//     for(int i = 0;i<n.length();i++){
//         if()
//         if(n[i] != n[n.length()-i] && i < n.length()){
//             return false;
//         }

//     }
//     return true;
// }
bool isPalindrome(int x) {
    string n = to_string(x);
    for(int i = 0;i<n.length();i++){

            if(n[i] != n[n.length()-1-i]){
                return false;
            }

    }
    return true;
}

int main(){

    cout<<isPalindrome(1234184321);

}