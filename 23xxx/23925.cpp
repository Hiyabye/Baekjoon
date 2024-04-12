#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(int idx) {
  int n, k, s; cin >> n >> k >> s;

  cout << "Case #" << idx << ": " << n + k + min(0, abs(k - s) - s) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}