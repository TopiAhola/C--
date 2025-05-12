#include <iostream>
using namespace std;

// Perus if - else if - else
string func1(int a, int b){
    string ret_str;

    if (a > b) {
        ret_str = to_string(a) +" is greater than " + to_string(b) ; 
    }
    else if ( a < b ) {
        ret_str = to_string(b) +" is greater than " + to_string(a); 
    }
    else {
        ret_str = to_string(a) +" is equal to " + to_string(b);
    }

    return ret_str;
}



// "Ternary operator" - Lyhyt if-else

string func2(int a, int b){
    // variable = (condition) ? expressionTrue : expressionFalse;
    string ret_str = (a > b) ? "a on isompi" : "a ei ole isompi";
    return ret_str;
}


int main(){
    cout << func1(3, 4) << endl;
    cout << func2(2, 1) << endl;

    return 0;
}