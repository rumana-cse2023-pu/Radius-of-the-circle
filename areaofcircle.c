#include <stdio.h>


float calculate_area(float radius) {
    float PI = 3.1416;
    float area = PI * radius * radius;
    return area;
}

int main() {
    float radius, area;

    printf("Input radius of the circle: ");
    scanf("%f", &radius);

    area = calculate_area(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

