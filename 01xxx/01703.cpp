#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int a; cin >> a;
  if (a == 0) return false;
  vector<int> v(2*a);
  for (int i=0; i<2*a; i++) cin >> v[i];

  int ans = 1;
  for (int i=0; i<2*a; i+=2) {
    ans = ans * v[i] - v[i+1];
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}