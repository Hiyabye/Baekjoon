#include <iostream>
using namespace std;

long long solve(void) {
  long long n; cin >> n;

  long long cur = 1, sum = 0;
  while (sum + cur * cur <= n) {
    sum += cur * cur;
    cur++;
  }
  return cur - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}