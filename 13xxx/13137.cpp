#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greedy(int i, int n, vector<int> &p) {
  int cnt = 0;
  for (int j=n-1; j>=0; j--) {
    cnt += i / p[j];
    i %= p[j];
  }
  return cnt;
}

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  vector<int> dp(2*p[n-1]+1);
  for (int i=0; i<=2*p[n-1]; i++) dp[i] = i;
  for (int i=1; i<=2*p[n-1]; i++) {
    for (int j=0; j<n; j++) {
      if (p[j] <= i) dp[i] = min(dp[i], dp[i-p[j]]+1);
    }
  }

  for (int i=1; i<=2*p[n-1]; i++) {
    if (greedy(i, n, p) != dp[i]) {
      cout << "No";
      return;
    }
  }
  cout << "Yes";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}