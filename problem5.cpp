#include <iostream>
using namespace std;
int main() {
    float a, b;
    char s;
    cin>>a>>s>>b;
    if(s=='+') {
        cout<<a+b;
    }else if(s=='-') {
        cout<<a-b;
    }else if(s=='*') {
        cout<<a*b;
    }else if(s=='/') {
        if(b!=0) {
            cout<<a/b;
        }else {
            cout<<"Not divisible";
        }
    }
    return 0;
}