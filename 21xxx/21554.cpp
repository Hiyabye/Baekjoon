#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  vector<int> l, r;
  for (int i=1; i<=n; i++) {
    if (a[i] == i) continue;
    int j = distance(a.begin(), find(a.begin(), a.end(), i));
    l.push_back(i); r.push_back(j);
    reverse(a.begin()+i, a.begin()+j+1);
  }

  cout << l.size() << "\n";
  for (int i=0; i<l.size(); i++) {
    cout << l[i] << " " << r[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}