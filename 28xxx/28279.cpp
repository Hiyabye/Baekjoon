#include <deque>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  deque<int> dq;
  while (n--) {
    int command, x; cin >> command;
    switch (command) {
      case 1: cin >> x; dq.push_front(x); break;
      case 2: cin >> x; dq.push_back(x); break;
      case 3: if (dq.empty()) cout << "-1\n";
              else { cout << dq.front() << "\n"; dq.pop_front(); } break;
      case 4: if (dq.empty()) cout << "-1\n";
              else { cout << dq.back() << "\n"; dq.pop_back(); } break;
      case 5: cout << dq.size() << "\n"; break;
      case 6: cout << (dq.empty() ? 1 : 0) << "\n"; break;
      case 7: cout << (dq.empty() ? -1 : dq.front()) << "\n"; break;
      case 8: cout << (dq.empty() ? -1 : dq.back()) << "\n"; break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}