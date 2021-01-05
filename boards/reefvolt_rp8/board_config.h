#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "blueAcro"
#define PRODUCT_NAME "ReefVolt RP8"
#define VOLUME_LABEL "RVRP8"
#define INDEX_URL "http://blueacro.com"
#define BOARD_ID "SAME51J20A"

#define USB_VID 0x239A
#define USB_PID 0x00CD

#define LED_PIN PIN_PB11
#define BUTTON_BOOT_PIN PIN_PB23
#define LED_PIN_BOOT PIN_PB12

#define NO_BOOT_PROT 1

#define BOOT_USART_MODULE                 SERCOM4
#define BOOT_USART_MASK                   APBDMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBDMASK_SERCOM4
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM4_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM4_GCLK_ID_SLOW

#endif
