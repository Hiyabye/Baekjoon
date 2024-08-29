#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> mp = {
  {"kor", 0}, {"eng", 1}, {"math", 2},
  {"apple", 0}, {"pear", 1}, {"orange", 2},
  {"red", 0}, {"blue", 1}, {"green", 2}
};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<vector<int>>> v(3, vector<vector<int>>(3, vector<int>(3, 0)));
  while (n--) {
    string a, b, c; cin >> a >> b >> c;
    v[mp[a]][mp[b]][mp[c]]++;
  }

  while (m--) {
    string a, b, c; cin >> a >> b >> c;
    int ans = 0;
    for (int i=0; i<3; i++) {
      if (mp.find(a) != mp.end() && mp[a] != i) continue;
      for (int j=0; j<3; j++) {
        if (mp.find(b) != mp.end() && mp[b] != j) continue;
        for (int k=0; k<3; k++) {
          if (mp.find(c) != mp.end() && mp[c] != k) continue;
          ans += v[i][j][k];
        }
      }
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}