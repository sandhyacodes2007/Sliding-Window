#include<bits/stdc++.h>
using namespace std;
int longest_Substring(string& s){
    int n= s.size();
    int hash[256];
    for(int i=0; i<=256; i++)
    {
        hash[i]=-1;
    }
    
    int l=0, r=0, maxlen= 0;
    while(r<n){
        if(hash[s[r]!=-1]){
        l= max(hash[s[r]]+1, l);
    }
    int len= r-l+1;
    maxlen= max(maxlen, len);
    hash[s[r]]=r;
    r++;
}
return maxlen;
}
int main(){
    string s;
    cin>>s;
    int ans= longest_Substring(s);
    cout<<ans<<endl;
return 0;
}