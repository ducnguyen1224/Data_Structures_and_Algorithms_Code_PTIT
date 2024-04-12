#include <bits/stdc++.h>
#define endl "\n"
//đọc kĩ đầu bài nó bảo có bộ test kìa nhưng test dưới sai thôi t cũng điên đảo lắm 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	int n;
	cin >> n;
	int b = n - 1;
	vector<int> a(n);
	stack<vector<int>> st;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		int k = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = k;
		st.push(a);
	}
	while (st.size())
	{
		a = st.top();
		st.pop();
		cout << "Buoc " << b-- << ": ";
		for (int j = 0; j <= b + 1; j++)
			cout << a[j] << " ";
		cout << endl;
	}}
}
