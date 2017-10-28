#include <stdio.h>
#include "mylib.h"
int main() {
    struct TrickyStructure ts;
    ts.a = 55;
    ts.b = "Hello, world";
    my_function(&ts);
    my_function(&ts);
    printf("The number is %d\n", ts.a);
}

