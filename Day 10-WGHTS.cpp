#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    int W, X, Y, Z;
    cin >> W >> X >> Y >> Z;
    
    if (W == X || W == Y || W == Z || 
        W == X + Y || W == Y + Z || W == X + Z || 
        W == X + Y + Z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}
