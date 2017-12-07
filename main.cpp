
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

// using namespace std; // bad practice 


int main()
{
	string num;
	cin >> num;

	size_t n = stoi(num);
	int item;
	vector<int> v; 
	for (size_t i = 0; i < n; i++)
	{
		cin >> item;
		v.push_back(item);

	}

	sort(v.begin(), v.end(), [](int a, int b) {
		return abs(a) < abs(b);
	});

	for (int it : v)
		cout << it << " ";

	return 0;
}