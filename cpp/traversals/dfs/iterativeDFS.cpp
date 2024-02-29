#include <iostream>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class IterativeDFS {
public:
    // In-order traversal using iterative DFS
    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        stack<TreeNode*> stack;
        TreeNode* curr = root;

        while (curr != nullptr || !stack.empty()) {
            while (curr != nullptr) {
                stack.push(curr);
                curr = curr->left;
            }

            curr = stack.top();
            stack.pop();
            cout << curr->val << endl;
            curr = curr->right;
        }
    }

    // Pre-order traversal using iterative DFS
    void preorder(TreeNode* root) {
        if (root == nullptr) return;

        stack<TreeNode*> stack;
        stack.push(root);

        while (!stack.empty()) {
            TreeNode* curr = stack.top();
            stack.pop();
            cout << curr->val << endl;

            if (curr->right != nullptr) {
                stack.push(curr->right);
            }
            if (curr->left != nullptr) {
                stack.push(curr->left);
            }
        }
    }

    // Post-order traversal using iterative DFS
    void postorder(TreeNode* root) {
        if (root == nullptr) return;

        stack<TreeNode*> stack;
        stack.push(root);
        stack.push(root);

        while (!stack.empty()) {
            TreeNode* curr = stack.top();
            stack.pop();

            if (!stack.empty() && curr == stack.top()) {
                if (curr->right != nullptr) {
                    stack.push(curr->right);
                    stack.push(curr->right);
                }
                if (curr->left != nullptr) {
                    stack.push(curr->left);
                    stack.push(curr->left);
                }
            } else {
                cout << curr->val << endl;
            }
        }
    }
};

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    BinaryTree tree;

    cout << "In-order traversal:" << endl;
    tree.inorder(root);

    cout << "\nPre-order traversal:" << endl;
    tree.preorder(root);

    cout << "\nPost-order traversal:" << endl;
    tree.postorder(root);

    return 0;
}

