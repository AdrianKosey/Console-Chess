An object-oriented C++ project that implements a console chess game.
The objective is to practice concepts of inheritance, polymorphism, dynamic memory, and modular design.
Features
- Board representation with an array of Piece pointers.
- Use of the Piece base class and derived classes (King, Queen, Rook, Bishop, Knight, Pawn).
- Polymorphism to validate moves based on piece type.
- Printing of the board to the console with:
- Frames and labels (royal chess-style rows and columns).
- ANSI colors to differentiate between white and black squares.
- Color contrast on pieces for greater readability.
- Constructor that automatically initializes pieces to their initial position.
- Destructor that dynamically frees memory to prevent leaks.

Applied Concepts
- Inheritance and polymorphism: each piece implements its own movement logic.
- Dynamic memory: use of new and delete with virtual destructors.
- Modular design: separation into .h and .cpp files.
- Best practices: clear printing of the board, labels, and colors.

LICENSE
This project is distributed under the MIT license.