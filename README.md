# C - Sorting algorithms & Big O

Sorting algorithms arrange items in a sequence (like numbers) into a specified order, improving data organization for efficient searching and retrieval. Examples include Bubble Sort, Quick Sort, and Merge Sort, each differing in implementation and efficiency. Their performance is evaluated using Big O notation, which measures time complexity and describes how completion time scales with input size. Quick Sort, for instance, is efficient at O(nlogn), while Bubble Sort is slower with O(n2). This notation aids in assessing algorithm scalability and practicality for various data sizes.

## 0 - Bubble sort

Bubble sort repeatedly compares adjacent elements and swaps them if they are in the wrong order, moving the largest unsorted element to its correct position in each pass. Despite its simplicity, it is inefficient for large lists and is primarily used for educational purposes.
###
The provided C profram, [0-bubble\_sort.c](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/0-bubble_sort.c), consists of two functions, designed to sort an array of integers using the Bubble Sort algorithm:
###
- swap function
	- Purpose: Swaps two elements in an array.
	- Parameters: Accepts three arguments: a pointer to an array of integers (array), and two indices (i and j) representing the positions of the elements to be swapped.
	- Operation: Temporarily holds the value of the element at the first index, replaces it with the value at the second index, and then places the temporary value at the second index.
- bubble\_sort function
	- Purpose: Sorts an array using the Bubble Sort method.
	- Parameters: Takes an array of integers and its size as arguments.
	- Description: The function first checks if the array is null or has less than two elements, in which case it returns immediately. It iterates over the array, comparing adjacent elements and swapping them if they are out of order (i.e., the first is greater than the second). This process repeats until a full pass is made without any swaps, indicating the array is sorted.
	- Efficiency Concerns: Bubble sort is known for its simplicity but is inefficient for large datasets with a time complexity of O(n2).
###
The bubble\_sort function also calls [print\_array](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/build_file/print_array.c) to visually display the array after each swap, aiding in debugging or understanding the sorting process.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```
## 1 - Insertion sort
Insertion sort builds the final sorted array one element at a time by iteratively placing each element in its correct position among the already sorted elements. It has an average and worst-case time complexity of O(n^2)
O(n^2), making it less efficient than more advanced algorithms like quicksort or merge sort for large datasets. However, it performs well for small datasets or nearly sorted arrays due to its simple implementation and low overhead.
###
The provided C program, [1-insertion\_sort\_list.c](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/1-insertion_sort_list.c) defines a function that sorts a doubly linked list using the insertion sort algorithm. Here's a concise breakdown of its operation:
- Function: insertion\_sort\_list
	- Purpose: Sorts a doubly linked list in ascending order by adjusting the node positions to maintain the list's structure.
	- Parameter: list, a double pointer to the head of the doubly linked list.
- Key Details:
	- Validation Checks: The function first checks if the list is null, if it's empty, or if it consists of a single node, in which case it returns immediately without doing anything.
	- Sorting Mechanism: The sorting starts from the second node (designated as key). For each node, it compares the current key with its previous nodes.
	- Node Swapping: If the key node is smaller than its previous node, they are swapped. This involves updating pointers of the key node, its previous node, and their respective adjacent nodes to ensure the list remains correctly linked.
	- List Update: If during a swap the key node moves to the head of the list, the list's head pointer is updated.
	- Visualization: After each swap, the function [print\_list](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/build_file/print_list.c) is called to display the current state of the list, aiding in debugging or visual understanding of the sort process.
###
The function effectively rearranges the nodes within the list without modifying the actual data within each node, ensuring that the list is sorted in place while maintaining the integrity of the doubly linked structure.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
```
## 2 - Selection sort
Selection sort is a simple sorting algorithm that segments the list into a sorted and an unsorted part. It repeatedly identifies the smallest (or largest) element in the unsorted section and swaps it to the end of the sorted section. This process is repeated until the entire list is sorted. Despite its straightforward nature, selection sort is inefficient for large lists with a time complexity of O(n2), making it less suitable compared to faster algorithms like quicksort or mergesort.


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
```
## 3 - Quick sort

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
```
