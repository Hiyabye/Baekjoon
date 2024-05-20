#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  string c = a + b;
  sort(c.begin(), c.end());
  cout << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}