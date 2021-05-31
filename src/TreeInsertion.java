import java.math.BigInteger;
import java.util.*;

public class TreeInsertion {


    static Map<TreeNode, Integer> map = new HashMap<>();
    static BigInteger[][] memo = new BigInteger[101][101];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n > 0) {
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            TreeNode root = new TreeNode(arr[0]);
//            System.out.println("testcase:" + n);
            for (int i = 1; i < n; i++) {
                TreeNode node = new TreeNode(arr[i]);
                root.insert(node);
            }
//            BFS to validate tree formation
//            List<TreeNode> frontier = new ArrayList<>();
//            frontier.add(root);
//            while (!frontier.isEmpty()) {
//                List<TreeNode> next = new ArrayList<>();
//                for (TreeNode nd : frontier) {
//                    System.out.print(nd.val + " : ");
//                    if (nd.left != null) {
//                        next.add(nd.left);
//                    }
//                    if (nd.right != null) {
//                        next.add(nd.right);
//                    }
//                }
//                System.out.println("-=================");
//                frontier = next;
//            }
            System.out.println(combi(root));
            n = sc.nextInt();
            map = new HashMap<>();
        }
    }

    public static BigInteger combi(TreeNode root) {
//        System.out.println(root.val +  " : " );
        if (root.isLeaf()) {
            return BigInteger.valueOf(1);
        } else if (root.left == null) {
            return combi(root.right);
        } else if (root.right == null) {
            return combi(root.left);
        } else if (root.left.isLeaf() && root.right.isLeaf()) {
            return BigInteger.valueOf(2);
        } else {
            BigInteger a = combi(root.left);
            BigInteger b = combi(root.right);
            int aw = root.left.weight();
            int bw = root.right.weight();
            //            System.out.println(root.val + " : "  + result);
            return choose(bw + aw, aw).multiply(combi(root.left)).multiply(combi(root.right));
//            long result = a > b ? choose(a, b) : choose(b, a);
//            return result;
        }
    }

    public static BigInteger choose(int total, int choose){
        if (memo[total][choose] != null) {
            return memo[total][choose];
        } else {
            BigInteger result;
            if(total < choose) {
                result = BigInteger.valueOf(0);
            } else if(choose == 0 || choose == total) {
                result = BigInteger.valueOf(1);
            } else {
                result = choose(total-1,choose-1).add(choose(total-1,choose));
            }
            memo[total][choose] = result;
            return result;
        }
    }

    static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        public TreeNode(int val) {
            this.val = val;
        }

        public boolean isLeaf() {
            return this.left == null && this.right == null;
        }

        public void insert(TreeNode node) {
            boolean inserted = false;
            TreeNode current = this;
            while (!inserted) {
                if (node.val >= current.val) {
                    if (current.right == null) {
                        current.right = node;
                        inserted = true;
                    } else {
                        current = current.right;
                    }
                } else {
                    if (current.left == null) {
                        current.left = node;
                        inserted = true;
                    } else {
                        current = current.left;
                    }
                }
            }
        }

        public int weight() {
            if (map.containsKey(this)) {
                return map.get(this);
            }
//            System.out.println("weighting");
            int w = 0;
            if (this.isLeaf()) {
                w = 1;
            } else if (this.left == null) {
                return 1 + this.right.weight();
            } else if (this.right == null) {
                w = 1 + this.left.weight();
            } else {
                w = 1 + this.left.weight() + this.right.weight();
            }
            map.put(this, w);
            return w;
        }
    }
}
