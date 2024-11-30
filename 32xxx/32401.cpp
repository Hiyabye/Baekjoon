#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(const string &s, int l, int r) {
  bool flag = false;
  for (int i=l; i<=r; i++) {
    if (s[i] == 'N') {
      if (flag) return false;
      flag = true;
    }
  }
  return flag;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> a;
  for (int i=0; i<n; i++) {
    if (s[i] == 'A') a.push_back(i);
  }

  int ans = 0;
  for (int i=1; i<a.size(); i++) {
    if (check(s, a[i-1]+1, a[i]-1)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}