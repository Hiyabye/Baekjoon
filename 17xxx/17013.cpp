#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  vector<vector<int>> a = {{1, 2}, {3, 4}};

  for (char c : s) {
    if (c == 'H') {
      swap(a[0][0], a[1][0]);
      swap(a[0][1], a[1][1]);
    } else {
      swap(a[0][0], a[0][1]);
      swap(a[1][0], a[1][1]);
    }
  }

  cout << a[0][0] << " " << a[0][1] << "\n";
  cout << a[1][0] << " " << a[1][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}