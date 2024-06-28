#include <algorithm>
#include <iostream>
using namespace std;

typedef struct Box {
  int x1, y1; // left bottom
  int x2, y2; // right top
} Box;

void solve(void) {
  Box a, b;
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

  if (a.x1 > b.x1) swap(a, b);
  if (a.x2 < b.x1) {
    cout << "NULL\n";
  } else if (a.x2 == b.x1) {
    if (a.y2 == b.y1 || a.y1 == b.y2) {
      cout << "POINT\n";
    } else if ((a.y2 > b.y1 && a.y1 < b.y2) || (a.y2 < b.y1 && a.y1 > b.y2)) {
      cout << "LINE\n";
    } else {
      cout << "NULL\n";
    }
  } else if (a.y2 > b.y1 && a.y1 < b.y2) {
    cout << "FACE\n";
  } else if (a.y2 == b.y1 || a.y1 == b.y2) {
    cout << "LINE\n";
  } else {
    cout << "NULL\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}