#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int n,ok;
int a[100];
void init(){
  memset(a,0,sizeof(a));
  ok=1;
  n=mp.size();
}
void in(string s) {
  string output;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '?') {
      output += s[i];
    } else {
      output += to_string(a[mp[i]]);
    }
  }
  cout << output << "\n";
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int d=1;
    for(int i=0;i<s.size();i++){
      if(s[i]=='?'){
        mp[i]=d++;
      }
    }
   init();
    while(ok){
      in(s);
      next();
    }
    if(t>0) cout<<"\n";
  }
  system("pause");
}