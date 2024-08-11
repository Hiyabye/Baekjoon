#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, l; cin >> n >> l;
  vector<int> x(n, 0);
  for (int i=0; i<n; i++) cin >> x[i];

  double sum = x[n-1];
  for (int i=n-2; i>=0; i--) {
    if (x[i] > x[i+1] + l || x[i] < x[i+1] - l) return false;
    if (sum / (n-i-1) >= x[i] + l || sum / (n-i-1) <= x[i] - l) return false;
    sum += x[i];
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "stable" : "unstable");
  return 0;
}