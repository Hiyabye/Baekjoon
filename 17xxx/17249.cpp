#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int l = 0, r = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] != '@') continue;
    if (i < s.find('(')) l++;
    else r++;
  }
  cout << l << " " << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}