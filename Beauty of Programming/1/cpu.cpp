#include <iostream>
#include <cstdio>
#include <unistd.h>

int main() {
	for( ; ;) {
		for(int i = 0; i < 920000000; i++)
			;
		std::cout << "sleep" << std::endl;
		sleep(1000);
	}

	return 0;
}