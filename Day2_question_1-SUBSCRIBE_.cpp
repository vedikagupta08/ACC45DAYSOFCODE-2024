#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,X;
	std::cin >> t;
	while(t--){
	    double N;
	    std::cin >> N>>X;
	   // if(N>1){
	       
	   // std::cout << X*ceil(N/6) << std::endl;
	   // }
	   // else{
	   //     std::cout << X << std::endl;
	   // }
	
	    std::cout << X*ceil(N/6) << std::endl;
	}
	return 0;
}
