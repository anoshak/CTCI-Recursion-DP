/*
 * Q4.cpp
 *
 *  Created on: Mar 4, 2015
 *      Author: Anoshak
 */
#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

void subsets(vector<int> &set, vector<vector<int> > &result)
{
	if(set.empty())
	{
		vector<int> temp;
		result.push_back(temp);
		return;
	}
	int no = set.back();
	set.pop_back();
	subsets(set, result);
	int size = result.size();
	for(int i =0 ; i < size ; i++)
	{
		vector<int> temp;
		for(int j=0;j<result[i].size();j++)
			temp.push_back(result[i][j]);
		temp.push_back(no);
		result.push_back(temp);
		temp.clear();
	}

}

/*	for(int i=1;i<=set.size();i++)
	{
		for(int k=0;k<set.size();k=k+i)
		{
			vector<int> temp;
			for(int j=k;j<k+i&&j<set.size();j++)
			{
				temp.push_back(set[j]);
			}
			result.push_back(temp);
			temp.clear();
		}

	}
}*/

/*
int main()
{
	vector<int> set;
	for(int i=0;i<3;i++)
		set.push_back(i+1);
	vector<vector<int> > result;
	subsets(set,result);

	for(int i=0;i<result.size();i++)
	{
		cout<<"{ ";
		for(int j = 0;j<result[i].size();j++)
			cout<<result[i][j]<<" ";
		cout<<"}"<<endl;
	}

}
*/




