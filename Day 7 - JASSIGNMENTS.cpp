#include <iostream>
using namespace std;

int main() {
    int T,X;  
    cin >> T;  
    while(T--)
    {
        cin>> X;
    int end_time = X + 3;  

    if (end_time <= 10) 
        cout << "Yes" << endl; 
     else 
        cout << "No" << endl;  
    
}
    return 0;
}
