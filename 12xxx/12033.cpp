#include <iostream>
#include <map>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  map<int, int> mp1;
  for (int i=0; i<2*n; i++) {
    int p; cin >> p;
    mp1[p]++;
  }

  map<int, int> mp2;
  for (auto [k, v] : mp1) {
    if (k % 3) continue;
    mp2[k] = min(v, mp1[k/3*4]);
    mp1[k/3*4] -= mp2[k];
  }

  cout << "Case #" << idx << ": ";
  for (auto [k, v] : mp2) {
    while (v--) cout << k << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}