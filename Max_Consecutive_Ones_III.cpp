#include<bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
      int n= nums.size();
      int l=0, r=0, maxlen=0;
      int zeros=0;
      while(r<n){
      if(nums[r]==0){
      zeros++;
      
    }
    while(zeros>k){
     if(nums[l]==0){
        zeros--;
        
    }
    l++;
}
maxlen= max(maxlen, r-l+1);
r++;
      }
    return maxlen;
    }
       int main(){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
            int ans= longestOnes(nums, k);

            cout<<ans<<endl;

   return 0;
       }

       
    