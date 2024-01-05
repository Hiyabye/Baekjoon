#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

typedef struct _Coord {
  long long x, y;
} Coord;

vector<Coord> v;

int ccw(Coord a, Coord b, Coord c) {
  long long ret = (b.x-a.x)*(c.y-a.y) - (b.y-a.y)*(c.x-a.x);
  return ret > 0 ? 1 : ret < 0 ? -1 : 0;
}

bool cmp1(Coord a, Coord b) {
  return a.y != b.y ? a.y < b.y : a.x < b.x;
}

bool cmp2(Coord a, Coord b) {
  int c = ccw(v[0], a, b);
  return c ? c > 0 : cmp1(a, b);
}

void solve(void) {
  int n; cin >> n;
  v.resize(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y;
  sort(v.begin(), v.end(), cmp1);
  sort(v.begin()+1, v.end(), cmp2);

  stack<Coord> s;
  s.push(v[0]); s.push(v[1]);
  for (int i=2; i<n; i++) {
    while (s.size() >= 2) {
      Coord temp1 = s.top(); s.pop();
      Coord temp2 = s.top();
      if (ccw(temp2, temp1, v[i]) > 0) {
        s.push(temp1);
        break;
      }
    }
    s.push(v[i]);
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}