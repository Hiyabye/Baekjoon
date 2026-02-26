#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(const vector<long long> &v, int k) {
  if (v.size() < k) return 0;
  long long sum = 0;
  for (int i=0; i<k; i++) sum += v[i];
  return sum;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> a, b;
  while (n--) {
    long long x; cin >> x;
    if (x & 1) a.push_back(x);
    else b.push_back(x);
  }
  sort(a.begin(), a.end(), greater<long long>());
  sort(b.begin(), b.end(), greater<long long>());

  cout << max(calc(a, k), calc(b, k));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}