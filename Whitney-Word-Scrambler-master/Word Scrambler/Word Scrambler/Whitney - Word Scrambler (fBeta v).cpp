//
//  main.cpp
//  Word Scrambler
//
//  Created by Ratul's Mac on 7/10/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

//my //#include <iostream>
//#include <string>
//
#include<cstdlib>
#include<ctime>


#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock


using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout<<"I'm Whitney, The Scrambler Master.\n\nHere, I'm Going To Conjure Up A Word From The English Dictionary, This Is The PassCode, \nThen I'll Jumble It Up And Give You.\nYou Have To Unscramble It And Give Me The PassWord. \n\nMay The Ducky Of Awesome Be With You! B)\n\n";
    
    
    { //my // srand(time(NULL));
    
    
//    // obtain a time-based seed:
//    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//    
//    
//    random_shuffle(asa.begin(), asa.end(), std::default_random_engine(seed));
//    cout<<asa;
//
    
    }
    
  //fkkkk eita comment out na korar jonno run korteselo na pura program b....
    //string DataBase [1095820];
    
   
    int tries_counter = 0;
    string word;
    string jumbled;
    string guess;

    do{
        tries_counter++;
        
    srand(time(NULL));
    
     word = "abcde"; //jumbled version of the word
    
    
   
    
    
    int length = word.size();
    
     jumbled = word;
    
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumbled[index1];
        jumbled[index1] = jumbled[index2];
        jumbled[index2] = temp;
        //score = length;   // score based on the length of the word
        
        
    }
    
    cout<<"The Encrypted Code Is : "<<jumbled;
    cout<<endl<<endl;
    
    
    cout<<"Please Enter The PassWord: "<<endl;
  //  string guess;
    cin>>guess;
    } while (guess != word);
    
    
    
    if (guess == word)
    {
        cout<<"You Have Entered.. The Password Correctly!\nYou Cracked The Code In, Like, Exactly "<<tries_counter<<" Tries! \nKudos!\n\nToodles To You!\nWhitney Out.\n\n";
    }
    
    
    //cout<<"Your DataBase : "; //in header file
    
    
//    //algo - -find position of space
//            -put " after position of ,
//            -find position of ,
//            -put " before position of ,
//             -
        return 0;
}
