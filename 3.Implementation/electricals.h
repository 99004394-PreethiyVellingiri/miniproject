/**
 * @file electricals.h
 * @author Preethiy V (Preethiyv@embedded.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ELECTRICALS_H__
#define __ELECTRICALS_H__
/**
 * @brief Function to find synchronous frequency of a single phase Induction motor
 * 
 * @param fr Rotor frequency
 * @param S   Slip
 * @return int synchronius frequency of the single phase induction motor
 */

int synfrequency(int fr,float S);
/**
 * @brief Function to find synchronous speed of a single phase Induction motor
 * 
 * @param f frequency
 * @param p  number of poles
 * @return int synchronous speed of the single phase IM
 */
int synspeed(int f, int p);
/**
 * @brief  Function to find power developed of a single phase Induction motor
 * 
 * @param Td Torque developed
 * @param S  Slip
 * @return float synchronous speed of a Induction motor
 */
float powerdeveloped(int Td,float S);
/**
 * @brief Function to find Output Power of a single phase Induction motor
 * 
 * @param Pd Power developed
 * @param Wm Mechanical losses
 * @return float Output power  of a single phase Induction motor
 */

float outputpower(float Pd,int Wm);
/**
 * @brief Function to find shaft torque of a single phase Induction motor
 * 
 * @param Pd Power developed
 * @param Nr Synchronous speed
 * @return float shaft torque of a single phase Induction motor
 */
float shafttorque(float Pd, int Nr);
/**
 * @brief  Function to find total losses of a single phase Induction motor
 * 
 * @param Pi Input power
 * @param Op Output power
 * @return float total losses of a single phase Induction motor
 */
float totallosses(float Pi, float Op);
/**
 * @brief  Function to find Efficiency of a single phase Induction motor
 * 
 * @param Pi Input power
 * @param Op Output power
 * @return float Efficiency of a single phase Induction motor
 */
float efficiency(float Pi,float Op); 
/**
 * @brief  Function to find rotor power of a single phase Induction motor
 * 
 * @param Pd Power developed
 * @param WCu Copper loss
 * @return float Rotor power of a single phase Induction motor
 */

float rotorpower(float Pd,int WCu);
/**
 * @brief  Function to find Torque backward of a single phase Induction motor
 * 
 * @param Rp Rotor power
 * @param Td Torque developed
 * @return float Torque backward of a single phase Induction motor
 */

float torquebackward(float Rp ,int Td );
/**
 * @brief  Function to find Torque forward of a single phase Induction motor
 * 
 * @param Rp Rotor power
 * @param Td Torque developed
 * @return float Torque forward of a single phase Induction motor
 */

float torqueforward(float Rp ,int Td);


//int display(O->Ss,O->Op,O->E,O->Rp,O->T,O->Pd,O->Tb,O->Tf,O->Tl,O->Sf);


#endif  /* __ELECTRICALS_H__  */ 