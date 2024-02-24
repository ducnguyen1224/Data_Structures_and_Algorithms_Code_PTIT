#include <bits/stdc++.h>
using namespace std;
#define ll long long
int tim(ll a[], int n, ll x)
{
  int l = 0, r = n - 1;
  while (l <= r)
  {
    int m = (l + r) / 2;
    if (a[m] == x)
    {
      return m + 1;
    }
    else if (a[m] > x)
    {
      r = m - 1;
    }
    else
    {
      l = m + 1;
    }
  }
  return -1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ll a[n], b[n - 1];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      ans = ans ^ a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
      cin >> b[i];
      ans = ans ^ b[i];
    }

    cout << tim(a, n, ans) << "\n";
  }
  system("pause");
}