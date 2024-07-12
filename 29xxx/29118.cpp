#include <iostream>
using namespace std;

void solve(void) {
  long long n, k; cin >> n >> k;

  if (k < 5) {
    while (k--) n += n % 10;
    cout << n;
    return;
  }

  if (n % 10 == 0 || n % 10 == 5) {
    if (k) n += n % 10;
    cout << n;
    return;
  }

  while (n % 10 != 2) {
    n += n % 10;
    k--;
  }

  n += 20 * (k / 4);
  for (int i=0; i<k%4; i++) n += n % 10;
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}