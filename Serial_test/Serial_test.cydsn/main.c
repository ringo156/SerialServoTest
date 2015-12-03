/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <stdio.h>
#include "ICS3_5.h"

int main()
{   
    int16 kakudo,Data;
    uint8 ID, i;
        int16 pos_h,pos_l,pos;
    unsigned char tx[4], rx[6];
    char buffer[40];

   /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Servo_Start();
    UART_Debug_Start();
    CyGlobalIntEnable;
    CyDelay(1000);
    kakudo = 0;
    Data = 3500;
    for(;;)
    {
        /* Place your application code here. */
        
        
        /*
        tx[0]=0x80|1;
        tx[1]=0x00;
        tx[2]=0x00;
        
        //送信
//            for (i = 0;i < 4;i++){
//            UART_Servo_PutChar(tx[i]); // コマンドを１バイトずつ送信する
//        }
        UART_Servo_PutArray(tx,3);
            CyDelay(1);
        //受信
        for (i = 0;i < 6;i++){
            rx[i] = UART_Servo_GetChar(); // モーターからの返値を受け取り、rxに代入する
        }
        pos_h=((int)rx[4]<<7)&0x3f80; 
        pos_l=(int)rx[5]&0x7f;
        pos=pos_h|pos_l; //値に変換
        pos=(7500-pos)*0.0333333; //角度に変換
        */
        sprintf(buffer, "%d \n", (int)Free(1));        
        UART_Debug_PutString(buffer);
    }
}

/* [] END OF FILE */
