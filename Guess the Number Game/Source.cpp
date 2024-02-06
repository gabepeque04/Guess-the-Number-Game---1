#include<iostream> //includes the input/output stream library, allows the use of functions like cout and cin
#include<cstdlib> //for rand() and srand() functions
#include<ctime> //for time() function

using namespace std; 

int main() {

	srand(time(0)); //combination is used to initialize the random number generator with a seed. time() gives a unique value 
					//representing the current time. srand() is used to seed the random number generator. when combined
					//srand(time(0)), it sets the seed based on the current time.

	//Generate a random number between 1 and 100
	int secretNumber = rand() % 100 + 1; //0-99 + 1 -> 1-100. Generates a random number between 1-100 and assigns it to the variable secretNumber.
	int guess;	//stores the user's guess
	int attempts = 0;	//stores the number of user's attempts

	cout << "Welcome to Guess the Number!" << endl; //welcomes the user
	cout << "Try to guess the secret number between 1 and 100" << endl; //Provides instructions to the user
	//This do-while loop that continues until the user correctly guesses the secret number.
	do {
		cout << "Enter your guess:"; //Propmts the user to enter their guess.
		cin >> guess; //Reads the user's input and assigns it to the variable guess
		attempts++; //Increments the attempts counter each time the user makes a guess.
		//Checks if the user's guess is equal to the secret number.
		if (guess == secretNumber) {
			cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
		}
		//Checks if the guess is too low.
		else if (guess < secretNumber) {
			cout << "Too low. Try again!" << endl;
		}
		//Handles the case where the guess is too high.
		else {
			cout << "Too high. Try again!" << endl;
		}

	} while (guess != secretNumber);

	return 0;


}