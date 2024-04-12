#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<long long> a(3), b(3);
  for (int i=0; i<3; i++) cin >> a[i];
  for (int i=0; i<3; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}