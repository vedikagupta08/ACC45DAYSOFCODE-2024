#include <iostream>
using namespace std;

int main() {
  	int x, y;
	int t;
	cin >> t;
	while (t--) {
        cin >> x >> y;
        int count = (y - 1) / x;
        cout << count << endl;
    }
    return 0;
}

