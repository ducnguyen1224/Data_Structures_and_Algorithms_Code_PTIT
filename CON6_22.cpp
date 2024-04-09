#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string x;
        cin>>n>>x;
        int ok=0;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            if(s==x){
                ok=1;
            }
        }
        cout<<2*ok-1<<"\n";
    }
}