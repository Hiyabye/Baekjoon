#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<pair<int, int>> v;
  while (n--) {
    string s; cin >> s;
    if (s == "order") {
      int n, t; cin >> n >> t;
      v.push_back({t, n});
    } else if (s == "sort") {
      sort(v.begin(), v.end());
    } else if (s == "complete") {
      int n; cin >> n;
      for (auto it=v.begin(); it!=v.end(); it++) {
        if (it->second == n) {
          v.erase(it);
          break;
        }
      }
    }
    for (auto it=v.begin(); it!=v.end(); it++) {
      cout << it->second << " ";
    }
    if (v.empty()) cout << "sleep";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}