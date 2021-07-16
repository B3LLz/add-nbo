#include <stdlib.h>
#include "nbo2hbo.h"

int main(int argc, char* argv[]){
    FILE* fd_1 = NULL;
    FILE* fd_2 = NULL;
    uint32_t num_a;
    uint32_t num_b;
    uint32_t result;

    if(argc != 3){
        printf("<Usage> : ./add-nbo [a.bin] [b.bin]\n");
	exit(0);
    }

    fd_1 = fopen(argv[1], "rb");
    fd_2 = fopen(argv[2], "rb");

    num_a = convert(fd_1);
    num_b = convert(fd_2);
    result = sum(num_a, num_b);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", num_a, num_a, num_b, num_b, result, result); 

    fclose(fd_1);
    fclose(fd_2);
}
