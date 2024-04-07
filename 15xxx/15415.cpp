#include <iostream>
using namespace std;

void solve(void) {
  int w; cin >> w;
  int n; cin >> n;

  long long sum = 0;
  while (n--) {
    long long a, b; cin >> a >> b;
    sum += a * b;
  }
  cout << sum / w;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}