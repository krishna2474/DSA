/*
array ki size hai 'n' aur condition hai ki usme n-1 ke elements saare present hai. to ek eement 2 baar hai. konsa element 2 baar h wo dhundna hai.

koi bhi 2 same number ka xor kiya to zero aatahai
to array ke saare elements ka xor krdo
aur 1 se n-1 tk saae elements ka xor krdo

mtlbb
agar array ki size hai 5, to usme 1 se n-1 i.e 4 tk elements present honge.
eg: 1, 2, 3, 4, 3
isme 1 se 4 tk hai aur 3 repeat hora

1. In sab elements ka xor krdo ek loop chlaake aur ek variable me store krdo
arr[0]^arr[1]^arr[2]^arr[3]^arr[4]
2. usi variable me dusra loop chlaake 1 se n-1 tk xor krlo mtlb 1^2^3^4 
3. ab wo variable me already arr[0]^arr[1]^arr[2]^arr[3]^arr[4] ka answer present tha mtlb indirectly 1^2^3^4 tha (Kyuki woi arrayke elements hai)
ab humne usme 1^2^3^4 calculate krke rkhdiyaa 

ye kiya humne
1^2^3^4^3^1^2^3^4 
isme sirf woi element bachega jo extra wala hai i.e 3 kyuki (1^2^3^4^1^2^3^4 zero hojaayega)
mtlb 3 is the duplicate element
*/

int findDuplicate(vector<int> &arr) 
{
  int ans=0;
  for(int i=0;i<arr.size();i++)
  {
    ans=ans^arr[i];
  }
  for(int i=0;i<arr.size();i++)
  {
    ans=ans^i;
  }
	return ans;
}
