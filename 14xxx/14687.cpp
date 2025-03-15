#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  if (n & 1) {
    for (int i=0; i<n/2; i++) {
      cout << v[n/2-i] << " " << v[n/2+i+1] << " ";
    }
    cout << v[0];
  } else {
    for (int i=0; i<n/2; i++) {
      cout << v[n/2-i-1] << " " << v[n/2+i] << " ";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}