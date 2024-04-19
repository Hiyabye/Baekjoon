#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}

void solve(void) {
  long long a, b; cin >> a >> b;
  if (a > b) swap(a, b);

  vector<long long> v;
  for (long long i=1; i*i<=b-a; i++) {
    if ((b - a) % i) continue;
    v.push_back(i);
    if (i * i != b - a) v.push_back((b - a) / i);
  }

  vector<pair<long long, long long>> ans;
  for (long long x : v) {
    long long n = ((a + x - 1) / x + (!(a % x))) * x - a;
    ans.push_back({lcm(a + n, b + n), n});
  }
  sort(ans.begin(), ans.end());

  cout << (a == b || ans[0].second == 0 ? 1 : ans[0].second);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}