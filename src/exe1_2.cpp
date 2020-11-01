/// main.cpp
#include <iostream>
#include <vector>

unsigned int checksumCalc(unsigned int numberX){
	unsigned int counter = 0;
	unsigned int flag = 0;
	unsigned int buf = 0;
	for(int i = 0; i < 32; i++){
		if(flag==0){
			counter += numberX%10;
			flag = 1;
		}
		else{
			buf = numberX%10;
			buf *= 2;
			if(buf < 10){
				counter += buf;
			}
			else{
				counter += buf%10;
				buf /= 10;
				counter += buf;
			}
			flag = 0;
		}
		numberX /= 10;
		if(numberX == 0)break;
	}
	return(counter);
}

int main() {
	unsigned int myNumber = 0;
	unsigned short int result;
	
	for(int i=0; i<10; i++){
		myNumber = i + i*i*3 + 130;
		result = checksumCalc(myNumber);
		std::cout << "Number is: " << myNumber << ", result is: " << result << "\n";
	}
	
	return 0;
}