#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, l; cin >> n >> l;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int a = 0, b = 0, c = 0;
  for (int i=0; i<n; i++) {
    if (b + v[i] > l) break;
    a++; b += v[i]; c += b;
  }
  cout << "Case " << idx << ": " << a << " " << b << " " << c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}