#include <stdio.h>
#define SUCCESS 0
#define LINELENGTH 256
#define NULL 0

int main(void) {

    /* expecting a numerical input */
    int input;
    printf("Enter in integer number then <ENTER>: ");
    scanf("%d", &input); /* must put & before input to give memory address */ 
    printf("You typed: %d\n",input);

    /* expecting an ASCII input */
    char stringInput[LINELENGTH];

    /* initialize my stringInput array */
    for (int i=0;i<LINELENGTH;i++) {
        stringInput[i] = NULL;
    }

    /* print stringInput array to check if initialized */
    for (int i=0;i<LINELENGTH;i++) {
        printf("%d -- %c\n",i,stringInput[i]);
    }
    printf("\n");

    printf("Enter in string then <ENTER>: ");
    scanf("%s", stringInput); /* & not next to char array (string) because [] make it a memory address */
    printf("You typed: %s\n",stringInput);

    for (int i=0;i<LINELENGTH;i++) {
        if (stringInput[i] != NULL) {
            printf("%d -- %c\n",i,stringInput[i]);
        }
    }
    printf("\n");

/*
    char input;
    printf("Enter in integer number: ");
    input = getchar();
    printf("You typed: %d (in decimal) and 0x%x (in hexadecimal)\n",input,input);
*/
    
/*
    int arraySize = 3;
    char immediateInput;
    char inputArray[arraySize];

    printf("Enter in integer number: ");
    for (int i=0; i < arraySize; i++) {
        immediateInput = getchar();
        printf("You typed: %c (0x%x)\n",immediateInput,immediateInput);
        inputArray[i] = immediateInput;
    }

    printf("You typed: %s (in ASCII) and 0x%x (in hexadecimal)\n",inputArray,inputArray);
*/

    return(SUCCESS);
}
