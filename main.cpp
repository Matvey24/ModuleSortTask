/*
В стандартном потоке дана одна строка, состоящая из N + 1 целых чисел. Первым числом идёт само число N. Далее следуют ещё N чисел, обозначим их за массив A.

Между собой числа разделены пробелом.

Отсортируйте массив А по модулю и выведите его в стандартный поток.

*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

/*

ввод
строка
вектор
сортировка 
вывод


*/
using namespace std;


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