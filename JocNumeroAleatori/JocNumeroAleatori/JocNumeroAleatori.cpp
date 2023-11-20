#include <iostream>																								//library that'll use
using namespace std;																							//method that'll display the program
int numAl, guess = 0, seed, tries;																				//variables that'll use
int main() {																									//principal function of the program
	srand(time(0));																								//random method using the time to reproduce it
	int numAl = (rand() % 100);																					//this assigns a random num to the variable
	cout << "Benvingut! A continuacio jugarem a endivinar el numero aleatori del 1 al 100.\nQuin creus que pot ser?\n";			//message to guide the player
	
	for (int i = guess; guess != numAl; tries++) {																//This creates a void that states that, as long as the guess does not equal to the numAl, and each time it starts, it adds 1 to the tries value
	cin >> guess;																								//in this part, the player introduces the guess
		if (guess > numAl) {																					//in case the number is superior to the misterious num, it plays this part
			cout << "Llastima! El num era mes gran que el numero secret! Torna a intentar-ho\n";				//that says to the player that the num is wrong
		}
		else if (guess < numAl) {																				//in other hand, if the number is less than the misterious one, it says this part
			cout << "Llastima! El num era mes petit que el numero secret! Torna a intentar-ho\n";	
		}
	}
	cout << "Enhorabona, el numero era: " << numAl << " !!!" << endl;
	cout << "Numero d'intents: " << tries;
}