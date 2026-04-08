*Arduino Password Interface* 

1. Project Overview

This project implements a simple password-based locking system using an Arduino Uno. The user enters a password through the Serial Monitor, and the system verifies it against a predefined password.

If the password is correct, the green LED glows to indicate that the system is unlocked. If incorrect, the red LED glows and after multiple failed attempts, the system blocks user input for a certain amount of time.


2. Why I Chose This Project

I chose this project because it simulates a real-world security system while using fundamental Arduino concepts like serial communication, digital output control, and logical decision-making.

It is a good balance between simplicity and functionality, and it helped me understand how embedded systems handle user input and validation.


3. Components Used

  1. Arduino Uno

     * Acts as the microcontroller
     * Processes input and controls outputs

  2. LED

     * Indicates system status

  3. Resistor (220Ω)

     * Protects the LED from excessive current

  4. Serial Monitor

     * Used as an input interface to enter the password
     * Displays system messages (access granted/denied)


4. Working Principle

  1. The system waits for user input from the Serial Monitor.
  2. The entered password is read as a string.
  3. The input is compared with a predefined password.
  4. Based on the result:
   * Correct - green LED turns on
   * Incorrect - red LED turns on
  5. After 3 incorrect attempts, the system locks for 10 seconds before allowing retries.


5. Key Concepts Used

* Serial.begin() for communication
* Serial.readString() for input
* String comparison
* Conditional statements (if-else)
* Digital output control (digitalWrite)
* Basic security logic (attempt limiting)


6. Challenges Faced and Solutions


  1. 'Variable Not Declared' Error

     Issue: Compilation error for input variable
     Cause: Variable declared inside a block but used outside
     Solution: Ensured variable was declared globally 



  2. Repetitive Wrong Attempts

     Issue: System allowed unlimited attempts
     Solution: Implemented attempt counter and lockout mechanism



  3. Understanding Serial Communication

     Issue: Initially unclear how Arduino receives input
     Solution: Practiced with simple theory and examples

7. Conclusion

This project demonstrates how basic Arduino components can be used to build a functional security system. It helped strengthen understanding of serial communication, logical control flow, and user interaction in embedded systems.


