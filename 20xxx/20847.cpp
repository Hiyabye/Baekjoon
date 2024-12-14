#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<string, string> mp1;
  unordered_map<string, int> mp2;
  while (n--) {
    string s, d; int c; cin >> s >> c >> d;
    if (mp1.find(d) == mp1.end() || mp2[mp1[d]] < c) {
      mp1[d] = s;
      mp2[s] = c;
    }
  }

  vector<string> ans;
  for (const auto& [_, d] : mp1) {
    ans.push_back(d);
  }
  sort(ans.begin(), ans.end());

  cout << ans.size() << "\n";
  for (const auto& s : ans) {
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}