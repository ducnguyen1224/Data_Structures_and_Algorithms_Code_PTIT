#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    long long n, x, res = 0;
    int vt = -1;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] <= x)
      {
        if (res < a[i])
        {
          res = a[i];
          vt = i;
        }
      }
    }
    if (vt == -1)
      cout << vt;
    else
      cout << vt + 1;
    cout << endl;
  }
  return 0;
}