#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, k; cin >> n >> k;
  vector<int> v(k);
  for (int i=0; i<k; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());

  for (int i=1; i<k; i++) v[i] += v[i-1];
  for (int i=0; i<k; i++) {
    if (v[i] >= n) {
      cout << "Scenario #" << idx << ":\n" << i+1 << "\n\n";
      return;
    }
  }
  cout << "Scenario #" << idx << ":\nimpossible\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}