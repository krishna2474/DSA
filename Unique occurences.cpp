/*
Bruteforce approach


1. Ek vactor bnaao 'ans'.
2. input wale vector ko sort kro.
3.loop chalaao inpput vector pe usme ek inner loop chlaao jo i+1 se chlega.(Jis element pe abhi outer loop ka i hai usse ek aagey)
4. dono (i and j) ke elements ko compare kro.
5. agar same hai to count++ krdo
6. inner loop se nikalneke baad ans vector me count daaldo.
7. poora inut vector khatam honeke baad sab elements ki number of occurences mil jaayegi.

8. ans vector ko sort krdo taaki sab number linese aajaaye
9. Ek loop chalaao ans vector pe jo zero se start hoke size-1 se ek kam tk chlega
10. i aur i+1 wale element ko check kro.
11. agar same aaya mtlb unique occurence nai h (false return krdo)
12. lastt me tru return krdo.
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<arr.size();)
        {
            int count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                count++;
            }
            ans.push_back(count);
            i+=count;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1])
            return false;
        }
        return true;
    }
};
