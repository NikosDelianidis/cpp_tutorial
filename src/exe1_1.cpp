/// main.cpp
#include <iostream>
#include <vector>

unsigned short int bitCounter(unsigned int numberX){
	unsigned short int counter = 0;
	for(int i = 0; i < 32; i++){
		if(numberX & 1){
			counter++;
		}
		numberX = numberX>>1;
	}
	return(counter);
}

int main() {
	unsigned int myNumber = 0;
	unsigned short int result;
	
	for(int i=0; i<10; i++){
		myNumber = i + i*i*3 + 130;
		result = bitCounter(myNumber);
		std::cout << "Number is: " << myNumber << ", result is: " << result << "\n";
	}
	
	return 0;
}