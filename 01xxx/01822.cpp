#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void solve(void) {
  int na, nb; cin >> na >> nb;
  vector<int> a(na), b(nb), c;
  for (int i=0; i<na; i++) cin >> a[i];
  for (int i=0; i<nb; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));

  cout << c.size() << "\n";
  for (int i=0; i<c.size(); i++) cout << c[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}