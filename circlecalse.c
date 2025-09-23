# include <stdio.h>
# include <math.h>
void main()
{
double radius=0.0, area=0.0;
const double pi=3.14159;
double surfacearea=0.0, volume=0.0;

printf("Enter the radius of the circle: ");
scanf("%lf", &radius);

area=pi*pow(radius,2);
printf("Area of the circle is: %.2lf", area);

surfacearea=4*pi*pow(radius,2);
printf("\nSurface area of the sphere is: %.2lf", surfacearea); 
     
volume=(4.0/3.0)*pi*pow(radius,3);
printf("\nVolume of the sphere is: %.2lf", volume); 

}


