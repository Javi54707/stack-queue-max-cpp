#include <iostream>
#include "maxstack.h"
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char *argv[]){

    // Run the current exercise
    MaxStack stack;

    for(int i = 1; i < argc; i++){
        if (argv[i][0] == '.'){
            cout << stack.top() << endl;
            stack.pop();
        } else {
            stack.push(atoi(argv[i]));
        }
    }
    return 0;
}