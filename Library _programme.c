#include <stdio.h>

 int main () {
     FILE *fp;
     char title [100];
     
     fp = fopen("borrowed_books.txt" , "a");
     if (fp == NULL) {
     printf("Error opening file.\n");
      return 1;
      }
      
      printf("Enter book title: ");
      fgets(title, sizeof(title), stdin);
      
      fputs(title, fp);
      fclose(fp);
      
      printf("Book title sucessfully stored!\n");
      return 0;
     }