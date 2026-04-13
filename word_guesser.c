#include <stdio.h>
#include <string.h>

int main()
{

    // player 1 enters the word to be guessed
    char word[100];
    scanf("%99s", word);

    // clear the screen so player 2 cannot see the word
    for (int i = 0; i < 50; i++)
    {
        printf("\n");
    }

    // determine the length of the word to be guessed
    // size_t = unsigned integer type
    // strlen counts the characters in the word
    size_t len = strlen(word);
    printf("The word has %zu letters\n", len);

    // found will be used later to show the found letters
    char found[len + 1];
    // fill the array with underscores as placeholders
    for (int i = 0; i < len; i++)
    {
        found[i] = '_';
    }
    found[len] = '\0';

    printf("%s\n", found);
    printf("\n");

    // guessing loop — checks each guessed letter against the word
    int tries = (len * 2);
    char guess;

    while (tries > 0)
    {
        printf("\n");
        printf("Please guess a letter\n");
        printf("You have %d tries remaining\n", tries);
        scanf(" %c", &guess);
        printf("\n");

        // loop through the word to find matching characters

        int matched = 0;

        for (int i = 0; word[i] != '\0'; i++)
        {
            if (word[i] == guess)
            {
                printf("Match at position %d\n", i + 1);
                matched = 1;
                // update the found array at the correct position
                found[i] = guess;
                //printf("%s\n", found);
            }
        }

        // for words with double letters like apple  
        if (matched)
        {
            printf("%s\n", found);
        }

        // strcmp compares both char arrays — returns 0 if they are equal
        // if equal, the word is fully guessed and the loop ends
        if (strcmp(word, found) == 0)
        {
            printf("You did it! The word was: %s\n", word);
            printf("\n");
            break;
        }

        // if matched is still 0, no letter was found
        if (!matched)
        {
            printf("No match\n");
            printf("%s\n", found);
            tries--;
        }

        // Game over text if the word is not found
        if (tries == 0)
        {
            printf("Game over, The word was: %s\n", word);
        }
    }
    return 0;
}
