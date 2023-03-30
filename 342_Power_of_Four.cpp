//https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        int count0=0;
        int count1=0;

        while(n>0){
            if((n&1)==1){
                count1++;
            }else{
                count0++;
            }

            n>>=1;
        }

        return count1==1 && (count0%2==0);
    }
};
