#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  for (char c : s) {
    if (c != 'I' && c != 'O' && c != 'S' && c != 'H' && c != 'Z' && c != 'X' && c != 'N') return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}