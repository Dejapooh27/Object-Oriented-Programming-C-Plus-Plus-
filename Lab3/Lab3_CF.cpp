//Lab3_CF.cpp
/***
 * {Lab 3 teaches us how to use boolean expressions, if/else statements, and loops}
***/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
 {
    int x = 0;
    int y = 5;
    
    while(x < y) {
    printf("%i\n",x);

    if ( x % 2 == 0) {
        printf("x is greater than y\n");
    } else {
        printf(" x is less than or equal to y\n");
        }
        x = x + 3;
    }
    
    return 0;
}