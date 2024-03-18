#include <cmath>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef struct Coord {
  int x, y;
  Coord() : x(0), y(0) {}
  Coord(int x, int y) : x(x), y(y) {}
  int dist(Coord& c) {
    return abs(x - c.x) + abs(y - c.y);
  }
} Coord;

bool solve(void) {
  int n; cin >> n;
  Coord a; cin >> a.x >> a.y;
  vector<Coord> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y;
  Coord b; cin >> b.x >> b.y;

  vector<bool> visited(n, false);
  queue<Coord> q; q.push(a);
  while (!q.empty()) {
    Coord cur = q.front(); q.pop();
    if (cur.dist(b) <= 1000) return true;
    for (int i=0; i<n; i++) {
      if (visited[i]) continue;
      if (cur.dist(v[i]) <= 1000) {
        q.push(v[i]);
        visited[i] = true;
      }
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "happy" : "sad") << "\n";
  return 0;
}