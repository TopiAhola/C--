#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
using namespace std;
int main(){
/*
////////////////////////////////////////////////////////////////////////////////////
// List
A list is similar to a vector in that it can store multiple elements of the same type 
nd dynamically grow in size.
However, two major differences between lists and vectors are:

You can add and remove elements from both the beginning and at the end of a list, 
while vectors are generally optimized for adding and removing at the end.

Unlike vectors, a list does not support random access, meaning you cannot directly 
jump to a specific index, or access elements by index numbers.
To use a list, you have to include the <list> header file: 

#include <list>

The type of the list (string in our example) cannot be changed after its been declared.

You cannot access list elements by referring to index numbers, like with arrays and vectors.

However, you can access the first or the last element with the .front() and .back() functions, respectively:

*/
list<string> cars1;

// Print list elements
for (string car : cars1) {
  cout << car << "\n";
}
// Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars.front();  // Outputs Volvo
cout << cars.back();  // Outputs Mazda

// Change the value of the first element
cars.front() = "Opel";
// Change the value of the last element
cars.back() = "Toyota";
cout << cars.front(); // Now outputs Opel instead of Volvo
cout << cars.back();  // Now outputs Toyota instead of Mazda

/*
To add elements to a list, you can use .push_front() to insert an element at 
the beginning of the list and .push_back() to add an element at the end

To remove elements from a list, use .pop_front() to remove an element from 
the beginning of the list and .pop_back() to remove an element at the end

To find out how many elements a list has, use the .size() function

Use the .empty() function to find out if a list is empty or not.
The .empty() function returns 1 (true) if the list is empty and 0 (false) otherwise

You cannot loop through the list elements with a traditional for loop combined with 
the .size() function, since it is not possible to access elements in a list by index

The simplest way to loop through a list is with the for-each loop:
*/
list<string> cars3 = {"Volvo", "BMW", "Ford", "Mazda"};

for (string car : cars3) {
  cout << car << "\n";
}
/*


////////////////////////////////////////////////////////////////////////////////////
Stacks







*/
}