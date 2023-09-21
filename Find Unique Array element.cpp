/* Agar 2 same number ka xor krtehai to 0 aata hai
aurr 0 ^ koi number krte hai to woi number aata hai
array ke saare elements ko xor krdo, sab duplicate wale zero hojaayenge aurr ek unique wala hi bachega */

int findUnique(int *arr, int size)
{
    int ans=0;    
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
