// Cplusplus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <vector>
#include <stdlib.h>  // to use rand
#include <time.h> //used to eed 

int main()
{
 /* //examples of variable types

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

        */

    int intArray[] = {1, 0, 3};
    const int intArraySize = 3;
    int intArrayB[intArraySize];

    // Declare a vector

    std::vector<int> intVector;

    // add items to the vector using a function called

    //push_back() and it adds, no surprise to the back (end) of the vector

    intVector.push_back(5);  // vector = { 5}
    intVector.push_back(2);  // vector = { 5, 2}
    intVector.push_back(456); // vector = { 5, 2, 456}
    intVector.push_back(69); // vector = { 5, 2, 456, 45}
    intVector.push_back(3011); // vector = { 5, 2, 456, 69, 3011}
    
    //you can get the current size of a vector using name.size

    std::cout << "Vector is : " << intVector.size() << "\n";

    //You can access utems in a vector just like an array.

    std::cout << "Vector index 0 is : " << intVector[0] << "\n";
    std::cout << "Vector index 1 is : " << intVector[1] << "\n";

    

    //change value of an index within vector

    intVector[2] = 666;

    // BE CAREFUL, THAT INDEX MUST BE CREATED, OR IT WILL ERROR. OR WORSE!!!!!!!!!!!!

    //intVector.pop_back(); // delete 666

    // items can be removed using the erase function

    //erase uses iterators.

    //an iterator is like a marker for a particular point in the vector.

    //lets erase first elements.
    //paramater 1 starting point, paramater 2 end beforethis point, non inclusive
    intVector.erase(intVector.begin(), intVector.begin() + 2);

    std::cout << "Vector is : " << intVector.size() << "\n";

    std::cout << "Vector index 1 is : " << intVector[0] << "\n";

    std::cout << "Beginning loop, be careful!" << "\n";

    for(size_t i = 0; i < intVector.size() ;++i )
    {
        std::cout << "Vector index " << i << " is " << intVector[i] << "\n";
    }

    std::cout << "Completed the loop!";

    int totalRandom = std::rand();

    //Anywhere from 0 to RAND_MAX, which is HUUUUUUUUUUUUUUGE.

    
    std::cout << "RANDOM NUMBER IS " << totalRandom << "\n";
    
    totalRandom = std::rand();

    std::cout << "RANDOM NUMBER IS " << totalRandom << "\n";
    
    totalRandom = std::rand();
    std::cout << "RANDOM NUMBER IS " << totalRandom << "\n";
    
    totalRandom = std::rand();

    // a seed is a starting point for random alcs

    // int seed = 64645;

    //int range = 100;

    int lowerNumber = 50;
    int upperNumber = 150;

    int range = upperNumber - lowerNumber;
    std::srand(time(NULL));
    int seededRandom = std::rand() % range; + lowerNumber;
    std::cout << "RANDOM NUMBER IS " << seededRandom << "\n";

    std::cout << "\n";

    seededRandom = std::rand() % range; + lowerNumber;
    std::cout << "RANDOM NUMBER IS " << seededRandom << "\n";

    seededRandom = std::rand() % range; + lowerNumber;
    std::cout << "RANDOM NUMBER IS " << seededRandom << "\n";

    seededRandom = std::rand() % range; + lowerNumber;
    std::cout << "RANDOM NUMBER IS " << seededRandom << "\n";

    seededRandom = std::rand() % range; + lowerNumber;
    std::cout << "RANDOM NUMBER IS " << seededRandom << "\n";

    
    
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
