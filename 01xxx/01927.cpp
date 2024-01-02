#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int> > pq;

  int x;
  for (int i=0; i<n; i++) {
    cin >> x;
    if (x == 0) {
      if (pq.empty()) cout << "0\n";
      else {
        cout << pq.top() << "\n";
        pq.pop();
      }
    } else {
      pq.push(x);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}