#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<long long> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  for (int i=1; i<n; i++) {
    p[i] += max(0LL, p[i-1]);
  }
  cout << *max_element(p.begin(), p.end()) << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}