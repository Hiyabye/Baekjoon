#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
  for (int i=2; i<n; i++) {
    if (!(n % i)) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  vector<int> a(n);
  a[0] = 1; a[1] = 2;
  for (int i=2; i<n; i++) a[i] = i+1;
  while (!prime(a[n-1])) a[n-1]++;

  cout << n << "\n";
  for (int i=0; i<n; i++) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}