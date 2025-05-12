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


int main(){
    func1();


}
