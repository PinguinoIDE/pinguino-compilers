        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16C771 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16C771 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16C771
;       2. LIST directive in the source file
;               LIST   P=PIC16C771
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16C771
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF



;==========================================================================
;
;       Register Definitions
;
;==========================================================================

W                EQU  H'0000'
F                EQU  H'0001'

;----- Register Files -----------------------------------------------------

;-----Bank0------------------
INDF             EQU  H'0000'
TMR0             EQU  H'0001'
PCL              EQU  H'0002'
STATUS           EQU  H'0003'
FSR              EQU  H'0004'
PORTA            EQU  H'0005'
PORTB            EQU  H'0006'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
PIR2             EQU  H'000D'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
SSPBUF           EQU  H'0013'
SSPCON           EQU  H'0014'
CCPR1            EQU  H'0015'
CCPR1L           EQU  H'0015'
CCPR1H           EQU  H'0016'
CCP1CON          EQU  H'0017'
ADRESH           EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
PIE1             EQU  H'008C'
PIE2             EQU  H'008D'
PCON             EQU  H'008E'
SSPCON2          EQU  H'0091'
PR2              EQU  H'0092'
SSPADD           EQU  H'0093'
SSPSTAT          EQU  H'0094'
WPUB             EQU  H'0095'
IOCB             EQU  H'0096'
P1DEL            EQU  H'0097'
REFCON           EQU  H'009B'
LVDCON           EQU  H'009C'
ANSEL            EQU  H'009D'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
PMDATL           EQU  H'010C'
PMADRL           EQU  H'010D'
PMDATH           EQU  H'010E'
PMADRH           EQU  H'010F'

;-----Bank3------------------
PMCON1           EQU  H'018C'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
IRP              EQU  H'0007'

RP0              EQU  H'0005'
RP1              EQU  H'0006'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- INTCON Bits -----------------------------------------------------
RBIF             EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
RBIE             EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

TMR0IF           EQU  H'0002'
TMR0IE           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
ADIF             EQU  H'0006'


;----- PIR2 Bits -----------------------------------------------------
BCLIF            EQU  H'0003'
LVDIF            EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'

T1INSYNC         EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- SSPCON Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
PWM1M0           EQU  H'0006'
PWM1M1           EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
CHS3             EQU  H'0001'
GO_NOT_DONE      EQU  H'0002'

GO               EQU  H'0002'
CHS0             EQU  H'0003'
CHS1             EQU  H'0004'
CHS2             EQU  H'0005'
ADCS0            EQU  H'0006'
ADCS1            EQU  H'0007'

NOT_DONE         EQU  H'0002'

GO_DONE          EQU  H'0002'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RBPU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'
TRISA7           EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
ADIE             EQU  H'0006'


;----- PIE2 Bits -----------------------------------------------------
BCLIE            EQU  H'0003'
LVDIE            EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
OSCF             EQU  H'0003'

NOT_BO           EQU  H'0000'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'

R                EQU  H'0002'
D                EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DATA         EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- IOCB Bits -----------------------------------------------------
IOCB0            EQU  H'0000'
IOCB1            EQU  H'0001'
IOCB2            EQU  H'0002'
IOCB3            EQU  H'0003'
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'


;----- REFCON Bits -----------------------------------------------------
VRLOEN           EQU  H'0004'
VRHOEN           EQU  H'0005'
VRLEN            EQU  H'0006'
VRHEN            EQU  H'0007'


;----- LVDCON Bits -----------------------------------------------------
LVDEN            EQU  H'0004'
BGST             EQU  H'0005'

LV0              EQU  H'0000'
LV1              EQU  H'0001'
LV2              EQU  H'0002'
LV3              EQU  H'0003'


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

VCFG0            EQU  H'0004'
VCFG1            EQU  H'0005'
VCFG2            EQU  H'0006'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0007'-H'0009'
       __BADRAM  H'0018'-H'001D'
       __BADRAM  H'0087'-H'0089'
       __BADRAM  H'008F'-H'0090'
       __BADRAM  H'0098'-H'009A'
       __BADRAM  H'0105'
       __BADRAM  H'0107'-H'0109'
       __BADRAM  H'0110'-H'011F'
       __BADRAM  H'0185'
       __BADRAM  H'0187'-H'0189'
       __BADRAM  H'018D'-H'018F'
       __BADRAM  H'0190'-H'01EF'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           2007h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1         EQU  H'2007'

;----- CONFIG1 Options --------------------------------------------------
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator
_LP_OSC              EQU  H'3FF8'    ; LP oscillator
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator
_XT_OSC              EQU  H'3FF9'    ; XT oscillator
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator
_HS_OSC              EQU  H'3FFA'    ; HS oscillator
_FOSC_EXTCLK         EQU  H'3FFB'    ; EC I/O
_EXTCLK_OSC          EQU  H'3FFB'    ; EC I/O
_FOSC_INTRCIO        EQU  H'3FFC'    ; INTRC, OSC2 is I/O
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTRC, OSC2 is I/O
_FOSC_INTRCCLK       EQU  H'3FFD'    ; INTRC, clockout on OSC2
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTRC, clockout on OSC2
_FOSC_ER_NOCLKOUT    EQU  H'3FFE'    ; ER I/O
_ER_OSC_NOCLKOUT     EQU  H'3FFE'    ; ER I/O
_FOSC_ER_CLKOUT      EQU  H'3FFF'    ; ER CLKOUT
_ER_OSC_CLKOUT       EQU  H'3FFF'    ; ER CLKOUT

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled
_WDT_OFF             EQU  H'3FF7'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; Internal
_MCLRE_ON            EQU  H'3FFF'    ; External

_BOREN_OFF           EQU  H'3FBF'    ; BOR disabled
_BODEN_OFF           EQU  H'3FBF'    ; BOR disabled
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BODEN_ON            EQU  H'3FFF'    ; BOR enabled

_CP_ALL              EQU  H'0CFF'    ; All memory is code protected
_CP_OFF              EQU  H'3FFF'    ; Code protection off

_BODENV_45           EQU  H'33FF'    ; VBOR set to 4.5V
_VBOR_45             EQU  H'33FF'    ; VBOR set to 4.5V
_BODENV_42           EQU  H'37FF'    ; VBOR set to 4.2V
_VBOR_42             EQU  H'37FF'    ; VBOR set to 4.2V
_BODENV_27           EQU  H'3BFF'    ; VBOR set to 2.7V
_VBOR_27             EQU  H'3BFF'    ; VBOR set to 2.7V
_BODENV_25           EQU  H'3FFF'    ; VBOR set to 2.5V
_VBOR_25             EQU  H'3FFF'    ; VBOR set to 2.5V


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
