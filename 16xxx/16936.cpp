#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool cmp(long long a, long long b) {
  int a2 = 0, b2 = 0, a3 = 0, b3 = 0;
  while (!(a % 2)) a /= 2, a2++;
  while (!(b % 2)) b /= 2, b2++;
  while (!(a % 3)) a /= 3, a3++;
  while (!(b % 3)) b /= 3, b3++;
  if (a3 != b3) return a3 > b3;
  if (a2 != b2) return a2 < b2;
  return a < b;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> b(n);
  for (int i=0; i<n; i++) cin >> b[i];
  sort(b.begin(), b.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << b[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}