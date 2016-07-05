#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	string in_str;
	deque<string> str_seq;

	while (cin >> in_str)
	{
		str_seq.push_back(in_str);
	}

	for (auto i : str_seq) cout << i<<endl;
	
	return 0;
}