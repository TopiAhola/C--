#include <iostream>
using namespace std;

void noreturn(){
    cout << "No return value." << endl;
    // void retrun value
}

void declaration();

int summa(int a, int b){
    int sum = a + b;
    return sum;
}

void summa_by_ref(int &a, int &b, int &ans){
    ans = a + b;
}



// Tämä ei toimi... ilmeisesti ar[5] onkin pointer tms. ja siitä ei saa kuin pointerin koon!
void array_argument(int ar[5]){
    cout << "Iterating array in function: ";  
    for(int n = 0; n < (sizeof(ar)/sizeof(ar[0])); n++ ){
        cout << ar[n];
    }
    cout << endl;
}

// Kokeillaan oikealla pointerilla
int array_argument2(int * p_ar){
    cout << "Iterating in function with pointer: ";  
    for(int n = 0; n < 5; n++ ){        // 
        cout << p_ar[n];                // Näköjään int pointeria voi iteroida
    }                   
    cout << endl;
    return 0;
}


// Fuction overloading: Kahdella funktiolla voi olla sama nimi jos niillä on eri parametrit!
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)



// Funktiot pitää julistaa ennen main funktiota.
// Mutta funktion määrittelyn voi tehdä erikseen mainin jälkeen.
int main(){
    noreturn();
    declaration();

    // Normal arguments:
    int param1 = 1, param2 = 4;    
    cout << summa(param1, param2) << endl;

    // Passing a reference to function:
    int param3 = 3, param4 = 6;
    int &ref_param3 = param3, &ref_param4 = param4;
    int answer;
    int &ref_answer = answer;
    summa_by_ref(ref_param3,ref_param4,ref_answer);
    cout << "Answer set by reference: " <<answer << endl;

    // Array as argument:
    int arra[5] = {2,2,3,4,5};
    for(int n : arra) {cout << n;};     // Toimii
    array_argument(arra);               // Tulostaa vain 12 ...
    int * p_arra = &arra[0];
    array_argument2(p_arra);

 return 0;   // void main aiheuttaa jonkun ongelman compilerin kanssa....
}


void declaration(){cout << "This was defined afterwards." << endl;;}