#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  while (s.find("CHIPMUNKS") == string::npos && s.find("LIVE") == string::npos) {
    for (char &c : s) {
      if (c < 'A' || c > 'Z') continue;
      c = (c - 'A' + 1) % 26 + 'A';
    }
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}