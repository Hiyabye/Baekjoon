#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v;
  int x; cin >> x;
  while (x) {
    v.push_back(x);
    cin >> x;
  }
  sort(v.begin(), v.end());

  for (int i=2; i<v.size(); i++) {
    if (v[i-2] + v[i-1] > v[i]) {
      cout << v[i-2] << " " << v[i-1] << " " << v[i];
      return;
    }
  }
  cout << "NIE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}