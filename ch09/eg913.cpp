#include <vector>
#include <list>
#include <iostream>

using namespace std;

void print_member(vector<double>);

int main()
{
	list<int> a = { 12,5,6,3,8,4,7,11,16 };
	vector<int> v_int = { 12,5,6,3,8,4,7,11,16 };
	
	vector<double> b(a.cbegin(), a.cend());

	print_member(b);

	vector<double> c(v_int.cbegin(), v_int.cend());
	print_member(c);
	
	return 0;
}

void print_member(vector<double> a)
{
	vector<double>::const_iterator first = a.cbegin();
	vector<double>::const_iterator last = a.cend();

	while (first != last)
	{
		cout << *first << "\t";
		first++;
	}
	cout << endl << "OK" << endl;
}
