# push_swap

Push_swap is a project from 42 school (École 42) in C designed to sort integers using binary radix sort algorithm in stacks.

## Overview

`push_swap` is an algorithmic project that requires sorting a list of integers using two stacks (`a` and `b`) and a limited set of operations.  
The goal is to sort the numbers in ascending order with the lowest number of moves possible.

This implementation uses a **Radix Sort (base 2) approach**, providing an efficient and deterministic solution for larger input sizes.

---

## Features

- Uses **stack-based operations** (`sa`, `pb`, `ra`, etc.)
- Implements **Radix Sort** to achieve sorting in **O(n log n)** behavior
- Handles input validation:
  - Duplicate numbers
  - Non-integer values
  - Values outside `int` range
- Clean and readable structure for maintainability

---

## How It Works (Radix Sort Approach)

1. Normalize the input by **indexing** each number based on its sorted position.
   - Example: `[52, -3, 18]` → Sorted: `[-3, 18, 52]` → Indexed: `[2, 0, 1]`.

2. Perform bitwise sorting by iterating through each bit position:
   - For each bit:
     - If the bit is **0**, push the element to stack **b**
     - If the bit is **1**, rotate stack **a**
   - After one bit pass, push everything back from **b** to **a**

3. Repeat until all bits have been processed and the list is sorted.

This method is efficient and avoids complex pivot logic while maintaining predictable performance.

---

## Commands / Operations

| Command | Description |
|--------|-------------|
| `sa`   | Swap the first two elements of stack A |
| `sb`   | Swap the first two elements of stack B |
| `ss`   | Perform `sa` and `sb` simultaneously |
| `pa`   | Push the first element of B onto A |
| `pb`   | Push the first element of A onto B |
| `ra`   | Rotate stack A (first element becomes last) |
| `rb`   | Rotate stack B |
| `rr`   | Perform `ra` and `rb` simultaneously |
| `rra`  | Reverse rotate A (last element becomes first) |
| `rrb`  | Reverse rotate B |
| `rrr`  | Perform `rra` and `rrb` simultaneously |

---

## Usage

### Build the project
```bash
make
```

### Run
```bash
./push_swap <numbers>
```

Example:
```bash
./push_swap 4 67 3 87 23
```

### Check Moves Count
```bash
./push_swap 4 67 3 87 23 | wc -l
```

### Verify Sorting (with checker if available)
```bash
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

---

## Project Structure

```
push_swap/
├── src/
│   ├── push_swap.c
│   ├── operations.c
│   ├── parsing.c
│   ├── utils.c
│   └── radix_sort.c
├── include/
│   └── push_swap.h
├── Makefile
└── README.md
```

---

## Performance

- Performs efficiently with large input sizes (500 numbers and above)
- Consistently meets expected move limits for common push_swap testers
- Deterministic approach (no random pivot logic)

---

## Author

**BabiDrummond** – Student at École 42.
