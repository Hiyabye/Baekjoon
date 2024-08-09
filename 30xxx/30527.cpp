#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(5), l(5);
  for (int i=0; i<5; i++) cin >> a[i] >> l[i];
  int n, kwf; cin >> n >> kwf;

  int sum = 0;
  for (int i=0; i<5; i++) sum += a[i] * l[i];
  cout << sum / 5 * n / kwf;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}