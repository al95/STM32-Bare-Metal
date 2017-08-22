/*
********************************************************************************
*                                                                              *
* Copyright (c) 2017 Andrea Loi                                                *
*                                                                              *
* Permission is hereby granted, free of charge, to any person obtaining a      *
* copy of this software and associated documentation files (the "Software"),   *
* to deal in the Software without restriction, including without limitation    *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,     *
* and/or sell copies of the Software, and to permit persons to whom the        *
* Software is furnished to do so, subject to the following conditions:         *
*                                                                              *
* The above copyright notice and this permission notice shall be included      *
* in all copies or substantial portions of the Software.                       *
*                                                                              *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR   *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,     *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL      *
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER   *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING      *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER          *
* DEALINGS IN THE SOFTWARE.                                                    *
*                                                                              *
********************************************************************************
* This file defines all the registers.                                         *
********************************************************************************
*/

#ifndef REGS_H
#define REGS_H

#include "common.h"



// *****************************************************************************
// *          DON'T EDIT THIS FILE UNLESS YOU KNOW WHAT YOU'RE DOING!          *
// *****************************************************************************




// *****************************************************************************
// *                          < Register structures >                          *
// *****************************************************************************

typedef struct {
  volatile uint16_t F_SIZE;
  volatile uint16_t RESERVED_1[3];
  volatile uint16_t U_ID_15_0;
  volatile uint16_t U_ID_31_16;
  volatile uint16_t U_ID_63_48;
  volatile uint16_t U_ID_47_32;
  volatile uint16_t U_ID_95_80;
  volatile uint16_t U_ID_79_64;
} SIG_Type;

typedef struct {
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RESERVED_1;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t RESERVED_2;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
} TIM2_Type;

typedef struct {
  volatile uint32_t CRH;
  volatile uint32_t CRL;
  volatile uint32_t PRLH;
  volatile uint32_t PRLL;
  volatile uint32_t DIVH;
  volatile uint32_t DIVL;
  volatile uint32_t CNTH;
  volatile uint32_t CNTL;
  volatile uint32_t ALRH;
  volatile uint32_t ALRL;
} RTC_Type;

typedef struct {
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_Type;

typedef struct {
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_Type;

typedef struct {
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
  volatile uint32_t I2SPR;
} SPI1_Type;

typedef struct {
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t BRR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t GTPR;
} USART1_Type;

typedef struct {
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t DR;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t CCR;
  volatile uint32_t TRISE;
} I2C1_Type;

typedef struct {
  volatile uint32_t EP0R;
  volatile uint32_t EP1R;
  volatile uint32_t EP2R;
  volatile uint32_t EP3R;
  volatile uint32_t EP4R;
  volatile uint32_t EP5R;
  volatile uint32_t EP6R;
  volatile uint32_t EP7R;
  volatile uint32_t RESERVED_1[8];
  volatile uint32_t CNTR;
  volatile uint32_t ISTR;
  volatile uint32_t FNR;
  volatile uint32_t DADDR;
  volatile uint32_t BTABLE;
} USB_Type;

typedef struct {
  volatile uint32_t CAN_MCR;
  volatile uint32_t CAN_MSR;
  volatile uint32_t CAN_TSR;
  volatile uint32_t CAN_RF0R;
  volatile uint32_t CAN_RF1R;
  volatile uint32_t CAN_IER;
  volatile uint32_t CAN_ESR;
  volatile uint32_t CAN_BTR;
  volatile uint32_t RESERVED_1[88];
  volatile uint32_t CAN_TI0R;
  volatile uint32_t CAN_TDT0R;
  volatile uint32_t CAN_TDL0R;
  volatile uint32_t CAN_TDH0R;
  volatile uint32_t CAN_TI1R;
  volatile uint32_t CAN_TDT1R;
  volatile uint32_t CAN_TDL1R;
  volatile uint32_t CAN_TDH1R;
  volatile uint32_t CAN_TI2R;
  volatile uint32_t CAN_TDT2R;
  volatile uint32_t CAN_TDL2R;
  volatile uint32_t CAN_TDH2R;
  volatile uint32_t CAN_RI0R;
  volatile uint32_t CAN_RDT0R;
  volatile uint32_t CAN_RDL0R;
  volatile uint32_t CAN_RDH0R;
  volatile uint32_t CAN_RI1R;
  volatile uint32_t CAN_RDT1R;
  volatile uint32_t CAN_RDL1R;
  volatile uint32_t CAN_RDH1R;
  volatile uint32_t RESERVED_2[12];
  volatile uint32_t CAN_FMR;
  volatile uint32_t CAN_FM1R;
  volatile uint32_t RESERVED_3;
  volatile uint32_t CAN_FS1R;
  volatile uint32_t RESERVED_4;
  volatile uint32_t CAN_FFA1R;
  volatile uint32_t RESERVED_5;
  volatile uint32_t CAN_FA1R;
  volatile uint32_t RESERVED_6[8];
  volatile uint32_t F0R1;
  volatile uint32_t F0R2;
  volatile uint32_t F1R1;
  volatile uint32_t F1R2;
  volatile uint32_t F2R1;
  volatile uint32_t F2R2;
  volatile uint32_t F3R1;
  volatile uint32_t F3R2;
  volatile uint32_t F4R1;
  volatile uint32_t F4R2;
  volatile uint32_t F5R1;
  volatile uint32_t F5R2;
  volatile uint32_t F6R1;
  volatile uint32_t F6R2;
  volatile uint32_t F7R1;
  volatile uint32_t F7R2;
  volatile uint32_t F8R1;
  volatile uint32_t F8R2;
  volatile uint32_t F9R1;
  volatile uint32_t F9R2;
  volatile uint32_t F10R1;
  volatile uint32_t F10R2;
  volatile uint32_t F11R1;
  volatile uint32_t F11R2;
  volatile uint32_t F12R1;
  volatile uint32_t F12R2;
  volatile uint32_t F13R1;
  volatile uint32_t F13R2;
} CAN1_Type;

typedef struct {
  volatile uint32_t DR1;
  volatile uint32_t DR2;
  volatile uint32_t DR3;
  volatile uint32_t DR4;
  volatile uint32_t DR5;
  volatile uint32_t DR6;
  volatile uint32_t DR7;
  volatile uint32_t DR8;
  volatile uint32_t DR9;
  volatile uint32_t DR10;
  volatile uint32_t RTCCR;
  volatile uint32_t CR;
  volatile uint32_t CSR;
  volatile uint32_t RESERVED_1[2];
  volatile uint32_t DR11;
  volatile uint32_t DR12;
  volatile uint32_t DR13;
  volatile uint32_t DR14;
  volatile uint32_t DR15;
  volatile uint32_t DR16;
  volatile uint32_t DR17;
  volatile uint32_t DR18;
  volatile uint32_t DR19;
  volatile uint32_t DR20;
  volatile uint32_t DR21;
  volatile uint32_t DR22;
  volatile uint32_t DR23;
  volatile uint32_t DR24;
  volatile uint32_t DR25;
  volatile uint32_t DR26;
  volatile uint32_t DR27;
  volatile uint32_t DR28;
  volatile uint32_t DR29;
  volatile uint32_t DR30;
  volatile uint32_t DR31;
  volatile uint32_t DR32;
  volatile uint32_t DR33;
  volatile uint32_t DR34;
  volatile uint32_t DR35;
  volatile uint32_t DR36;
  volatile uint32_t DR37;
  volatile uint32_t DR38;
  volatile uint32_t DR39;
  volatile uint32_t DR40;
  volatile uint32_t DR41;
  volatile uint32_t DR42;
} BKP_Type;

typedef struct {
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_Type;

typedef struct {
  volatile uint32_t EVCR;
  volatile uint32_t MAPR;
  volatile uint32_t EXTICR1;
  volatile uint32_t EXTICR2;
  volatile uint32_t EXTICR3;
  volatile uint32_t EXTICR4;
  volatile uint32_t RESERVED_1;
  volatile uint32_t MAPR2;
} AFIO_Type;

typedef struct {
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_Type;

typedef struct {
  volatile uint32_t CRL;
  volatile uint32_t CRH;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t BRR;
  volatile uint32_t LCKR;
} GPIOA_Type;

typedef struct {
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC1_Type;

typedef struct {
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC2_Type;

typedef struct {
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
} TIM1_Type;

typedef struct {
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
  volatile uint32_t CCR1;
  volatile uint32_t CNDTR1;
  volatile uint32_t CPAR1;
  volatile uint32_t CMAR1;
  volatile uint32_t RESERVED_1;
  volatile uint32_t CCR2;
  volatile uint32_t CNDTR2;
  volatile uint32_t CPAR2;
  volatile uint32_t CMAR2;
  volatile uint32_t RESERVED_2;
  volatile uint32_t CCR3;
  volatile uint32_t CNDTR3;
  volatile uint32_t CPAR3;
  volatile uint32_t CMAR3;
  volatile uint32_t RESERVED_3;
  volatile uint32_t CCR4;
  volatile uint32_t CNDTR4;
  volatile uint32_t CPAR4;
  volatile uint32_t CMAR4;
  volatile uint32_t RESERVED_4;
  volatile uint32_t CCR5;
  volatile uint32_t CNDTR5;
  volatile uint32_t CPAR5;
  volatile uint32_t CMAR5;
  volatile uint32_t RESERVED_5;
  volatile uint32_t CCR6;
  volatile uint32_t CNDTR6;
  volatile uint32_t CPAR6;
  volatile uint32_t CMAR6;
  volatile uint32_t RESERVED_6;
  volatile uint32_t CCR7;
  volatile uint32_t CNDTR7;
  volatile uint32_t CPAR7;
  volatile uint32_t CMAR7;
} DMA1_Type;

typedef struct {
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t AHBENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
} RCC_Type;

typedef struct {
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t AR;
  volatile uint32_t RESERVED_1;
  volatile uint32_t OBR;
  volatile uint32_t WRPR;
} FLASH_Type;

typedef struct {
  volatile uint32_t DR;
  volatile uint32_t IDR;
  volatile uint32_t CR;
} CRC_Type;

typedef struct {
  volatile uint32_t RESERVED_1;
  volatile uint32_t ICTR;
  volatile uint32_t RESERVED_2[62];
  volatile uint32_t ISER0;
  volatile uint32_t ISER1;
  volatile uint32_t RESERVED_3[30];
  volatile uint32_t ICER0;
  volatile uint32_t ICER1;
  volatile uint32_t RESERVED_4[30];
  volatile uint32_t ISPR0;
  volatile uint32_t ISPR1;
  volatile uint32_t RESERVED_5[30];
  volatile uint32_t ICPR0;
  volatile uint32_t ICPR1;
  volatile uint32_t RESERVED_6[30];
  volatile uint32_t IABR0;
  volatile uint32_t IABR1;
  volatile uint32_t RESERVED_7[62];
  volatile uint32_t IPR0;
  volatile uint32_t IPR1;
  volatile uint32_t IPR2;
  volatile uint32_t IPR3;
  volatile uint32_t IPR4;
  volatile uint32_t IPR5;
  volatile uint32_t IPR6;
  volatile uint32_t IPR7;
  volatile uint32_t IPR8;
  volatile uint32_t IPR9;
  volatile uint32_t IPR10;
  volatile uint32_t IPR11;
  volatile uint32_t IPR12;
  volatile uint32_t IPR13;
  volatile uint32_t IPR14;
  volatile uint32_t RESERVED_8[689];
  volatile uint32_t STIR;
} NVIC_Type;

typedef struct {
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile uint32_t CALIB;
} STK_Type;

typedef struct {
  volatile uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint32_t SHPR1;
  volatile uint32_t SHPR2;
  volatile uint32_t SHPR3;
  volatile uint32_t SHCRS;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t RESERVED_1;
  volatile uint32_t MMAR;
  volatile uint32_t BFAR;
} SCB_Type;

typedef struct {
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
} DBG_Type;



// *****************************************************************************
// *                        < Register base addresses >                        *
// *****************************************************************************

#define SIG_BASE           ((uint32_t) 0x1FFFF7E0)
#define TIM2_BASE          ((uint32_t) 0x40000000)
#define TIM3_BASE          ((uint32_t) 0x40000400)
#define TIM4_BASE          ((uint32_t) 0x40000800)
#define RTC_BASE           ((uint32_t) 0x40002800)
#define WWDG_BASE          ((uint32_t) 0x40002C00)
#define IWDG_BASE          ((uint32_t) 0x40003000)
#define SPI2_BASE          ((uint32_t) 0x40003800)
#define USART2_BASE        ((uint32_t) 0x40004400)
#define USART3_BASE        ((uint32_t) 0x40004800)
#define I2C1_BASE          ((uint32_t) 0x40005400)
#define I2C2_BASE          ((uint32_t) 0x40005800)
#define USB_BASE           ((uint32_t) 0x40005C00)
#define CAN1_BASE          ((uint32_t) 0x40006400)
#define BKP_BASE           ((uint32_t) 0x40006C00)
#define PWR_BASE           ((uint32_t) 0x40007000)
#define AFIO_BASE          ((uint32_t) 0x40010000)
#define EXTI_BASE          ((uint32_t) 0x40010400)
#define GPIOA_BASE         ((uint32_t) 0x40010800)
#define GPIOB_BASE         ((uint32_t) 0x40010C00)
#define GPIOC_BASE         ((uint32_t) 0x40011000)
#define GPIOD_BASE         ((uint32_t) 0x40011400)
#define ADC1_BASE          ((uint32_t) 0x40012400)
#define ADC2_BASE          ((uint32_t) 0x40012800)
#define TIM1_BASE          ((uint32_t) 0x40012C00)
#define SPI1_BASE          ((uint32_t) 0x40013000)
#define USART1_BASE        ((uint32_t) 0x40013800)
#define DMA1_BASE          ((uint32_t) 0x40020000)
#define RCC_BASE           ((uint32_t) 0x40021000)
#define FLASH_BASE         ((uint32_t) 0x40022000)
#define CRC_BASE           ((uint32_t) 0x40023000)
#define NVIC_BASE          ((uint32_t) 0xE000E000)
#define STK_BASE           ((uint32_t) 0xE000E010)
#define SCB_BASE           ((uint32_t) 0xE000ED00)
#define DBG_BASE           ((uint32_t) 0xE0042000)



// *****************************************************************************
// *                     < Register locations assignment >                     *
// *****************************************************************************

#define SIG           ( (SIG_Type*)       SIG_BASE    )
#define TIM2          ( (TIM2_Type*)      TIM2_BASE   )
#define TIM3          ( (TIM2_Type*)      TIM3_BASE   )
#define TIM4          ( (TIM2_Type*)      TIM4_BASE   )
#define RTC           ( (RTC_Type*)       RTC_BASE    )
#define WWDG          ( (WWDG_Type*)      WWDG_BASE   )
#define IWDG          ( (IWDG_Type*)      IWDG_BASE   )
#define SPI2          ( (SPI1_Type*)      SPI2_BASE   )
#define USART2        ( (USART1_Type*)    USART2_BASE )
#define USART3        ( (USART1_Type*)    USART3_BASE )
#define I2C1          ( (I2C1_Type*)      I2C1_BASE   )
#define I2C2          ( (I2C1_Type*)      I2C2_BASE   )
#define USB           ( (USB_Type*)       USB_BASE    )
#define CAN1          ( (CAN1_Type*)      CAN1_BASE   )
#define BKP           ( (BKP_Type*)       BKP_BASE    )
#define PWR           ( (PWR_Type*)       PWR_BASE    )
#define AFIO          ( (AFIO_Type*)      AFIO_BASE   )
#define EXTI          ( (EXTI_Type*)      EXTI_BASE   )
#define GPIOA         ( (GPIOA_Type*)     GPIOA_BASE  )
#define GPIOB         ( (GPIOA_Type*)     GPIOB_BASE  )
#define GPIOC         ( (GPIOA_Type*)     GPIOC_BASE  )
#define GPIOD         ( (GPIOA_Type*)     GPIOD_BASE  )
#define ADC1          ( (ADC1_Type*)      ADC1_BASE   )
#define ADC2          ( (ADC2_Type*)      ADC2_BASE   )
#define TIM1          ( (TIM1_Type*)      TIM1_BASE   )
#define SPI1          ( (SPI1_Type*)      SPI1_BASE   )
#define USART1        ( (USART1_Type*)    USART1_BASE )
#define DMA1          ( (DMA1_Type*)      DMA1_BASE   )
#define RCC           ( (RCC_Type*)       RCC_BASE    )
#define FLASH         ( (FLASH_Type*)     FLASH_BASE  )
#define CRC           ( (CRC_Type*)       CRC_BASE    )
#define NVIC          ( (NVIC_Type*)      NVIC_BASE   )
#define STK           ( (STK_Type*)       STK_BASE    )
#define SCB           ( (SCB_Type*)       SCB_BASE    )
#define DBG           ( (DBG_Type*)       DBG_BASE    )



#endif


