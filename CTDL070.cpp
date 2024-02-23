#include <iostream>
#include <vector>
using namespace std;

int maxCornWeight(int maxPayload, vector<int>&cornBags) {
    int n = cornBags.size();
    vector<vector<int>> dp(n + 1, vector<int>(maxPayload + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= maxPayload; j++) {
            if (cornBags[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - cornBags[i - 1]] + cornBags[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][maxPayload];
}

int main() {
  int t;
  cin>>t;
  while(t--){
    int maxPayload; // Trọng lượng tải trọng tối đa của xe
    int n; // Số lượng bao ngô
    cin >> n>>maxPayload;
    vector<int> cornBags; // Danh sách trọng lượng của từng bao ngô
    for (int i = 0; i < n; i++) {
        int weight;
        cin >> weight;
        cornBags.push_back(weight);
    }

    int maxCornWeigh = maxCornWeight(maxPayload, cornBags);
    cout << maxCornWeigh << endl;
  }
  system("pause");
    return 0;
}
