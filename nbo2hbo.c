#include "nbo2hbo.h"

uint32_t convert(FILE* fd){
    uint32_t buf;
    fread(&buf, sizeof(int), sizeof(buf), fd);

    return ntohl(buf);
}

uint32_t sum(int a, int b){
    return a + b;
}
