#include <cctype>
#include <iostream>
#include <string>
using namespace std;

inline bool punct(char c) {
  return c == '.' || c == '?' || c == '!';
}

inline bool check(const string &s) {
  if (!isupper(s[0])) return false;
  for (int i=1; i<s.length(); i++) {
    if (!islower(s[i]) && !punct(s[i])) return false;
  }
  return true;
}

void solve(void) {
  int ans = 0;

  string s;
  do {
    cin >> s;
    if (check(s)) ans++;
  } while (!punct(s.back()));

  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}