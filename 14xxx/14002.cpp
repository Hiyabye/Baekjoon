#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> dp(n), prev(n, -1);
  for (int i=0; i<n; i++) {
    cin >> a[i];
    dp[i] = 1;
    for (int j=0; j<i; j++) {
      if (a[j] < a[i] && dp[i] < dp[j]+1) {
        dp[i] = dp[j]+1;
        prev[i] = j;
      }
    }
  }

  int max_idx = 0;
  for (int i=0; i<n; i++) {
    if (dp[max_idx] < dp[i]) {
      max_idx = i;
    }
  }
  cout << dp[max_idx] << "\n";
  
  stack<int> s;
  while (max_idx != -1) {
    s.push(a[max_idx]);
    max_idx = prev[max_idx];
  }
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}