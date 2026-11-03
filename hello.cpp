#include <iostream>
#include <vector>
#include <string>

int main() {
	int x = 10;
	std::string name = "Snowflake";
	std::vector<int> nums = {1, 2, 3, 4, 5};

	std::cout << "Hello " << name << std::endl;

	for (int n : nums)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;

	return 0;
}
