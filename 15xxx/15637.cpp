#include <iostream>
using namespace std;

int ans[] = {
  103, 88, 91, 99, 101, 86, 96, 100, 71, 
  91, 96, 91, 98, 102, 96, 85, 102, 97,
  91, 112, 85, 79, 86, 91, 97, 98, 110,
  80, 88, 80, 95, 83, 93, 109, 88, 91,
  103, 90, 95, 113, 81, 86, 97, 93, 93
};

void solve(void) {
  int n; cin >> n;

  cout << ans[--n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}