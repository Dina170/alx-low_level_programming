### **0. Linear search**

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg)

- Prototype : `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `1`
- Every time you compare a value in the array to the value you are searching

### **1. Binary search**

Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA)

- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in `array`
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `1`
- You must print the array being searched every time it changes.

### **2. Big O #0**

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

### **3. Big O #1**

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

### **4. Big O #2**

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

Done? Help Check your code

### **5. Big O #3**

What is the `space complexity` (worst case) of a binary search in an array of size `n`?

### **6. Big O #4**

What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

```