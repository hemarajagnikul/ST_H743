/*
 * PID_Control.c
 *
 *  Created on: 16-Nov-2020
 *      Author: Deepika
 */

#include "PID_Control.h"

float Error;
float Prev_Error=20;

float P_controller;
float I_controller;
float PI_controller;
float Add_err;
float pos_P;
float pos_I;
float control(float Set_pt,float Current_position,float pos_P,float pos_I,float Output[]);

float control(float Set_pt,float Current_position,float pos_P,float pos_I,float Output[])
{
	Error=Set_pt-Current_position;
	P_controller=Error*pos_P;
	Add_err=Error+Prev_Error;
	I_controller=Add_err*pos_I ;
	PI_controller=P_controller+I_controller;
    Output[0]=PI_controller;
    Output[1]=Error;
    Output[2]=Current_position;
	return PI_controller;
}


