#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int 
bool flag,ab[100005],ba[100005];
char s[100005];
ll l,i;
int main() {
    cin>>s;
    l=strlen(s);
    flag=0;
    for(i=0;i<l-1;i++) {
        if(i-1>=0) {
            ab[i] |=ab[i-1];
            ba[i] |=ba[i-1];
        }
        if(s[i]=='A' && s[i+1]=='B') {
            ab[i+1]=1;
            if(i-1>=0 && ba[i-1])
            flag=1;
        }
        if(s[i]=='B' && s[i+1]=='A') {
            ba[i+1]=1;
            if(i-1>=0 && ab[i-1])
            flag=1;
        }
    }
    
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}