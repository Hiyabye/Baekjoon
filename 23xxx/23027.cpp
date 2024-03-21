#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s.find('A') != string::npos) {
    for (char c : s) cout << (c == 'B' || c == 'C' || c == 'D' || c == 'F' ? 'A' : c);
  } else if (s.find('B') != string::npos) {
    for (char c : s) cout << (c == 'C' || c == 'D' || c == 'F' ? 'B' : c);
  } else if (s.find('C') != string::npos) {
    for (char c : s) cout << (c == 'D' || c == 'F' ? 'C' : c);
  } else {
    for (char c : s) cout << 'A';
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}