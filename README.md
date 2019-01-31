# TicTacToe_OOP
Tic-Tac-Toe game in a console application with a Object Oriented Programming Style
## TicTacToe (Base Class)
  ### Members
- This class will have the following **protected** members:
  - choice. An unsigned short integer to hold the choice the user makes.
  - minimum choice. An unsigned short integer to hold the minimum option for the user available.
  - maximum choice. An unsigned short integer to hold the maximum option for the user available.
  - rows. A static variable to hold the number of rows in the array.
  - cols. A static variable to hold the number of cols in the array.
  - 3 x 3 array. A character data type array to hold the values from 1 to 9.
- This class will have the following **private** members:
  - player. An unsigned short integer to hold the player number to determine the player turn.
  - counter. An unsigned short integer to hold the counter to defined the 3 x 3 array.
 ### Methods
- This class will have the following **public** methods:
  - A default constructor to hold default values of the members.
  - A virtual method for the player number 1 to make a selection. It takes two arguments, the player number and a boolean to know if the computer will play.
  - A virtual method for the player number 2 to make a selection. It takes two arguments, the player number and a boolean to know if the computer will play.
  - A virtual method to display the tic tac toe grid.
  - A virtual method to determine the winner. It takes two boolean arguments, one is to determine the winner and the other is to determine if there was a tie.
  - A virtual method to notify the winner to the user. It passes by reference the player number that won.
  - A virtual method to display the initial menu.
