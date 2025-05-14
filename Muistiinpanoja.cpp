#include <iostream>     //Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.
using namespace std;    //Line 2: using namespace std means that we can use names for objects and variables from the standard library.  //
                        //Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.
int main() {            //Line 4: Another thing that always appear in a C++ program is int main(). This is called a function. Any code inside its curly brackets {} will be executed.
cout << "AAA!!!";       //Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".
return 0;               //Line 6: return 0; ends the main function.
}                       //Line 7: Do not forget to add the closing curly bracket } to actually end the main function.

// Comment same as JS
/* 
Multi line comment
*/

//Standard namespace library can be used per object? :
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}


// Data types


Data Type	    Size	        Description
boolean	        1 byte	        Stores true or false values
char	        1 byte	        Stores a single character/letter/number, or ASCII values
int	            2 or 4 bytes	Stores whole numbers, without decimals
float	        4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	        8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits


//A floating point number can also be a scientific number with an "e" to indicate the power of 10:

float f1 = 35e3;
double d1 = 12E4;


//The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':
char myGrade = 'B';
char ascii = 10;

//Strings
To use strings, you must include an additional header file in the source code, the <string> library:
// <iostream> sisältää stringit??? koska ohjelmat toimii ilman <string> -kirjastoa...
Example
#include <string>   // Include the string library
string greeting = "Hello";  // Create a string variable
// Stringit on kaksoislainausmerkeissä: "" !!!




// Math
Operator    Name	        Description	                            Code Example	
+	        Addition	    Adds together two values	            x + y	
-	        Subtraction	    Subtracts one value from another	    x - y	
*	        Multiplication	Multiplies two values	                x * y	
/	        Division	    Divides one value by another	        x / y	
%	        Modulus	        Returns the division remainder	        x % y	
++	        Increment	    Increases the value of a variable by 1	++x	
--	        Decrement	    Decreases the value of a variable by 1	--x

A list of all assignment operators:

Operator	Example	    Same As         Explanation	
=	        x = 5	    x = 5	
+=	        x += 3	    x = x + 3	    add
-=	        x -= 3	    x = x - 3	    subtract
*=	        x *= 3	    x = x * 3	    multiply
/=	        x /= 3	    x = x / 3	    divide
%=	        x %= 3	    x = x % 3	    modulus
&=	        x &= 3	    x = x & 3	    bitwise AND
|=	        x |= 3	    x = x | 3	    bitwise OR
^=	        x ^= 3	    x = x ^ 3	    bitwise XOR
>>=	        x >>= 3	    x = x >> 3	    right shift bits(x/2^n rounded down)
<<=	        x <<= 3	    x = x << 3      left shift bits(x*2^n)
//bit shift doesn't work with negative numbers !!!
//shifted numbers need to fit in their types

// Bit shift in cout  
cout << "Number * 2 is: " << (number << 1)   //note parentheses!! 


// Comparisons

Operator	Name	            Example
==	        Equal to	        x == y	
!=	        Not equal	        x != y	
>	        Greater than	    x > y	
<	        Less than	        x < y	
>=	        Greater or equal	x >= y	
<=	        Less or equal   	x <= y

// Logical operators

Operator	Name	        Description	                            Example	
&& 	        Logical and	    Returns true if both  are true	        x < 5 &&  x < 10	
|| 	        Logical or	    Returns true if one of the is true	    x < 5 || x < 4	
!	        Logical not	    Reverse the result (true to false) 	    !(x < 5 && x < 10)


// String functions

Function	Description
at()	    Returns an indexed character from a string
length()	Returns the length of a string
size()	    Alias of length(). Returns the length of a string
max_size()	Returns the maximum length of a string
empty()	    Checks wheter a string is empty or not
append()	Appends a string (or a part of a string) to another string
substr()	Returns a part of a string from a start index (position) and length
find()	    Returns the index (position) of the first occurrence of a string or character
rfind() 	Returns the index (position) of the last occurrence of a string or character
replace()	Replaces a part of a string with another string
insert()	Inserts a string at a specified index (position)
erase()	    Removes characters from a string
compare()	Compares two strings

// String special characters

Escape character	Result	Description
\'	                '	Single quote
\"	                "	Double quote
\\	                \	Backslash
\n	                    New Line	
\t	                    Tab

//////////////////////////////////////////////////////////////////
// Math
#include <cmath>

/*
cmath header file sisältää funktiot:
 div
 acos
 asin
 atan
 atan2
 ceil
 cos
 cosh
 exp
 fabs
 floor
 fmod
 frexp
 ldexp
 log
 log10
 modf
 pow
 sin
 sinh
 sqrt
 tan
 tanh

 ja: 
 round();   pyöristää kokonaislukuun
*/

//////////////////////////////////////////////////////////////////
// if - else , else if, switch

C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

int myNum = 10; // Is this a positive or negative number?

if (myNum > 0) {
  cout << "The value is a positive number.\n";
} else if (myNum < 0) {
  cout << "The value is a negative number.\n";
} else {
  cout << "The value is 0.\n";
}

// "Ternary operator" - Lyhyt if-else

string func2(int a, int b){
    // variable = (condition) ? expressionTrue : expressionFalse;
    string ret_str = (a > b) ? "a on isompi" : "a ei ole isompi";
    return ret_str;
}


// Switch
The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional?
The default keyword specifies some code to run if there is no case match.

switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

// While

int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

// do-while
The do/while loop is a variant of the while loop. 
This loop will execute the code block once, before checking if the condition is true, 
then it will repeat the loop as long as the condition is true.

do {
  // code block to be executed
}
while (condition); // while on {} sulkeiden jälkeen...



// For

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.

// For-each
There is also a "for-each loop" (also known as ranged-based for loop), which is used exclusively to loop through elements in an array (or other data structures):

for (type variableName : arrayName) {
  // code block to be executed
}

//Example
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}


// Break - Continue

// break
Break can be used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.

This example jumps out of the loop when i is equal to 4:

Example
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}


// continue
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of 4:
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

Break and continue work in for and while loops 


// Arrays
Arrays contain only one type?
string animals[3] = {"cat","dog","bird"};
int numbers[4] = {1,2,3,4};

Change value in an array:
numbers[0] = 5;

//Kokoa ei ole pakko määritellä mutta se ei muutu automaattisesti
int arr[] = {1,2,3}; Saa kookseen 3.
int arr[]; koko on 0 ja siihen ei voi lisätä mitään...
int arr[3]; koko on 3 mutta on tyhjä 

//loop an array
//for-each

for (int i : numbers) {
  cout << i << "\n"; 
}

//////////////////////////////////////////////////////////////////
// Arrays - Vectors
For operations that require adding and removing array elements, C++ provides vectors, 
which are resizable arrays.
The size of a vector is dynamic, meaning it can grow and shrink as needed.
Vectors are found in the <vector> library, and they come with many useful functions to add, 
remove and modify elements:

#include <vector> 
#include <string>
vector<string> cars = {"Volvo", "BMW", "Ford"};
vector<int> numbers = {1,2,3}

// Adding another element to the vector
cars.push_back("Tesla");



// multi dimensional arrays
A multi-dimensional array is an array of arrays.
To declare a multi-dimensional array, define the variable type, specify the name of the 
array followed by square brackets which specify how many elements the main array has, 
followed by another set of square brackets which indicates how many elements the sub-arrays have:

string letters[2][4];

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

//////////////////////////////////////////////////////////////////

// Structures = struct
Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable

// Pointereista structiin:
// pointerit structin jäseniin voi tehdä nuolella? ->
// (*p_myStructure).myNum on pointer structiin josta otetaan jäsen myNum
// tai: p_myStructure->myNum 
// ilmaisu: (*pointer) on dereference? Hakee jutun johon pointer osoittaa.


// Iteroinnista
// Structia ei ilmeisesti voi iteroida perus C++ssa. tarvitsee lisäkirjaston.



//////////////////////////////////////////////////////////////////

// Enumeration = enum
An enum is a special type that represents a group of constants (unchangeable values).
To create an enum, use the enum keyword, followed by the name of the enum, and separate
 the enum items with a comma:

enum Level {
  LOW,
  MEDIUM,
  HIGH
};

Now that you have created an enum variable (myVar), you can assign a value to it.
The assigned value must be one of the items inside the enum (LOW, MEDIUM or HIGH):

enum Level myVar = MEDIUM;

By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.
If you now try to print myVar, it will output 1, which represents MEDIUM:

// enum arvot voi muuttaa oletusarvoista:
enum Level {
  low = 25,
  MEDIUM = 50,
  HIGH = 75
};

//////////////////////////////////////////////////////////////////
HUOM: & merkki hakee muuttujan muistiosoitteen! Käytetään pointereiden 
ja muiden juttujen yhteydessä. 


// References = &
A reference variable is a "reference" to an existing variable, 
and it is created with the & operator:

string food = "Pizza";  // food variable
string &meal = food;    // reference to food
Now, we can use either the variable name food or the reference name meal 
to refer to the food variable:

Example
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza

//Mitä hyötyä tästä on ja miten tämä liittyy pointereihin????
-pointerin voi käyttää uudestaan osoittamaan johonkin toiseen arvoon
+referenssiä ei voi käyttää uudestaan
-pointerilla on oma muistiosoite jossa se sijaitsee
+referenssi ei vie tilaa stackistä?

+References	                                    
-Pointers
Reassignment	
+The variable cannot be reassigned in Reference.	
-The variable can be reassigned in Pointers.

Memory Address	
+It shares the same address as the original variable.	
-Pointers have their own memory address.

Work	
+It is referring to another variable.	
-It is storing the address of the variable.

Null Value	
+It does not have null value.	
-It can have value assigned as null.

Arguments	
+This variable is referenced by the method pass by value.	
-The pointer does it work by the method known as pass by reference.

// Milloin käytetään:
Use references: 
In function parameters and return types.

Use pointers: 
If pointer arithmetic or passing a NULL pointer is needed. For example, for arrays (Note that accessing an array is implemented using pointer arithmetic).
To implement data structures like a linked list, a tree, etc. and their algorithms. This is so because, in order to point to different cells, we have to use the concept of pointers.


//////////////////////////////////////////////////////////////////
// Pointerit !!!

// Pointerin voi määritellä eri tavoilla:
string* mystring;   // Preferred
string *mystring;   // Tämä näyttää samalta kuin pointerin käyttäminen...
string * mystring;  // Tykkään tästä.

// Pointerille voi antaa arvon joko määriteltäessä tai myöhemmin:
int a = 10;

int * p = &a;    // &a hakee a:n muistiosoitteen
// OR 
int * p;
p = &a;


// Muuttuja johon pointer osoittaa haetaan laittamalla * tähti: (Dereference)
*pointer 
// Pelkkä pointer ilman tähteä viittaa pointeriin itseensä... (Reference)
pointer

Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.

// Pointerin arvon muuttaminen muuttaa alkuperaisen muuttujan arvoa!