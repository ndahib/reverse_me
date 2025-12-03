#include <stdio.h>
# include <string.h>
#include <stdlib.h>

# define SECRET "123"
void no(){
    printf("Nope.");
}

void ok(){
    printf("Good Job!");
}
char *hidden_string = "secret_key";

int main(int ac, char* av){
    char char1, char2;
    char input[100];
    char *buffer;
    int len;
    char output[10];

    printf("Enter the key: ");
    int res_scanf = scanf("%c%c", &char1, &char2);
    
    if (res_scanf != 1){
        no();
    }
    if (char1 != '0'){
        no();
    }
    if (char2 != '0'){
        no();
    }

    fflush(stdin);
    memset(buffer, 0, 9);

    len = strlen(buffer);
    int i = 0;
    while (i++ < len){
        char chunk[4] = {
            
        }
        output[i] = atoi(hidden_string[i]);
    }
    output[i] = '\0';
    int comparison_result = strcmp(output, SECRET);
    if (comparison_result == 0){
        ok();
    }
    else
    {
        no();
    }
}