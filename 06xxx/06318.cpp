#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 0, avg = accumulate(h.begin(), h.end(), 0) / n;
  for (int i=0; i<n; i++) {
    ans += abs(h[i] - avg);
  }
  cout << "Set #" << idx << "\nThe minimum number of moves is " << ans / 2 << ".\n\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}