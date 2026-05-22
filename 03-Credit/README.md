# Credit Card Validator (Luhn's Algorithm)

A C program built for Harward's CS50x (Week 1) that determines whether a credit card number is valid according to **Luhn's Algorithm**, and identifies the card issuer (Mastercard, VISA, American Express and more).

---

## Architectural Decision: "Brute-Force" vs. Shortcuts

For this implementation, I made a strict decision to **protect my own learning process**. Instead of looking up online tutorials, copy-pasting standard 'while' loop templates, or using shortcut algorithms, I built the entire system using raw, unassisted logical reasoning.

* **The Strategy:** I engineered a "brute-force" structure that manually slices, tracks, and isolates every single digit of a 13-to-16 digit card number using an explicit matrix of dedicated variables ('aa', 'ab', 'bb', 'ba', etc.).
* **The Result:** The codebase is longer than a standard loop implementation, but it is **100% my own architecture**.

This project proves my ability to take a complex mathematical word problem, break it down into sequential steps, and bend the language syntax to my will to force a working solution.

---

## Concepts Mastered

* **Mathematical Digits Extraction:** Using modulo arithmetic ('% 10') and integer division ('/ 10') to peel apart numbers.
* **Control Flow Optimization:** Implemented a clean **'switch' statements** to evaluate the final card totals and map them directly to the correct card issuers (Mastercard, VISA, American Express, etc.), avoiding a messy chain of 'if/else' blocks.
* **Data Types:** Utilizing 'long' variables to prevent integer overflow errors with 16-digit data inputs.

---

## Future Refactoring Plan (Version 2)
My next goal for this repository is to return to this codebase and refactor it into 'credit_v2_optimized.c'. I will replace my manual variable matrix with a structured memory array and an automated 'for' loop, to transform it from raw logic to optimized clean code.
