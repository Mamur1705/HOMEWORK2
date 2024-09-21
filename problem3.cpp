#include <iostream>
using namespace std;
int main() {
    char ch;
    float h;
    cin>>ch>>h;
    if(ch=='M') {
        if(h<=1.70) {
            cout<<"Short";
        }else if(h>=1.70 && h<1.85) {
            cout<<"Normal";
        }else if(h>=1.85) {
            cout<<"Tall";
        }
    }else if(ch=='F') {
        if(h<1.60) {
            cout<<"Short";
        }else if(h>=1.60 && h<1.75) {
            cout<<"Normal";
        }else if(h>=1.75) {
            cout<<"Tall";
        }
    }
    return 0;
}