#include <random>
#include <iostream>

int main(){
	std::random_device rd;
	std::minstd_rand rnd(rd());
	std::uniform_int_distribution<> d {15,25};


	for(unsigned i = 0; i < 10; i++)
		std::cout << d(rnd) << ' ';
	return 0;
}


