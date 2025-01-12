#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

bool solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int g = gcd(n, k);
  for (int i=0; i<g; i++) {
    vector<int> b;
    for (int j=i; j<n; j+=g) b.push_back(a[j]);
    sort(b.begin(), b.end());
    for (int j=i, l=0; j<n; j+=g, l++) a[j] = b[l];
  }
  return is_sorted(a.begin(), a.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}