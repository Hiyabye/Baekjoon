#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; getline(cin, a);
  string b; getline(cin, b);

  for (char c : a) {
    cout << (c >= 'A' && c <= 'Z' ? b[c - 'A'] : c);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}