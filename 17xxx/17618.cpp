#include <iostream>
using namespace std;

int wow(int n) {
  int sum = 0;
  for (int i=n; i>0; i/=10) sum += i % 10;
  return n % sum == 0;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) ans += wow(i);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}