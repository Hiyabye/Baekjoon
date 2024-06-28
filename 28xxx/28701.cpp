#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  cout << n*(n+1)/2 << "\n";
  cout << n*n*(n+1)*(n+1)/4 << "\n";
  cout << n*n*(n+1)*(n+1)/4 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}