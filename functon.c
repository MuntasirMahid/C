#include<stdio.h>

double cube(double num);

int main()
{
    int num;//comment
    double c;
    printf("Enter any number: ");//kayes
    scanf("%d", &num);
    c=cube(num);
    printf("Cube of %d is %.2f", num, c);

return 0;
}
double cube(double num)
{
    return(num*num*num);

}