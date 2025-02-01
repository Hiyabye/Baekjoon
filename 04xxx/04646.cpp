#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i], b[i] = a[i];
  for (int i=1; i<n; i++) a[i] += a[i-1];
  for (int i=n-2; i>=0; i--) b[i] += b[i+1];

  for (int i=1; i<n; i++) {
    if (a[i-1] == b[i]) {
      cout << "Sam stops at position " << i << " and Ella stops at position " << i+1 << ".\n";
      return true;
    }
  }
  cout << "No equal partitioning.\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}