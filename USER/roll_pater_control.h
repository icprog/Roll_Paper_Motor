#ifndef __ROLL_PATER_CONTROL_H
#define __ROLL_PATER_CONTROL_H

#include "stm32f10x.h"


#define	DEVICE1_MOTOR_IO				GPIO_Pin_12
#define	DEVICE1_MOTOR_PORT			GPIOB
#define	DEVICE1_LIGHT_IO				GPIO_Pin_13
#define	DEVICE1_LIGHT_PORT			GPIOB
#define	DEVICE1_SENSOR1_IO			GPIO_Pin_7
#define	DEVICE1_SENSOR1_PORT		GPIOB
#define	DEVICE1_SENSOR2_IO			GPIO_Pin_8
#define	DEVICE1_SENSOR2_PORT		GPIOB
#define	DEVICE1_SENSOR3_IO			GPIO_Pin_9
#define	DEVICE1_SENSOR3_PORT		GPIOB
#define	DEVICE1_KEY_IO					GPIO_Pin_11
#define	DEVICE1_KEY_PORT				GPIOB

#define	DEVICE2_MOTOR_IO				GPIO_Pin_1
#define	DEVICE2_MOTOR_PORT			GPIOC
#define	DEVICE2_LIGHT_IO				GPIO_Pin_6
#define	DEVICE2_LIGHT_PORT			GPIOA
#define	DEVICE2_SENSOR1_IO			GPIO_Pin_12
#define	DEVICE2_SENSOR1_PORT		GPIOB
#define	DEVICE2_SENSOR2_IO			GPIO_Pin_13
#define	DEVICE2_SENSOR2_PORT		GPIOB
#define	DEVICE2_SENSOR3_IO			GPIO_Pin_14
#define	DEVICE2_SENSOR3_PORT		GPIOB
#define	DEVICE2_KEY_IO					GPIO_Pin_15
#define	DEVICE2_KEY_PORT				GPIOB

#define	DEVICE3_MOTOR_IO				GPIO_Pin_2
#define	DEVICE3_MOTOR_PORT			GPIOC
#define	DEVICE3_LIGHT_IO				GPIO_Pin_7
#define	DEVICE3_LIGHT_PORT			GPIOA
#define	DEVICE3_SENSOR1_IO			GPIO_Pin_6
#define	DEVICE3_SENSOR1_PORT		GPIOC
#define	DEVICE3_SENSOR2_IO			GPIO_Pin_7
#define	DEVICE3_SENSOR2_PORT		GPIOC
#define	DEVICE3_SENSOR3_IO			GPIO_Pin_8
#define	DEVICE3_SENSOR3_PORT		GPIOC
#define	DEVICE3_KEY_IO					GPIO_Pin_9
#define	DEVICE3_KEY_PORT				GPIOC

#define	DEVICE4_MOTOR_IO				GPIO_Pin_3
#define	DEVICE4_MOTOR_PORT			GPIOC
#define	DEVICE4_LIGHT_IO				GPIO_Pin_4
#define	DEVICE4_LIGHT_PORT			GPIOC
#define	DEVICE4_SENSOR1_IO			GPIO_Pin_3
#define	DEVICE4_SENSOR1_PORT		GPIOB
#define	DEVICE4_SENSOR2_IO			GPIO_Pin_11
#define	DEVICE4_SENSOR2_PORT		GPIOA
#define	DEVICE4_SENSOR3_IO			GPIO_Pin_4
#define	DEVICE4_SENSOR3_PORT		GPIOB
#define	DEVICE4_KEY_IO					GPIO_Pin_6
#define	DEVICE4_KEY_PORT				GPIOB


#define DEVICE1_MOTOR_RUN   		GPIO_SetBits(DEVICE1_MOTOR_PORT, DEVICE1_MOTOR_IO)
#define DEVICE1_MOTOR_STOP 			GPIO_ResetBits(DEVICE1_MOTOR_PORT, DEVICE1_MOTOR_IO)
#define DEVICE2_MOTOR_RUN   		GPIO_SetBits(DEVICE2_MOTOR_PORT, DEVICE2_MOTOR_IO)
#define DEVICE2_MOTOR_STOP 			GPIO_ResetBits(DEVICE2_MOTOR_PORT, DEVICE2_MOTOR_IO)
#define DEVICE3_MOTOR_RUN   		GPIO_SetBits(DEVICE3_MOTOR_PORT, DEVICE3_MOTOR_IO)
#define DEVICE3_MOTOR_STOP 			GPIO_ResetBits(DEVICE3_MOTOR_PORT, DEVICE3_MOTOR_IO)
#define DEVICE4_MOTOR_RUN   		GPIO_SetBits(DEVICE4_MOTOR_PORT, DEVICE4_MOTOR_IO)
#define DEVICE4_MOTOR_STOP 			GPIO_ResetBits(DEVICE4_MOTOR_PORT, DEVICE4_MOTOR_IO)

#define DEVICE1_LIGHT_ON  			GPIO_SetBits(DEVICE1_LIGHT_PORT, DEVICE1_LIGHT_IO)
#define DEVICE1_LIGHT_OFF 			GPIO_ResetBits(DEVICE1_LIGHT_PORT, DEVICE1_LIGHT_IO)
#define DEVICE2_LIGHT_ON  			GPIO_SetBits(DEVICE2_LIGHT_PORT, DEVICE2_LIGHT_IO)
#define DEVICE2_LIGHT_OFF 			GPIO_ResetBits(DEVICE2_LIGHT_PORT, DEVICE2_LIGHT_IO)
#define DEVICE3_LIGHT_ON  			GPIO_SetBits(DEVICE3_LIGHT_PORT, DEVICE3_LIGHT_IO)
#define DEVICE3_LIGHT_OFF 			GPIO_ResetBits(DEVICE3_LIGHT_PORT, DEVICE3_LIGHT_IO)
#define DEVICE4_LIGHT_ON  			GPIO_SetBits(DEVICE4_LIGHT_PORT, DEVICE4_LIGHT_IO)
#define DEVICE4_LIGHT_OFF 			GPIO_ResetBits(DEVICE4_LIGHT_PORT, DEVICE4_LIGHT_IO)


#define READ_DEVICE1_SENSOR1    GPIO_ReadInputDataBit(DEVICE1_SENSOR1_PORT,DEVICE1_SENSOR1_IO) //返回的是一个字节，读的是一个位
#define READ_DEVICE2_SENSOR1    GPIO_ReadInputDataBit(DEVICE2_SENSOR1_PORT,DEVICE2_SENSOR1_IO)
#define READ_DEVICE3_SENSOR1    GPIO_ReadInputDataBit(DEVICE3_SENSOR1_PORT,DEVICE3_SENSOR1_IO) 
#define READ_DEVICE4_SENSOR1    GPIO_ReadInputDataBit(DEVICE4_SENSOR1_PORT,DEVICE4_SENSOR1_IO)

#define READ_DEVICE1_SENSOR2    GPIO_ReadInputDataBit(DEVICE1_SENSOR2_PORT,DEVICE1_SENSOR2_IO) //返回的是一个字节，读的是一个位
#define READ_DEVICE2_SENSOR2    GPIO_ReadInputDataBit(DEVICE2_SENSOR2_PORT,DEVICE2_SENSOR2_IO)
#define READ_DEVICE3_SENSOR2    GPIO_ReadInputDataBit(DEVICE3_SENSOR2_PORT,DEVICE3_SENSOR2_IO) 
#define READ_DEVICE4_SENSOR2    GPIO_ReadInputDataBit(DEVICE4_SENSOR2_PORT,DEVICE4_SENSOR2_IO)

#define READ_DEVICE1_SENSOR3    GPIO_ReadInputDataBit(DEVICE1_SENSOR3_PORT,DEVICE1_SENSOR3_IO) //返回的是一个字节，读的是一个位
#define READ_DEVICE2_SENSOR3    GPIO_ReadInputDataBit(DEVICE2_SENSOR3_PORT,DEVICE2_SENSOR3_IO)
#define READ_DEVICE3_SENSOR3    GPIO_ReadInputDataBit(DEVICE3_SENSOR3_PORT,DEVICE3_SENSOR3_IO) 
#define READ_DEVICE4_SENSOR3    GPIO_ReadInputDataBit(DEVICE4_SENSOR3_PORT,DEVICE4_SENSOR3_IO)

#define READ_DEVICE1_KEY    		GPIO_ReadInputDataBit(DEVICE1_KEY_PORT,DEVICE1_KEY_IO) //返回的是一个字节，读的是一个位
#define READ_DEVICE2_KEY    		GPIO_ReadInputDataBit(DEVICE2_KEY_PORT,DEVICE2_KEY_IO)
#define READ_DEVICE3_KEY    		GPIO_ReadInputDataBit(DEVICE3_KEY_PORT,DEVICE3_KEY_IO) 
#define READ_DEVICE4_KEY    		GPIO_ReadInputDataBit(DEVICE4_KEY_PORT,DEVICE4_KEY_IO)

#define DEVICE1_MOTOR_SOFT_STOP		do{DEVICE1_MOTOR_STOP;}while(0);
#define DEVICE2_MOTOR_SOFT_STOP		DEVICE2_MOTOR_STOP
#define DEVICE3_MOTOR_SOFT_STOP		DEVICE3_MOTOR_STOP
#define DEVICE4_MOTOR_SOFT_STOP		DEVICE4_MOTOR_STOP


void Roll_Pater_Config(void);
void CH_Send_Medicine(void);
void CH_Light_Control(void );
void Send_Medicine_Time_ISR(void );

void Motor_pulse_IRQTimer(void);
void Device_Send_Actual_IRQTimer(void);
//void Roll_Pater_Motor_Run(void);
//void Roll_Pater_Motor_Stop(void);
void Roll_Pater_Motor_Control(void);
void CH_Key_Control(void);

#endif
