#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    double avg;
    int sum;
    int loop = 0;
    srand(time(0));
for(int n =0; n<100000; n++){
    sum += rand()%101;
    loop++;
}
avg = sum/100000;
cout << avg << " loops:  " << loop;
}