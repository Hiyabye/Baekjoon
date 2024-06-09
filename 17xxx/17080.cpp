#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  return n % 4 != 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 1 : 2);
  return 0;
}