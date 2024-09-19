#include <iostream>
using namespace std;
int main() {
   int a, b;
    cin>>a>>b;
    if (a==1) {
        cout<<"Bus";
    }else if (b==1){
        cout<<"Walk";
    } else {
        cout<<"Bike";
    }
    return 0;
}