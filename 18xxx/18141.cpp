#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
    if (i == j || j == k || k == i) continue;
    if ((a[i] - a[j]) % a[k]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}