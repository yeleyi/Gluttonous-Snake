# ** COMP2113 Group Project: Gluttonous-Snake **
## ** GROUP 86 Team members (Alphabetical Order) **
### Jian Yachun & Ye Leyi
## ** Game description **
This is a simple version of the classic Snake game. You are invited to decide the height and width of the map. In Gluttonous-Snake, you control a snake-like creature (represented by P) within a small area by w, a, s, d on your keyboard. The goal is to get the snake to eat beans (represented by B) and earn higher scores. The snake will move in a straight line until you tell it to turn. To avoid obstacles, make sure to plan your movements carefully. 
As the snake grows, the snake moves faster every 3 beans and it becomes more difficult to avoid hitting walls. If your snake hits the wall, the game is over.

Enjoy our game!
## ** Features **
1. You decide your map. We use dynamic arrays to invite players to set the map size.
2. We use several files recalling for separate compilation.
3. We generate random beans location.
4. The program can detect input without pressing enter. This is done by the code getch();
5. The game can continue processing without waiting for the player's input. This is done by the code nodelay() from the library <ncurses.h>.


## ** Non-standard C/C++ libraries **
We use <ncurses.h> so that the program can detect input while the game is processing without waiting for the player's input. The code nodelay() from ncurses.h allows the game to continue without waiting for the player's input.

## ** Compilation and execution instructions **
Please use ios devices running our game.



