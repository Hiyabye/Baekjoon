#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  string s = "abcdefghijklmno";
  while (b--) {
    cout << s << " ";
    next_permutation(s.begin(), s.end());
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}