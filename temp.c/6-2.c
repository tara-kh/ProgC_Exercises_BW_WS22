#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // Get the input string from the user

    int len = strlen(str); // Get the length of the input string
    int i, j, k;

    for (i = 0; i < len; i++)
    { // Loop through each character of the string
        for (j = i + 1; j < len; j++)
        { // Check every other character after the current one
            if (str[i] == str[j])
            { // If a duplicate is found
                for (k = j; k < len; k++)
                { // Shift the remaining characters to the left
                    str[k] = str[k + 1];
                }
                len--; // Decrease the length of the string
                j--;   // Repeat the inner loop to ensure all duplicates are removed
            }
        }
    }

    printf("String after removing duplicates: %s\n", str); // Print the final string
    return 0;
}
