#include <stdio.h>
#include <math.h>

//define pi as constant
#define PI 3.14159


int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//clears the console so the \n doesnt mess up the scanf
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

//finds distance between 2 points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Enter x1 and y1 for Point #1 (separated by space): ");
    scanf("%lf %lf", &x1, &y1);
    clearInputBuffer();
    
    printf("Enter x2 and y2 for Point #2 (separated by space): ");
    scanf("%lf %lf", &x2, &y2);
    clearInputBuffer();
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %lf, y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf, y2 = %lf\n", x2, y2);
    printf("The distance between the two points is: %lf\n", distance);
    
    return distance;
}

//finds perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance;
    printf("The perimeter of the city encompassed by your request is: %lf\n", perimeter);
    return perimeter;
}

//finds the area
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);
    printf("The area of the city encompassed by your request is: %lf\n", area);
    return area;
}

//finds width
double calculateWidth() {
    double x1, x2;
    printf("Enter x1 for Point #1: ");
    scanf("%lf", &x1);
    clearInputBuffer();
    
    printf("Enter x2 for Point #2: ");
    scanf("%lf", &x2);
    clearInputBuffer();
    
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is: %lf\n", width);
    return width;
}

//finds height
double calculateHeight() {
    double y1, y2;
    printf("Enter y1 for Point #1: ");
    scanf("%lf", &y1);
    clearInputBuffer();  
    
    printf("Enter y2 for Point #2: ");
    scanf("%lf", &y2);
    clearInputBuffer(); 
    
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is: %lf\n", height);
    return height;
}

int main(int argc, char **argv) {
    printf("Fracturing Program\n");

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 1;
}
