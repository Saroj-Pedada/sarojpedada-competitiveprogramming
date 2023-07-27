#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int n = a.size();
    for(int i=0;i<n;i++) {
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);
        if(c1-'a'<c2-'a') {
            cout << -1 << endl;
            return 0;
        } else if(c1-'a'>c2-'a') {
            cout << 1 << endl;
            return 0;
        } else {
            continue;
        }
    }
    cout << 0 << endl;
    return 0;
}