#include<bits/stdc++.h> 
using namespace std;
int Fruit_into_Baskets(vector<int>& fruits){
    int n= fruits.size();
    int l=0, r=0, maxlen=0;
    unordered_map<int, int>mpp;
    while(r<n){
        mpp[fruits[r]]++;
        
    
    while(mpp.size()>2){
            mpp[fruits[l]]--;
        
        if(mpp[fruits[l]]==0){
            mpp.erase(fruits[l]);
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
    int n;
     cin>>n;
vector<int> fruits(n);
for(int i=0; i<n; i++){
   cin>> fruits[i];
}
int ans=Fruit_into_Baskets(fruits);
cout<<ans<<endl;
}
