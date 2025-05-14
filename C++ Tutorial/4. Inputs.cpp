#include <iostream>
using namespace std;

// cin >> variable
// cin ottaa vain ensimmäisen sanan...
int func1(){
    string text;
    cout << "Kirjoita:";
    cin >> text;
    cout << "Kirjoitit: " << text << endl;
    return 0;
}
// perus cin ottaa vain ensimmäisen sanan !!
int func6(){
    string input;  
    cout << "Kirjoita: ";
    getline(cin, input);                // getline lukee koko syötteen stringiksi getline(cin,variable)
    cout << "Kirjoitit: " << input << endl; 
    
    return 0;
}



int main(){
    func1();


}
