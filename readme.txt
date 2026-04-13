# Word Guesser

A simple terminal-based word guessing game written in C.  
Player 1 enters a secret word, Player 2 tries to guess it letter by letter.

# How to run

gcc word_guesser.c -o word_guesser
./word_guesser


# How to play

1. Player 1 enters a word
2. The screen clears so Player 2 can't see it
3. Player 2 guesses one letter at a time
4. You have 2x the word length as tries
5. Find all letters before running out of tries to win

# What I learned

- Arrays and strings in C
- scanf, strcmp, strlen
- Basic game loop logic