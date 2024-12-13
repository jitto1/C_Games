# C_Games
# C Game Selector

## Description
This C program allows you to choose and play one of two interactive games:

1. **Rock, Paper, Scissors**: Play the classic game against the computer.
2. **Number Guessing Game**: Guess a randomly generated number between 1 and 100.

The program features a menu for selecting a game and provides an option to quit at any time.

---

## Features
- **Game Selection Menu**: Allows users to choose between games or exit.
- **Rock, Paper, Scissors**:
  - User competes against a randomly generated choice by the computer.
  - Implements the classic rules of the game.
  - Allows quitting mid-game.
- **Number Guessing Game**:
  - Guess the number between 1 and 100.
  - Provides hints such as "Too high" or "Too low".
  - Tracks the number of attempts.

---

## Prerequisites
- A GCC-compatible C compiler installed (e.g., GCC).

---

## How to Compile and Run
1. Save the program code to a file named `game.c`.
2. Open a terminal and navigate to the directory containing `game.c`.
3. Compile the program using GCC:
   ```bash
   gcc game.c -o game
   ```
4. Run the compiled program:
   ```bash
   ./game
   ```

---

## Usage
### Menu Options
- Enter `1` to play **Rock, Paper, Scissors**.
- Enter `2` to play the **Number Guessing Game**.
- Enter `3` to quit the program.

### Game Instructions
#### Rock, Paper, Scissors:
1. Choose "rock", "paper", or "scissors" when prompted.
2. The computer will randomly select an option.
3. The game determines the winner based on these rules:
   - Rock beats Scissors.
   - Scissors beats Paper.
   - Paper beats Rock.
4. Enter `quit` to return to the main menu.

#### Number Guessing Game:
1. Guess a number between 1 and 100.
2. The program will respond:
   - "Too low" if the guess is less than the target.
   - "Too high" if the guess is more than the target.
3. Keep guessing until you find the correct number or enter `0` to exit.

---
