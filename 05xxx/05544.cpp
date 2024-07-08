#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v(n, 0);
  for (int i=0; i<n*(n-1)/2; i++) {
    int a, b, c, d; cin >> a >> b >> c >> d; a--; b--;
    v[a] += (c > d) * 3 + (c == d);
    v[b] += (d > c) * 3 + (c == d);
  }

  for (int i=0; i<n; i++) {
    int rank = 1;
    for (int j=0; j<n; j++) {
      if (v[j] > v[i]) rank++;
    }
    cout << rank << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}