/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package guess.the.number;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author mac
 */
public class NumGuess {
    
    private int Guess;
    
//    private int PcGuess;
    
    
   
    
    
    Random randy = new Random();
    
    
    private int PcGuess = randy.nextInt(1001);
    
    
        
        
    
    
    
    Scanner input = new Scanner(System.in);
    
    
    void setGuess()
    {
        System.out.println("Please Enter Your Guess: ");
        
        this.Guess = input.nextInt();
        
    }
    
    
    
    int Cheat()
    {
        System.out.println("The PC Guessed "+ PcGuess +".\n");
        return PcGuess;
    }
    
    
    int getGuess()
    {
        System.out.println("You Guessed " + this.Guess + ".\n");
        
        return this.Guess;
    }
    
    
    
    boolean NumChecker(int a, int b)
    {
        if (a > b)
        {
            System.out.println("Your Guess Is Too Big!");
            return false;
        }
        
        else if (a < b)
        {
            System.out.println("Your Guess Is Too Small. :<");
            return false;
        }
        
        else
        {
            System.out.println("You Guessed " + a + " And The Computer's Guess Was " + b + ". So You Right!");
            return true;
        }
        
        
    }
        
        
       public String toString()
       {
           System.out.println("string doc");
           return "sds";
       }
    }

