# Performance Report Generator

![Performance Report Generator](https://github.com/saad-shaikh-256/Performance-Report-Generator/blob/main/Cover/Fullsize%20Cover.png?raw=true)

## Overview

This C program generates a **Student Performance Report** based on their marks in five subjects. It collects the roll number, student name, and marks, then calculates the total marks, average marks, and percentage. The program also determines the student's pass/fail status and assigns a grade if applicable.

## Features

- **Input Handling**: Captures roll number, student name, and marks for five subjects with error validation.
- **Performance Calculation**: Computes total marks, average marks, percentage, and grade.
- **Pass/Fail Status**: Determines pass status based on total marks (minimum 175 to pass).
- **Grade Assignment**:
  - Distinction: Average ≥ 70
  - First Class: Average ≥ 61
  - Second Class: Average ≥ 51
  - Pass: Below 51
- **User-Friendly Output**: Presents results in a clean, organized format with proper dividers for better readability.
- **Error Handling**: Alerts the user for invalid input entries.

## Technologies Used

- **C Programming Language**

## Installation

To run this project locally, follow these steps:

1. **Clone the Repository**  
   Download the project folder by running:
   ```bash
   git clone https://github.com/saad-shaikh-256/Performance-Report-Generator.git
   ```

2. **Navigate to the Project Directory**  
   Move to the project folder:
   ```bash
   cd Performance-Report-Generator
   ```

3. **Compile the Program**  
   Use a C compiler (e.g., GCC) to compile the source code:
   ```bash
   gcc performance_report_generator.c -o performance_report
   ```

4. **Run the Program**  
   Execute the compiled program:
   ```bash
   ./performance_report
   ```

## Notes

- Ensure you have a C compiler installed, such as GCC or MinGW.
- Customize grading criteria or pass marks by modifying the source code.
- This program is designed for educational purposes and is easy to extend or adapt.

Feel free to reach out for any issues or suggestions!

