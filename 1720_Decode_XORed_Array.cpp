// https://leetcode.com/problems/decode-xored-array/

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        int a = encoded.size();
        vector<int> result = {first};
        for (auto n : encoded)
        {
            first = first ^ n;
            result.push_back(first);
        }
        return result;
    }
};