#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%.0f, Perimeter=%.0f\n", area, perimeter);

    return 0;
}
