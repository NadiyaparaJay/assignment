#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float area;

    printf("Select the shape to find the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Area of a Circle
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * radius * radius;
            printf("The area of the circle is %.2f.\n", area);
            break;
        }
        case 2: {
            // Area of a Rectangle
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is %.2f.\n", area);
            break;
        }
        case 3: {
            // Area of a Triangle
            float base, height;
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is %.2f.\n", area);
            break;
        }
        default:
            printf("Invalid choice. Please select a valid option (1/2/3).\n");
            break;
    }

    return 0;
}
