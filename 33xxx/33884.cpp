#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x1(n), y1(n), x2(n), y2(n);
  for (int i=0; i<n; i++) cin >> x1[i] >> y1[i];
  for (int i=0; i<n; i++) cin >> x2[i] >> y2[i];

  cout << *min_element(x2.begin(), x2.end()) - *min_element(x1.begin(), x1.end()) << " ";
  cout << *min_element(y2.begin(), y2.end()) - *min_element(y1.begin(), y1.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}