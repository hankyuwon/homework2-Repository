#include <stdio.h>

int main()
{
   
    printf("-------------[한규원][2019037002]-------------\n");
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char: %ld byte\n", sizeof(charType)); // 1: char로 선언된 charType의 크기를 구함
    printf("Size of int: %ld bytes\n", sizeof(integerType)); // 4: int로 선언된 integerType의 크기를 구함
    printf("Size of float: %ld bytes\n", sizeof(floatType)); // 4: float로 선언된 floatType의 크기를 구함
    printf("Size of double: %ld bytes\n", sizeof(doubleType)); // 8: double로 선언된 doubleType의 크기를 구함

    printf("----------------------------------------------\n");

    printf("Size of char: %ld byte\n", sizeof(char)); // 1: sizeof로 char 자료형의 크기를 구함
    printf("Size of int: %ld bytes\n", sizeof(int)); // 4: sizeof로 int 자료형의 크기를 구함
    printf("Size of float: %ld bytess\n", sizeof(float)); // 4: sizeof로 float 자료형의 크기를 구함
    printf("Size of double: %ld bytes\n", sizeof(double)); //8: sizeof로 double 자료형의 크기를 구함

    printf("----------------------------------------------\n");

    printf("Size of char*: %ld byte\n", sizeof(char*)); // 8: char 포인터의 크기를 구함
    printf("Size of int*: %ld bytes\n", sizeof(int*)); // 8: int 포인터의 크기를 구함
    printf("Size of float*: %ld bytes\n", sizeof(float*)); // 8: float 포인터의 크기를 구함
    printf("Size of double*: %ld bytes\n", sizeof(double*)); // 8: double 포인터의 크기를 구함
                                                               // 64비트에서 char,int,float,double 포인터의 크기는 8임을 알 수 있음.

    return 0;
}