
#include <iostream>
#include <cstring>
bool strobogrammatic_number(std::string num) {
	for (int i = 0; i < num.length() / 2; ++i) {
		if (num[i] == '6') {
			if (num[num.length() - 1 - i] != '9') {
				return false;

			}
		}
		else if (num[i] == '9') {
			if (num[num.length() - 1 - i] != '6') {
				return false;
			}
		}
		else if (num[num.length()-i-1] !=num[i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	std::string num;
	std::cin >> num;
	if (strobogrammatic_number(num)) {
		std::cout << "True";
	}
	else {
		std::cout<<"False";
	}
	return 0;
	
}


