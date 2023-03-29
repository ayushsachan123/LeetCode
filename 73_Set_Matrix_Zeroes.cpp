//https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    vector<int>v;
        int m = matrix.size();
        int n = matrix[0].size();
          cout<<m<<" "<<n<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
              int i=0;
            while(i<v.size()){
                int ac = v[i];
                for(int j=0;j<n;j++){
                    matrix[ac][j]=0;
                }
                i+=2;
            }
            
             int k=1;
            while(k<v.size()){
                int ac = v[k];
                for(int j=0;j<m;j++){
                    matrix[j][ac]=0;
                }
                k+=2;
            }
            
            for(int l=0;l<m;l++){
                for(int j=0;j<n;j++){
                    cout<<matrix[l][j]<<" ";
                }
            
            }
        
        
    }
};
