# TicTacTourney

Description:

This program implements a simple Tic Tac Toe game for two players. The game is played on a 3x3 board where players take turns marking a cell with their respective symbols ('X' for Player 1 and 'O' for Player 2). The game continues until one player wins by placing three of their marks in a horizontal, vertical, or diagonal row, or until all cells are filled, resulting in a draw. The game includes a feature to play multiple rounds as desired by the players.

Key Features:

Board Initialization and Reset:

The reset_board function initializes the game board with numbers 1 through 9 and sets the initial player turn to 'X'. It also resets the draw flag.
Display Function:

The display_board function clears the console and prints the current state of the board along with player turn information.
Player Turn Handling:

The player_turn function handles player input, updates the board, and switches turns between the players.
Game Over Check:

The Game_over function checks for win conditions and if the board is fully occupied without a winner, resulting in a draw.
Main Game Loop:

The main function contains the game loop, which allows players to play multiple rounds by calling the reset_board function and reinitializing the game after each round.
