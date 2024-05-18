#include <stdio.h>
#include <ctype.h>

int is_palindrome_word(char* str) {
    int i, length;

    for (length = 0; str[length] != '\0'; length++);

    for (i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int is_palindrome_int(int n) {
    int reversed = 0; 
    int remainder;
    int original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

void menu(){
    printf("\n1. Check for a Word Palindrome ");
    printf("\n2. Check for a Nuber Palindrome");
    printf("\n3. EXIT  ");
    printf("\n\nPlease pick a choice: ");
    
}
int main() {
    int choice;int ans;int num;
    char word[50];
    
    printf("*********** PALINDROME CHECKER ***********");
    
    while(1){
        menu();
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter an Word: ");
                scanf("%s", word);
                if (is_palindrome_word(word))
                printf("%s is a palindrome.\n", word);
                else
                printf("%s is not a palindrome.\n", word );
                break;
            case 2:
                printf("Enter an Number: ");
                scanf("%d",&num);
                if (is_palindrome_int(num))
                printf("%d is a palindrome.\n", num);
                else
                printf("%d is not a palindrome.\n", num);
                break;
            case 3:
                return 0;
        }
    }
}
