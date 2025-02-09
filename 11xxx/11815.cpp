#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long x; cin >> x;

  long long root = sqrt(x);
  cout << (root * root == x) << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}