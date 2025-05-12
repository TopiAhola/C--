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