        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16C781 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16C781 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16C781
;       2. LIST directive in the source file
;               LIST   P=PIC16C781
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16C781
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
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
ADRES            EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
WPUB             EQU  H'0095'
IOCB             EQU  H'0096'
REFCON           EQU  H'009B'
LVDCON           EQU  H'009C'
ANSEL            EQU  H'009D'
ADCON1           EQU  H'009F'

;-----Bank2------------------
PMDATL           EQU  H'010C'
PMADRL           EQU  H'010D'
PMDATH           EQU  H'010E'
PMADRH           EQU  H'010F'
CALCON           EQU  H'0110'
PSMCCON0         EQU  H'0111'
PSMCCON1         EQU  H'0112'
CM1CON0          EQU  H'0119'
CM2CON0          EQU  H'011A'
CM2CON1          EQU  H'011B'
OPACON           EQU  H'011C'
DAC              EQU  H'011E'
DACON0           EQU  H'011F'

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


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
C1IF             EQU  H'0004'
C2IF             EQU  H'0005'
ADIF             EQU  H'0006'
LVDIF            EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'

T1INSYNC         EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


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
C1IE             EQU  H'0004'
C2IE             EQU  H'0005'
ADIE             EQU  H'0006'
LVDIE            EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
OSCF             EQU  H'0003'
WDTON            EQU  H'0004'

NOT_BO           EQU  H'0000'


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
VROE             EQU  H'0002'
VREN             EQU  H'0003'

VREFOE           EQU  H'0002'
VREFEN           EQU  H'0003'


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
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'


;----- ADCON1 Bits -----------------------------------------------------
VCFG0            EQU  H'0004'
VCFG1            EQU  H'0005'


;----- CALCON Bits -----------------------------------------------------
CALREF           EQU  H'0005'
CALERR           EQU  H'0006'
CAL              EQU  H'0007'


;----- PSMCCON0 Bits -----------------------------------------------------
DC0              EQU  H'0000'
DC1              EQU  H'0001'
MAXDC0           EQU  H'0002'
MAXDC1           EQU  H'0003'
MINDC0           EQU  H'0004'
MINDC1           EQU  H'0005'
SMCCL0           EQU  H'0006'
SMCCL1           EQU  H'0007'


;----- PSMCCON1 Bits -----------------------------------------------------
SMCCS            EQU  H'0000'
PWM_NOT_PSM      EQU  H'0001'
SMCOM            EQU  H'0002'
SCEN             EQU  H'0003'
S1BPOL           EQU  H'0005'
S1APOL           EQU  H'0006'
SMCON            EQU  H'0007'

PWM              EQU  H'0001'

PSM              EQU  H'0001'

NOT_PSM          EQU  H'0001'


;----- CM1CON0 Bits -----------------------------------------------------
C1R              EQU  H'0002'
C1SP             EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'

C1CH0            EQU  H'0000'
C1CH1            EQU  H'0001'


;----- CM2CON0 Bits -----------------------------------------------------
C2R              EQU  H'0002'
C2SP             EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'

C2CH0            EQU  H'0000'
C2CH1            EQU  H'0001'


;----- CM2CON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
MC2OUT           EQU  H'0006'
MC1OUT           EQU  H'0007'


;----- OPACON Bits -----------------------------------------------------
GBWP             EQU  H'0000'
CMPEN            EQU  H'0006'
OPAON            EQU  H'0007'


;----- DAC Bits -----------------------------------------------------
DA0              EQU  H'0000'
DA1              EQU  H'0001'
DA2              EQU  H'0002'
DA3              EQU  H'0003'
DA4              EQU  H'0004'
DA5              EQU  H'0005'
DA6              EQU  H'0006'
DA7              EQU  H'0007'


;----- DACON0 Bits -----------------------------------------------------
DAOE             EQU  H'0006'
DAON             EQU  H'0007'

DARS0            EQU  H'0000'
DARS1            EQU  H'0001'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0007'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'0011'-H'001D'
       __BADRAM  H'0087'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'008F'-H'0094'
       __BADRAM  H'0097'-H'009A'
       __BADRAM  H'009E'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'0105'
       __BADRAM  H'0107'-H'0109'
       __BADRAM  H'0113'-H'0118'
       __BADRAM  H'011D'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'0185'
       __BADRAM  H'0187'-H'0189'
       __BADRAM  H'018D'-H'01EF'

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
_FOSC_ER_NOCLKOUT    EQU  H'3FFE'    ; RC I/O
_ER_OSC_NOCLKOUT     EQU  H'3FFE'    ; RC I/O
_FOSC_ER_CLKOUT      EQU  H'3FFF'    ; RC CLKOUT
_ER_OSC_CLKOUT       EQU  H'3FFF'    ; RC CLKOUT

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
