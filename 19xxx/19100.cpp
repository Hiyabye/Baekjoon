#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> shuffle(vector<int> a) {
  vector<int> b(a.begin(), a.begin() + a.size() / 2);
  if (b.size() > 2) b = shuffle(b);
  else if (b.size() == 2) swap(b[0], b[1]);

  vector<int> c(a.begin() + a.size() / 2, a.end());
  if (c.size() > 2) c = shuffle(c);
  else if (c.size() == 2) swap(c[0], c[1]);

  vector<int> d;
  for (int i=0; i<c.size(); i++) d.push_back(c[i]);
  for (int i=0; i<b.size(); i++) d.push_back(b[i]);
  return d;
}

void solve(void) {
  int n, t; cin >> n >> t;
  vector<int> a(1 << n);
  for (int i=0; i<(1<<n); i++) cin >> a[i];

  if (t & 1) a = shuffle(a);
  for (int i=0; i<(1<<n); i++) cout << a[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}