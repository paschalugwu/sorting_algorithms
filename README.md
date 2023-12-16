# sorting_algorithms
This project was done in teams of 2 people (Paschal Ugwu and Amarachi Nnanta)
	This repository contains C implementations of various sorting algorithms. The project aims to provide a deeper understanding of sorting algorithms, Big O notation, and their implementations. Below is an overview of the implemented algorithms:

## Task 0: Bubble Sort

### Implementation

- File: `0-bubble_sort.c`
- Function: `void bubble_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Bubble sort algorithm. The array is printed after each swap.

### Big O Notation

File: `0-O`

- Best Case: O(n)
- Average Case: O(n^2)
- Worst Case: O(n^2)

## Task 1: Insertion Sort

### Implementation

- File: `1-insertion_sort_list.c`
- Function: `void insertion_sort_list(listint_t **list)`

This function sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. The list is printed after each swap.

### Big O Notation

File: `1-O`

- Best Case: O(n)
- Average Case: O(n^2)
- Worst Case: O(n^2)
## Task 2: Selection Sort

### Implementation

- File: `2-selection_sort.c`
- Function: `void selection_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Selection sort algorithm. The array is printed after each swap.

### Big O Notation

File: `2-O`

- Best Case: O(n^2)
- Average Case: O(n^2)
- Worst Case: O(n^2)

## Task 3: Quick Sort

### Implementation

- File: `3-quick_sort.c`
- Function: `void quick_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Quick sort algorithm (Lomuto partition scheme). The array is printed after each swap.

### Big O Notation

File: `3-O`

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n^2)

## Task 4: Shell Sort - Knuth Sequence

### Implementation

- File: `100-shell_sort.c`
- Function: `void shell_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Shell sort algorithm with the Knuth sequence. The array is printed each time the interval decreases.

## Task 5: Cocktail Shaker Sort

### Implementation

- File: `101-cocktail_sort_list.c`
- Function: `void cocktail_sort_list(listint_t **list)`

This function sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm. The list is printed after each swap.

### Big O Notation

File: `101-O`

- Best Case: O(n)
- Average Case: O(n^2)
- Worst Case: O(n^2)

## Task 6: Counting Sort

### Implementation

- File: `102-counting_sort.c`
- Function: `void counting_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Counting sort algorithm. The counting array is printed once it is set up.

### Big O Notation

File: `102-O`

- Best Case: O(n + k)
- Average Case: O(n + k)
- Worst Case: O(n + k)

## Task 7: Merge Sort

### Implementation

- File: `103-merge_sort.c`
- Function: `void merge_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Merge sort algorithm. The steps of the algorithm are printed during execution.

### Big O Notation

File: `103-O`

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)

## Task 8: Heap Sort

### Implementation

- File: `104-heap_sort.c`
- Function: `void heap_sort(int *array, size_t size)`

This function sorts an array of integers in ascending order using the Heap sort algorithm (sift-down). The array is printed after each swap.

### Big O Notation

File: `104-O`

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)

## Task 9. Radix Sort

- File: `105-radix_sort.c`

**Description:**
This project implements the Radix sort algorithm in C for sorting an array of integers in ascending order. The LSD (Least Significant Digit) radix sort algorithm is used. The program prints the array each time it increases a significant digit.

**Prototype:**
```c
void radix_sort(int *array, size_t size);
```

**Usage:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    radix_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

## Task 10. Bitonic Sort

- Files: `106-bitonic_sort.c`, `106-O`

**Description:**
This project implements the Bitonic sort algorithm in C for sorting an array of integers in ascending order. The program prints the array each time two elements are swapped. The time complexity of the Bitonic sort algorithm is analyzed and documented in the file `106-O`.

**Prototype:**
```c
void bitonic_sort(int *array, size_t size);
```

**Usage:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bitonic_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

## Task 11. Quick Sort - Hoare Partition Scheme

- Files: `107-quick_sort_hoare.c`, `107-O`

**Description:**
This project implements the Quick sort algorithm using the Hoare partition scheme in C for sorting an array of integers in ascending order. The program prints the array each time two elements are swapped. The time complexity of the Quick sort algorithm is analyzed and documented in the file `107-O`.

**Prototype:**
```c
void quick_sort_hoare(int *array, size_t size);
```

**Usage:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort_hoare(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

## Task 12. Dealer

- Files: `1000-sort_deck.c`, `deck.h`

**Description:**
This project implements a function to sort a deck of cards using the C standard library function `qsort`. The deck is ordered from Ace to King and from Spades to Diamonds. The cards are represented using custom data structures.

**Prototype:**
```c
void sort_deck(deck_node_t **deck);
```
**Usage:**
```c
#include <stdlib.h>
#include <stdio.h>
#include "deck.h"

int main(void)
{
    card_t cards[52] = { /* ... */ };
    deck_node_t *deck = init_deck(cards);

    print_deck(deck);
    printf("\n");
    sort_deck(&deck);
    printf("\n");
    print_deck(deck);
    return (0);
}
```

Note: The `deck.h` header file contains the definition of data structures used in the project.


## Repository Information

- **GitHub Repository:** [sorting_algorithms](https://github.com/paschalugwu/sorting_algorithms)
- **Files:** Refer to the respective task files for each algorithm implementation.
