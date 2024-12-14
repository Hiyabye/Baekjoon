#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<string> s; string t;
  for (int i=0; i<=n; i++) {
    string a, b; cin >> a >> b;
    if (b == "student") s.push_back(a);
    else t = a;
  }
  string u; cin >> u;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (s[i] >= u && s[i] >= t) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}