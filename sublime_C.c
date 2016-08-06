#include <stdio.h>
// #include <stdlib.h>
int main(int argc, char const *argv[])
{
    int const circleTimes = 12;
    int array[circleTimes] = {0};
    for (int i = 0; i < circleTimes; i++) {
        *(array + i) = (2000 + i * 4);
        printf("%d\t", array[i]);
    }
    
    printf("\n");
    int array_ti[3][4] = {0};
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            *(*(array_ti + i) + j) = *(array + index++);
            printf("%d\t",array_ti[i][j]);
        }
        printf("\n");
    }
    printf("%lx\n", (long)(array_ti + 1) );
    printf("%lx\n", (long)(*(array_ti  + 1)));

    // for (int i = 0; i < 255; i++){
	   //  char ta = i;
	   //  printf("%d --ta = %c\n",i,ta);
	   //  printf("3r23r132r23r123r123r123\n");
    // }

    return 0;
}