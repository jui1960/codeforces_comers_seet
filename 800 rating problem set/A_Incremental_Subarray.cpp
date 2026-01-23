#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++) cin>>v[i];
        bool flag=false;
        for(int i=1;i<m;i++){
            if(v[i]-v[i-1]!=1){
                flag=true;
                break;
            }
        }
       
        if(flag) cout<<1<<endl;
        else  cout<<(n-v[m-1]+1)<<endl;
    }
    return 0;
}