#include<stdio.h>

int main(){
int attendance;
int average_marks;

printf("Enter your attendance:");
scanf("%d",&attendance);

printf("\nEnter your average_marks:");
scanf("%d",&average_marks);

if(attendance>=75 && average_marks>=40)
{
printf("\nYou are eligible for exam");
}
else{printf("You are not eligible for exam ");
}




return 0;
}