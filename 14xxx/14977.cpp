#include <iostream>
#include <vector>
using namespace std;

int solve(int n) {
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  if (n < 3) return 1;

  for (int i=n-1; i>=2; i--) {
    if (x[i] - x[i-1] != x[i-1] - x[i-2]) return i;
  }
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) cout << solve(n) << "\n";
  return 0;
}