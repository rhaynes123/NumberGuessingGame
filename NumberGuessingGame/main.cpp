//
//  main.cpp
//  NumberGuessingGame
//
//  Created by richard Haynes on 2/2/16.
//  Copyright © 2016 richard Haynes. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int HiddenNumber =8;
    int PlayersGuess;
    string PlayerResponse;
    //This needs a while loop added
    cout<<"Welcome to the Number Guessing Game\n";
    cout<<"Please enter in your guess\n";
    cin>>PlayersGuess;
    if(PlayersGuess == HiddenNumber)
    {
        cout<<"Correct You Win\n";
    }
    else
    {
        cout<<"Sorry that is the wrong answer! Do you want to continue?\n";
        getline(cin, PlayerResponse);
        
    }
    

}