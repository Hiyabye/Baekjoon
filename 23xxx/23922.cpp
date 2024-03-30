#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int> (n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  unordered_map<int, long long> m;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) m[i-j] += v[i][j];

  long long ans = 0;
  for (auto it : m) ans = max(ans, it.second);
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}