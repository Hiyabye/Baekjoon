#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  unordered_map<int, int> m;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    m[v[i]+v[j]]++;
  }
  cout << m[k];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}