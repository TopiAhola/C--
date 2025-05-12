/* String functions

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



Special characters

Escape character	Result	Description
\'	                '	Single quote
\"	                "	Double quote
\\	                \	Backslash
\n	                    New Line	
\t	                    Tab


*/



//#include <string>
#include <iostream>
using namespace std;

string func1(){             //string tyyppi pitää määritellä joko <string> tain <iostream> kautta?
    string text = "A";      //(using namspace std;)
    string * p_text = &text;
    return *p_text;
}

//ASCII - char    char pitää olla '' -yksillä lainausmerkeillä !!!
int func2(){
    char ascii = 66;                                //Tulostaa "B" (B ascii numero on 66)
    char ascii2 = char(67);                         //Tulostaa "C"
    cout << ascii << ascii2 << char(68) << endl;    //char(n) tulostaa ascii merkin n !!!
    int A = 'A';                                    // charin laittaminen inttiin muutttaa ascii merkin numeroksi 
    int B = int('B');                               // int(n) muuttaa charin numeroksi
    cout << A << B << endl;                                 // tulostaa 6566
    
    return 0;
}


// Concatenating strings
int func3(){
    string str1 = "A";
    string str2 = "B";
    string ab = str1 + " " + str2; // ab = "A B"
    cout << ab << endl;     

    return 0;
}

// String functions
int func4(){
     // .append()
    string hello = "Hello";    
    hello.append(" world");
    string exlamation = "!";
    hello.append(exlamation);
    cout << hello << endl;      // Tulostaa "Hello world!"

    // length() ja size() on sama funktio
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;

    return 0;
}

// Iterating strings
// Stringit on c++ objekteja? Nillä on indexit
int func5(){
    string str = "abcdefgh";
    cout << "Eka kirjain: "<< str[0]<< endl << "Neljäs kirjain: " << str[3] << endl;

// Yksittäisen charin voi vaihtaa stringissä:
    str[0] = 'x';
    cout << str << endl; // Tulostaa "xbcdefgh"

// .at(n) toimii kuten str[n]
    cout << str.at(0) << endl; 

    return 0;
}

// String inputs getline() funktiolla
// perus cin ottaa vain ensimmäisen sanan !!
int func6(){
    string input;  
    cout << "Kirjoita: ";
    getline(cin, input);
    cout << "Kirjoitit: " << input << endl;
    
    return 0;
}

// C:ssä ei ole stringejä vaan ne ovat char arraytä
// C++ tukee c-tyylin stringejä:
int func7(){
    char string_array[] = "Hello";
    cout << string_array << endl;

    return 0;
}


int main(){
    cout << func1() << endl;
    func2();
    func3();
    func4();
    func5();
    func6();
    func7();
    return 0;
}