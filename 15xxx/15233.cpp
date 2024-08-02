#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int a, b, g; cin >> a >> b >> g;
  unordered_set<string> s, t;
  while (a--) {
    string u; cin >> u;
    s.insert(u);
  }
  while (b--) {
    string u; cin >> u;
    t.insert(u);
  }

  int ans = 0;
  while (g--) {
    string u; cin >> u;
    if (s.find(u) != s.end()) ans++;
    if (t.find(u) != t.end()) ans--;
  }
  cout << (ans ? (ans > 0 ? "A" : "B") : "TIE");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}