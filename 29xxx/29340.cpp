#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  for (int i=0; i<a.length(); i++) {
    cout << (a[i] > b[i] ? a[i] : b[i]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}