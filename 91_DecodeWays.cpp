#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "91_DecodeWays.h"
using namespace std;
int numDecodings(string s) {
	if (true == s.empty())
		return 0;
	if (s[0] == '0')
		return 0;
	if (s.size() == 1)
		return 1;
	vector<int> numofstr;
	for (int i = 0; i <= s.size(); i++)
		numofstr.push_back(1);
	numofstr[s.size()] = 1;
	if (s[s.size() - 1] == '0')
		numofstr[s.size() - 1] = 0;
	for (int i = s.size() - 2; i >= 0; i--)
	{
		if (s[i] == '0')
			numofstr[i] = 0;
		else
		{
			if (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))
			{
				numofstr[i] = numofstr[i + 1] + numofstr[i + 2];
			}
			else
			{
				if (s[i + 1] == '0')
				{
					return 0;
				}
				else
				{
					numofstr[i] = numofstr[i + 1];
				}
			}
		}
	}
	return numofstr[0];
}
