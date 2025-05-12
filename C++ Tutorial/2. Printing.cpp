#include <iostream>
using namespace std;



//Perus tulostuksia
int test1() {
    cout << "Eka rivi. \n";
    cout << "Toka rivi.\n";
    cout << "Kolmas rivi. \n";  // \n on escape sequence
    cout << "Tässä" << "on" << "monta" << "<< -komentoa ilman välejä.\n";
    return 0;
}

// Tab, lainausmerkki, ja kauttaviiva
int test2() {
    cout << "Neljäs rivi." << endl;         // endl lopettaa rivin? 
    cout << "\"Lainausmerkit.\"\n";         // \" on lainausmerkki   
    cout << "Tässä\ton\ttabit.\n";          // \t on tab   
    cout << "Tässä on kauttaviivoja \\\\\n";  // \\ Kaksi kauttaviivaa on yksi \ 

    return 0;
}

/* 
Variables
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/
int test3() {
    int numb = 10;          // Tyyppi määritellään vain kerran
    numb = -5;              // 
    cout << numb << endl;   // Tulostaa -5 ja lopettaa rivin

    bool booli = true;      // true ja false pienellä kirjaimella
    cout << booli << endl;  // tämä tulostaa 1 tai 0 riippuen totuusarvosta !!!
    booli = false;
    cout << booli << endl;  // false == 0
   
    string text = "Näin yhdistetään muuttujia:";
    cout << text << endl << "Numero on: " << numb;
    return 0;
}

int test4() {

    
}




//Pääfunktio?? Miksi?
int main() {    
    test1();
    test2();
    test3();
    test4();

    return 0;
}