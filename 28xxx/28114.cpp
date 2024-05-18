#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct {
  int p, y;
  string s;
} Person;

bool cmp1(const Person &a, const Person &b) {
  return a.y % 100 < b.y % 100;
}

bool cmp2(const Person &a, const Person &b) {
  return a.p > b.p;
}

void solve(void) {
  vector<Person> p(3);
  for (int i=0; i<3; i++) cin >> p[i].p >> p[i].y >> p[i].s;

  sort(p.begin(), p.end(), cmp1);
  for (int i=0; i<3; i++) cout << p[i].y % 100;
  cout << "\n";
  sort(p.begin(), p.end(), cmp2);
  for (int i=0; i<3; i++) cout << p[i].s[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}