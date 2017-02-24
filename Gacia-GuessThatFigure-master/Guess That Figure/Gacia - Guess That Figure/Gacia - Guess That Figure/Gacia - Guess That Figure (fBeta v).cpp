//
//  main.cpp
//  Guess That Figure
//
//  Created by Ratul's Mac on 7/10/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, How You Doing?\n";
    
    
    //    1) user give range,
    //    2) pc pics a random int in that range;
    //    3) select a no randomly as a pc pick for user to guess;
    //    4) loop
    //    5) guess korbe user,
    //    6) computer bolbe if =, or < or >
    //    7) if > then say > and add +1 to tries counter, back to loop;
    //    8) if < then then say less then and add +1 to tries counter;
    //        back to loop
    //    9) if = say u won and end loop;
    //    10) print tries counter
    //    //11) score proportional to range, inverse to counter;
    //    12) range = ul - ll; counter;
    //    13) score = range*10 / counter*100 * 100
    
    
    cout<<"\nSo This Is How It Goes;\nYou Gimme An Upper Limit And Lower Limit, \nAnd I Pick A Number Within That Range, \nYou Guess That Number, \nIf You Can Guess It Correctly, You Win!\n\n";
    
    
bokka:
    cout<<"What Lower Limit Do You Want To Set?\n";
    
    int LowerLimit;
    
    cin>> LowerLimit;
    
    if (LowerLimit < 0)
    {
        cout<<"\nShomossha Ki? Ato Kom Ken? \n(What Is Your Problem? Why So Low?)\nJero-r Cheye Boro Nambar De!\n(Give A Number More Than 0!\n\n";
        
        goto bokka;
        
    }
    
    
    cout<<"Now What Upper Limit Do You Want To Set?\n";
    
    int UpperLimit;
    
    cin>> UpperLimit;
    
    
    
    int ComputersPick = ((rand()%UpperLimit)+LowerLimit);
    
    cout<<"\n... \n\nOkay. I Have Picked A Number; Now Start Guessing In Your Range.\n";
    
    // cout<<ComputersPick;
    
    int TriesCounter = 0;
    
    int Guess;
    
    cout<<"\nYour Guess? :\n";
    
    cin>>Guess;
    
    do
    {
        
        if (Guess == ComputersPick)
        {
            TriesCounter++;
            
            //   break;
        }
        
        else if (Guess > ComputersPick)
        {
            
            TriesCounter++;
            
            cout <<"\nYou Guessed, But Your Guess Is Too High, Come Down Bruh. :3\n\n";
            
            cout<<"Now Guess Again : \n";
            
            cin>> Guess;
        }
        
        
        else
        {
            TriesCounter++;
            
            cout<<"\nYour Guess Is Too Low, Come Up A Lil' Man. :v\n\n";
            cout<<"Now Guess Again : \n";
            
            cin>> Guess;
        }
        
    }
    
    while (Guess != ComputersPick);
    
    
    cout<<"\n\nBingo! You Did It! On Point! I Was Thinking Of "<<ComputersPick<<". You Did It In " << TriesCounter << " Tries. Keep It Up. Now Only If You Weren't Trying To Predict A Program And Could Actually Predict A Girl, Lol!\nToodles!\n\n";
    
    cout<<endl;
    
    return 0;
}
