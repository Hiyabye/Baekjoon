#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << "WelcomeToSMUPC"[(n-1) % 14];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}