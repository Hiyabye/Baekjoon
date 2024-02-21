#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k, l; cin >> k >> l;
  cin.ignore();
  string s; getline(cin, s);

  for (char c : s) {
    if (isupper(c)) cout << (char)((c - 'A' + k) % 26 + 'A');
    else if (islower(c)) cout << (char)((c - 'a' + k) % 26 + 'a');
    else cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}