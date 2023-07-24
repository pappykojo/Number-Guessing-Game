# Number Guessing Game (Text-based) in C

This is a simple text-based "Number Guessing Game" implemented in C. The game randomly generates a target number within a specified range, and the player's objective is to guess the correct number within the minimum and maximum range provided.

## How to Play

1. Clone or download the C file (`number_guessing_game.c`) to your local machine.

2. Open a terminal or command prompt and navigate to the directory where the `number_guessing_game.c` file is located.

3. Compile the C code using a C compiler (e.g., GCC):

   ```
   gcc number_guessing_game.c -o number_guessing_game
   ```

4. Run the compiled executable:

   ```
   ./number_guessing_game
   ```

5. The program will display a welcome message and inform the player about the range of numbers to guess.

6. Enter your guess when prompted. The program will provide feedback on whether the guess is too low, too high, or correct.

7. Keep guessing until you guess the correct number and the program will display the number of attempts it took to guess correctly.

8. The game will continue running until you guess the correct number.

## Adjusting the Range

You can customize the range of numbers to guess by modifying the `min_range` and `max_range` variables in the code. By default, the range is set to 1 to 100.

## Requirements

- C Compiler (e.g., GCC) for compiling the C code.

## Note

This is a simple text-based implementation of the Number Guessing Game. You can further enhance it by adding additional features such as difficulty levels, high score tracking, or graphical user interface (GUI) for a more interactive experience.

Feel free to explore and modify the code to suit your requirements and preferences.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

