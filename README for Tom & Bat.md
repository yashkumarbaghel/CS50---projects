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
### Solving the Jump and Gravity Conflict

While building the game, I ran into a major problem: my **Jump** and my **Gravity** were fighting each other. 

1. **The First Problem:** When I tried to jump, the gravity logic would pull the cat down too fast, making the movement look glitchy.
2. **The First Fix (The Timer):** I tried to solve this by adding a **2-second timer**. I thought this would give the cat time to finish the jump before gravity started again.
3. **The New Conflict:** The timer created a new bug. If the cat was in the air or outside the normal area, it would "freeze" or delay for 2 seconds before gravity worked. It made the game feel slow and broken.
4. **The Final Solution:** I deleted the timer and changed the logic entirely. Instead of using a timer, I made the cat **constantly check the ground color (brown)**. 
   * Now, the cat only stops falling when it "feels" the brown color. 
   * This fixed the jump conflict and made the gravity work smoothly everywhere.


### 3. Collision and AI Logic
* **Chase Mechanics:** The Bat is programmed to constantly "Slide" towards Tom's coordinates, creating a persistent threat.
* **Collision Feedback:** Integrated a sensing loop where contact between the Bat and Tom triggers a sound effect and a visual "Ouch!" dialogue, simulating damage.

## Lessons Learned
* **State Management:** Learned that logic loops must be placed in 'Forever' blocks to ensure they don't stop after the first succesful trigger.
* **Resource Prioritisation:** Decided to leave a minor Y-axis offset bug as "Known Behavior" to prioritise moving forward into **C programming** and more complex computer science topics.

## Files
* 'Tom_and_Bat.sb3' : Source code file for Scratch.
  
