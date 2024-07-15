#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;
  string a; cin >> a;
  string b; cin >> b;

  int c = 0;
  for (int i=0; i<a.length(); i++) {
    if (a[i] == b[i]) c++;
  }
  cout << a.length() - abs(k - c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}