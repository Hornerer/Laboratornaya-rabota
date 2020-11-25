
#include <iostream>

int main()
{
	int n, x=0;
	std::cin >> n;
	while (n>0) {
		if (n % 4 > 0) {
			break;
		}
		else {
			n = n / 4;
			++x;

		}
	}
	if (x > 0) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


