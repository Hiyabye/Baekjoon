#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const string &s) {
  for (int i=3; i<s.length(); i++) {
    if (s[i-3] == 'p' && s[i-2] == 'i' && s[i-1] == 'n' && s[i] == 'k') return true;
    if (s[i-3] == 'r' && s[i-2] == 'o' && s[i-1] == 's' && s[i] == 'e') return true;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    for (char &c : s) c = tolower(c);
    ans += check(s);
  }
  cout << (ans ? to_string(ans) : "I must watch Star Wars with my daughter");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}