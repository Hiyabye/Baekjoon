#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int idx = 0, sum = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == '*') idx = i;
    else sum += (s[i] - '0') * (i & 1 ? 3 : 1);
  }

  for (int i=0; i<=9; i++) {
    if ((sum + i * (idx & 1 ? 3 : 1)) % 10) continue;
    cout << i;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}