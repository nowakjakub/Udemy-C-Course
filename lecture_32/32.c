#include <stdio.h>

void flush_input(){
    int ch;
    while(( ch = getchar()) != '\n' && ch != EOF);
}

void getinput(){
    char firstname[5];
    char lastname[5];
    printf("Enter your first name: ");
    fgets(firstname, 5, stdin);
    flush_input();
    printf("Enter your last name: ");
    fgets(lastname, 5, stdin);
    flush_input();
    
    printf("Hello %s %s", firstname, lastname);
}

int main(int argc, char **argv){

    getinput();

    return 0;
}