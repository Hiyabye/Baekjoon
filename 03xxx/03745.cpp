#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  vector<int> lis;
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), p[i]);
    if (it == lis.end()) {
      lis.push_back(p[i]);
    } else {
      *it = p[i];
    }
  }
  cout << lis.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}