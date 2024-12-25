#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int k;
  vector<int> a;
};

bool solve(void) {
  int t, x; cin >> t >> x;
  int n; cin >> n;
  vector<Person> p(n);
  for (int i=0; i<n; i++) {
    cin >> p[i].k;
    p[i].a.resize(p[i].k);
    for (int j=0; j<p[i].k; j++) cin >> p[i].a[j];
  }

  for (int i=0; i<n; i++) {
    if (find(p[i].a.begin(), p[i].a.end(), x) == p[i].a.end()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}