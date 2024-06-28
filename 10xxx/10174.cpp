#include <iostream>
#include <string>
using namespace std;

bool check(string &s) {
  int n = s.length();
  for (char &c : s) if ('A' <= c && c <= 'Z') c += 'a' - 'A';
  for (int i=0; i<n/2; i++) if (s[i] != s[n-i-1]) return false;
  return true;
}

void solve(void) {
  string s; getline(cin, s);

  cout << (check(s) ? "Yes" : "No") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}