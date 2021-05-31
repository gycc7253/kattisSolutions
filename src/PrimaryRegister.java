import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class PrimaryRegister {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String[] strarr = str.split(" ");
        int[] primes = {2, 3, 5, 7, 11, 13, 17, 19};
        int[] dp = new int[primes.length];
        dp[0] = 1;
        for (int i = 1; i < dp.length; i++) {
            dp[i] = dp[i - 1] * primes[i - 1];
        }
        List<Integer> intList = Arrays.stream(strarr).map(Integer::valueOf).collect(Collectors.toList());
        int total = Arrays.stream(primes).reduce(1, (x, y) -> x * y) - 1;
        int current = 0;
        for (int i = 0; i < 8; i++) {
            current += dp[i] * intList.get(i);
        }
        System.out.println(total - current);
    }
}
