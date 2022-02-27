//
//   COPYRIGHT (C) Student@zips.uakron.edu>, 2020  All rights reserved.
//   Student Name
//   Purpose: This is myCode and is based upon what we study for Comp Sci
//

#include <cassert>
#include <iosfwd>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib> // for random
#include <limits>  // numeric_limits<std::streamsize> for validations
#include <math.h>  //is used for math function like square root


// these are declarations - prefer this or std:: prefix
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;
using std::string;
using std::fstream;
using std::ifstream;
using std::ios;

static int uChoose = 0;

int
mainMenu();

void
preDefined();

void
scopeType();

void
returns();

void
passBy();

void
moreFunk();

void
files();

void
charIO();

void
misc();

struct Test_myCode
{
  void
  default_beg()
  {
    uChoose = mainMenu();
    assert(!(std::cin.fail()));
    std::cout << " Main menu passed " << std::endl;
  }
  void
  whatAction()
  {
    switch (uChoose)
    {
      case (1):
        preDefined();
        break;
      case (2):
        scopeType();
        break;
      case (3):
        returns();
        break;
      case (4):
        passBy();
        break;
      case (5):
        moreFunk();
        break;
      case (6):
        files();
        break;
      case (7):
        charIO();
        break;
      default:
        cout << "no case";
    }
  }

  // The test runner for this test class.
  void
  run()
  {
    default_beg();
    whatAction();
  }

};


int
main()
{
  Test_myCode test;
  while (true)
  {
    test.run();
  }

}



int
mainMenu()
{
  // heading, input section
  cout << endl;
  cout << setw(68) << "__________________________________________________________________ " << endl;
  cout << setw(68) << "|------------------------------------------------------------------|" << endl;
  cout << setw(68) << "|                Wesley Cunningham - The Programming Wizard        |" << endl;
  cout << setw(68) << "|                   Coded Potions and Spells                       |" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "   MAIN MENU"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Pre-defined C++ functions"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Scope and Type Conversion"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Return      "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Pass by value and by address"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Writing more functions "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Files and File Operations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Character I/O"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "Ctrl-c to Quit"
       << right << setw(2) << "|" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << endl;
  int userChoice = 0;
  // take and validate the user entry

  cout << "Enter the code that you wish to generate, or quit to exit: "; // output stream a message
  cin >> userChoice;
  return userChoice;
}

// PLACE CODE HERE FOR EACH TASK

// put the function prototypes for TASK 1 HERE

void callThree();
void weatherGenerator();
bool predicate(float, float, float);
int validateRange(int, int, string, string, char);
bool validateInput(int, int, int, string);
void menuOfThings();

void
preDefined()
{
  // Use 3 predefined functions that use square root, cosine, and floor

callThree();




  // B use the random function and write a loop that will generate 365 random values 1-7


  /*
  1- Sunny
  2- Partly Sunny
  3- Partly Cloudy
  4- Cloudy
  5- Rain
  6- Snow
  7- Fog
  */
  weatherGenerator();
  cout << "\n"; //adds a newline so we can see task C

  // C - ask a question and return a boolean using a function.
  cout << "This function will check if it is greater than ten \n" << endl;
  // place your call and display here for part c
  float var1 = 3.14;
  float var2 = 3.14;
  float var3 = 3.14;
  if(predicate(var1, var2, var3) == true)
   {
       cout << "This equation is greater than 10." << endl;
   }
   else
   {
       cout << "This equation is less than 10." << endl;
   }
  cout << "\n";

  // D make a menu that continually repeats until you choose to exit. Validate input!

  menuOfThings();

  cout << "end of pre defined" << endl;
  cin.get();
}
// PUT THE ACTUAL FUNCTIONS (CODE) FOR PART1 HERE (do this for all of them)
//*******************************************
// TASK 1 CODE - PLACE CODE HERE FOR TASK
//*******************************************
//A
void callThree()
{
     float var1 = 3.14;
   var1 = pow(var1, 2.0);
   cout << "3.14 to the second power is " << var1 << "." << endl;
   float var2 = 3.14;
    var2 = sqrt(var2);
   cout << "The square root of 3.14 is " << var2 << "." << endl;
   float var3 = 3.14;
   var3 = floor(var3);
   cout << "The floor of 3.14 is " << var3 << "." << endl;
}
//B
void weatherGenerator()
{
     int count = 0;
  int num = 0;
  float sunny = 0;
  float psunny = 0;
  float pcloudy = 0;
  float cloudy =0;
  float rainy = 0;
  float snowy = 0;
  float foggy = 0;
  srand(time(0));
  while(count < 365)
  {
      num = rand() %7 +1;
      if (num == 1)
      {
          ++count + 1;
          ++ sunny + 1;
      }
      else if (num == 2)
      {
          ++count + 1;
          ++ psunny + 1;
      }
      else if (num == 3)
      {
          ++count + 1;
          ++ pcloudy + 1;
      }
      else if (num == 4)
      {
          ++count +1;
          ++ cloudy + 1;
      }
      else if (num == 5)
      {
          ++count +1;
          ++rainy + 1;
      }
      else if (num == 6)
      {
          ++count +1;
          ++ snowy + 1;
      }
      else if (num == 7)
      {
          ++count +1;
          ++ foggy + 1;
      }

}
cout << "Sunny occured " << sunny << " times for an average of " << (sunny/365)*100 << "%" << endl;
cout << "Partly Sunny occured " << psunny << " times for an average of " << (psunny/365)*100 << "%" << endl;
cout << "Partly cloudy occured " << pcloudy << " times for an average of " << (pcloudy/365)*100 << "%" << endl;
cout << "Cloudy occured " << cloudy << " times for an average of " << (cloudy/365)*100 << "%" << endl;
cout << "Rainy occured " << rainy << " times for an average of " << (rainy/365)*100 << "%"  << endl;
cout << "Snowy occured " << snowy << " times for an average of " << (snowy/365)*100 << "%" << endl;
cout << "Foggy occured " << foggy << " times for an average of " << (foggy/365)*100 << "%" << endl;

}
//C
bool predicate(float var1, float var2, float var3)
{
    bool equivalent;
    if((var1+var2+var3) > 10)
    {
   return true;
    }
    else
    {
    return false;
    }

}
//D
void menuOfThings()
{
    int schoolMenu();
bool validateInput(int, int, int, string);



   while (true)
   {
     int userChoice = schoolMenu();
     switch (userChoice)
     {

        break ;
        case 1:
        cout << "The choice was Physics";
        break ;
        case 2:
        cout << "The choice was Biology";
        break ;
        case 3:
        cout << "The choice was Calculus";
        break ;
        case 4:
        cout << "The choice was Geography";
        break ;
        case 5:
        cout << "The choice was Sociology";
        break ;
        case 6:
        cout << "The choice was Computer Science";
        break ;
        case 7:
        cout << "The choice was Properties of Solid Polymers";
        break ;
        case 8:
        cout << "The choice was Quit" << endl;
        return;
        break;

     }
     cin.get();
   }
}

int schoolMenu()
{
  int userChoice;
  bool loopFlag = true;
  string msg("The valid choices are 1 through 8.");
	cout << "Please choose a subject from the menu: \n\n";
	cout << "1. Physics\n";
	cout << "2. Biology\n";
	cout << "3. Calculus\n";
	cout << "4. Geography\n";
	cout << "5. Sociology\n";
	cout << "6. Computer Science I\n";
	cout << "7. Properties of Solid Polymers\n";
	cout << "8. Quit\n\n";

	do
	{
		cout << "Your choice: ";
		cin >> userChoice;
		loopFlag = validateInput(userChoice, 1, 8, msg);
	} while (loopFlag);
	return userChoice;
}


bool validateInput(int userChoice, int range1, int range2, string message)
{
  bool goodOrNot = false;
  if ((cin.fail()) || ((userChoice < range1) || (userChoice > range2)))
  {
 	cout << message << endl;
    goodOrNot = true;
  }
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return goodOrNot;
}


// function prototypes for TASK 2 provided
void functionScope(char);
int incrementer(int);
// place fixerUpper here!
float fixerUpper(int);
float fixerUpper(float);
float fixerUpper(double);

void scopeType()
{
  // function variable and a local variable named frogs.
  char varTwo = 'k';
  // write the code to demonstrate separate block scopes and display each (outer and inner)

 functionScope(varTwo);
  cout << "Var two is equal to: " << varTwo << " in local scope" << endl;


  // Task B- use add to add 1 to each declared variable - explain what happened
  int myInt = 1;
  cout << incrementer(myInt) << endl;
  // Returned the value of 2

  double myDouble = 3.14159;
  cout << incrementer(myDouble) << endl;
  // Returned the value of 4

  float myFloat = 3.14159;
  cout << incrementer(myFloat) << endl;
  // returned the value of 4


  // Task C- overload - don't forget to write the prototypes above
  myInt = 1;
  myDouble = 3.14159;
  myFloat = 3.14159;
  cout << "Overloading them - here are the results: " << endl;
  cout << fixerUpper(myInt) << endl;
 cout << fixerUpper(myDouble) << endl;
  cout << fixerUpper(myFloat) << endl;

  cout << "end of Scope and Type Conversion" << endl;
  cin.get();
}

//*******************************************
// TASK 2 CODE - PLACE CODE HERE FOR TASK
//*******************************************
void functionScope(char varTwo)
{
  cout << "Var two is equal to: " << varTwo << " in function scope" << endl;
}
int incrementer(int myInt)
  {
      return ++myInt;
  }

 float fixerUpper(int myInt)
  {
      return ++myInt;
  }

 float fixerUpper(float myFloat)
  {
      return ++myFloat;
  }

 float fixerUpper(double myDouble)
  {
      return ++myDouble;
  }
// function prototypes for TASK 3 provided
char convertToASCII(int);
bool validateRange(int, string, string);
//int validateRange(int, int, string, string, char);
float divideIt(int, int);

void
returns()
{

  //A
  // place your loop with user input and validation here
int userChoice = 1;
string badMsg("Sorry this is a bad entry please pick an integer 1-127");
string goodMsg("This is a valid integer!");
do
{
   bool loopFlag = true;
    cout << "Please enter an integer value to be converted to the ASCII equivalent: ";
    cin  >> userChoice;
    //cout << "The ASCII value of " << userChoice << " is " << convertToASCII(userChoice) << endl;
    loopFlag = validateRange(userChoice, badMsg, goodMsg);
    if(loopFlag == true)
    {
      cout << "The ASCII value of " << userChoice << " is " << convertToASCII(userChoice) << endl;
    }
    else
    {
        continue;
    }
}
while (userChoice != -1);



  //B
  for (int i = 50, j = 0; i > -1; --i, ++j)
  {
   cout << divideIt(j, i) << endl;
  }

  cout << "end of returns" << endl;
  cin.get();
}

//*******************************************
// TASK 3 CODE - PLACE CODE HERE FOR TASK
//*******************************************
char convertToASCII(int userChoice)
{
    char conversion = userChoice;
    return conversion;
}

bool validateRange(int userChoice, string badMsg, string goodMsg)
{
  bool loopFlag = false;
  if ((cin.fail()) || ((userChoice < 1) || (userChoice > 127)))
  {
 	cout << badMsg << endl;
    loopFlag = false;
    return loopFlag;
  }
  else
  {
      cout << goodMsg << endl;
      loopFlag = true;
      return loopFlag;
  }
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}



float divideIt(int divisor, int dividend)
{
   if(divisor == 0)
   {
       cout << "Please do not divide by zero";

   }
   else
   {
   float quotient = static_cast<float>(dividend)/divisor;
       return quotient;
   }
}

// function prototypes for TASK 4 provided
void myIncrementValue(int);
void myIncrementReference(int &);
void myIncrementAddress(int);

void
passBy()
{
  int pass = 999;
  cout << "Pass begins as the value of: " << pass << endl;
  // A
  cout << "Before pass by value: " << pass << endl;
  myIncrementValue(pass);
  cout << "After pass by value: " << pass << endl;

  // B
  cout << "Before pass by reference: " << pass << endl;
  myIncrementReference(pass);
  cout << "After pass by reference: " << pass << endl;

  // C
  cout << "Before address of pass at driver level: " << &pass << endl;
  myIncrementAddress(pass);
  cout << "After address of pass at driver level: " << &pass << endl;

  cout << "end of pass bys" << endl;
  cin.get();
}

//*******************************************
// TASK 4 CODE - PLACE CODE HERE FOR TASK
//*******************************************
void myIncrementValue(int pass)
{
    ++ pass;
    cout << "Pass during as the value of: " << pass << endl;
}


void myIncrementReference(int &pass)
{
    ++ pass;
    cout << "Pass during as the value of: " << pass << endl;
}


void myIncrementAddress(int pass)
{
    &(++ pass);
    cout << "Pass during as the value of: " << &(pass) << endl;
}

// function prototypes for TASK 5 provided
void menuOfSubjects(void);
bool validateRange(float, float, float, string);
bool validateInput(int, int, int, string);
void getScores();
int schoolMenu2();

void
moreFunk()
{
  menuOfSubjects();

  cout << "end of more functions" << endl;
  cin.get();
}

//*******************************************
// TASK 5 CODE - PLACE CODE HERE FOR TASK
//*******************************************
void menuOfSubjects()
{


   while (true)
   {
     int userChoice = schoolMenu2();
     switch (userChoice)
     {

        break ;
        case 1:
        cout << "The choice was Physics";
        break ;
        case 2:
        cout << "The choice was Biology";
        break ;
        case 3:
        cout << "The choice was Calculus";
        break ;
        case 4:
        cout << "The choice was Geography";
        break ;
        case 5:
        cout << "The choice was Sociology";
        break ;
        case 6:
        cout << "The choice was Computer Science";
        break ;
        case 7:
        cout << "The choice was Properties of Solid Polymers";
        break ;
        case 8:
        cout << "The choice was Quit";
        return;
        break;
     }
     cin.get();
     getScores();
   }
}
   int schoolMenu2()
{
  int userChoice;
  bool loopFlag = true;
  string msg("The valid choices are 1 through 8.");
	cout << "Please choose a subject from the menu: \n\n";
	cout << "1. Physics\n";
	cout << "2. Biology\n";
	cout << "3. Calculus\n";
	cout << "4. Geography\n";
	cout << "5. Sociology\n";
	cout << "6. Computer Science I\n";
	cout << "7. Properties of Solid Polymers\n";
	cout << "8. Quit\n\n";

	do
	{
		cout << "Your choice: ";
		cin >> userChoice;
		loopFlag = validateInput(userChoice, 1, 8, msg);
	} while (loopFlag);
	return userChoice;
}



void getScores()
{
    int possPoints = 0;
    int earnPoints = 0;
    cout << "Please enter total possible points: " << endl;
    cin >> possPoints;
    bool loopFlag = validateRange(possPoints, 1, 100, "Please enter a number 1-100");
    cout << "Please enter earned points: " << endl;
    cin >> earnPoints;
    bool loopFlag2 = validateRange(earnPoints, 1, 100, "Please enter a number 1-100");

    if((loopFlag || loopFlag2) != true)
    {
    float comp = ((static_cast<float>(earnPoints) / possPoints) * 100);
    cout  << "The percentage is: " << comp << " %" << endl;

    if (comp >= 92.99)
    {
        cout << " The letter grade is A " << endl;
    }
    else if (comp >= 89.99)
    {
        cout << " The letter grade is A- " << endl;
    }
    else if(comp >= 86.99)
    {
        cout << " The letter grade is B+ " << endl;
    }
    else if(comp >= 82.99)
    {
        cout << " The letter grade is B " << endl;
    }
    else if(comp >= 79.99)
    {
        cout << " The letter grade is B- " << endl;
    }
    else if(comp >= 76.99)
    {
        cout << " The letter grade is C+ " << endl;
    }
    else if(comp >= 72.99)
    {
        cout << " The letter grade is C " << endl;
    }
    else if(comp >= 69.99)
    {
        cout << " The letter grade is C- " << endl;
    }
    else if(comp >= 66.99)
    {
        cout << " The letter grade is D+ " << endl;
    }
    else if(comp >= 62.99)
    {
        cout << " The letter grade is D " << endl;
    }
    else if(comp >= 60)
    {
        cout << " The letter grade is D- " << endl;
    }
    else if(comp < 60)
    {
        cout << " The letter grade is F " << endl;
    }
    return;
    }
        else
        {
          return;
        }
}


bool validateRange(float userChoice, float range1, float range2, string message)
{
  bool goodOrNot = false;
  if ((cin.fail()) || ((userChoice < range1) || (userChoice > range2)))
  {
 	cout << message << endl;
    goodOrNot = true;
  }
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return goodOrNot;
}

// function prototypes for TASK 6 NOT provided
void menuOfPrograms(fstream &);
int prgmMenu();
void printPrograms(fstream &);
void readNumbers(ifstream &);
// write the prototypes for menuOfPrograms, etc.


void
files()
{
  std::fstream myOstream;
  myOstream.open("myPrograms.txt",ios::app); // modify to be in append mode

  // additional code may be needed for this section
  if (!myOstream)
  {
    cout << "This file has a problem :(" << endl;
  }
  else
  {
    // A
  menuOfPrograms(myOstream); // this function will call writeThings
    // this is cool, it will reset everything and go to the beginning of the file
    myOstream.clear();
    //myOstream.close();
    myOstream.seekg(0, std::ios::beg);

    // B
   fstream myOstream("myPrograms.txt"); //to take it out of append mode
  printPrograms(myOstream);
  }
  std::ifstream myIstream;
  myIstream.open("readIt.txt");
  if (!myIstream)
  {
    cout << "This file has a problem :(" << endl;
  }
  else
  {
    // C
    readNumbers(myIstream);
  }
  // close them
  myOstream.close();
  myIstream.close();

  cout << "end of files" << endl;
  cin.get();
}
//*******************************************
// TASK 6 CODE - PLACE CODE HERE FOR TASK
//*******************************************
void menuOfPrograms(fstream &myOstream)
{


   while (true)
   {
     int userChoice = prgmMenu();
     switch (userChoice)
     {

        case 1:
        cout << "The choice was C++";
        myOstream << "C++" << endl;
        break ;
        case 2:
        cout << "The choice was C";
        myOstream << "C" << endl;
        break ;
        case 3:
        cout << "The choice was Java";
        myOstream << "Java" << endl;
        break ;
        case 4:
        cout << "The choice was Ruby";
        myOstream << "Ruby" << endl;
        break ;
        case 5:
        cout << "The choice was PHP";
        myOstream << "PHP" << endl;
        break ;
        case 6:
        cout << "The choice was Visual Basic";
        myOstream << "Visual Basic" << endl;
        break ;
        case 7:
        cout << "The choice was Fortran";
        myOstream << "Fortran" << endl;
        break ;
        case 8:
        cout << "The choice was C#";
        myOstream << "C#" << endl;
        break;
        case 9:
        cout << "The choice was Java Script";
        myOstream << "Java Script" << endl;
        break;
        case 10:
        cout << "The choice was Assembler";
        myOstream << "Assembler" << endl;
        break;
        case 11:
        cout << "The choice was Quit" << endl;
        return;
        break;



     }
     cin.get();
   }

}

int prgmMenu()
{
  int userChoice;
  bool loopFlag = true;
  string msg("The valid choices are 1 through 8.");
	cout << "Please choose a subject from the menu: \n\n";
	cout << "1. C++\n";
	cout << "2. C\n";
	cout << "3. Java\n";
	cout << "4. Ruby\n";
	cout << "5. PHP\n";
	cout << "6. Visual Basic\n";
	cout << "7. Fortran\n";
	cout << "8. C#\n";
	cout << "9. Java Script\n";
	cout << "10. Assembler\n";
	cout << "11. Quit\n\n";

	do
	{
		cout << "Your choice: ";
		cin >> userChoice;
		loopFlag = validateInput(userChoice, 1, 11, msg);
	} while (loopFlag);
	return userChoice;
}

void printPrograms(fstream &myOstream)
{
    cout << "Compiled List of Choices from File: " << endl;
    string languageChoice;
    while(myOstream >> languageChoice)
    {
        cout << languageChoice << endl;
    }
}

void readNumbers(ifstream &myIstream)
{
    int sum = 0;
    int counter = 0;
    int values = 0;

    cout << "Values from the file:" << endl;
    while (myIstream >> values)
    {
        ++counter;
        cout << values << endl;
        sum += values;
    }
    cout << "Total sum of numbers: " << sum << endl;
    cout << "Total records within file: " << counter << endl;
}




// function prototypes for TASK 7 NOT provided
char charChange(char);
bool capsOn(char);
void checkPunct(char);

void
charIO()
{
  char userChar = ' ';
  // A
  cout << "Please enter a character to be converted: " << endl;
  cin >> userChar;
  cout << "The converted character is: " <<  charChange(userChar) << endl;
  // B
  for (int i = 0; i < 10; ++i)
  {
      char charChecker = ' ';
      cout << "Please enter a value to see whether caps is on or off: ";
      cin >> charChecker;
      if (capsOn(charChecker))
      {
        cout << "This is an upper case letter!" << endl;
      }
      else
      {
        cout << "This is a lower case letter!" << endl;
      }

  }
  // C
  char punct = ' ';
    int switchChoice = 0;
    bool loopy = true;
    do
    {
    cout << "Would you like to test a character for punctuation, press 1 to continue or 2 to quit: " << endl;
    cin >> switchChoice;

   switch(switchChoice)
   {
       case 1:
       cout << "Please enter a character to be tested as punctuation." << endl;
       cin >> punct;
       checkPunct(punct);
       break;


       case 2:
       cout << "The choice was Quit." << endl;
       loopy = false;
       //exit;
       break;
   }

    } while(loopy == true);


  cout << "end of char I/O" << endl;
  cin.get();
}
//*******************************************
// TASK 7 CODE - PLACE CODE HERE FOR TASK
//*******************************************
char charChange(char userChar)
{
    int newChar = static_cast <int>(userChar) - 5;
    return newChar;
}

bool capsOn(char charChecker)
{
    bool yayOrNay;
    if ((cin.fail()) || ((charChecker < 65) || (charChecker > 90)))
    {
        yayOrNay = false;
        return yayOrNay;
    }
    else
    {
        yayOrNay = true;
        return yayOrNay;
    }
}

void checkPunct(char punct)
{
    bool loopFlag = ispunct(punct);
    if(loopFlag == true)
    {
        cout << "This character was a punctuation mark" << endl;
    }
    else
    {
        cout << "This character was not a punctuation mark" << endl;
    }

}


