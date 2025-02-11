#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);

	while (vector.empty() == false)
	{
		cout << vector.front() << endl;

		vector.erase();
	}

	cout << vector.front() << endl;

	return 0;
}