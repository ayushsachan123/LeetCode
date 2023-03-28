//https://leetcode.com/problems/find-greatest-common-divisor-of-array/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a = *max_element(nums.begin(),nums.end());
        int b = *min_element(nums.begin(),nums.end());

        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
};
