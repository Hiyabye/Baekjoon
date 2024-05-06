#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int t = 0, d = 0, l = 0, f = 0;
  for (char c : s) {
    if (c == 'T') t++;
    else if (c == 'D') d++;
    else if (c == 'L') l++;
    else if (c == 'F') f++;
  }
  cout << (1LL << (t + d + l + f));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}