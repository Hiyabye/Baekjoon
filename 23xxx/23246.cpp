#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int id, mul, sum;
};

inline bool cmp(const Person &a, const Person &b) {
  if (a.mul != b.mul) return a.mul < b.mul;
  if (a.sum != b.sum) return a.sum < b.sum;
  return a.id < b.id;
}

void solve(void) {
  int n; cin >> n;
  vector<Person> v(n);
  for (int i=0; i<n; i++) {
    int b, p, q, r; cin >> b >> p >> q >> r;
    v[i] = {b, p*q*r, p+q+r};
  }
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<3; i++) {
    cout << v[i].id << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}