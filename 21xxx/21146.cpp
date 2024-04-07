#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  double sum = 0;
  for (int i=0; i<k; i++) {
    double r; cin >> r;
    sum += r;
  }
  cout << fixed << setprecision(5) << (sum-3*(n-k))/n << " " << (sum+3*(n-k))/n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}