#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int X, Y;
    cin >> X >> Y;

    if (2 * Y >= X) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl; 
    }
    }
    return 0;
}
