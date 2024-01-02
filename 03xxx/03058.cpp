#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int x;
  vector<int> a;
  for (int i=0; i<7; i++) {
    cin >> x;
    if (x % 2 == 0) a.push_back(x);
  }

  int sum = 0;
  for (int i=0; i<a.size(); i++) sum += a[i];
  cout << sum << " " << *min_element(a.begin(), a.end()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}