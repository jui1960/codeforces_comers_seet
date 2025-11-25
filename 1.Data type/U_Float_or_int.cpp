#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    size_t pos = s.find('.');
    if(pos!= string::npos){
        string intpart = s.substr(0,pos);
        string decpart =s.substr(pos+1);
        bool flag =true;
        for(auto c:decpart){
            if(c!='0'){
                flag =false;
                break;
            }
        }
        if(flag) cout<<"int "<<intpart<<"\n";
        else cout<<"float "<<intpart<<" 0."<<decpart<<'\n';
    }
    else cout<<"int "<<s<<'\n';
    return 0;
}