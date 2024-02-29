class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

public class Orders {
    // Pre-order traversal using DFS
    public void preorder(TreeNode root) {
        if (root == null) return;

        System.out.print(root.val + " ");
        preorder(root.left);
        preorder(root.right);
    }

    // In-order traversal using DFS
    public void inorder(TreeNode root) {
        if (root == null) return;

        inorder(root.left);
        System.out.print(root.val + " ");
        inorder(root.right);
    }

    // Post-order traversal using DFS
    public void postorder(TreeNode root) {
        if (root == null) return;

        postorder(root.left);
        postorder(root.right);
        System.out.print(root.val + " ");
    }

    public static void main(String[] args) {
        // Create a sample binary tree
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);

        Solution solution = new Solution();

        System.out.print("Pre-order traversal: ");
        solution.preorder(root);
        System.out.println();

        System.out.print("In-order traversal: ");
        solution.inorder(root);
        System.out.println();

        System.out.print("Post-order traversal: ");
        solution.postorder(root);
        System.out.println();
    }
}

