#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Student {
  string name;
  int d, m, y;
} Student;

bool cmp(Student &a, Student &b) {
  if (a.y != b.y) return a.y > b.y;
  if (a.m != b.m) return a.m > b.m;
  return a.d > b.d;
}

void solve(void) {
  int n;
  cin >> n;
  vector<Student> s(n);
  for (int i=0; i<n; i++) {
    cin >> s[i].name >> s[i].d >> s[i].m >> s[i].y;
  }

  sort(s.begin(), s.end(), cmp);
  cout << s.front().name << "\n";
  cout << s.back().name << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}