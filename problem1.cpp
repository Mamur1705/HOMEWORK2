#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=2147483647) {
        cout<<"NO";
    } else if(n>=((-1)*2147483647)) {
        cout<<"YES";
    }
    return 0;
}