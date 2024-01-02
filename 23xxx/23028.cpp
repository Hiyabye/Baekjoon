#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> x(10), y(10);
  for (int i=0; i<10; i++) cin >> x[i] >> y[i];

  for (int i=0; i<8-n; i++) {
    a += 3 * x[i];
    b += 3 * min(x[i] + y[i], 6);
  }
  cout << (a >= 66 && b >= 130 ? "Nice\n" : "Nae ga wae\n");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}