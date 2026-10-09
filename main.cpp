#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Homework 7 — Andrew Bennett
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;

  int values[N];
  int evens[N];
  int even_counter = 0;
  int odds[N];
  int odd_counter = 0;

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }
// loop through values array
  for(int i = 0; i < N; i++)
  {
    
    //values[i] % 2 checks if there is a remainder after dividing the element by 2, if there is then the element is odd
    if(values[i] % 2)
    {
      //assign all odd elements to odds array and increment odd_counter to keep track of how many odd numbers are found
      odds[odd_counter] =  values[i];
      odd_counter++;
    }
    //if the element is not odd than it has to be even
    else
    {
      //assign all even elements to evens array and increment even_counter to keep track of how many even numbers are found
      evens[even_counter] = values[i];
      even_counter++;
    }
    // output the contents of values in a readable format
    cout << "[" << i << "] " << values[i] << endl;
  }
  // use even_counter to loop through the evens array and print out all of the elements within in a readable format
  cout << "Even: ";
  for(int i = 0; i < even_counter; i++)
  {
    cout << evens[i] << " ";
  }
  // use odd_counter to loop through the odds array and print out all of the elements within in a readable format
  cout << endl << "Odd: ";
  for(int i = 0; i < odd_counter; i++)
  {
    cout << odds[i] << " ";
  }

  return 0;
}
