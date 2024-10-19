#include <iostream>
using namespace std;

int main() {
	int t,bike,car;
	std::cin >> t;
	while(t--){
	    std::cin >> bike>>car;
	    if(bike>car)
	    {
	        std::cout << "CAR" << std::endl;
	    }
	    else if(bike==car)
	    {
	        std::cout << "SAME" << std::endl;
	    }
	    else
	    {
	        std::cout << "BIKE" << std::endl;
	    }
	}
	return 0;
}