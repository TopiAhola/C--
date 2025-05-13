#include <iostream>
using namespace std;


int wloop(){
//Example
int numbers = 12345;    // A variable with some specific numbers
int revNumbers = 0;     // A variable to store the reversed number
                 
while (numbers) {                               // Reverse and reorder the numbers
  revNumbers = revNumbers * 10 + numbers % 10;  // Get the last number of 'numbers' and add it to 'revNumbers'
  numbers /= 10;                                // Remove the last number of 'numbers'
    cout << numbers;
}
cout << "Reversed numbers: " << revNumbers << "\n";
return 0;

/*Esimerkki poistaa numeron siirrtämällä desimaalipilkkua jakamalla kymmenellä, 
 kokonaisluku tiputtaa desimaali numeron pois 
 
 Numero lisätään uuteen muuttujaan ottamalla jakojäännös kymmenellä. Ykköset jää aina jakojäännökseksi.
 :O
 */
 }

int floop(){
  for(int n = 0; n<5; n++){
    cout << "Count: " << n << endl;
    
  }
  return 0;
}

// Tulostaa numerot 00 - 99
int nested_loop(){        
  for(int k = 0; k<10; k++){
    for(int y=0; y<10; y++){
      cout << k << y << endl;
    }
  }



  return 0;
}


// foreach looppaa läpi arrayn tai muun datarakenteen
int foreachloop(){
  int numbers[] = {1,2,3,4,5};
  cout << "Foreach: ";

  for(int n : numbers){
    cout << n << "\t";
  }
  
  return 0;
}


int main(){
  wloop();
  floop();
  nested_loop();
  foreachloop();
  return 0;
}