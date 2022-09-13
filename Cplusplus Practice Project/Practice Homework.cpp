#include <iostream>
#include<string>
#include <vector>
#include <stdlib.h>  // to use rand
#include <time.h> //used to seed 

int main()
{


	// problem one 

	int rectWidth = 50;
	int rectLength = 40;

	int Perimeter = 2 * (rectLength + rectWidth);

	int rectArea = (rectLength * rectWidth);

	std::cout << "The perimeter is " << Perimeter << "\n";

	std::cout << "The area is " << rectArea << "\n";

	std::cout << "\n";

	// end of problem one
		

	//problem two

	int hours = 50;
	int minutes = hours * 60;
	int seconds = hours * 3600;
	float days = hours / 24.0f;

	std::cout << "Hours is : " << hours << "\n";
	std::cout << "Minutes is : " << minutes << "\n";
	std::cout << "Seconds is : " << seconds << "\n";
	std::cout << "Days is : " << days << "\n";

	// end of problem two

	std::cout << "\n";

	// problem Three

	std::vector<std::string> stringInsults;

	stringInsults.push_back("You are a darn buffoon");
	stringInsults.push_back("Yeah? your mom.");
	stringInsults.push_back("Your grandmother, something something eggs");
	stringInsults.push_back("your da sells avon");
	stringInsults.push_back("You are a raving idiot!");

	std::srand(time(NULL));
	int seededRandom = std::rand() % stringInsults.size();

	std::cout << "Your insult is : " << "\n";
	std::cout << stringInsults[seededRandom];
	
	// end of problem three.

	std::cout << "\n";

	//problem four

	std::string codePhrase = "The quick brown fox jumped over the lazy dogs";
	std::string codeWord = "fox";

	std::size_t found = codePhrase.find(codeWord);
	if (found != std::string::npos)
		std::cout << "first 'codeword' found at string index " << found << '\n';

	//end of problem four.




}