#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
//   scanf("%s\n%s",&a,&b);
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a<<b<<endl;

    a.push_back(b[0]);
    b[0] = a[0];
    a[0] = a[a.length()-1];
    a.pop_back();
    cout<<a<<" "<<b<<endl;
  
    return 0;
}