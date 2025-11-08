#include <iostream>
using namespace std;

void solve(void) {
  int x;
  for (int i=0; i<100; i++) cin >> x;

  cout << (x % 10 ? x % 10 : 10);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}