using namespace std;
#include <string>
#include <iostream>
#include <vector>

// length in bytes
int array_sizeof(){
    string arr[5] = {"AaaaaaaaaaA", "BB", "CC","",""}; //Stringit näyttää olevan 32 tavua / kappale
    int size = sizeof(arr);
    return size;
}

// length in elements
int array_length(){
    string arr[5]= {"AaaaaaaaaaA", "BB", "CC","",""}; 
    int len = sizeof(arr)/sizeof(arr[0]); 
    return len;
}

// looping
string array_loop1(){
    string arr[3] = {"A","B","C"};
    string conca = "x";
    for(int n = 0; n < (sizeof(arr)/sizeof(arr[0])); n++){      // (sizeof(arr)/sizeof(arr[0])) on arrayn pituus elementteinä 
        conca.append(arr[n]);                                   // pelkkä sizeof on pituus tavuina!
    }
    return conca;
}

// for-each looping
int array_loop2(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for (int n : arr) {sum += n;}       // Tämä on ns. for-each looppi
    return sum;                         // Tämä on parempi
}


// multi-dimensional arrays = arrays of arrays
int m_dimension(){
    int mTable[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int sum = 0;
    for(auto & rivi : mTable){             // Mitä tämä tekee? & yleensä antaa muuttujan muistiosoitteen?
        for(int element : rivi){           // Vaikuttaa paremmalta tavalta iteroida satunnaisen kokoisia
            sum += element;
        } 
    } 
    return sum;
}


int m_dimension2(){
    int table[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int sum = 0;
    for(int a=0; a<4; a++){
        for(int b=0; b<4; b++){
            sum += table[a][b];
        }
    }
    return sum;
}


int main(){   
    cout << "Size in bytes: " << array_sizeof() << endl;
    cout << "Number of elements: " << array_length() << endl;
    cout << array_loop1() << endl;
    cout << array_loop2() << endl;
    cout << m_dimension() << endl;
    cout << m_dimension2() << endl;
}


/*
auto range iteroinnista:
The difference between the several forms of ranged base for loop:

for (auto elem : il) will create a temporary copy of each element. Usually less efficient.

for (auto& elem: il) won't create copies, and allow you to modify the elements if the 
underlying container allows that (e.g. not const). But it cannot bind to rvalue references,
 so it cannot be used on containers that return proxy objects (e.g. std::vector<bool>).

for (const auto& elem: il) won't create copies either, and won't allow you to do any modifications.
 This can prevent accidental modifications and signify your intent clearly.

for (auto&& elem: il) automatically deduces the correct type for elem, be it l-value, 
const l-value or r-value reference. A standard proposal N3994, already implemented by clang, 
simplify it into the form for (elem: il).


*/