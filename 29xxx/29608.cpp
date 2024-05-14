#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int sum = accumulate(a[i].begin(), a[i].end(), 0);
    if (a[i][i] * 2 < sum) return 0;
    if (a[i][i] * 2 > sum) ans++;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int ans = solve();
  cout << (ans ? "YES\n" + to_string(ans) : "NO");
  return 0;
}