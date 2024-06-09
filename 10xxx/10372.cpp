#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  for (int i=0; i<24; i++) for (int j=0; j<60; j++) {
    if (v[i % 10] + v[i / 10] + v[j % 10] + v[j / 10] == n) {
      cout << i / 10 << i % 10 << ":" << j / 10 << j % 10;
      return;
    }
  }
  cout << "Impossible";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}