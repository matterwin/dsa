#include <iostream>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Pre-order traversal
    void preorder(TreeNode* root) {
        if (root == NULL) return;

        stack<TreeNode*> stack;
        stack.push(root);

        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            cout << node->val << " ";

            if (node->right) stack.push(node->right);
            if (node->left) stack.push(node->left);
        }
    }

    // In-order traversal
    void inorder(TreeNode* root) {
        if (root == NULL) return;

        stack<TreeNode*> stack;
        TreeNode* curr = root;

        while (curr != NULL || !stack.empty()) {
            while (curr != NULL) {
                stack.push(curr);
                curr = curr->left;
            }

            curr = stack.top();
            stack.pop();
            cout << curr->val << " ";
            curr = curr->right;
        }
    }

    // Post-order traversal
    void postorder(TreeNode* root) {
        if (root == NULL) return;

        stack<TreeNode*> stack;
        stack.push(root);
        stack.push(root);

        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();

            if (!stack.empty() && node == stack.top()) {
                if (node->right) {
                    stack.push(node->right);
                    stack.push(node->right);
                }
                if (node->left) {
                    stack.push(node->left);
                    stack.push(node->left);
                }
            } else {
                cout << node->val << " ";
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

    Solution solution;
    
    cout << "Pre-order traversal: ";
    solution.preorder(root);
    cout << endl;

    cout << "In-order traversal: ";
    solution.inorder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    solution.postorder(root);
    cout << endl;

    return 0;
}

