//headers
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//declare functions I'll use, found in the PDF provided
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

//main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

//asking for user input (BONUS?)
double askForUserInput() {
    double value;
    printf("Please enter a value: ");
    scanf("%lf", &value);
    return value;
}

//calculating distance
double calculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %lf, y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf, y2 = %lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}
//calculating perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance;
    printf("The perimeter of the circle is %lf\n", perimeter);

    return 2;
}
//calculating area
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);
    printf("The area of the circle is %lf\n", area);

    return 1;
}
//calculating width
double calculateWidth() {
    double distance = calculateDistance();
    double width = 2 * distance;
    printf("The width of the circle is %lf\n", width);

    return 1;
}
//calculating height
double calculateHeight() {
    double distance = calculateDistance();
    double height = 2 * distance;
    printf("The height of the circle is %lf\n", height);

    return 1;
}