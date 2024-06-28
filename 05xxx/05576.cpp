#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> a(10), b(10);
  for (int i=0; i<10; i++) cin >> a[i];
  for (int i=0; i<10; i++) cin >> b[i];
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());

  cout << a[0] + a[1] + a[2] << " " << b[0] + b[1] + b[2] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}