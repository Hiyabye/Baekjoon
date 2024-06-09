#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  cout << n.substr(0, n.length() / 2) << " " << n.substr(n.length() / 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}