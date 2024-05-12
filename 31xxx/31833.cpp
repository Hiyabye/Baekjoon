#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string x, y;
  for (int i=0; i<n; i++) {
    string a; cin >> a;
    x += a;
  }
  for (int i=0; i<n; i++) {
    string b; cin >> b;
    y += b;
  }

  cout << (stoll(x) < stoll(y) ? x : y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}