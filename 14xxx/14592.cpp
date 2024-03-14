#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef struct Person {
  int s, c, l, i;
} Person;

bool cmp(const Person &a, const Person &b) {
  if (a.s != b.s) return a.s > b.s;
  if (a.c != b.c) return a.c < b.c;
  return a.l < b.l;
}

void solve(void) {
  int n; cin >> n;
  vector<Person> p(n);
  for (int i=0; i<n; i++) cin >> p[i].s >> p[i].c >> p[i].l, p[i].i = i+1;
  sort(p.begin(), p.end(), cmp);

  cout << p[0].i;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}