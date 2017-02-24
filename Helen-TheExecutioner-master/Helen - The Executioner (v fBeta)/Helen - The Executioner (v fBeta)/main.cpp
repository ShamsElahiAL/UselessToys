//
//  main.cpp
//  Helen - The Executioner (v fBeta)
//
//  Created by Ratul's Mac on 7/14/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include<cstdlib>
#include<ctime>


#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <string>


using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    
    
    string RandWord = "fromdatabase";
    
    int length = RandWord.length();
    
    string Guess;
    Guess[length];
    
    for (int iter = 0; iter < length; iter++)
    {
        //char temp;
        
        //temp = RandWord[iter];
        
        if (RandWord[iter] != 'a' && RandWord[iter] != 'e'  && RandWord[iter] != 'i' && RandWord[iter] != 'e'  && RandWord[iter] != 'o' && RandWord[iter] != 'u')
        {
            Guess[iter]="_ ";
            cout<<Guess[iter];
        }
        
        else
        {
            Guess[iter] = "X ";
            cout<<Guess[iter];
        }
    }
    
    cout<<endl;
    
    
    char AnswerArray[length];
    
    
    AnswerArray[0] = 'b';
    
    cout<<AnswerArray[0];
    
    
//    for (int jiter = 0; jiter < length; jiter++)
//    {
//    char Answer;
//    
//    cin>>Answer;
//    
//    char temp;
//        
//    temp = RandWord[jiter];
//    
//    if (temp == Answer)
//    {
//        for (int biter = 0; biter<= jiter;)
//    }
//    
//    
//    }
    
    
    
    
    
    return 0;
}
