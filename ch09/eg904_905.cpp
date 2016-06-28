#include <vector>
#include <iostream>

using namespace std;

bool find_bool(vector<int>::const_iterator b, vector<int>::const_iterator e, int m) 
{
	while (b != e)
	{
		if (*b == m)
			return true;
		b++;
	}
	return false;
}

vector<int>::const_iterator find_it(vector<int>::const_iterator b, vector<int>::const_iterator e, int m) 
{
	while (b != e) {
		if (*b == m)
			return b;
		b++;
	}
	return b;
}

int main() 
{
	vector<int> vec_int{ 2,14,5,28,7,3,9,16 };

	int needFind = 28;

	vector<int>::const_iterator first = vec_int.begin();
	vector<int>::const_iterator last = vec_int.end();

	vector<int>::const_iterator find_iterator = find_it(first, last, needFind);

	if (find_iterator != last)
		cout << "find the number" << *find_iterator << endl;
	else
		cout << "not find" << endl;

	return 0;
}

