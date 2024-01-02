#include <iostream>
using namespace std;

typedef struct Node {
  char data;
  Node *left;
  Node *right;
} Node;

class BinaryTree {
private:
public:
  Node *root;

  Node *newNode(char data) {
    Node *node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
  }

  BinaryTree(void) {
    root = newNode('A');
  }

  Node* search(Node* node, char data) {
    if (node == nullptr) return nullptr;
    if (node->data == data) return node;

    Node *left = search(node->left, data);
    if (left != nullptr) return left;
    Node *right = search(node->right, data);
    if (right != nullptr) return right;
    return nullptr;
  }

  void add(char root, char left, char right) {
    Node *rootNode = search(this->root, root);
    if (left != '.') rootNode->left = newNode(left);
    if (right != '.') rootNode->right = newNode(right);
  }

  void preorder(Node *node) {
    if (node == nullptr) return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
  }

  void inorder(Node *node) {
    if (node == nullptr) return;
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
  }

  void postorder(Node *node) {
    if (node == nullptr) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
  }
};

void solve(void) {
  int n;
  cin >> n;
  char root, left, right;
  BinaryTree tree;
  for (int i=0; i<n; i++) {
    cin >> root >> left >> right;
    tree.add(root, left, right);
  }

  tree.preorder(tree.root);
  cout << "\n";
  tree.inorder(tree.root);
  cout << "\n";
  tree.postorder(tree.root);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}