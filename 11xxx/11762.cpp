#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(6); int h1, h2;
  for (int i=0; i<6; i++) cin >> v[i];
  cin >> h1 >> h2;
  sort(v.begin(), v.end(), greater<int>());

  vector<int> a(3), b(3);
  for (int i=0; i<4; i++) for (int j=i+1; j<5; j++) for (int k=j+1; k<6; k++) {
    int sum = v[i] + v[j] + v[k];
    if (sum == h1) {
      a = {v[i], v[j], v[k]};
    } else if (sum == h2) {
      b = {v[i], v[j], v[k]};
    }
  }

  for (int i=0; i<3; i++) cout << a[i] << " ";
  for (int i=0; i<3; i++) cout << b[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}