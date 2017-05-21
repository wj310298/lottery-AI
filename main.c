#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 50

int main(void)
{
    srand((unsigned)time(NULL));
    printf("机选%d注!\n", rand()%NUMBER);
    return 0;
}
