// Cplusplus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int main()
{
    //eambles of variable types

    int testInt = 5;
    float testFloat = 50.664;
    unsigned testUnsigned = 100u;
    bool testBool = true;
    char testChar = 'd';
    double testDouble = 1.45345;

    char firstNameOld[] = "Ian";

    std::string firstname = "Ian";
    std::string lastName = "Barrie";


    std::string fullName = firstname + " " + lastName;

    char firstInitial = fullName[0];


    //substr splits the string based n an initial position and length
    std::string intials = fullName.substr(0, 1);

    std::size_t spacePos = fullName.find(" ");

    //you can find the osition in the string and store it in a variable f type stfd::size_t similar to int

    intials += fullName.substr(spacePos + 1, 1);

    //example of otput

    std::cout << intials << std::endl;

    //we can use that position to find the next substring

  

   // float result = 70 % 100; // remember when using float division to invoke float division properly

    std::string testString = "Big old horse";

    //console output example


    std::cout << "Hello World!\n8001\nthis line has text that isn't worth reading\n";

       

    std::string horse = "LOOK AT MY HORSE MY HORSE IS AMAZING GIVE IT A LICK IT TASTES JUST LIKE RAISINS";

    std::string firstTwenty = horse.substr(0, 20);
    std::string restOfString = horse.substr(20, std::string::npos);

    std::cout << firstTwenty + "\n";
    std::cout << restOfString + "\n";



    // input

    std::cout << "please enter a word";

    std::string entryString;
        

    //std:cin is used for input, the result of the console input s stored  the variable to the ring
    std::cin >> entryString;

    std::cout << "You typed " << entryString << "!\n";



    //can input non strings
    int entryInt;

    std::cout << "Please enter a whole number.\n";

    std::cin >> entryInt;

        std::cout << "You typed " << entryInt << "!\n";

        //NOTE if they enter something other than an in the input wil not consome the enty
        //this means t will be used next time that cin is used probably breaking program, use data validation

        // this works with floats

        //to input a full line

        std::string lineOfText;

        std::cout << "enter a line f text\n";

        std::getline(std::cin, lineOfText);

        std::cout << "You typed " << lineOfText << "!\n";

        // selection

        //if statements work mostly the sam

        bool decision = true;

        if (decision)
        {
        std::cout << "Decision was true!\n";
        }

        else
        {
            std::cout << "Decision was false!\n";
        }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
