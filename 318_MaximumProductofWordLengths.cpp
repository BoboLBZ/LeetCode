#include <string>
#include "stdafx.h"
#include <vector>
#include "318_MaximumProductofWordLengths.h"
using namespace std;
bool havesamechar(string s1, string s2);
int maxProduct(vector<string>& words) 
{
	int num = words.size();
	if (num <= 1)
	{
		return 0;
	}
	int result = 0;
	for (int i = 0; i < num-1; i++)
	{
		for (int j = i + 1; j < num ; j++)
		{
			if ( false == havesamechar(words[i], words[j]))
			{
				int temp = words[i].length() * words[j].length();
				result = temp > result ? temp : result;
			}
		}
	}
	return result;
}
bool havesamechar(string s1, string s2)
{
	for (int i = 0; i < s1.length(); i++)
	{
		int t = s2.find(s1[i]);
		if (t>= 0 && t < s2.length())
			return true;
	}
	return false;
}
//像智障一样，循环就出错，