#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    auto it=upper_bound(a,a+n,0);
    cout<<(it-a)<<"\n";
  }
  system("pause");
}