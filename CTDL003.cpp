#include<bits/stdc++.h>
using namespace std;
int a[1005],ok,n;
string s;
void init(){
  cin>>s;
  n=s.size();
  for(int i=0;i<s.size();i++){
    a[i+1]=s[i]-'0';
  }
  ok=1;
}
void in(){
   if(!ok){
    for(int i=0;i<n;i++){
      cout<<0;
    }
  }
  else{
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  }
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
  init();
  next();
  in();
  cout<<"\n";
  }
  system("pause");
}