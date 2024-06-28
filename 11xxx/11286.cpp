#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int> > pos;
  priority_queue<int, vector<int>, less<int> > neg;

  int x;
  for (int i=0; i<n; i++) {
    cin >> x;
    if (x > 0) {
      pos.push(x);
    } else if (x < 0) {
      neg.push(x);
    } else {
      if (pos.empty() && neg.empty()) cout << "0\n";
      else if (pos.empty()) {
        cout << neg.top() << "\n";
        neg.pop();
      } else if (neg.empty()) {
        cout << pos.top() << "\n";
        pos.pop();
      } else {
        if (pos.top() < abs(neg.top())) {
          cout << pos.top() << "\n";
          pos.pop();
        } else {
          cout << neg.top() << "\n";
          neg.pop();
        }
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}