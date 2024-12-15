#include <iostream>
using namespace std;

bool solve(void) {
  long long n, k; cin >> n >> k;

  long long l = 0, r = n;
  while (l <= r) {
    long long m = (l+r) / 2;
    if ((m+1) * (n-m+1) == k) return true;
    else if ((m+1) * (n-m+1) < k) l = m+1;
    else r = m-1;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}