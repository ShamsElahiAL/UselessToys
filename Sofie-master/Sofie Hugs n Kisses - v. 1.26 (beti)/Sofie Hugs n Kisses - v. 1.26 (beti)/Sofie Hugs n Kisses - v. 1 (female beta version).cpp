//
//  main.cpp
//  Sofie Hugs n Kisses - v. 1.26 (beti)
//
//  Created by Ratul's Mac on 7/5/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
  //Lets Set Up Sofie's Body - The Tic Tac Toe Board
    
    //The board is a 3x3 square; to make things easier I gave each of the locations an the square a character coordinate
    
    //so set up 9 char variables for the 9 coordinates of the gamespace
    
    
    char a = '1';
    char b = '2';
    char c = '3';
    char d = '4';
    char e = '5';
    char f = '6';
    char g = '7';
    char h = '8';
    char i = '9';
    
    
    //set 2 boolean variables to stop the game loop - if anyone wins or loses or draws
    
    bool gameover = false;
    bool won = false;

    
    //a char variable to take in the input of the coordinate the user wants to mark
    char move;
    
    
    int turn = 1;
    int player;
    char choice;
    
    cout<<"Welcome! I Am Sofie - The Hugs And Kisses (Xs And Os) Game Bot!\n\n";
    
    cout<<"My Body Is Marked With The Coordinates Where You Bros Can Mark And Fight Yourselves. :p \n\n";
    
    cout<<"Enter The Place You Want To Mark With Its Coordinate Number Shown On My Body.\n\n";
    
    cout<<"May The Best Bruh Win! ;)\n\n";

    
    do { // loops until game is not over
        
        
        
        char mark;
        
        
        
        
        //here the board is printed; with our initial coordinates being placed in it
        
        cout <<endl<< a << " | " << b << " | " << c << endl; // the board
        cout << "-----------" << endl;
        cout << d << " | " << e << " | " << f << endl;
        cout << "-----------" << endl;
        cout << g << " | " << h << " | " << i << endl;
        
        
        //add 1 to turn, so in the first loop run, turn = 2
        turn++;
        
        
        //for multiples of 2, ie even numbers, it will be player 1, else, player 2
        if(turn % 2 == 0) {
            mark = 'X';
            player = 1;
        }
        
        else {
            mark = 'O';
            player = 2;
        }
        
        
        //input the coordinate you want to mark on
        cin >> move;
        
        
        
        //set up all the possible coordinates the player can mark
        //1st check which coordinate user wants to mark, then check if its unused
        if(move == '1' && a == '1') {
            a = mark;
        }
        
        else if(move == '2' && b == '2') {
            b = mark;
        }
        
        else if(move == '3' && c == '3') {
            c = mark;
        }
        
        else if(move == '4' && d == '4') {
            d = mark;
        }
        
        else if(move == '5' && e == '5') {
            e = mark;
        }
        
        else if(move == '6' && f == '6') {
            f = mark;
        }
        
        else if(move == '7' && g == '7') {
            g = mark;
        }
        
        else if(move == '8' && h == '8') {
            h = mark;
        }
        
        else if(move == '9' && i == '9') {
            i = mark;
        }
        
        
        //if the coordinate is unavailable give out a message
        else {
            
            cout << "Uh Uh! That Place Is Taken Bruh!" << endl;
        }
        
        
        //Give out all win combinations; and if true, set the boolean var to true;
        if(a == mark && b == mark && c == mark) {             won = true;
        }
        
        else if(a == mark && d == mark && g == mark) {
            won = true;
        }
        
        else if(a == mark && e == mark && i == mark) {
            won = true;
        }
        
        else if(d == mark && e == mark && f == mark) {
            won = true;
        }
        
        else if (b == mark && e == mark && h == mark) {
            won = true;
        }
        
        else if(c == mark && f == mark && i == mark) {
            won = true;
        }
        
        else if(g == mark && e == mark && c == mark) {
            won = true;
        }
        
        else if(g == mark && h == mark && i == mark) {
            won = true;
        }
        
        
        //Set up the draw conditions and give an output
        else if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9') {
            
            won = false;
            gameover = true;
            cout << "No One Won! Tis'a Draw. :v" << endl<< endl;
            
        }
        
        
        
        
        //If the boolean won variable is changed to true; then the last player to move must have won, so display the message with the winning board;
        
        if (won == true) {
            
            cout << "Pleya " << player << " Is The Winna!" << endl<< endl;
            gameover = true; 
            
            
            cout << a << " | " << b << " | " << c << endl;
            cout << "-----------" << endl;
            cout << d << " | " << e << " | " << f << endl;
            cout << "-----------" << endl;
            cout << g << " | " << h << " | " << i << endl<< endl;
            
            
            
        }
        
        
        
        
        
        
        //keep game loop going until - game == over
        
    }while(gameover == false);
    
    
    
    //keep the console window open so that you can see result
    system("pause");
    return 0;
}
