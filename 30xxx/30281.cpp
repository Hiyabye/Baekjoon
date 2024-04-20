#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> odd, even;
  while (n--) {
    int x; cin >> x;
    if (x & 1) odd.push_back(x);
    else even.push_back(x);
  }
  sort(odd.begin(), odd.end(), greater<int>());
  sort(even.begin(), even.end(), greater<int>());

  int ans = 0;
  for (int i=1; i<odd.size(); i+=2) ans += odd[i] + odd[i-1];
  for (int i=0; i<even.size(); i++) ans += even[i];
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}