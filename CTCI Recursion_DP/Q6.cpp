/*
 * Q6.cpp
 *
 *  Created on: Mar 8, 2015
 *      Author: Anoshak
 */

#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

void addParen(vector<string> &list, int LeftRem, int RightRem, char* str, int count)
{
	if(LeftRem < 0 || LeftRem > RightRem)
		return;
	if(LeftRem == 0 && RightRem == 0)
	{
		string s(str);
		list.push_back(s);
	}
	else
	{
		if(LeftRem > 0)
	{
		str[count] = '(';
		addParen(list,LeftRem-1,RightRem,str,count+1);
	}
	if(RightRem > LeftRem)
	{
		str[count] = ')';
		addParen(list,LeftRem,RightRem-1,str,count+1);
	}
	}

}

vector<string> generateParens(int count)
{
	vector<string> list;
	char* str = new char(count * 2 + 1);
	str[count*2] = '\0';
	addParen(list, count, count, str, 0);
	return list;
}

/*
int main()
{
	vector<string> result = generateParens(2);
	for(int i = 0; i<result.size() ; i++)
		cout<<result[i]<<" ";
}

*/


