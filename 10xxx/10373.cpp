#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline long long calc(long long b, long long d, long long p) {
  return (b + d) * (100 + p);
}

void solve(void) {
  int b, k, cd, cp; cin >> b >> k >> cd >> cp;
  vector<pair<int, int>> d(cd), p(cp);
  for (int i=0; i<cd; i++) cin >> d[i].first, d[i].second = i+1;
  for (int i=0; i<cp; i++) cin >> p[i].first, p[i].second = i+1;
  sort(d.begin(), d.end(), greater<pair<int, int>>());
  sort(p.begin(), p.end(), greater<pair<int, int>>());

  vector<long long> pred(cd+1, 0), prep(cp+1, 0);
  for (int i=0; i<cd; i++) pred[i+1] = pred[i] + d[i].first;
  for (int i=0; i<cp; i++) prep[i+1] = prep[i] + p[i].first;

  pair<int, int> ans = {0, 0};
  for (int i=0; i<=k && i<=cd; i++) {
    int j = min(k-i, cp);
    if (calc(b, pred[i], prep[j]) > calc(b, pred[ans.first], prep[ans.second])) {
      ans = {i, j};
    }
  }

  cout << ans.first << " " << ans.second << "\n";
  while (ans.first--) cout << d[ans.first].second << " "; cout << "\n";
  while (ans.second--) cout << p[ans.second].second << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}