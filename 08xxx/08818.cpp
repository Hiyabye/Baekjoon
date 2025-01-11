#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long k; cin >> k;
  if (k == (k & -k)) {
    cout << "0\n";
    return;
  }

  int a = log2(k & -k), b = 0;
  while (k >> b) b++;

  cout << (b - a) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}