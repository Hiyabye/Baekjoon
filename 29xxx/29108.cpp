#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  if (s.length() < 3) return false;
  if (s[0] != 'i' || s[1] != 'o') return false;
  for (int i=2; s[i]; i++) {
    if (s[i] < '0' || s[i] > '9') return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Correct" : "Incorrect");
  return 0;
}