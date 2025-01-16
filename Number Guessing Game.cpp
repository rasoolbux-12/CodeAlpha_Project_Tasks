#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));                
    int number = rand() % 100 + 1; 
    int guess;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess the number. Best of luck!" << endl;
    cout << "Enter your guess: ";

    while (true) {
        cin >> guess;

        
        if (guess > number) {
            cout << "Too high! Try again: ";
        } 
        else if (guess < number) {
            cout << "Too low! Try again: ";
        } 
        else {
        
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    cout << "Thank you for playing! Have a great day!" << endl;

    return 0;
}
