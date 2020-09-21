#include <random>
#include <iostream>
#include <chrono>

int main(){
	using clk = std::chrono::system_clock;
	//std::random_device rd;
	std::minstd_rand rnd{unsigned(clk::now().time_since_epoch().count())};
	std::uniform_int_distribution<> d {15,25};


	for(unsigned i = 0; i < 10; i++)
		std::cout << d(rnd) << ' ';
	return 0;
}


