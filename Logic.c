/*
 * Logic.c
 *
 *  Created on: Nov 19, 2020
 *      Author: Deepika
 */

#include "Logic.h"

int hall_in[3];
 int hall_out[3];
int hall_out1;
int hall_out2;
int hall_out3;
int com_logic( int hall_in[],int hall_out[]);  //array cannot be gn to array (static array)
 int com_logic( int hall_in[],int hall_out[])
 {
	 if((hall_in[0]==0)&& (hall_in[1]==0)&&(hall_in[2]==0))
	 {
		 hall_out1=0;
	 	hall_out2=0;
	 	hall_out3=0;
	 	//hall_out3=0;
	 }


	 else if((hall_in[0]==0) && (hall_in[1]==0) && (hall_in[2]==1))
	 {
	 		hall_out1=0;
	 		hall_out2=-1;
	 		hall_out3=1;
	 }
	 else if((hall_in[0]==0) && (hall_in[1]==1)&& (hall_in[2]==0))
	 		{
	 			hall_out1=-1;
	 			hall_out2=1;
	 			hall_out3=0;

	 		}
	 else if((hall_in[0]==0) && (hall_in[1]==1 )&&( hall_in[2]==1))
	 		{
	 			hall_out1=-1;
	 			hall_out2=0;
	 			hall_out3=1;
	 	}
	 else if((hall_in[0]==1) && (hall_in[1]==0) && (hall_in[2]==0))
	 		{
	 			hall_out1=1;
	 			hall_out2=0;
	 			hall_out3=-1;
	 		}
	 else if((hall_in[0]==1) &&( hall_in[1]==0) && (hall_in[2]==1))
	 		{
	 			hall_out1=1;
	 			hall_out2=-1;
	 			hall_out3=0;
	 		}
	 else if((hall_in[0]==1) && (hall_in[1]==1) &&( hall_in[2]==0))
	 		{
	 			hall_out1=0;
	 			hall_out2=1;
	 			hall_out3=-1;
	 		}
	 else if((hall_in[0]==1)&& (hall_in[1]==1) && (hall_in[2]==1))
	 		{
	 			hall_out1=0;
	 			hall_out2=0;
	 			hall_out3=0;
	 		}
	 hall_out[0]=hall_out1;
	 hall_out[1]=hall_out2;
	 hall_out[2]=hall_out3;



	 return hall_out;
 }


