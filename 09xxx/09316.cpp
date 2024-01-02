#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  for (int i=1; i<=n; i++) {
    cout << "Hello World, Judge " << i << "!\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}