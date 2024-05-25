#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int n = a.length();
  a += b;
  sort(a.begin(), a.end());
  cout << a.substr(0, n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}