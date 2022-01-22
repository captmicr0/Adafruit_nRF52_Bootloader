/*
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _BM68RGB_CUSTOM_REV1_THUSB_H
#define _BM68RGB_CUSTOM_REV1_THUSB_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           2
/* Row_0 for testing rev1_THusb */
#define LED_PRIMARY_PIN       _PINNUM(0, 21)
/* Row_1 for testing rev1_THusb */
#define LED_SECONDARY_PIN     _PINNUM(0, 23)
#define LED_STATE_ON          1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
/* This is the not connected on the board
 * It is used to remain in bootloader mode after reset. */
#define BUTTON_1              _PINNUM(1, 05)
/* This is the not connected on the board
 * This pin is used to clear user firmware and remain
 * in bootloader mode. */
#define BUTTON_2              _PINNUM(1, 07)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "bm68rgb_custom"
#define BLEDIS_MODEL          "bm68rgb_custom rev1_THusb"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
/* From Feather nRF52840 Express */
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x002A

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "bm68rgb_custom"
#define UF2_VOLUME_LABEL      "BM68RGB_BOOT"
#define UF2_BOARD_ID          "bm68rgb_custom rev1_THusb"
#define UF2_INDEX_URL         ""

#endif // _BM68RGB_CUSTOM_REV1_THUSB_H
