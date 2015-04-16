/*
 * Q1.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int count(int n)
{
	if(n<0)
		return 0;
	if(n==0)
		return 1;
	return count(n-1) + count(n-2) + count(n-3);

}


