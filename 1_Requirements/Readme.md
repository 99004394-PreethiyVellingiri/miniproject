### MINIPROJECT BY 256606
### PERFORMANCE CHARACTERISTICS ESTIMATOR SYSTEM FOR A SINGLE PHASE INDUCTION MOTOR
![image](https://github.com/256606/miniproject/blob/main/1_Requirements/Banner.jpg)

### INTRODUCTION

The Performance characteristics estimator system is a program application designed exclusively for the single-phase induction motor. It can be used by wide variety of Industries who depend on these motors for their daily industrial processes and students who are in need to find these parameters by undergoing a lot of tests in a huge hardware setup with necessary precautions and lab technicians who are in a need to react very quickly if any errors occur in the machine. In a single -phase induction motor it is required to conduct more than ten different tests to calculate these parameters of performance characteristics. This Program will definitely save the time of the users and at the same time ensures the safety of them. This program requires a minimum knowledge to handle. Any user who knows to send inputs and receive outputs is capable of operating this program.


### RESEARCH
The performance characteristics of a single phase induction motor are estimated by undergoing a series of tests such as no load test, a DC test and a locked rotor test manually. There exists no software in handy for this estimation today. The estimator system which i proposed cannot be an exact alternative for the manual testing but to some extent. As heat losses and other losses occur during manual testing cannot be accounted by a software and it is totally dependant on the test environment.


### COST AND AGEING
While speaking in terms of cost this estimator system can be used for free with a basic smartphpone.
In terms of ageing  since no system exists prior to this system it can be taken as a starting step for these kind of systems in future.

### FEATURES

• Calculation of Synchronous frequency. 
• Calculation of Synchronous speed. 
• Calculation of Power developed. 
• Calculation of Output power. 
• Calculation of Shaft torque. 
• Calculation of Efficiency. 
• Calculation of Total losses. 
• Calculation of Rotor power. 
• Calculation of Torque developed in forward direction. 
• Calculation of Torque developed in backward direction.

### SWOT ANALYSIS

![image](https://github.com/256606/miniproject/blob/main/1_Requirements/SWOT%20Analysis.png)

### 4W’s and 1H

### WHO? 
This program application can be used by Industrial labours, Students and Lab technicians and at times even an unskilled labour.

### WHY?
Performing many number of tests with heavy equipment and safety precautions can be eliminated with the help of this software.

### WHEN? 
When the industrial labour cannot perform the test on required machine, when a student feels difficult to remember the testing procedure for determination of the performance characteristics that takes, when the lab technician is in an immediate need to check for the error, during these periods they can use this application program.

### WHERE? 
The program can be made to run on any industries equipped with basic computer systems and educational institutions employed with computers.

### HOW?
The user is provided with multiple characteristics and he can use the choice option to select and obtain the desired result for a specific characteristics.

### HIGH LEVEL REQUIREMENTS
|ID|DESCRIPTION|STATUS|
|-------|-------|-----|
|H1 |Calculation of Synchronous frequency |Implemented|
|H2 |Calculation of Synchronous speed | Implemented|
|H3 |Calculation of Power developed |Implemented|
|H4 |Calculation of Output Power| Implemented|
|H5 |Calculation of Shaft torque| Implemented|
|H6 |Calculation of Efficiency |Implemented|
|H7 |Calculation of Total losses |Implemented|
|H8|Calculation of Rotor power |Implemented|
|H9| Calculation of Torque developed in forward direction |Implemented|
|H10| Calculation of Torque developed in Backward direction |Implemented|

### LOW LEVEL REQUIREMENTS

|ID |DESCRIPTION| ID |STATUS|
|-----|------|------|------|
|L1| Calculation of Synchronous frequency by getting inputs such as Slip and Rotor frequency from user |H1 |Implemented|
|L2| Calculation of Synchronous speed by getting inputs such as number of poles from user and Synchronous frequency from previous function| H2 |Implemented|
|L3| Calculation of Power developed by getting inputs such as Torque developed and slip from user| H3| Implemented|
|L4| Calculation of Output power by getting inputs such as power developed from previous function and mechanical loss from user |H4 |Implemented|
|L5| Calculation of Shaft torque by getting inputs such as output power and from previous function| H5 |Implemented|
|L6| Calculation of Efficiency by getting inputs such as Input power from user and Output power from fourth function |H6 |Implemented|
|L7| Calculation of Total losses by getting inputs such as Input power from user and Output power from fourth function| H7 |Implemented|
|L8| Calculation of Rotor power by getting inputs such as Torque developed and copper loss from user |H8 |Implemented|
|L9| Calculation of Torque developed in forward direction by getting inputs such as Torque developed from user and Rotor power from previous function| H9 |Implemented|
|L10|Calculation of Torque developed in backward direction by getting inputs such as Torque developed from user and Rotor power from previous function |H10 |Implemented|
