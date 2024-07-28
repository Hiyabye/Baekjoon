#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  for (int i=1; i<s.length(); i++) {
    int d = (s[i] - s[i-1] + 7) % 7;
    if (d != 2 && d != 4 && d != 6) {
      cout << "Ouch! That hurts my ears.\n";
      return true;
    }
  }
  cout << "That music is beautiful.\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}