#include<bits/stdc++.h>
using namespace std;
int kDistinctChar(string& s, int k) {
       int n= s.size();
    int l=0, r=0, maxlen=0;
    unordered_map<int, int>mpp;
    while(r<n){
        mpp[s[r]]++;
        
    
    while(mpp.size()>k){
            mpp[s[l]]--;
        
        if(mpp[s[l]]==0){
            mpp.erase(s[l]);
        }
        l++;

    }
    if(mpp.size()<=2){
        maxlen= max(maxlen, r-l+1);

    }
    r++;
}
    return maxlen;

}
int main(){
   string s;
   cin>>s;
   int k;
   cin>>k;

int ans=kDistinctChar(s, k);
cout<<ans<<endl;
}