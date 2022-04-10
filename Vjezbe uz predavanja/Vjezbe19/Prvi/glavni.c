#include <stdio.h>
#include "math2.h"

int main() {
    printf("binKoef(%d, %d) = %d\n", 12, 8, binKoef(12, 8));
    printf("eksp(%f, %d) = %f\n", 1.1f, 2, eksp(1.1f, 2));
    printf("fabsolut(%f) = %f\n", -8.4, fabsolut(-8.4f));
    printf("dabsolut(%lf) = %lf\n", -3.14, dabsolut(-3.14));
    printf("iabsolut(%d) = %d\n", -6, iabsolut(-6));
    printf("fakt(%u) = %llu\n", 12U, fakt(12U));
    return 0;
}