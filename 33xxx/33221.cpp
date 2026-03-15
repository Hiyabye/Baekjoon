#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int t, p; cin >> t >> p;
  vector<int> cnt(t, 0), tm(t, 0);
  for (int i=0; i<t; i++) for (int j=0; j<p; j++) {
    string s; cin >> s;
    if (s != "X") cnt[i]++, tm[i] += stoi(s);
  }

  int ans = 0;
  for (int i=1; i<t; i++) {
    if (cnt[i] > cnt[0] || (cnt[i] == cnt[0] && tm[i] <= tm[0])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}