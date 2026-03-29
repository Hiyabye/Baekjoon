#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, k; cin >> n >> k;

  long long a = max(1LL, k-n);
  long long b = (k-1) / 2;

  cout << (a <= b ? b-a+1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}