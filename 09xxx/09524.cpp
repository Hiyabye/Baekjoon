#include <iostream>
using namespace std;

void solve(void) {
  int d; cin >> d;

  cout << (d & 1 ? (d & 2 ? 2 : 1) : (d & 2 ? 7 : 3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}