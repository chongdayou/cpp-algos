#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int> &v)
{
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> nums = {3, 2, 4};
	nums.push_back(5);
	std::cout << "nums: " << std::endl;
	printVector(nums);

	std::vector<int> cp = nums;
	std::sort(cp.begin(), cp.end());

	std::cout << "nums after sort cp: " << std::endl;
	printVector(nums);

	std::cout << "cp after sort: " << std::endl;
	printVector(cp);

	std::vector<int> &ref = nums;
	std::sort(ref.begin(), ref.end());
	std::cout << "nums after sort ref: " << std::endl;
	printVector(nums);

	std::vector<int> a;
	std::vector<int> b(5);
	std::vector<int> c(5,-1);
	std::vector<int> d = {1,2,3};
	std::vector<std::vector<int>> grid(3, std::vector<int>(4,0));

	std::cout << "grid: " << std::endl;
	for (std::vector<std::vector<int>>::iterator rowIt = grid.begin(); rowIt != grid.end(); rowIt++)
	{
		for (std::vector<int>::iterator colIt = rowIt->begin(); colIt != rowIt->end(); colIt++)
		{
			std::cout << *colIt << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

