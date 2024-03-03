#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<int> cnt(26, 0);
  for (char c : s) cnt[c-'a']++;

  bool odd = true, even = true;
  for (int i=0; i<26; i++) {
    if (!cnt[i]) continue;
    if (cnt[i] & 1) even = false;
    else odd = false;
  }

  if (odd) cout << "1";
  else if (even) cout << "0";
  else cout << "0/1";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}