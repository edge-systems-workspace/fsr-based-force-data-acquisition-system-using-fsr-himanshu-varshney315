/**
* @file main.cpp
 * @brief Force/Pressure Sensor Data Acquisition System
 *
 * This program interfaces with a force/pressure sensor connected to analog pin A0
 * and continuously reads sensor values, transmitting them via serial communication
 * at a baud rate of 9600.
 *
 * @author
 * @date February 2026
 * @version 1.0
 */

#include <Arduino.h>

/** @brief Global variable storing the current sensor reading value */
int value = 0;

/**
 * @brief Initializes the Arduino system and configures hardware peripherals
 *
 * This function is called once when the microcontroller starts up. It configures:
 * - Serial communication port at 9600 baud rate for data transmission
 * - Analog pin A0 for sensor input
 *
 * @note This function is part of the Arduino framework and is automatically called
 *       by the system at startup.
 *
 * @return void
 */
