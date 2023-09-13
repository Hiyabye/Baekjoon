#include <bits/stdc++.h>
using namespace std;

typedef struct Student {
  int a, b, c;
} Student;

bool cmp(Student &lhs, Student &rhs) {
  return lhs.c > rhs.c;
}

void solve(void) {
  int n; cin >> n;
  vector<Student> v(n);
  for (int i=0; i<n; i++) cin >> v[i].a >> v[i].b >> v[i].c;
  sort(v.begin(), v.end(), cmp);

  cout << v[0].a << " " << v[0].b << "\n";
  cout << v[1].a << " " << v[1].b << "\n";
  if (v[0].a != v[1].a) cout << v[2].a << " " << v[2].b;
  else {
    for (int i=2; i<n; i++) {
      if (v[i].a != v[0].a) {
        cout << v[i].a << " " << v[i].b;
        break;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}