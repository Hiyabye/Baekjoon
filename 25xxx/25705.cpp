#include <iostream>
#include <string>
using namespace std;

bool check(int n, const string &w, char c, int &ans, int &cur) {
  for (int i=0; i<n; i++) {
    cur = (cur + 1) % n;
    ans++;
    if (w[cur] == c) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  string w; cin >> w;
  int m; cin >> m;
  string s; cin >> s;

  int ans = 0, cur = n-1;
  for (char c : s) {
    if (check(n, w, c, ans, cur)) {
      cout << -1;
      return;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}