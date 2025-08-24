#include <iostream>
#include <string>
using namespace std;

string mp[9][2] = {
  {"@", "a"}, {"[", "c"}, {"!", "i"}, {";", "j"}, {"^", "n"},
  {"0", "o"}, {"7", "t"}, {"\\\\\'", "w"}, {"\\\'", "v"}
};

void solve(void) {
  string s; cin >> s;

  int cnt = 0;
  for (auto &[u, v] : mp) while (s.find(u) != string::npos) {
    s.replace(s.find(u), u.length(), v); cnt++;
  }
  cout << (cnt * 2 < s.length() ? s : "I don't understand") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}