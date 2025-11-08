#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> a(n);
  for (int i=0; i<n; i+=2) a[i] = i / 2 + 1;
  for (int i=1; i<n; i+=2) a[i] = n - i / 2;

  for (int i=n-1; i>=0; i--) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}