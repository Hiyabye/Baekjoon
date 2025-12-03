#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  vector<int> a(n);

  int sum = 0;
  for (int i=0; i<n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  while (sum < n * x) {
    sum += 100;
    n++;
  }
  cout << n - (int)a.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}