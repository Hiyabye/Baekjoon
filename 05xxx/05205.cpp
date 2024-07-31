#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline int calc(int a, int b) {
  return (a-b)*(a-b);
}

bool cmp(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

void solve(int idx) {
  int n; cin >> n;
  vector<int> r(n), g(n), b(n);
  for (int i=0; i<n; i++) cin >> r[i] >> g[i] >> b[i];

  vector<pair<int, pair<int, int>>> ans;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      ans.push_back({calc(r[i], r[j]) + calc(g[i], g[j]) + calc(b[i], b[j]), {i+1, j+1}});
    }
  }
  sort(ans.begin(), ans.end(), cmp);

  cout << "Data Set " << idx << ":\n" << ans[0].second.first << " " << ans[0].second.second << "\n";
  for (int i=1; i<ans.size(); i++) {
    if (ans[i].first != ans[i-1].first) break;
    cout << ans[i].second.first << " " << ans[i].second.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}