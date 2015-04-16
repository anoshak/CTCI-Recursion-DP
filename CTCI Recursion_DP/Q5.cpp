/*
 * Q5.cpp
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
#include <string>

using namespace std;

vector<string> permute(string s) {

	vector<string> result;
	if (s.length() == 1) {
		result.push_back(s);
		return result;
	}

	vector<string> temp_vector= permute(s.substr(1));

	for (unsigned i = 0; i < temp_vector.size() ; i++) {
		string temp = temp_vector[i];
		for (unsigned j = 0; j <= temp.length(); j++) {
			string t = temp.substr(0, j) + s[0] + temp.substr(j);
			result.push_back(t);
		}
	}

	return result;
}

/*
int main()
{
	vector<string> result = permute("abcd");
	for(int i=0;i<result.size();i++)
		cout<<result[i]<<" ";
	return 0;
}
*/




