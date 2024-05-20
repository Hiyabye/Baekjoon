#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n; i++) cin >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  for (int i=0; i<n; i++) {
    if (x[i] > y[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "DA" : "NE");
  return 0;
}