#include <iostream>
using namespace std;
int main () {
/*
////////////////////////////////////////////////////////
Questions

Tutorial 

What is namespace really?


What does auto do? What does auto & do when iterating multiarrays?
*/
    int mTable[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int sum = 0;
    for(auto & rivi : mTable){             // Mitä tämä tekee? 
        for(int element : rivi){           // Vaikuttaa paremmalta tavalta iteroida satunnaisen kokoisia
            sum += element;
        } 
    } 

/*





////////////////////////////////////////////////////////
Observations:

variables can be altered and assigned in cout statements:   
*/
    int x = 5;
    cout << x++;
    //prints 6 ! and changes value of x?
/*











*/}