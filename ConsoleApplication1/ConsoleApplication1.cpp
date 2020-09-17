// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int number,i = 0;
	cout << "please input how many numbers in the array."<<endl;
	cin >> number;
	int* p = new int[number];

	for (i = 0; i < number; i++) {
		cin >> p[i];
	}

	for (int j = 1; j < number; j++) {
		int key = p[j];
		i = j - 1;
		while (i > -1 && p[i] > key) {      //注重i范围
			p[i + 1] = p[i];
			i--;
		}
		p[i + 1] = key;
	}

	for (i = 0; i < number; i++) {
		cout << p[i]<<" ";
	}


}

