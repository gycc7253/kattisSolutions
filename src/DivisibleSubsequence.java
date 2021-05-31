import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class DivisibleSubsequence {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testcases = sc.nextInt();
        for (int t = 0; t < testcases; t++) {
            int d = sc.nextInt();
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            long[] presum = new long[n + 1];
            for (int i = 0; i < n; i++) {
                presum[i + 1] = presum[i] + arr[i];
            }
            Map<Integer, Integer> map = new HashMap<>();
            for (int i = 0; i <= n; i++) {
//                presum[i] %= d;
                int x = (int) (presum[i] % d);
                if (map.containsKey(x)) {
                    map.put(x, map.get(x) + 1);
                } else {
                    map.put(x, 1);
                }
            }
//            System.out.println(Arrays.toString(presum));
//            System.out.println(map);
            long result = 0L;
            for (int i : map.keySet()) {
                int icount = map.get(i);
//                System.out.println("i:" + i + "; icount:" + icount);
                result += (long)icount * (long)(icount - 1) / 2;
            }
            System.out.println(result);
        }
    }
}
