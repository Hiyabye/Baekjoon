#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long a; cin >> a;
  long long b; cin >> b;
  long long c; cin >> c;

  long long d = a * b * c;
  vector<int> cnt(10, 0);
  while (d) {
    cnt[d % 10]++;
    d /= 10;
  }

  for (int i=0; i<10; i++) {
    cout << cnt[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}