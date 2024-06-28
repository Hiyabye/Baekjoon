#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef struct Node {
  string s;
  map<string, Node*> m;
} Node;

void dfs(Node* cur, int depth) {
  for (auto it=cur->m.begin(); it!=cur->m.end(); it++) {
    for (int i=0; i<depth; i++) cout << "--";
    cout << it->first << "\n";
    dfs(it->second, depth+1);
  }
  delete cur;
}

void solve(void) {
  int n; cin >> n;
  Node* root = new Node();
  for (int i=0; i<n; i++) {
    int k; cin >> k;
    Node* cur = root;
    for (int j=0; j<k; j++) {
      string s; cin >> s;
      if (cur->m.find(s) == cur->m.end()) {
        Node* next = new Node();
        cur->m[s] = next;
        cur = next;
      } else {
        cur = cur->m[s];
      }
    }
  }

  dfs(root, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}