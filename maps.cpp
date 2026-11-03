#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<int, int> map;
	for (int i = 0; i < 5; i++)
	{
		map[i] = i+1;
	}

	cout << "map: " << endl;
	for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++)
	{
		pair<const int, int> &pair = *it;
		const auto &[key, val] = pair;
		cout << key << " : " << val << endl;
	}
}
