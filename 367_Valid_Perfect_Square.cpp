//https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=0;
        long long int e = num;
        while(s<=e){
           long long int mid = (s+e)/2;
          long long int sq = mid*mid;
           
           if(sq==num){
                return true;
           } 
           else if(sq<num){
               s=mid+1;
           }
           else{
               e=mid-1;
           }
        }
        return false;
    }

};
