#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int r; cin >> r;
  string s; cin >> s;

  char x = (r <= 1600) ? '3' : (r <= 1900) ? '2' : '1';
  for (char c : s) {
    if (c == x) {
      cout << c;
      return;
    }
  }

  for (char c : s) {
    cout << c;
    if (c > x) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}