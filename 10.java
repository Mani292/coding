import java.util.Random;

public class RandomNumbers {
    public static void main(String[] args) {
        Random random = new Random();

        System.out.println("10 Random Numbers:");
        for (int i = 0; i < 10; i++) {
            int number = random.nextInt(100); // Generates a number between 0 and 99
            System.out.println("Random Number " + (i + 1) + ": " + number);
        }
    }
}
