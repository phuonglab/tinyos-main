/*
 * Copyright (c) 2011, University of Szeged
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holder nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Zsolt Szabo
 */

#ifndef SHT21_H
#define SHT21_H

enum {
  TRIGGER_T_MEASUREMENT_HOLD_MASTER	=	0xE3,
  TRIGGER_RH_MEASUREMENT_HOLD_MASTER	=	0xE5,
  TRIGGER_T_MEASUREMENT_NO_HOLD_MASTER	=	0xF3,
  TRIGGER_RH_MEASUREMENT_NO_HOLD_MASTER	=	0xF5,
  WRITE_USER_REGISTER			=	0xE6,
  READ_USER_REGISTER			=       0xE7,
  SOFT_RESET                            =       0xFE,
} Sht21Command;

enum {
  RESOLUTION_12_14BIT	=	0x00,   //humidity _ , temperature _
  RESOLUTION_8_12BIT	=	0x01,
  RESOLUTION_10_13BIT	=	0x80,
  RESOLUTION_11_11BIT	=	0x81,
} Sht21Resolution;

enum {
  HEATER_ON     =       0x04,
  HEATER_OFF    =       0x00,
} Sht21Heater;

enum {
  I2C_ADDRESS =  64,
} Sht21Header;

enum {
  TIMEOUT_14BIT =       85,
  TIMEOUT_13BIT =       43,
  TIMEOUT_12BIT =       22,
  TIMEOUT_11BIT =       11,
  TIMEOUT_10BIT =       6,
  TIMEOUT_8BIT  =       3,
  TIMEOUT_RESET =       15,
} Sht21Timeout;

#endif