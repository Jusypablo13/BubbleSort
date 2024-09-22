
---

# Student Grades Management System

This project is a **Student Grades Management System** built in C++. It allows users to manage student records by storing and calculating grades for each student.

## Files

### 1. `calificaciones.cpp`
This source file contains the core logic for managing students and their grades. It includes:
- Storing student names and their respective grades.
- Calculating the average grade for each student.
- Handling operations related to the grades, such as adding new grades and calculating class averages.

### 2. `main.cpp`
This file contains the main function, which demonstrates how the `calificaciones.cpp` file interacts with the user. It allows for:
- Inputting student names and grades.
- Displaying the calculated averages.
- Interacting with the user to view specific student data.

## How to Compile

To compile the project, use the following command in your terminal:

```bash
g++ -o student_grades main.cpp calificaciones.cpp
```

This will create an executable file named `student_grades`.

## How to Run

After compiling, run the program with:

```bash
./student_grades
```

The program will:
1. Prompt the user to enter student names and their corresponding grades.
2. Calculate and display the average grade for each student.
3. Allow the user to view additional student data or class statistics.

### Example Output:

```
Enter the number of students: 3
Enter the name of student 1: Alice
Enter grades for Alice: 85 90 78
Average grade for Alice: 84.33

Enter the name of student 2: Bob
Enter grades for Bob: 92 88 79
Average grade for Bob: 86.33

Enter the name of student 3: Carol
Enter grades for Carol: 76 85 80
Average grade for Carol: 80.33
```

## Dependencies

- A C++ compiler (e.g., `g++`).
- Input data from the user to calculate student averages.
---
