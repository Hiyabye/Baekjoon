#include <iostream>
using namespace std;

void solve(void) {
  long long k, n; cin >> k >> n;

  if (n == 1) {
    cout << -1;
    return;
  }

  long long x = (k*n)/(n-1);
  if ((k*n) % (n-1) != 0) x++;
  cout << x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}