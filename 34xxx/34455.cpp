#include <iostream>
using namespace std;

void solve(void) {
  int d; cin >> d;
  int e; cin >> e;

  while (e--) {
    char c; int q; cin >> c >> q;
    if (c == '+') d += q;
    else d -= q;
  }
  cout << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}