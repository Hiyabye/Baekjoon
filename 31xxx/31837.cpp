#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct {
  bool is;
  int c, d;
  string s, e;
} Course;

typedef struct {
  int a;
  vector<Course> v;
} Group;

bool check(int idx, const vector<Course> &cur) {
  for (int i=0; i<idx-1; i++) for (int j=i+1; j<idx; j++) {
    if (!cur[i].is || !cur[j].is) continue;
    if (cur[i].d != cur[j].d) continue;
    if (cur[i].s >= cur[j].e || cur[i].e <= cur[j].s) continue;
    return false;
  }
  return true;
}

int backtrack(int idx, int n, const vector<Group> &g, vector<Course> &cur) {
  if (idx == n) {
    int sum = 0;
    for (int i=0; i<n; i++) sum += cur[i].c;
    return sum == 22;
  }

  int ret = 0;
  for (int i=0; i<g[idx].a; i++) {
    cur[idx] = g[idx].v[i];
    if (check(idx+1, cur)) ret += backtrack(idx+1, n, g, cur);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<Group> g(n);
  for (int i=0; i<n; i++) {
    cin >> g[i].a;
    g[i].v.resize(g[i].a);
    for (int j=0; j<g[i].a; j++) {
      g[i].v[j].is = true;
      cin >> g[i].v[j].c >> g[i].v[j].d >> g[i].v[j].s >> g[i].v[j].e;
    }
    g[i].a++;
    g[i].v.push_back({false, 0, 0, "", ""});
  }

  vector<Course> cur(n);
  cout << backtrack(0, n, g, cur);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}