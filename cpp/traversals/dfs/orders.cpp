#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Pre-order traversal using DFS
    void preorder(TreeNode* root) {
        if (root == nullptr) return;

        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

    // In-order traversal using DFS
    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }

    // Post-order traversal using DFS
    void postorder(TreeNode* root) {
        if (root == nullptr) return;

        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
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

