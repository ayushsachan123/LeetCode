//https://leetcode.com/problems/koko-eating-bananas/

class Solution {

bool eatSolve(vector<int>&arr,int n,int mid,int h){

long long int hrsCount=0;
for(int i=0;i<arr.size();i++){

	hrsCount+=arr[i]/mid;
	if(arr[i]%mid!=0){
         hrsCount++;
	}
}

return hrsCount<=h;

}

int eatBanana(vector<int>&arr,int h,int n){
    
// 	int s = 0;
//      int e = 0;

// for(int i=0;i<n;i++){
// 	e+=arr[i];
// }
 int s=1,e=1e9;

int ans=0;
while(s<=e){
	long long int mid = (s+e)/2;
	bool isPossible = eatSolve(arr,n,mid,h);
	if(isPossible){
		e = mid-1;
       ans = mid;
	}
	else{
		s = mid+1;
	}
}
return ans;
}


public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
      return eatBanana(piles,h,n);
    }
};
