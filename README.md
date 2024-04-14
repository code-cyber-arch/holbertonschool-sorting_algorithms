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

The provided C program,[2-selection\_sort.c](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/2-selection_sort.c) implements the selection sort algorithm to sort an array of integers in ascending order. Here's a concise explanation of its functionality:
- Function: selection\_sort
	- Purpose: Sorts an array by repeatedly finding the minimum element from the unsorted part and swapping it with the first unsorted element.
	- Parameters: Accepts an array of integers (array) and the number of elements in the array (size).
- Key Details:
	- Validation Check: Ensures that the array is not NULL before proceeding with the sorting process.
	- Sorting Process: Iterates over the array, selecting the smallest element in the unsorted part and swapping it with the element at the current position.
	- Swap Operation: Uses a temporary variable (swap) to swap elements in the array.
	- Printing Array: After each swap, the function checks if any swaps were made in the inner loop (flag != 0) and prints the array to visualize the sorting process.
###
The selection sort algorithm divides the array into sorted and unsorted parts, repeatedly selecting the smallest element from the unsorted part and moving it to the sorted part. Although simple, selection sort has a time complexity of O(n2), making it inefficient for large datasets compared to more advanced algorithms.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
```
## 3 - Quick sort

Quick sort is a fast sorting algorithm that divides an array into smaller subarrays, sorts them independently, and then combines them. Here's how it works:

- Choose Pivot: Select a pivot element from the array.
- Partitioning: Rearrange the array so that all elements less than the pivot are on the left, and all elements greater than the pivot are on the right.
- Recursion: Recursively apply the above steps to the subarrays on the left and right of the pivot.
- Base Case: The recursion stops when the subarray size is 1 or 0.
###
Quick sort has an average-case time complexity of O(nlogn) and is efficient in practice, making it a popular choice for sorting.
###
This C program, [3-quick\_sort.c](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/blob/main/3-quick_sort.c) implements the quicksort algorithm to sort an array of integers in ascending order. Here's a brief overview:
- swap function: Swaps two elements in an array and prints the modified array. Used by the partition function.
- partition function: Rearranges elements around a pivot element for quicksort. Elements less than the pivot are moved to the left, and greater elements to the right. Returns the new pivot index. Uses the swap function for rearrangement.
- quick\_recursion function: Recursively sorts an array using quicksort. Partitions the array around a pivot and sorts the subarrays on either side of the pivot.
- quick\_sort function: Initiates the quicksort algorithm by calling quick\_recursion with the initial left and right indices of the array.
###
The quicksort algorithm divides the array into two subarrays and recursively sorts them. It has an average time complexity of 
O(nlogn), making it more efficient than other simple sorting algorithms like bubble sort and selection sort.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-sorting_algorithms/tree/main/build_file)
```sh
gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
```
