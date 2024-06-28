#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, less<int> > pq;

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
  cin.tie(nullptr);

  solve();
  return 0;
}