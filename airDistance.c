/* 
Author Abdur rehman 
Date 2023/10/19

This program calculate the distanc with the help of 
longtitude.
*/ 

#include<stdio.h>
#include<math.h>

double degree_to_Radain(double value)
{
  return value * M_PI / 180;
}
int main()
{
 
  double lon1,p1,lon2,p2;
  double distance = 0 , delta = 0;
  const double Radius = 6371.0;

  printf("Enter the latitude_1 in the degree -90 to 90: ");
  scanf("%lf", &p1);
  printf("Enter the lontitide_1 in degree -180 to 180: ");
  scanf("%lf", &lon1);

  printf("Enter the latitude_2 in the degree -90 to 90: ");
  scanf("%lf", &p2);
  printf("Enter the lontitude_2 in the degree -180 to 180: ");
  scanf("%lf", &lon2);

  lon1 = degree_to_Radain(lon1);
  p1 = degree_to_Radain(p1);
  lon2 = degree_to_Radain(lon2);
  p2 = degree_to_Radain(p2);

  delta = lon2 - lon1;

  distance = (acos(sin(p1) * sin(p2) + cos(p1) * cos(p2) * cos(delta)) * Radius);

  printf("Location Distance \n");
  printf("===================\n");

  printf("origin = %lf %lf\n",lon1,p1);
  printf("Distination = %lf %lf\n",lon2,p2);
  printf("Distance = %lf\n",distance);

    return 0;
}
