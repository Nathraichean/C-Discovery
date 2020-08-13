#include <iostream>
#include <string>
#include "FBullCowGame.h"

using int32 = int;
using FText = std::string;

void PrintIntro();
void PlayGame();
FText GetValidGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;
void PrintGameSummary();

int main() {

	
	do {
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain());

}

void PlayGame() {
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();


	while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries) {

		FText Guess = GetValidGuess();

		FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);

		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << "\n\n";
	
	}

	PrintGameSummary();
	return;
}

void PrintIntro() {

	std::cout << "\n\nWelcome to Bulls & Cows\n";
	std::cout << "You have to try and guess a " << BCGame.GetHiddenWordLength() <<
		" letter word that is also an isogram.\n\n";
	return;
}

FText GetValidGuess() {

	EGuessStatus Status = EGuessStatus::Invalid_Status;
	FText Guess = "";

	do {
		std::cout << "Try " << BCGame.GetCurrentTry() << " of " << BCGame.GetMaxTries();
		std::cout << ". Enter your guess : ";
		std::getline(std::cin, Guess);

		Status = BCGame.CheckGuessValidity(Guess);

		switch (Status)
		{
		case EGuessStatus::Wrong_Length:
			std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n\n";
			break;
		case EGuessStatus::Not_Isogram:
			std::cout << "Please enter a word without repeating letters\n\n";
			break;
		case EGuessStatus::Not_Lowercase:
			std::cout << "Please enter an all lowercase guess.\n\n";
			break;
		default:
			break;
		}
		
	} while (Status != EGuessStatus::OK);
	return Guess;

	
}

bool AskToPlayAgain() {

	std::cout << "Do you want to play again with the same hidden word? (y/n)";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void PrintGameSummary() {
	if (BCGame.IsGameWon())
	{
		std::cout << "Well done! You Win!\n";
	}
	else
	{
		std::cout << "Better luck next time!\n";
	}
}