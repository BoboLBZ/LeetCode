#include "stdafx.h"
#include <iostream>
#include<vector>
#include "498_DiagonalTraverse.h"
using namespace std;
vector<int> findDiagonalOrder(vector<vector<int>>& matrix)
{
	vector <int> result;
	int row = matrix.size();
	if (row < 1)
		return result;
	int col = matrix[0].size();
	bool  dir = true;
	int i = 0, j = 0;
	while (i < row  && j < col)
	{
		result.push_back(matrix[i][j]);
		if (dir )
		{
			if (i == 0 && j != col-1)
			{
				j = j + 1;
				dir = false;
			}
			else if (j == col - 1)
			{
				i = i + 1;
				dir = false;
			}
			else
			{
				i = i - 1;
				j = j + 1;
			}
		}
		else
		{
			 if (j == 0 && i != row - 1 )
			{
				i = i + 1;
				dir = true;
			}
			else if (i == row - 1)
			{
				j = j + 1;
				dir = true;
			}
			else
			{
				i = i +1;
				j = j - 1;
			}
		}
	}
	return result;
}