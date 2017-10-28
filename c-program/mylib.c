#include <stdio.h>
#include "mylib.h"
static void loggg(struct TrickyStructure* a) {
    printf("Hello, str is %s, num is %d\n", a->b, a->a);
}
void my_function(struct TrickyStructure* a)
{
    loggg(a);
    a->a += 10;
}

