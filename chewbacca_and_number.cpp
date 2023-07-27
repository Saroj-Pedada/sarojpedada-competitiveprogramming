#include<iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    for(auto i:n) {
        if(i-'0' >= 5) cout << 9-i+'0';
        else cout << i-'0';
    }
    return 0;
}