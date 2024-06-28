#include <iostream>
#include <algorithm>
using namespace std;

long long two(long long n) {
  long long ret = 0;
  for (long long i=2; i<=n; i*=2) ret += n/i;
  return ret;
}

long long five(long long n) {
  long long ret = 0;
  for (long long i=5; i<=n; i*=5) ret += n/i;
  return ret;
}

void solve(void) {
  long long n, m;
  cin >> n >> m;
  
  cout << min(two(n)-two(m)-two(n-m), five(n)-five(m)-five(n-m));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}