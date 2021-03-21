/*
Fruit Quiz
Pawelski
3/19/2021
The game picks a random fruit that the user must guess the color of.
*/

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    int selectFruit = rand() % 3;
    string mysteryFruit = "", fruitColor = "", guessedColor;
    if (selectFruit == 0)
    {
        mysteryFruit = "banana";
        fruitColor = "yellow";
    }
    if (selectFruit == 1)
    {
        mysteryFruit = "apple";
        fruitColor = "red";
    }
    if (selectFruit == 2)
    {
        mysteryFruit = "orange";
        fruitColor = "orange";
    }

    cout << "What is the color of a(n) " << mysteryFruit << "? >> ";
    cin >> guessedColor;
    if (guessedColor == fruitColor)
    {
        cout << "You guessed correctly!";
    }
    else
    {
        cout << "Incorrect! A(n) " << mysteryFruit << " is " 
            << fruitColor << ".";
    }
    return 0;
}
