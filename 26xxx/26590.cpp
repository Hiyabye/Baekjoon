#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  string c = "";
  for (int i=0; i<a.length() && i<b.length(); i++) {
    c += (i & 1) ? b[i] : a[i];
  }
  cout << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}