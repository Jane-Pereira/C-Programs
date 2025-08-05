//C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone based on user input.//
#include<stdio.h>
#define pi 3.1415

float vol_cube(float side)
{
	return side*side*side;
}
float vol_cuboid(float l,float b,float h)
{
	return l*b*h;
}
float vol_sphere(float rad)
{
	return (4/3)*pi*rad*rad*rad;
}
float vol_cylinder(float rad,float h)
{
	return pi*rad*rad*h;
}
float vol_cone(float rad,float h)
{
	return (1/3)*pi*rad*rad*h;
}	

int main()
{
	int choice;
	float l,b,h,rad;
	printf("Choose the shape to calculate the volume:\n1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Enter the side: ");
			scanf("%f",&l);
			printf("\nVolume of Cube = %.2f\n",vol_cube(l));
			break;
		case 2: printf("Enter the length, bredath and height: ");
			scanf("%f %f %f",&l,&b,&h);
			printf("\nVolume of Cuboid = %.2f\n",vol_cuboid(l,b,h));
			break;
		case 3: printf("Enter the radius: ");
			scanf("%f",&rad);
			printf("\nVolume of Sphere = %.2f\n",vol_sphere(rad));
			break;
		case 4: printf("Enter the radius and height: ");
			scanf("%f %f",&rad,&h);
			printf("\nVolume of Cylinder = %.2f\n",vol_cylinder(rad,h));
			break;
		case 5: printf("Enter the radius and height: ");
			scanf("%f %f",&rad,&h);
			printf("\nVolume of Cone = %.2f\n",vol_cone(rad,h));
			break;
		default: printf("Invalid Expression\n");
	}
}

