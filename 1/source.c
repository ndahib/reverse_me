# include <stdio.h>
# include <string.h>

# define SECRET "__stack_check"

int main(int ac, char* argv){
    char user_input[100];
    printf("Enter the secret word: ");
    scanf("%s", user_input);

    int strcmp_result = strcmp(user_input, SECRET);
    if (strcmp_result == 0){
        printf("Good Job\n");
    }
    else{
        printf("Nope.");
    }

    return (0);
}