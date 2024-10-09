#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n;
	    cin>>n>>x;
	    if(n>x)
	    {
	        cout<<min((n-x),x)<<endl;
	        
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}