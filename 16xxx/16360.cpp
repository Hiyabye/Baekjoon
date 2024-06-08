#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &t) {
  if (t[1] == 'a') return t.substr(0, 1) + "as";
  if (t[1] == 'i' || t[1] == 'y') return t.substr(0, 1) + "ios";
  if (t[1] == 'l') return t.substr(0, 1) + "les";
  if (t[1] == 'n') return t.substr(0, 1) + "anes";
  if (t == "ne") return "anes";
  if (t[1] == 'o') return t.substr(0, 1) + "os";
  if (t[1] == 'r') return t.substr(0, 1) + "res";
  if (t[1] == 't') return t.substr(0, 1) + "tas";
  if (t[1] == 'u') return t.substr(0, 1) + "us";
  if (t[1] == 'v') return t.substr(0, 1) + "ves";
  if (t[1] == 'w') return t.substr(0, 1) + "was";
  return t + "us";
}

void solve(void) {
  string s; cin >> s;

  cout << s.substr(0, s.length()-2) << calc(s.substr(s.length()-2)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}