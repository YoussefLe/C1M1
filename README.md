# Statistical Analytics in C

## Author
Youssef LAMINE

## Project Descript
This project is part of the Coursera course "Introduction to Embedded Systems" and involves implementing statistical analytics on an array of unsigned char data. The goal is to reinforce C programming concepts, compiling with GCC, and using Git for version control.

## Features
The program analyzes an array of 40 unsigned char data items and computes:
- **Minimum value**
- **Maximum value**
- **Mean** (rounded down to the nearest integer)
- **Median** (rounded down to the nearest integer)
- **Sorted array** (sorted in descending order)

The results are printed in a formatted manner to the command line.

## File Structure
The project consists of the following files:

- **stats.c**: Implementation file containing function definitions
- **stats.h**: Header file with function prototypes
- **README.md**: Documentation describing the project and its functionality

## Functions Implemented
1. `main()` - Entry point of the program
2. `print_statistics()` - Displays calculated statistics (min, max, mean, median)
3. `print_array()` - Prints the array to the console
4. `find_median()` - Computes the median of the dataset
5. `find_mean()` - Computes the mean of the dataset
6. `find_maximum()` - Finds the maximum value in the dataset
7. `find_minimum()` - Finds the minimum value in the dataset
8. `sort_array()` - Sorts the dataset in descending order

## Compilation & Execution
To compile the program, use GCC:
```bash
gcc -o stats stats.c
```
To run the executable:
```bash
./stats
```

## Version Control
This project is version-controlled using Git. To clone the repository:
```bash
git clone https://github.com/YoussefLe/C1M1
```
To add changes and push to GitHub:
```bash
git add .
git commit -m "Initial implementation of statistical functions"
git push origin main
```

## Acknowledgments
This project follows the guidelines provided by Coursera for learning embedded systems programming with C.

