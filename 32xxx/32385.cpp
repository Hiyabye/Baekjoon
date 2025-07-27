#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int sum = 0;
  for (int i=0; i<n; i++) {
    if (i & 1) {
      cout << -(i+1)/2*n << " ";
      sum -= (i+1)/2*n;
    } else {
      cout << (i/2+1)*n << " ";
      sum += (i/2+1)*n;
    }
  }
  cout << sum / n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}