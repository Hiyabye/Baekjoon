#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  if (a[2]-a[1] == a[1]-a[0]) cout << a[n-1]+(a[1]-a[0]);
  else                        cout << a[n-1]*(a[1]/a[0]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}