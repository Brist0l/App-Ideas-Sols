#include<iostream>
#include<cstring>
#include <ostream>

int main(){
	std::string bin;
	int nums[9] = {128,64,32,16,8,4,2,1};
	int dec = 0;
	std::cout << "Enter Binary:";
	std::cin >> bin;
	if(bin.length() != 8){
		std::cout << "Enter 8 only" << std::endl;
		exit(-1);	
	}
	for (int i = 0; i < 8 ; i++) 
		if(bin[i] == '1')
			dec += nums[i];
	
	
	std::cout << "Dec Num:" << dec;
	
	return 0;
}
