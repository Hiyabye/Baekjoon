#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Team {
  string name;
  int cnt, pen;
};

inline bool cmp(const Team &a, const Team &b) {
  if (a.cnt != b.cnt) return a.cnt > b.cnt;
  return a.pen < b.pen;
}

void solve(void) {
  int n, k; cin >> n >> k;
  unordered_map<string, Team> mp;
  while (n--) {
    string a; Team b; cin >> a >> b.name >> b.cnt >> b.pen;
    if (mp.find(a) == mp.end() || cmp(b, mp[a])) mp[a] = b;
  }

  vector<Team> ans;
  for (auto [_, v] : mp) {
    ans.push_back(v);
  }
  sort(ans.begin(), ans.end(), cmp);

  for (int i=0; i<k; i++) {
    cout << ans[i].name << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}