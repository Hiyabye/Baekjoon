#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin()+1, a.end());

  for (int i=1; i<n; i++) {
    if (a[0] <= a[i]) return false;
    a[0] += a[i];
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}