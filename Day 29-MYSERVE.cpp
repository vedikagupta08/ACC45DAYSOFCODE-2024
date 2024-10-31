#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int a, b, s;
	    cin>>a>>b;
	    s = (a+b)%4;
	    
	    switch (s) {
	        case 0:
	        case 1:
	            cout<<"Alice"<<endl;
	            break;
	        case 2:
	        case 3:
	            cout<<"Bob"<<endl;
	    }
	}
	return 0;
}