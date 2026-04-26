# CS50x: Mario Pyramid Evolution

This folder contains my implementation of the World 1-1 Mario Pyramid from Howard's CS50x.
I have provided two distinct versions of the solution to demonstrate different programing methodologies as I prepare for my MSc in Computer Science at Manchester Metropolitan University.

---

## Project Overview 
The goal of this project was to master control flow in C by generating a double-sided pyramid of a user-defined height (between 1 and 8).

### Version 1: 'pyramid1.c' (The Abstraction Approach)
In this version, I focused on **readability and modularity**.
* **Concept:** Used custom functions ('space', 'width', 'width1') to breakdown the problem into smaller, manageable tasks.
* **Why it matters:** This demonstrates the ability to write "Clean Code" that is easy for other developers to read and maintain -a vital skill for professional software development.

### Version 2: 'pyramid2.c' (The Logic & Constraints Approach)
This version focuses on **raw computational logic and strict input validation**.
* **Concept:** Implemented a 'do-while' loop to ensure user input stays within the safe range of 1-8.
* **Technicality:** Used sequential nested 'for' loops to handle the "series" of spaces and hashes without external helper functions.
* **Why it matters:** This demonstrates a deep understanding of memory-efficient nested loops and "Security First" mindset by never trusting raw input.

  ---
## Core Skills Demonstrated
* **Language:** C
* **Data Integrity:** Ensuring valid input via 'do-while' loops
* **Logic Mapping:** Coordinating variables (Height and Row Number) to manage 2D spatial output.
*  **Abstraction:** Simplifying complex processes through function definitions.

  ---

  ## Manchester 2026 Goal
  This project serves as the foundation for my specialised studies in **Cloud Security**.
