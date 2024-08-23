#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;

  priority_queue<int> pq;
  while (n--) {
    int a; cin >> a;
    if (a) {
      while (a--) {
        int b; cin >> b;
        pq.push(b);
      }
    } else if (pq.empty()) {
      cout << -1 << "\n";
    } else {
      cout << pq.top() << "\n";
      pq.pop();
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}