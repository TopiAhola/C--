/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/

#include <iostream>
using namespace std;


// Variables
int func1() {
    int a,b,c,d;                // Declaring multiple variables of the same type
    a = b = c = d = 5;          // toimii. kaikki ovat 5
    cout << a << b << c << d << endl;
    
    int x, y, z = 2;            // Ainoastaan z on 2 !!!!
    cout << x << y << z << endl;        // Tulostus toimii silti mutta numeroarvot on satunnaisia!

    return 0;
}

int func2() {
    int identifier = 1;
    int Identifier = 2;
    int iDentifier = 3;
    cout << "Variable identifiers are case sensitive:" << endl << identifier << Identifier << iDentifier << endl;
    return 0;
}


// Constants
int func3(){
    const int readonly = 10;    //const:ille pitää antaa arvo määriteltäessä.
    // readonly = 5;            // Antaa errorin
    return 0;
}


//Testing pointers
int* func4(){
    int number = 3;             //
    int * p_number = &number;   //
    return p_number;            //Palauttaa pointerin osoittaman muistiosoitteen !! ei numeroa
}

int func5() {                     //void paluuarvo ei ollut virhe funktiossa? 
    int number2 = 5;              //mutta cout ei osaa tulostaa sitä?
    int * p_number2 = &number2;
    return *p_number2;            // *p_number2 osoittaa number2 joka on 5, paluuarvo on 5
}



int main() {
    func1();
    func2();
    func3();
    cout << "Returns a pointer:"<< func4();
    cout << "Retruns a value pointed to " << func5();
}