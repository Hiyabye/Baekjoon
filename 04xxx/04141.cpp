#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  
  for (char &c : s) {
    if ('a' <= c && c <= 'z') c = c - 'a' + 'A';
    c = '2' + (c > 'C') + (c > 'F') + (c > 'I') + (c > 'L') + (c > 'O') + (c > 'S') + (c > 'V');
  }

  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}