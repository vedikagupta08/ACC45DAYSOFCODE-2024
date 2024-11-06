#include<iostream>
    using namespace std;
    int main(){
        int t;
    cin>>t;
    while (t--){

    int x,a,b;
    cin>>x>>a>>b;
    int total=a+2*b;
    if (total>=x){
     cout<<"QUALIFY"<<endl;
    }
    else{
    cout<<"NOTQUALIFY"<<endl;
    }
    
    }
    return 0;
    }