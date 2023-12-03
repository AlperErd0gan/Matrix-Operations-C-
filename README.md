# Matrix-Operations-C-
This C++ program performs basic matrix operations, including matrix addition, subtraction, and multiplication. It uses vectors to represent matrices and provides functions for user input, matrix addition, subtraction, and multiplication.

## Features

- **Matrix Input**: The program allows users to input two matrices of the same size.
- **Matrix Addition**: Adds two matrices of the same size.
- **Matrix Subtraction**: Subtracts one matrix from another of the same size.
- **Matrix Multiplication**: Multiplies two matrices if the dimensions are compatible.
- **User Interaction**: The program prompts the user to input the size and elements of matrices.

## Getting Started

### Prerequisites

- [C++ Compiler](https://gcc.gnu.org/install/index.html) - The program is written in C++ and requires a C++ compiler.

### How to Compile

1. Open your terminal or command prompt.
2. Navigate to the directory containing the program files.
3. Compile the program using a C++ compiler. For example:

   ```bash
   g++ matrix_operations.cpp -o matrix_operations
   ```

### How to Run

1. After successful compilation, run the executable:

   ```bash
   ./matrix_operations
   ```

2. Follow the on-screen instructions to input matrices and perform operations.

## Usage

- Input the size of the matrices (`n`).
- Enter the elements of the first and second matrices when prompted.
- View the results of matrix addition, subtraction, and multiplication.

## Example

```bash
Donnez la taille de matrice nxn: 2
Saisissez la matrice 2x2:
Element à la position (1, 1): 1
Element à la position (1, 2): 2
Element à la position (2, 1): 3
Element à la position (2, 2): 4

Saisissez la matrice 2x2:
Element à la position (1, 1): 5
Element à la position (1, 2): 6
Element à la position (2, 1): 7
Element à la position (2, 2): 8

Le résultat de la multiplication de deux matrices données
19 22
43 50

Le résultat de l'addition de deux matrices données
6 8
10 12

Le résultat de la soustraction de deux matrices données
-4 -4
-4 -4
```

## License

This program is licensed under the [MIT License](LICENSE).

---

Copy and paste this content into a file named `README.md` in the same directory as your program. Adjust the content as needed, and make sure to create a file named `LICENSE` with the corresponding license text.
