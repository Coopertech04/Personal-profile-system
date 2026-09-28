#include <stdio.h>
#include <string.h>

int main(void)
{

char name[50];
int age;
float height;
char grade;

printf("Enter your name: ");
scanf("%49s", name);

strcpy(name, "Cooper");
age = 17;
height = 1.75;
grade = 'A';

if (strcmp(name, "Cooper") == 0)
{
    printf("Cooper found!\n");

    printf("Status: Minor\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

}
else
{
    printf("User not found!\n");
}


char name2[50];
int age2;
float height2;
char grade2;

printf("Enter Second name:");
scanf("%49s", name2);

age2 = 18;
height2 = 1.80;
grade2 = 'B';
if (strcmp(name2, "Dex") == 0)
{
    printf("Dex found!\n");

    printf("Status: Adult\n");
    printf("Age: %d\n", age2);
    printf("Height: %.1f\n", height2);
    printf("Grade: %c\n", grade2);
}
else
{
    printf("User not found!\n");
}

return 0;
}
