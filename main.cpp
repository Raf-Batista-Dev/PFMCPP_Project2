#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    int a = 5;
    int second = 2;
    int numberOfBooks = 15;

    float temp = 44.3f;
    float change = 0.78f;
    float b = .5556f;

    bool isTodayFriday = false;
    bool inCalifornia = true;
    bool isRentDue = true;

    double largeNum = 1000000;
    double c = 134567789;
    double population = 34451234;

    char d = 'd';
    char character = 'z';
    char letter = 'F';

    unsigned int neverNegative = 25;
    unsigned int doubleTheSizeOfInt = 255;
    unsigned int noBitNeeded = 1;

    ignoreUnused(a,
                 second,
                 numberOfBooks,
                 temp,
                 change,
                 b,
                 isTodayFriday,
                 inCalifornia,
                 isRentDue,
                 largeNum,
                 c,
                 population,
                 d,
                 character,
                 letter,
                 neverNegative,
                 doubleTheSizeOfInt,
                 noBitNeeded);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool shouldAlarmRing(int currentTime, int alarmTime)
{
    ignoreUnused(currentTime, alarmTime);
    return {};
}
/*
 2)
 */
float checkCurrentTemperature(bool inFahrenheit = true)
{
    ignoreUnused(inFahrenheit);
    return {};
}
/*
 3)
 */
float convertFahreneitToCelcius(float fahrenheit)
{
    ignoreUnused(fahrenheit);
    return {};
}
/*
 4)
 */
int checkTrainStop(std::string currentStop, std::string destination, int numberOfStopsAway)
{
    ignoreUnused(currentStop, destination, numberOfStopsAway);
    return {};
}
/*
 5)
 */
char getStudentGrade(int studentId, std::string className)
{
    ignoreUnused(studentId, className);
    return {};
}
/*
 6)
 */
void buyGroceries(std::string shoppingList, int shoppingBags = 5, std::string groceryStoreLocation = "Closes One")
{
    ignoreUnused(shoppingList, shoppingBags, groceryStoreLocation);
}
/*
 7)
 */
void practiceGuitar(bool practiceSweepPicking = true, bool practiceAlternatePicking = true, int practiceDurationInMinutes = 90)
{
    ignoreUnused(practiceSweepPicking, practiceAlternatePicking, practiceDurationInMinutes);
}
/*
 8)
 */
void practiceDrums(bool practiceDoubleBass = true, bool practiceHeelToe = true, int practiceDurationInMinutes = 60)
{
    ignoreUnused(practiceDoubleBass, practiceHeelToe, practiceDurationInMinutes);
}
/*
 9)
 */
void practiceKeyboard(std::string songToPractice, int practiceDurationInMinutes = 30)
{
    ignoreUnused(songToPractice, practiceDurationInMinutes);
}
/*
 10)
 */
void cookDinner(std::string ingredients, std::string cookingMethod, int cookingDurationInMinutes)
{
    ignoreUnused(ingredients, cookingMethod, cookingDurationInMinutes);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto alarm = shouldAlarmRing(12, 13);
    //2)
    auto temperature = checkCurrentTemperature(true);
    //3)
    auto temperatureInCelcius = convertFahreneitToCelcius(75.2f);
    //4)
    auto currentTrainRide = checkTrainStop("stop B", "stop F", 4);
    //5)
    auto studentGrade = getStudentGrade(256, "Intro to programming");
    //6)
    buyGroceries("eggs, milk, coffee");
    //7)
    practiceGuitar(true, false, 45);
    //8)
    practiceDrums(true, true, 45);
    //9)
    practiceKeyboard("Midna's Lament from The Legend of Zelda: Twilight Princess", 30);
    //10)
    cookDinner("chicken thighs, bbq rub", "smoked", 180);
    
    ignoreUnused(carRented, alarm, temperature, temperatureInCelcius, currentTrainRide, studentGrade);


    std::cout << "good to go!" << std::endl;
    return 0;    
}
