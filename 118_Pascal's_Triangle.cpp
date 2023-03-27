//https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
         
     for(int i=0;i<numRows;i++){
         for(int j=0;j<=i;j++){
             if(i==j || j==0){
                  pascal[i].resize(i+1);
                 pascal[i][j]=1;
             }
             else{
                  pascal[i].resize(i+1);
                 pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
             }
         }
     }

return pascal;
    }
};
