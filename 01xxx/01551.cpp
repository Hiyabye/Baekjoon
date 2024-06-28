#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  cin >> v[0];
  char c;
  for (int i=1; i<n; i++) cin >> c >> v[i];

  for (int i=0; i<k; i++) {
    for (int j=0; j<n-1; j++) {
      v[j] = v[j+1] - v[j];
    }
    n--;
  }
  
  cout << v[0];
  for (int i=1; i<n; i++) cout << "," << v[i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}