#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void init(){
  cin>>n;
  ok=1;
  memset(a,0,sizeof(a));
}
void in(){
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<" ";
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
bool check(){
  int ans=0;
  for(int i=1;i<n-1;i++){
    if(a[i]==0&&a[i+1]==1){
      ans++;
    }
  }
  return ans==2;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    init();
    while(ok){
      if(check()){
        in();
      }
      next();
    }
    if(t>0) cout<<"\n";
  }
  system("pause");
}