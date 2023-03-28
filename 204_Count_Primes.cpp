// https://leetcode.com/problems/count-primes/

class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int> sieve(n, 1);
        //    sieve[1]=sieve[0]=0;
        //    sieve[2]= 1;
        //    for(int i=3;i<n;i+=2){
        //        sieve[i]=1;
        //    }

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (sieve[i] == 1)
            {
                for (int j = i * i; j < n; j = j + i)
                {
                    sieve[j] = 0;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (sieve[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};