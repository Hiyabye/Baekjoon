#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, r; cin >> n >> r;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int a = 0, b = 0, c = 0;
  for (int i=-100; i<=100; i++) for (int j=-100; j<=100; j++) {
    int cnt = 0;
    for (int k=0; k<n; k++) {
      if ((i-x[k])*(i-x[k]) + (j-y[k])*(j-y[k]) <= r*r) cnt++;
    }
    if (cnt > c) a = i, b = j, c = cnt;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}