#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int g; cin >> g;
  vector<int> v(g);
  for (int i=0; i<g; i++) cin >> v[i];

  for (int i=1; i<g-1; i++) {
    if (v[i-1] < v[i] && v[i] < v[i+1]) continue;
    return (v[i-1] < v[i+1]) ? i+1 : i+2;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << solve() << "\n";
  return 0;
}