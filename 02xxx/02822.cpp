#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> a(8), b(8);
  for (int i=0; i<8; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b.begin(), b.end(), greater<int>());

  int sum = 0;
  vector<int> idx(5);
  for (int i=0; i<5; i++) {
    sum += b[i];
    idx[i] = find(a.begin(), a.end(), b[i]) - a.begin();
  }
  sort(idx.begin(), idx.end());

  cout << sum << "\n";
  for (int i=0; i<5; i++) {
    cout << idx[i] + 1 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}