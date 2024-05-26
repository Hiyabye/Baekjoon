#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  cin.ignore();
  if (n == 0) return false;

  int ans = 0;
  while (n--) {
    string s; getline(cin, s);
    while (ans < s.length() && s[ans] != ' ') ans++;
  }
  cout << ans+1 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}