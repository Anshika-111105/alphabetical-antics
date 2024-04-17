#include <stdio.h>
#include <string.h>
int main(){
    printf("\n...................WELCOME TO THE GAME 'ALPHABETICAL ANTICS'...................\n");
    printf("\n.........................presented by Anshika Saklani...................\n");
    int p=1;
    int choice;
    while(p){                                                                    
        printf("\nSELECT THE WORDS CATEGORIES FROM GIVEN OPTION\n ");                                               //Word Categories given in the word game
        printf("\n1. Isogram\n(A word in which no letter of the alphabet occurs more than once.)\n");
        printf("2. Palindrome\n(A word that reads the same backwards)\n");
        printf("3. Anagram\n(A word or phrase formed by rearranging the letters of another word or phrase.)\n");
        printf("4. Lipogram\n(A written work composed of words chosen to avoid the use of one or more letters.)\n");
        printf("5. Tautonym\n(A word or name made up of two identical parts, such as so-so, tom-tom )\n");
        printf(" ");
        char input[100];
        printf("Enter the word:");                                    //Input variable for word
        scanf("%[^\n]s",input);
        printf("Enter the choice:");                                  //variable to choose category from the above menu
        scanf("%d",&choice);
        if (choice==1){
            int i, j, isIsogram = 1;
            for (i = 0; input[i] != '\0'; i++) {
                for (j = i + 1; input[j] != '\0'; j++) {
                    if (input[i] == input[j]) {
                        isIsogram = 0;
                        break;
                        
                    }
                    
                }
                if (isIsogram == 0) {
                    break;
                    
                }
                
            }
            if (isIsogram == 1) {
                printf("%s is an isogram.\n", input);
                
            } else {
                printf("%s is not an isogram.\n", input);
                }
            
        }
        else if(choice ==2){
            int i, len, flag = 1;                                   //flag as a counter variable
            len = strlen(input);                                    
            for (i = 0; i < len / 2; i++) {
                if (input[i] != input[len - i - 1]) {
                    flag = 0;
                    break;
                    
                }
                
            }
            if (flag)
            printf("%s is a palindrome.\n", input);
            else
            printf("%s is not a palindrome.\n", input);
        }
        else if(choice==3){
            char str1[100];
            int len1, len2, i, j, found;
            printf("\nEnter another word that need to be checked: ");
            scanf("%s", str1);
            len1 = strlen(input);
            len2 = strlen(str1);
            if (len1 != len2) {
                printf("%s and %s are not Anagrams\n",input,str1);
                return 0;
                
            }
            for (i = 0; i < len1; i++) {
                found = 0;
                for (j = 0; j < len2; j++) {
                    if (input[i] == str1[j]) {
                        found = 1;                                //counter variable
                        break;
                        
                    }
                }
            }
            if (found == 0) {
                printf("%s and %s are not Anagrams\n",input,str1);
                return 0;
            }else{
                printf("%s and %s are Anagrams\n",input,str1);
                
            }
        }
        else if(choice==4){
            int i = 0,f=0;
            char text;
            printf("Enter your text (without the letter 'e' let say): ");
            scanf("%c", &text);
            while (input[i] != '\0') {
                if (input[i] != text ) {
                    f=1;
                    
                }
            i++;
                
            }
            if(!(f)){
                printf("\nIt is a lipogram word\n");
            }else{
                printf("\nNot a lipogtam word\n");
            }
        }else{
            char word[50];
            printf("Enter a word: ");
            scanf("%s", word);
            if (strcmp(input, word) == 0) {
                printf("Words is a tautonym.\n");
                
            } else {
                printf("words is not a tautonym.\n");
                
            }
        }
    printf("Enter 1 to continue or 0 t exit:");
     scanf("%d",&p);
    }
    return 0;
}
