#include <iostream>
using namespace std;

void solve(void) {
  int wc, hc, ws, hs; cin >> wc >> hc >> ws >> hs;

  cout << (ws+2 <= wc && hs+2 <= hc ? "1" : "0");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}