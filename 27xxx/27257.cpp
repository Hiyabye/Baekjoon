#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;

  while (!(k % 10)) k /= 10;
  string s = to_string(k);
  cout << count(s.begin(), s.end(), '0');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}