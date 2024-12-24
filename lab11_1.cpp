// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    string grades[]={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.\n";
    string dummy;
    for (int i =0;i<3; ++i){
        getline(cin,dummy);
    }
    srand(time(0));
    int random = rand() % 9;
    cout << "You will get "<<grades[random]<<" in this 261102.";
}