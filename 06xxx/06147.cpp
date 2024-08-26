#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, b; cin >> n >> b;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  sort(h.begin(), h.end(), greater<int>());

  for (int i=1; i<n; i++) h[i] += h[i-1];
  for (int i=0; i<n; i++) {
    if (h[i] >= b) {
      cout << i+1;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}