#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string h; cin >> h;

  cout << (h == "1" ? 2 : 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}