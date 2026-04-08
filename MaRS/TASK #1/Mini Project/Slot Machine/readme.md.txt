*Slot Machine*

1. What the project does and why I chose it

This project simulates a slot machine using three RGB LEDs controlled by an Arduino Uno. When a pushbutton is pressed, the LEDs cycle through random colors to mimic spinning reels and then stop one by one to form a final combination. Based on the color pattern, the system determines whether the user wins or loses and displays the result on the Serial Monitor.

I chose this project because I thought it was both fun and challenging. It also combines a lot of the basic arduino concepts very well.

2.Components used and their roles
  
  1. Arduino Uno

     Acts as the main controller, executing the logic and controlling all components.

  2. 3 RGB LEDs (Common Cathode)
 
     Represent the three slot reels. Each LED displays different colors (Red, Green, Blue) to simulate spinning and final outcomes.

  3. Pushbutton

     Used to start the slot machine spin when pressed.

  4. Resistors (220Ω)

    Protect the LED pins by limiting current.

  5. Jumper wires & Breadboard

     Used to connect all components properly.


3. Challenges faced and how I solved them

  1.Understanding RGB LED control
    Initially, managing three pins per LED was confusing. This was solved by creating a helper function (setColor) to simplify color control.

  2.Handling randomness properly
    Using random(0,3) instead of random(0,2) ensured all three colors were equally possible.

  3.Making the spin look realistic
    Instead of instantly showing results, a spinning effect was created using rapid random color changes followed by delayed stopping of each LED.


4. Brief explanation of how the circuit works 

   When the pushbutton is pressed, the Arduino triggers a spinning effect by rapidly assigning random colors to the three RGB LEDs. After a short duration, each LED stops one by one with a randomly selected color. The final combination is then evaluated to determine if it is a jackpot, partial win, or loss. The result is displayed through the Serial Monitor, completing one cycle of the slot machine simulation.
