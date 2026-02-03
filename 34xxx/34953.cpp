#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=0; i<n; i++) {
    cout << "SSH"[i % 3];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}