#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a;

  for (int i=1; i<=n; i++) {
    int x; cin >> x;
    a.insert(a.begin()+x, i);
  }
  reverse(a.begin(), a.end());

  for (int i=0; i<a.size(); i++) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}