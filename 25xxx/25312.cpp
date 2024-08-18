#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

bool cmp(const pair<long long, long long> &a, const pair<long long, long long> &b) {
  return a.second * b.first > a.first * b.second;
}

void solve(void) {
  long long n, m; cin >> n >> m;
  vector<pair<long long, long long>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  long long a = 0, b = 1;
  for (int i=0; i<n && m; i++) {
    if (v[i].first <= m) {
      a += v[i].second * b;
      m -= v[i].first;
    } else {
      a = a * v[i].first + b * v[i].second * m;
      b = b * v[i].first;
      m = 0;
    }
  }

  long long g = gcd(a, b);
  cout << a / g << "/" << b / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}