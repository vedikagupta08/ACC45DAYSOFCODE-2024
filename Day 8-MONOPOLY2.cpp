#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
    
    int P, Q, R, S;
    cin >> P >> Q >> R >> S;

    if (P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl; 
    }
 }
    return 0;
}

