#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector<string>v;
    while(ss>>tmp){
      reverse(tmp.begin(),tmp.end());
      v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";
  }
  system("pause");
}