#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int x, a, b, c, d;
};

inline bool cmp1(const Person &p, const Person &q) {
  if (p.a != q.a) return p.a < q.a;
  return p.x > q.x;
}

inline bool cmp2(const Person &p, const Person &q) {
  if (p.b != q.b) return p.b < q.b;
  return p.x > q.x;
}

inline bool cmp3(const Person &p, const Person &q) {
  if (p.c != q.c) return p.c < q.c;
  return p.x > q.x;
}

inline bool cmp4(const Person &p, const Person &q) {
  if (p.d != q.d) return p.d < q.d;
  return p.x > q.x;
}

void solve(void) {
  int n; cin >> n;
  vector<Person> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].a >> v[i].b >> v[i].c >> v[i].d;

  sort(v.begin(), v.end(), cmp1);
  cout << v.back().x << " "; v.pop_back();
  sort(v.begin(), v.end(), cmp2);
  cout << v.back().x << " "; v.pop_back();
  sort(v.begin(), v.end(), cmp3);
  cout << v.back().x << " "; v.pop_back();
  sort(v.begin(), v.end(), cmp4);
  cout << v.back().x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}