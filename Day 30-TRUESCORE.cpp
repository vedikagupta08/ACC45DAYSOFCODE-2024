#include <iostream>
using namespace std;

int main() {
	int t;
	int a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if(a<=c && b<=d)
	    {
	        cout<<"POSSIBLE"<<endl;
	    }
	    else
	    cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}