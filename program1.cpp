/*Program 1
  Christian Amposta
  M-muh first program*/

//This is will have conflicts

#include <iostream>
using namespace std;

int main(void)
{

  int Decider;      //Initializing the stuff
  int firstInt;     //I like multiple lines
  int secondInt;
  int output;
  cout <<"\n";
  cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout <<"\n";
  cout <<"\n";
  cout <<"This program will prompt for two integers and an operation then diplay the result of applying the operation to the numbers." << endl;
  cout <<"\n";
  cout <<"Please enter the first integer: ";
  cin >> firstInt;
  cout <<"Please enter the second integer: ";
  cin >> secondInt;
  cout <<"\n";
  cout <<"Avaliable operations: \n  1. Addition \n  2. Subtraction \n  3. Multiplaction \n  4. Division \n Please enter the number of your choice of operation: ";
  cin >> Decider;
  cout <<"\n";

  coutn <<"I still don't know what I'm doing. Giff A";

  if (Decider==1)
    {
      output = firstInt + secondInt;
      cout << firstInt << " + " << secondInt << " = " << output << endl;
    }
  if (Decider==2)
    {
      output = firstInt - secondInt;
      cout << firstInt << " - " << secondInt << " = " << output << endl;
    }
  if (Decider==3)
    {
      output = firstInt * secondInt;
      cout << firstInt << " x " << secondInt << " = " << output << endl;
    }
  if ((Decider==4) && (secondInt==0))
    {
      cout << "Please stop trying to divide by zero. You know you aren't supposed to.\n";
      cout <<"\n";
      cout <<"\n";
      cout <<"\n";
      cout <<"\n";
      return 0;
    }
  if (Decider==4)
    { 
      int remainder;
      output = firstInt / secondInt;
      remainder = firstInt % secondInt;
      cout << firstInt << " / " << secondInt << " = " << output << " with a remainder of " << remainder << endl;
    }
  if (Decider>4)
    {
      cout << Decider << "is an invalid operation. Valid choices were 1, 2, 3, or 4. Please rerun the program.\n";
    }
  if (Decider<=0)
    {
      cout << Decider << "is an invalid operation. Valid choices were 1, 2, 3, or 4. Please rerun the program.\n";
    }
  cout <<"\n"; 
  cout <<"\n";
  cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout <<"\n";
  return 0;
}
