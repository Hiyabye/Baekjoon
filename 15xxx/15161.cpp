#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;

  vector<vector<int>> v(10, vector<int>(10, 1));
  while (k--) {
    vector<int> a(6);
    for (int i=0; i<6; i++) cin >> a[i], a[i]--;
    for (int i=0; i<10; i++) for (int j=0; j<10; j++) v[i][j]++;
    for (int i=0; i<3; i++) for (int j=0; j<10; j++) v[a[i]][j] = 1;
    for (int i=3; i<6; i++) for (int j=0; j<10; j++) v[j][a[i]] = 1;
  }

  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}