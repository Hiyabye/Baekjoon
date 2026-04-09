#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<long long> r(n);
  for (int i=0; i<n; i++) cin >> r[i];

  long long ans = r[0];
  for (int i=1; i<n; i++) {
    r[i] = max(r[i], r[i-1]);
    ans += r[i];
  }
  return ans % 3 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Delicious!" : "Oh My God!");
  return 0;
}