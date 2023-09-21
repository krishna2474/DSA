/*
Two Pointer Approach.

1. ek ans vector bnaao
2. i,j ko 0 se initialise kro.
3. i ko first array ke liye chlaao  aand j ko second ke liye 

conditions.
1. agar 1st array ka ith element == 2nd array ka jth element --> to ans vector me to element ko store krdo, i and j ko increment krdo
2. agar 2nd array ka jth element > 1st array ka ith element to i ko increment krdo.  (Kyuki dono arrays sorted hai to agar jth element hi bda hai to aagey wala to bda hoga hi to check kre ki zroorat nai hai)
3. else --> j++
*/

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else
		j++;
	}
	return ans;
}
