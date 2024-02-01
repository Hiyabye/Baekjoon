#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(k);
  for (int i=0; i<k; i++) cin >> a[i];

  int sum = 0;
  for (int i=0; i<k; i++) {
    sum += (a[i] + 1) / 2;
  }
  cout << (sum >= n ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}