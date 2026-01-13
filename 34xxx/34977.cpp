#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &l, int k) {
  for (int i=0; i<k; i++) {
    if (l[i] != l[n-k+i]) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];

  for (int k=1; k<=n/2; k++) {
    if (check(n, l, k)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}