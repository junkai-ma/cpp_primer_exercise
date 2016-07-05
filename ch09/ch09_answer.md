#第九章
###9.19 
将9.18中的string序列 *str_seq* 声明为 `list<string>` 即可.

###9.20
代码如下：

	#include <list>
	#include <deque>
	#include <iostream>

    using namespace std;

	int main()
	{
		list<int> numSeq{1,4,5,7,14,25,9};
		deque<int> oddNum;
		deque<int> evenNum;

		for (auto item : numSeq)
		{
			if ((item % 2) == 1)
				oddNum.push_back(item);
			else
				evenNum.push_back(item);
		}

		cout << "Odd Number" << endl;
		for (auto i : oddNum) cout << i << endl;
		cout << "Even Number" << endl;
		for (auto i : evenNum) cout << i << endl;

		return 0;
	}

###9.21
	vector <string> v_str
	auto iter = v_str.begin()
	while (cin>>word)
		iter = v_str.insert(iter, word)
循环每次读取一个字符串，并将字符串插入到v_str最前端。同时iter指向新插入的元素。
###9.22 
在while循环中iter指向的位置不会变化，循环不会退出。
###9.23
val 指向c中第一个元素的引用。 
val2 是c中第一个元素的拷贝
val3 是c中最后一个元素的引用
val4 是c中最后一个元素的拷贝



