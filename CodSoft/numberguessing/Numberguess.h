#include <iostream>
#include <cstdlib>
#include <ctime>

template<class T>
class NumberGuess
{
private:
	T secretnum;
	T attempts;

public:
	NumberGuess();
	void playGame();
};
template<typename T>
NumberGuess<T>::NumberGuess()
{

	std::srand(std::time(0));
	secretnum = std::rand() % 100 + 1;
	attempts = 0;
}
template<typename T>
void NumberGuess<T>::playGame()
{
	std::cout << "---------Welcome to the Guess the Number Game!---------" << std::endl;
	std::cout << "---------Let's begin the game---------\n";
	while (true)
	{
		T guessnum;
		std::cout << "Enter your guess between 1 to 100: ";
		std::cin >> guessnum;
		attempts++;

		if (guessnum < secretnum)
		{
			std::cout << "Too low! Try again." << std::endl;
		}
		else if (guessnum > secretnum)
		{
			std::cout << "Too high! Try again." << std::endl;
		}
		else
		{
			std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
			break;
		}
	}
}