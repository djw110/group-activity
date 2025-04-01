// JD
// Reverse equality operator. Line 10
// Remove line 14. b = a + b;

// ES
// Bugs addressed

public class sum_even_fibonacci {
    public static void main(String[] args) {
        int a = 0, b = 1;
        int sumEven = 0;
        while (b < 4000000) {
            if (b % 2 == 0) {
                sumEven += b;
            }
            int temp = b;
            b = a + b;
            a = temp;
        }
        System.out.println(sumEven);
    }
}

// answer should be 4613732
