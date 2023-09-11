// #include <stdio.h>
// void main()
// {
//     // area of rectangle

//     // int length = 10;
//     // int breadth = 5;
//     // int area = length * breadth;
//     // printf("%d", area);

//     // area of squared

//     int side = 5;
//     int area = side * side;
//     printf("%d", area);
// }

#include <stdio.h>
void main()
{
    // float base, height, area;
    // printf("Enter the number of base \n ");
    // scanf("%f", &base);
    // printf("Enter the number of height\n");
    // scanf("%f", &height);
    // area = 0.5 * base * height;
    // printf("area of triangle is %f\n", area);
    // ========================================

    // int side, area;
    // printf("Enter the square value\n");
    // scanf("%d", &side);
    // area = side * side;
    // printf("area of square is %d\n", area);
    //=======================================

    // int length, breadth, area;
    // printf("Enter the vlaue of length\n");
    // scanf("%d", &length);
    // printf("Enter the value of breadth\n");
    // scanf("%d", &breadth);
    // area = length * breadth;
    // printf("area of rectangle is %d\n");
    // ====================================
    // float radius, area;
    // printf("enter the value of circle\n");
    // scanf("%f", &radius);
    // area = 3.14 * radius * radius;
    // printf("area of circle is %f\n", area);

    //========perimeter of circle=============

    // float radius, perimeter;
    // printf("Enter the value of radius\n");
    // scanf("%f", &radius);
    // perimeter = 2 * 3.14 * radius;
    // printf("perimeter of circle is %f\n", perimeter);

    //=========cube of a number==============
    // int number, cube;
    // printf("Enter the number of cube\n");
    // scanf("%d", &number);
    // cube = number * number * number;
    // printf("cube of number is %d\n", cube);

    //============perimeter of rectangle======

    // int length, breadth, perimeter;
    // printf("Enter the value of length\n");
    // scanf("%d", &length);
    // printf("Enter the value of breadth\n");
    // scanf("%d", &breadth);
    // perimeter = 2 * (length + breadth);
    // printf("perimeter of rectangle is %d\n", perimeter);

    //===========area of pentagon===============

    float side, perimeter, ampothem, area;
    printf("Enter the value of side\n");
    scanf("%f", &side);
    perimeter = 5 * side;
    printf("Enter the value of ampothem\n");
    scanf("%f", &ampothem);
    area = 0.5 * perimeter * ampothem;
    printf("area of pentagon is %f\n", area);
}
