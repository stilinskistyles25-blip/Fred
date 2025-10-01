/*
Name:
Reg.No.:
Date:
Description:Data bundles
*/
#include<stdio.h>
int main() {
    int Option;

    printf("1.100MB @ 50KES\n");
    printf("2.500MB @ 200KES\n");
    printf("3.1GB @ 350KES\n");
    printf("4.2GB @ 600KES\n");

    printf("Enter your choice (1-4):");
    scanf("%d",&Option);

    if(Option==1) {
        printf("You selected 100MB.Cost=50 KES");
    }
    else if(Option==2) {
        printf("You selected 500MB.Cost=200 KES");
    }
    else if(Option==3) {
        printf("You selected 1GB.Cost=350 KES");
    }
    else if(Option==4) {
        printf("You selected 2GB.Cost=600 KES");
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}