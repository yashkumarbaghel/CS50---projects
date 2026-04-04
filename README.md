# CS50---projects

## Tom & Bat: A Physics-Based Sprite Logic Lab
This project is my first exploration into game mechanics and logic using scratch for **CS50 2026**. It focuses on character movement, collision detection, and iterative debugging of gravity systems.

## Key Features
### 1. Advanced Sprite Navigation
* **Tom (Player):** Implemented 4-way movement with dynamic orientation. Tom "tilts" 15 degrees when moving up/down and flips orientation for left/right movement to provide a responsive user experience.
*  **The Bat (AI):** Designed an automated flapping animation using a "forever" loop to cycle through four costume states.

### 2. Physics & Gravity Engine (The Challenge)
* **The Jump Algorithm:** Developed a realistic jump effect using iterative Y-axis increments (+20 four times then -20 four times) with 0.01s delays to ensure smooth visual transition rather than "teleporting".

* **Gravity Debugging** 
**(First Major Bug):** Conflict with the Jump command and the Gravity constraint caused stuttering.
* **The Fix:**  Implemented a **Colour-Sensing "Ground" Detection**. The Sprite now uses a 'forever' loop to constantly monitor contact with "Brown" ground colour, applying a -5 Y-axis force until contact is confirmed, 'only when' not touching the ground.

### 3. Collision and AI Logic
* **Chase Mechanics:** The Bat is programmed to constantly "Slide" towards Tom's coordinates, creating a persistent threat.
* **Collision Feedback:** Integrated a sensing loop where contact between the Bat and Tom triggers a sound effect and a visual "Ouch!" dialogue, simulating damage.

## Lessons Learned
* **State Management:** Learned that logic loops must be placed in 'Forever' blocks to ensure they don't stop after the first succesful trigger.
* **Resource Prioritisation:** Decided to leave a minor Y-axis offset bug as "Known Behavior" to prioritise moving forward into **C programming** and more complex computer science topics.

## Files
* 'Tom_and_Bat.sb3' : Source code file for Scratch.
  
