#include <iostream>
#include <string>
using namespace std;


// Perus struct
int structure(){
    struct {
        int size;
        string address;
        string room_list[2] = {};
    } myhouse;

    myhouse.size = 5; 
    myhouse.address = "Street"; 
    myhouse.room_list[0] = {"bedroom"};
    myhouse.room_list[1] = {"livingroom"};

    cout << "Size: " << myhouse.size << endl;



    return 0;
}

// Voi myös määritellä useamman samalla kerralla:
int structure2(){
   struct {
        int size;
        string address;
        string room_list[2] = {};
    } house1, house2, house3;
    house1.size = 1;
    house2.size = 2;
    cout << house1.size << endl << house2.size << endl;

    return 0;
}
// structille voi antaa nimen jolloin sitä voi käyttää kuin datatyyppiä:
int named_structure(){
    struct cat{
        int age;
        string name;
    };
    cat nemi;   //nemi on nyt cat struct
    nemi.name = "Nemi";
    nemi.age = 15;
    cout << nemi.name << " on " << nemi.age << " vuotta vanha." << endl;
    return 0;
}

// Structia ei ilmeisesti voi iteroida perus C++ssa. tarvitsee lisäkirjaston.

int main(){
    structure();
    structure2();
    named_structure();

    return 0;
}
