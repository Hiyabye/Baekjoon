#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long calc1(int n, const vector<long long> &a) {
  long long ret = 0;
  for (long long x : a) ret += x;
  return ret;
}

long long calc2(int n, const vector<long long> &a) {
  long long ret = a[n-1] * a[n-2] * 2;
  for (int i=n-3; i>=0; i--) ret += a[i];
  return ret;
}

long long calc3(int n, const vector<long long> &a) {
  long long ret = a[0] * a[1] * 2;
  for (int i=2; i<n; i++) ret += a[i];
  return ret;
}

long long calc4(int n, const vector<long long> &a) {
  long long ret = (binary_search(a.begin(), a.end(), 0) ? 0 : a[0]);
  for (int i=1; i<n; i++) ret += a[i];
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  cout << max({calc1(n, a), calc2(n, a), calc3(n, a), calc4(n, a)});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}