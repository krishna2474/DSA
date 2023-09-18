/* if i want 1's comp of 5 i.e 101 i want 010.
if i do not of 5 i.e ~5 i get 11111111111111111111111111111010 (32 bit number)
i need to remove starting 1s for this a variable mask is created
ans lastt 1s are replaced by the number of bits in ~n which is ~5 i.e 3 bits (010)
ye krneke liyee mask ko left sift krke 1 or (|) krte jaao aise krke last me 111 
aa jaayega baaki sab zero rkho initialize krte time hii.

last me ~n ko mask ke saath & krdo
*/

int onesComplement(int n) 
{
       int m=n;
      //edge case
       if(n==0)
        return 1;
       int mask=0;
       while(n)
       {
           mask=(mask<<1)|1;
           n=n>>1;
       }
       return (~m & mask);
}
