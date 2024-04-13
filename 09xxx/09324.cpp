#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  string m; cin >> m;

  unordered_map<char, int> cnt;
  for (int i=0; i<m.length(); i++) {
    if (++cnt[m[i]] != 3) continue;
    if (i == m.length()-1 || m[i] != m[i+1]) return false;
    cnt[m[i++]] = 0;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "OK" : "FAKE") << "\n";
  return 0;
}