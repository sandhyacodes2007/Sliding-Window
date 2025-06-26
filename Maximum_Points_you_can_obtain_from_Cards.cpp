#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardScore , int k){
  int  n= cardScore.size();
  int lsum=0, rsum=0;
  
  int maxScore=0;
  for(int i=0; i<k; i++){
    lsum+=cardScore[i];
  }
maxScore= lsum;
int rightIndex= n-1;
  for(int i=k-1; i>=0; i--){
    lsum-= cardScore[i];
  
  rsum+= cardScore[rightIndex];
  rightIndex--;
  maxScore= max(maxScore, lsum+rsum);
  }
return maxScore;
}
  
    int main(){
        int n;
        cin>>n;
        int k;
        cin>>k;
        //Input validation
        if(k>n){
            cout<<"Error: k cannot be greater than the size of the array."<<endl;
            return 1;
        }
        vector<int>cardScore(n);
        for(int i=0; i<n; i++){
            cin>>cardScore[i];
        }

    int ans=maxScore(cardScore, k);
    cout<< ans<<endl;
    return 0;
    }