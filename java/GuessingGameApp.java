import java.util.*;
/**
 * Guesser class is responsible for guessing a number.
 */
class Guesser {
    int guess;

    /**
     * Method to get the guessed number from the user
     * @param scan Scanner object to read input
     * @return guessed number
     */
    int guessingNum(Scanner scan) {
        System.out.println("Guesser, please guess the number:");
        guess = scan.nextInt();
        return guess;
    }
}

/**
 * Player class represents each player in the game.
 */
class Player {
    int predict;

    /**
     * Method for player to predict a number
     * @param scan Scanner object
     * @param playerNumber player identifier
     * @return predicted number
     */
    int predictingNum(Scanner scan, int playerNumber) {
        System.out.println("Player " + playerNumber + ", please predict the number:");
        predict = scan.nextInt();
        return predict;
    }
}

/**
 * Umpire class controls the game logic.
 * It collects numbers from Guesser and Players
 * and compares them to decide the winner.
 */
class Umpire {
    int numFromGuesser;
    int numFromPlayer1;
    int numFromPlayer2;
    int numFromPlayer3;

    /**
     * Collect number from Guesser
     */
    void collectingNumFromGuesser(Scanner scan) {
        Guesser g = new Guesser();
        numFromGuesser = g.guessingNum(scan);
    }

    /**
     * Collect numbers from all players
     */
    void collectingNumFromPlayers(Scanner scan) {
        Player p1 = new Player();
        Player p2 = new Player();
        Player p3 = new Player();

        numFromPlayer1 = p1.predictingNum(scan, 1);
        numFromPlayer2 = p2.predictingNum(scan, 2);
        numFromPlayer3 = p3.predictingNum(scan, 3);
    }

    /**
     * Compare guessed number with players' predictions
     * and declare the winner
     */
    void comparing() {
        boolean winner = false;

        if (numFromGuesser == numFromPlayer1) {
            System.out.println("Player 1 wins!");
            winner = true;
        }

        if (numFromGuesser == numFromPlayer2) {
            System.out.println("Player 2 wins!");
            winner = true;
        }

        if (numFromGuesser == numFromPlayer3) {
            System.out.println("Player 3 wins!");
            winner = true;
        }

        if (!winner) {
            System.out.println("No one guessed correctly. Try again!");
        }
    }
}

/**
 * Main class to run the Guessing Game application
 * Author: Nikhil Jeeva
 */
public class GuessingGameApp {

    /**
     * Main method where execution starts
     */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        Umpire u = new Umpire();
        u.collectingNumFromGuesser(scan);
        u.collectingNumFromPlayers(scan);
        u.comparing();

        scan.close();
    }
}