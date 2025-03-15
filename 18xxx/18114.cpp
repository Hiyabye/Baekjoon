#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, c; cin >> n >> c;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];
  sort(w.begin(), w.end());

  // one
  if (binary_search(w.begin(), w.end(), c)) return true;

  // two
  for (int i=0; i<n; i++) {
    if (binary_search(w.begin()+i+1, w.end(), c-w[i])) return true;
  }

  // three
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (binary_search(w.begin()+j+1, w.end(), c-w[i]-w[j])) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}