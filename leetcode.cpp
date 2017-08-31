// leetcode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "318_MaximumProductofWordLengths.h"

int main()
{
	vector<string> my{"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae" };
	cout << maxProduct(my)<< endl;
	//cout << my[2].find('a') << endl;
	//cout << my[2].find('e') << endl;
	return 0;
}
