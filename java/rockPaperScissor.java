package com.company;
import java.util.Random;
import java.util.Scanner;

public class rockPaperScissor {
    public static void main(String[] args) {
        System.out.println("Welcome to the rock - paper - scissors game!");
        System.out.println("Press\n '1' for rock,\n '2' for scissor,\n '3' for paper.");
        int i = 1;
        Random rand = new Random();
        Scanner sc = new Scanner(System.in);

        int scoreComp = 0;
        int scoreUser = 0;
        int ties = 0;

        while (i <= 10) {
            int randint = rand.nextInt(4 - 1) + 1;
            System.out.print("Your guess(1/2/3): ");
            int guess = sc.nextInt();

//            1 = r, 2 = s, 3 = p

            if (randint == 1 && guess==2) {
                System.out.println("You lost this time!");
                scoreComp++;
            }  else if(randint == 2 && guess == 2) {
                System.out.println("You won this time!");
                scoreUser++;
            } else if(randint == 3 && guess == 2) {
                System.out.println("Tie!");
                ties++;
            }


            else if (randint == 1 && guess == 1) {
                System.out.println("Tie!");
                ties++;
            }  else if(randint == 2 && guess == 1) {
                System.out.println("You won this time!");
                scoreUser++;
            } else if(randint == 3 && guess == 1) {
                System.out.println("You lost this time!");
                scoreComp++;
            }

            else if (randint == 1 && guess == 3) {
                System.out.println("You won this time!");
                scoreUser++;
            }  else if(randint == 2 && guess == 3) {
                System.out.println("Tie!");
                ties++;
            } else if(randint == 3 && guess == 3) {
                System.out.println("You lost this time!");
                scoreComp++;
            } else {
                System.out.println("Wrong input!");
                continue;}

            if  (i == 10) {
                if (scoreComp > scoreUser) {
                    System.out.println("The computer won,you lost! Your score: " + scoreUser + "\nComputer's score: " + scoreComp + "\nTies:" + ties);
                }
                else if (scoreUser > scoreComp) {
                    System.out.println("You won, the computer lost! Your score: " + scoreUser + "\nComputer's score: " + scoreComp + "\nTies:" + ties);
                } else {
                    System.out.println("It's a tie! Your score: " + scoreUser + "\nComputer's score: " + scoreComp + "\n Ties: " + ties);
                }
                break;
            }

            i++;
        }
    }
}
