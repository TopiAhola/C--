//#include <malloc.h>
#include <string>
#include <iostream>

using namespace std;

// Perus C malloc ja calloc:
void * point = malloc(1);       //malloc palauttaa void pointerin?
int * point2 = (int*)point;


int * calloc_int(int elements){
    return (int*)calloc(__SIZEOF_INT__, elements);
}

double * calloc_double(int elements){
    return (double*)calloc(__SIZEOF_DOUBLE__, elements);
}

string * calloc_string(int elements){
    return (string*)calloc(sizeof(string), elements);       // Toimiiko tämä? String ei ole tyyppi perus C:ssä?
}

/*
////////////////////////////////////////////////////////////////////////////
C++ memory management
Dynamic memory allocation in C++ and deallocation is achieved 
by using two specialized operators: new and delete.

//////////////////////////////////////
NEW

The new operator requests for the allocation of the block of memory of the given 
size of type on the Free Store (name for the part of heap memory available for new operator). 
If sufficient memory is available, a new operator initializes the memory to the default 
value according to its type and returns the address to this newly allocated memory.
*/ 
int * new_int(){        
    int * newpointer = new int;         //palauttaa int-pointerin tyhjään osoitteeseen
    
    int * pointer = new int(69);        //asettaa arvon 69 ja pointerin osoittamaan 69:in paikkaan    
    cout << "Muistiosoite x: "<< pointer << endl;
    
    pointer = new int[5];               //antaa pointerin jossa 5 tyhjää paikkaa inteille
    int * pointer2 = new int[3]{1,2,3}; //asettaa arvot kuten arrayssa ja antaa pointerin
    return newpointer;
}
/*
If enough memory is not available in the heap to allocate, the new request indicates failure 
by throwing an exception of type std::bad_alloc, unless "nothrow" is used with the new operator, 
in which case it returns a nullptr pointer. Therefore, it may be a good idea to check for the pointer 
variable produced by the new before using its program. 

*/
void safe_new(){
int *p = new (nothrow) int; // palauttaa nullpointerin jos muisti ei riitä
if (!p) {                   // null pointerin totuusarvo on 0?
    cout << "Memory allocation failed\n";
}
}
/*

//////////////////////////////////////
DELETE

Syntax
*/
void dell(){
int * ptr = new int(567);
cout << "Ennen deleteä: " << *ptr << endl;
delete ptr;
cout << "Jälkeen tulee satunnaista dataa: " << *ptr << endl;
/*
where, ptr is the pointer to the dynamically allocated memory.

To free the dynamically allocated array pointed by pointer variable, use the following form of delete:

*/
int * arr = new int[3];
delete[] arr;           //Tämä tietää että arr pointer osoittaa 3-kokoiseen arrayyn?? Miten?
}
/*

//////////////////////////////////////
REALLOCATING - FREE MITÄH








*/





int main(){
    //Perus C
    string * point3 = calloc_string(3);
    point3[0] = "AA";
    point3[1] = "BB";
    point3[2] = "CC";
    //point3[4] = "DD";         // Tämä rivi segfaulttaa koska vain 3 stringiä mahtuu point3 muistipaikkaan. 
    for(int n=0; n<3; n++){
        cout << point3[n];
    }

    //C++ muistin hallinta
    new_int();
    dell();

    // auto pointer?


    return 0;
}