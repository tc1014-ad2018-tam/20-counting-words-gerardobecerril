/* This program takes a string from the user and prints the amount of words it has.
 *
 * Author: Gerardo González Becerril.
 * Date: October 16th, 2018.
 * E-mail: a01411981@itesm.mx
 */

#include <stdio.h>

// This function returns the amount of words in a string.
int words(char string[]) {
    int counter = 0; // Counts the amount of characters in a string.
    int wordCounter = 1; /// Counts the amount of words in a string.
    // While loop that goes through the elements in the array.
    while (string[counter] != '\0') {
        counter++;
        // If statement that looks for whitespaces, which indicate a new word.
        if (string[counter] == ' ') {
            wordCounter++;
        }
    }
    return wordCounter;
}

int main() {
    char string[100]; // Variable where the string will be stored.
    printf("Give me a string:\n"); // Asks the user for a string.
    fgets(string, sizeof(string), stdin); // Stores the input in the string variable.
    printf("%d", words(string)); // Prints the output of the words function.
    return 0;
}