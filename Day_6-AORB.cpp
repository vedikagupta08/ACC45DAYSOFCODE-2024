#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b,m,c,d;
	    cin>>x>>y;
	    a=500-(2*x);
	    b=1000-(4*(y+x));
	    c=1000-(4*y);
	    d=500-(2*(y+x));
	    
	    m=max((a+b),(c+d));
	    cout<<m<<endl;
	}
	return 0;
}