#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(string s){
  stringstream ss(s);
  map<int,int>mp;
  string w;
  while(ss>>w){
    if(w!="+"){
      int hs=0,sm=0,i=0;
      while(i<w.size()&&isdigit(w[i])){
        hs=hs*10+w[i]-'0';
        i++;
      }
      i+=3;
      while(i<w.size()&&isdigit(w[i])){
        sm=sm*10+w[i]-'0';
        i++;
      }
      mp[sm]+=hs;
    }
  }
  int dem=0;
  for(map<int,int>::reverse_iterator it=mp.rbegin();it!= mp.rend();it++){
        ++dem;
        cout<<(*it).second<<"*x^"<<(*it).first;
        if(dem!=mp.size()){
          cout<<" + ";
        }
  }
  cout<<"\n";
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
       string s1,s2;
       getline(cin,s1);
       getline(cin,s2);
       string s=s1+" + "+s2;
       cout<<s<<"\n";
       solve(s);
    }
    return 0;
}