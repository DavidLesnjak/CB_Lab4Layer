/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 15/12/2020 20:10:25
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            16000000
#define MX_SYSCLKFreq_VALUE                     110000000
#define MX_HCLKFreq_Value                       110000000
#define MX_FCLKCortexFreq_Value                 110000000
#define MX_CortexFreq_Value                     110000000
#define MX_AHBFreq_Value                        110000000
#define MX_APB1Freq_Value                       110000000
#define MX_APB2Freq_Value                       110000000
#define MX_APB1TimFreq_Value                    110000000
#define MX_APB2TimFreq_Value                    110000000
#define MX_PWRFreq_Value                        110000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        16000000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    110000000

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA1_Channel1_IRQn */
#define MX_DMA1_Channel1_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Channel1_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_3
#define MX_DMA1_Channel1_IRQn_Subriority        0

/* NVIC DMA1_Channel2_IRQn */
#define MX_DMA1_Channel2_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Channel2_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_3
#define MX_DMA1_Channel2_IRQn_Subriority        0

/*-------------------------------- ICACHE     --------------------------------*/

#define MX_ICACHE                               1

/* GPIO Configuration */

/*-------------------------------- LPUART1    --------------------------------*/

#define MX_LPUART1                              1

/* GPIO Configuration */

/* Pin PB10 */
#define MX_LPUART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RX_Pin                       PB10
#define MX_LPUART1_RX_GPIOx                     GPIOB
#define MX_LPUART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Pin                  GPIO_PIN_10
#define MX_LPUART1_RX_GPIO_AF                   GPIO_AF8_LPUART1
#define MX_LPUART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP

/* Pin PB11 */
#define MX_LPUART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_TX_Pin                       PB11
#define MX_LPUART1_TX_GPIOx                     GPIOB
#define MX_LPUART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Pin                  GPIO_PIN_11
#define MX_LPUART1_TX_GPIO_AF                   GPIO_AF8_LPUART1
#define MX_LPUART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC LPUART1_IRQn */
#define MX_LPUART1_IRQn_interruptPremptionPriority 0
#define MX_LPUART1_IRQn_PriorityGroup           NVIC_PRIORITYGROUP_3
#define MX_LPUART1_IRQn_Subriority              0

/*-------------------------------- PWR        --------------------------------*/

#define MX_PWR                                  1

/* GPIO Configuration */

/*-------------------------------- SPI3       --------------------------------*/

#define MX_SPI3                                 1

/* GPIO Configuration */

/* Pin PG9 */
#define MX_SPI3_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_SCK_Pin                         PG9
#define MX_SPI3_SCK_GPIOx                       GPIOG
#define MX_SPI3_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Pin                    GPIO_PIN_9
#define MX_SPI3_SCK_GPIO_AF                     GPIO_AF6_SPI3
#define MX_SPI3_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PB4 (NJTRST) */
#define MX_SPI3_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MISO_Pin                        PB4_NJTRST
#define MX_SPI3_MISO_GPIOx                      GPIOB
#define MX_SPI3_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Pin                   GPIO_PIN_4
#define MX_SPI3_MISO_GPIO_AF                    GPIO_AF6_SPI3
#define MX_SPI3_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PB5 */
#define MX_SPI3_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MOSI_Pin                        PB5
#define MX_SPI3_MOSI_GPIOx                      GPIOB
#define MX_SPI3_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI3_MOSI_GPIO_AF                    GPIO_AF6_SPI3
#define MX_SPI3_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SPI3_RX */
#define MX_SPI3_RX_DMA_Instance                 DMA1_Channel1
#define MX_SPI3_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI3_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI3_RX_DMA_Mode                     DMA_NORMAL
#define MX_SPI3_RX_DMA_SyncRequestNumber        1
#define MX_SPI3_RX_DMA_Request                  DMA_REQUEST_SPI3_RX
#define MX_SPI3_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI3_RX_DMA_Channel_PRIV_NPRIV       DMA_CHANNEL_NPRIV_DISABLE
#define MX_SPI3_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_SPI3_RX_DMA_SignalID                 NONE
#define MX_SPI3_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI3_RX_DMA_IpInstance
#define MX_SPI3_RX_DMA_RequestNumber            1
#define MX_SPI3_RX_DMA_EventEnable              DISABLE
#define MX_SPI3_RX_DMA_SyncEnable               DISABLE
#define MX_SPI3_RX_DMA_Src_SEC_NSEC             NONE
#define MX_SPI3_RX_DMA_DMA_Handle
#define MX_SPI3_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI3_RX_DMA_Channel_SEC_NSEC         NONE
#define MX_SPI3_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI3_RX_DMA_SyncSignalID             NONE
#define MX_SPI3_RX_DMA_PeriphInc                DMA_PINC_DISABLE
#define MX_SPI3_RX_DMA_Dest_SEC_NSEC            NONE

/* DMA SPI3_TX */
#define MX_SPI3_TX_DMA_Instance                 DMA1_Channel2
#define MX_SPI3_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI3_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI3_TX_DMA_Mode                     DMA_NORMAL
#define MX_SPI3_TX_DMA_SyncRequestNumber        1
#define MX_SPI3_TX_DMA_Request                  DMA_REQUEST_SPI3_TX
#define MX_SPI3_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI3_TX_DMA_Channel_PRIV_NPRIV       DMA_CHANNEL_NPRIV_DISABLE
#define MX_SPI3_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_SPI3_TX_DMA_SignalID                 NONE
#define MX_SPI3_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI3_TX_DMA_IpInstance
#define MX_SPI3_TX_DMA_RequestNumber            1
#define MX_SPI3_TX_DMA_EventEnable              DISABLE
#define MX_SPI3_TX_DMA_SyncEnable               DISABLE
#define MX_SPI3_TX_DMA_Src_SEC_NSEC             NONE
#define MX_SPI3_TX_DMA_DMA_Handle
#define MX_SPI3_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI3_TX_DMA_Channel_SEC_NSEC         NONE
#define MX_SPI3_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI3_TX_DMA_SyncSignalID             NONE
#define MX_SPI3_TX_DMA_PeriphInc                DMA_PINC_DISABLE
#define MX_SPI3_TX_DMA_Dest_SEC_NSEC            NONE

/* NVIC Configuration */

/* NVIC SPI3_IRQn */
#define MX_SPI3_IRQn_interruptPremptionPriority 0
#define MX_SPI3_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_3
#define MX_SPI3_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PB9 */
#define MX_PB9_Pin                              PB9
#define MX_PB9_GPIOx                            GPIOB
#define MX_PB9_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_IO_D9                        PB9
#define MX_PB9_GPIO_Pin                         GPIO_PIN_9
#define MX_PB9_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PE0 */
#define MX_PE0_GPIO_Speed                       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_PE0_Pin                              PE0
#define MX_PE0_GPIOx                            GPIOE
#define MX_PE0_PinState                         GPIO_PIN_SET
#define MX_PE0_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARDUINO_IO_D10                       PE0
#define MX_PE0_GPIO_Pin                         GPIO_PIN_0
#define MX_PE0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */

