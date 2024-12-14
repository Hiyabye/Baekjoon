#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(20);
  for (int i=0; i<20; i++) cin >> v[i];

  int idx = distance(v.begin(), find(v.begin(), v.end(), 20));
  cout << (v[(idx + 1) % 20] + v[(idx + 19) % 20] >= 12 ? "Alice" : "Bob");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}