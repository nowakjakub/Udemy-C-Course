#include <stdio.h>

int main(int argc, char **argv){
        int age;

        printf("Enter your age: ");
        scanf("%d", &age);

        if(age >= 18){
                printf("You can get driver's license!\n");
        }
        else{
                printf("You are too young to get driver's license :(\n");
        }

        return 0;
}

