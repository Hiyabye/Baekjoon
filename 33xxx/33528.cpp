#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<26; i++) {
    cout << s << "\n";
    for (char &c : s) {
      c = (c - 'A' + 25) % 26 + 'A';
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}