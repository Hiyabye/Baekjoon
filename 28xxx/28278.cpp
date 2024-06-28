#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int n, com, x;
  cin >> n;

  stack<int> s;
  while (n--) {
    cin >> com;
    switch (com) {
      case 1: cin >> x; s.push(x); break;
      case 2: if (s.empty()) cout << "-1\n"; else { cout << s.top() << "\n"; s.pop(); } break;
      case 3: cout << s.size() << "\n"; break;
      case 4: cout << (s.empty() ? "1\n" : "0\n"); break;
      case 5: if (s.empty()) cout << "-1\n"; else cout << s.top() << "\n"; break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}