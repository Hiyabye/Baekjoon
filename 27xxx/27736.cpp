#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v(3, 0);
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    v[x+1]++;
  }
  cout << (v[1]*2 >= n ? "INVALID" : (v[0] < v[2] ? "APPROVED" : "REJECTED"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}