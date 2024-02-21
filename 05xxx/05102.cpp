#include <iostream>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;
  if (a == 0 && b == 0) return false;

  int cnt = a - b;
  cout << (cnt < 2 ? 0 : (cnt & 1 ? (cnt-3)/2 : cnt/2)) << " " << (cnt < 2 ? 0 : cnt & 1) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}