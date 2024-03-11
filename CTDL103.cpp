#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{ int t;
  cin>>t;
  while(t--){
  memset(a,0,sizeof(a));
  int n;
  cin>>n;
  cin.ignore();
  for(int i=1;i<=n;i++){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    while(ss>>token){
      a[i][stoll(token)]=1;
      a[stoll(token)][i]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  }
 return 0;
}