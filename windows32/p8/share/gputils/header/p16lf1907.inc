        LIST

;==========================================================================
; Build date : Aug 13 2015
;  MPASM PIC16LF1907 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16LF1907 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16LF1907
;       2. LIST directive in the source file
;               LIST   P=PIC16LF1907
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================
;;;; Begin: Added in gputils

;==========================================================================
;
;       Gputils Specific Revision History
;
;==========================================================================

;       12 Jul 2014  Added the _DEBUG_ON and _DEBUG_OFF config options.
;;;; End: Added in gputils

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16LF1907
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
INDF0            EQU  H'0000'
INDF1            EQU  H'0001'
PCL              EQU  H'0002'
STATUS           EQU  H'0003'
FSR0             EQU  H'0004'
FSR0L            EQU  H'0004'
FSR0H            EQU  H'0005'
FSR1             EQU  H'0006'
FSR1L            EQU  H'0006'
FSR1H            EQU  H'0007'
BSR              EQU  H'0008'
WREG             EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PORTA            EQU  H'000C'
PORTB            EQU  H'000D'
PORTC            EQU  H'000E'
PORTD            EQU  H'000F'
PORTE            EQU  H'0010'
PIR1             EQU  H'0011'
PIR2             EQU  H'0012'
TMR0             EQU  H'0015'
TMR1             EQU  H'0016'
TMR1L            EQU  H'0016'
TMR1H            EQU  H'0017'
T1CON            EQU  H'0018'
T1GCON           EQU  H'0019'

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISB            EQU  H'008D'
TRISC            EQU  H'008E'
TRISD            EQU  H'008F'
TRISE            EQU  H'0090'
PIE1             EQU  H'0091'
PIE2             EQU  H'0092'
OPTION_REG       EQU  H'0095'
PCON             EQU  H'0096'
WDTCON           EQU  H'0097'
OSCCON           EQU  H'0099'
OSCSTAT          EQU  H'009A'
ADRES            EQU  H'009B'
ADRESL           EQU  H'009B'
ADRESH           EQU  H'009C'
ADCON0           EQU  H'009D'
ADCON1           EQU  H'009E'

;-----Bank2------------------
LATA             EQU  H'010C'
LATB             EQU  H'010D'
LATC             EQU  H'010E'
LATD             EQU  H'010F'
LATE             EQU  H'0110'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELB           EQU  H'018D'
ANSELE           EQU  H'0190'
PMADR            EQU  H'0191'
PMADRL           EQU  H'0191'
PMADRH           EQU  H'0192'
PMDAT            EQU  H'0193'
PMDATL           EQU  H'0193'
PMDATH           EQU  H'0194'
PMCON1           EQU  H'0195'
PMCON2           EQU  H'0196'
RC1REG           EQU  H'0199'
RCREG            EQU  H'0199'
RCREG1           EQU  H'0199'
TX1REG           EQU  H'019A'
TXREG            EQU  H'019A'
TXREG1           EQU  H'019A'
SP1BRG           EQU  H'019B'
SP1BRGL          EQU  H'019B'
SPBRG            EQU  H'019B'
SPBRGL           EQU  H'019B'
SPBRGL1          EQU  H'019B'
SP1BRGH          EQU  H'019C'
SPBRGH           EQU  H'019C'
SPBRGH1          EQU  H'019C'
RC1STA           EQU  H'019D'
RCSTA            EQU  H'019D'
RCSTA1           EQU  H'019D'
TX1STA           EQU  H'019E'
TXSTA            EQU  H'019E'
TXSTA1           EQU  H'019E'
BAUD1CON         EQU  H'019F'
BAUDCON          EQU  H'019F'
BAUDCON1         EQU  H'019F'

;-----Bank4------------------
WPUB             EQU  H'020D'
WPUE             EQU  H'0210'

;-----Bank7------------------
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'

;-----Bank15------------------
LCDCON           EQU  H'0791'
LCDPS            EQU  H'0792'
LCDREF           EQU  H'0793'
LCDCST           EQU  H'0794'
LCDRL            EQU  H'0795'
LCDSE0           EQU  H'0798'
LCDSE1           EQU  H'0799'
LCDSE2           EQU  H'079A'
LCDSE3           EQU  H'079B'
LCDDATA0         EQU  H'07A0'
LCDDATA1         EQU  H'07A1'
LCDDATA2         EQU  H'07A2'
LCDDATA3         EQU  H'07A3'
LCDDATA4         EQU  H'07A4'
LCDDATA5         EQU  H'07A5'
LCDDATA6         EQU  H'07A6'
LCDDATA7         EQU  H'07A7'
LCDDATA8         EQU  H'07A8'
LCDDATA9         EQU  H'07A9'
LCDDATA10        EQU  H'07AA'
LCDDATA11        EQU  H'07AB'
LCDDATA12        EQU  H'07AC'
LCDDATA15        EQU  H'07AF'
LCDDATA18        EQU  H'07B2'
LCDDATA21        EQU  H'07B5'

;-----Bank31------------------
STATUS_SHAD      EQU  H'0FE4'
WREG_SHAD        EQU  H'0FE5'
BSR_SHAD         EQU  H'0FE6'
PCLATH_SHAD      EQU  H'0FE7'
FSR0L_SHAD       EQU  H'0FE8'
FSR0H_SHAD       EQU  H'0FE9'
FSR1L_SHAD       EQU  H'0FEA'
FSR1H_SHAD       EQU  H'0FEB'
STKPTR           EQU  H'0FED'
TOSL             EQU  H'0FEE'
TOSH             EQU  H'0FEF'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'


;----- BSR Bits -----------------------------------------------------
BSR0             EQU  H'0000'
BSR1             EQU  H'0001'
BSR2             EQU  H'0002'
BSR3             EQU  H'0003'
BSR4             EQU  H'0004'



;----- INTCON Bits -----------------------------------------------------
IOCIF            EQU  H'0000'
INTF             EQU  H'0001'
TMR0IF           EQU  H'0002'
IOCIE            EQU  H'0003'
INTE             EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

T0IF             EQU  H'0002'
T0IE             EQU  H'0005'


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


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
LCDIF            EQU  H'0002'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'



;----- T1GCON Bits -----------------------------------------------------
T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GGO            EQU  H'0003'


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


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- TRISD Bits -----------------------------------------------------
TRISD0           EQU  H'0000'
TRISD1           EQU  H'0001'
TRISD2           EQU  H'0002'
TRISD3           EQU  H'0003'
TRISD4           EQU  H'0004'
TRISD5           EQU  H'0005'
TRISD6           EQU  H'0006'
TRISD7           EQU  H'0007'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
LCDIE            EQU  H'0002'


;----- OPTION_REG Bits -----------------------------------------------------
PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

T0SE             EQU  H'0004'
T0CS             EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
NOT_RWDT         EQU  H'0004'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'
WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'
WDTPS4           EQU  H'0005'



;----- OSCCON Bits -----------------------------------------------------
SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IRCF0            EQU  H'0003'
IRCF1            EQU  H'0004'
IRCF2            EQU  H'0005'
IRCF3            EQU  H'0006'



;----- OSCSTAT Bits -----------------------------------------------------
HFIOFS           EQU  H'0000'
LFIOFR           EQU  H'0001'
HFIOFR           EQU  H'0004'
OSTS             EQU  H'0005'
T1OSCR           EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

ADGO             EQU  H'0001'

GO               EQU  H'0001'

NOT_DONE         EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'
ADFM             EQU  H'0007'



;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'
LATA6            EQU  H'0006'
LATA7            EQU  H'0007'


;----- LATB Bits -----------------------------------------------------
LATB0            EQU  H'0000'
LATB1            EQU  H'0001'
LATB2            EQU  H'0002'
LATB3            EQU  H'0003'
LATB4            EQU  H'0004'
LATB5            EQU  H'0005'
LATB6            EQU  H'0006'
LATB7            EQU  H'0007'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'
LATC6            EQU  H'0006'
LATC7            EQU  H'0007'


;----- LATD Bits -----------------------------------------------------
LATD0            EQU  H'0000'
LATD1            EQU  H'0001'
LATD2            EQU  H'0002'
LATD3            EQU  H'0003'
LATD4            EQU  H'0004'
LATD5            EQU  H'0005'
LATD6            EQU  H'0006'
LATD7            EQU  H'0007'


;----- LATE Bits -----------------------------------------------------
LATE0            EQU  H'0000'
LATE1            EQU  H'0001'
LATE2            EQU  H'0002'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'



;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA5            EQU  H'0005'



;----- ANSELB Bits -----------------------------------------------------
ANSB0            EQU  H'0000'
ANSB1            EQU  H'0001'
ANSB2            EQU  H'0002'
ANSB3            EQU  H'0003'
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'



;----- ANSELE Bits -----------------------------------------------------
ANSE0            EQU  H'0000'
ANSE1            EQU  H'0001'
ANSE2            EQU  H'0002'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'


;----- SP1BRGL Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRG Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGL Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGL1 Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SP1BRGH Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- SPBRGH Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- SPBRGH1 Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- RC1STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- RCSTA1 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TX1STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA1 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUD1CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'



;----- WPUE Bits -----------------------------------------------------
WPUE3            EQU  H'0003'


;----- IOCBP Bits -----------------------------------------------------
IOCBP0           EQU  H'0000'
IOCBP1           EQU  H'0001'
IOCBP2           EQU  H'0002'
IOCBP3           EQU  H'0003'
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'



;----- IOCBN Bits -----------------------------------------------------
IOCBN0           EQU  H'0000'
IOCBN1           EQU  H'0001'
IOCBN2           EQU  H'0002'
IOCBN3           EQU  H'0003'
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'



;----- IOCBF Bits -----------------------------------------------------
IOCBF0           EQU  H'0000'
IOCBF1           EQU  H'0001'
IOCBF2           EQU  H'0002'
IOCBF3           EQU  H'0003'
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'



;----- LCDCON Bits -----------------------------------------------------
LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
CS0              EQU  H'0002'
CS1              EQU  H'0003'
WERR             EQU  H'0005'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'



;----- LCDPS Bits -----------------------------------------------------
LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'
WA               EQU  H'0004'
LCDA             EQU  H'0005'
BIASMD           EQU  H'0006'
WFT              EQU  H'0007'



;----- LCDREF Bits -----------------------------------------------------
VLCD1PE          EQU  H'0001'
VLCD2PE          EQU  H'0002'
VLCD3PE          EQU  H'0003'
LCDIRI           EQU  H'0005'
LCDIRE           EQU  H'0007'


;----- LCDCST Bits -----------------------------------------------------
LCDCST0          EQU  H'0000'
LCDCST1          EQU  H'0001'
LCDCST2          EQU  H'0002'



;----- LCDRL Bits -----------------------------------------------------
LRLAT0           EQU  H'0000'
LRLAT1           EQU  H'0001'
LRLAT2           EQU  H'0002'
LRLBP0           EQU  H'0004'
LRLBP1           EQU  H'0005'
LRLAP0           EQU  H'0006'
LRLAP1           EQU  H'0007'



;----- LCDSE0 Bits -----------------------------------------------------
SE0              EQU  H'0000'
SE1              EQU  H'0001'
SE2              EQU  H'0002'
SE3              EQU  H'0003'
SE4              EQU  H'0004'
SE5              EQU  H'0005'
SE6              EQU  H'0006'
SE7              EQU  H'0007'


;----- LCDSE1 Bits -----------------------------------------------------
SE8              EQU  H'0000'
SE9              EQU  H'0001'
SE10             EQU  H'0002'
SE11             EQU  H'0003'
SE12             EQU  H'0004'
SE13             EQU  H'0005'
SE14             EQU  H'0006'
SE15             EQU  H'0007'


;----- LCDSE2 Bits -----------------------------------------------------
SE16             EQU  H'0000'
SE17             EQU  H'0001'
SE18             EQU  H'0002'
SE19             EQU  H'0003'
SE20             EQU  H'0004'
SE21             EQU  H'0005'
SE22             EQU  H'0006'
SE23             EQU  H'0007'


;----- LCDSE3 Bits -----------------------------------------------------
SE24             EQU  H'0000'
SE25             EQU  H'0001'
SE26             EQU  H'0002'
SE27             EQU  H'0003'
SE28             EQU  H'0004'


;----- LCDDATA0 Bits -----------------------------------------------------
SEG0COM0         EQU  H'0000'
SEG1COM0         EQU  H'0001'
SEG2COM0         EQU  H'0002'
SEG3COM0         EQU  H'0003'
SEG4COM0         EQU  H'0004'
SEG5COM0         EQU  H'0005'
SEG6COM0         EQU  H'0006'
SEG7COM0         EQU  H'0007'


;----- LCDDATA1 Bits -----------------------------------------------------
SEG8COM0         EQU  H'0000'
SEG9COM0         EQU  H'0001'
SEG10COM0        EQU  H'0002'
SEG11COM0        EQU  H'0003'
SEG12COM0        EQU  H'0004'
SEG13COM0        EQU  H'0005'
SEG14COM0        EQU  H'0006'
SEG15COM0        EQU  H'0007'


;----- LCDDATA2 Bits -----------------------------------------------------
SEG16COM0        EQU  H'0000'
SEG17COM0        EQU  H'0001'
SEG18COM0        EQU  H'0002'
SEG19COM0        EQU  H'0003'
SEG20COM0        EQU  H'0004'
SEG21COM0        EQU  H'0005'
SEG22COM0        EQU  H'0006'
SEG23COM0        EQU  H'0007'


;----- LCDDATA3 Bits -----------------------------------------------------
SEG0COM1         EQU  H'0000'
SEG1COM1         EQU  H'0001'
SEG2COM1         EQU  H'0002'
SEG3COM1         EQU  H'0003'
SEG4COM1         EQU  H'0004'
SEG5COM1         EQU  H'0005'
SEG6COM1         EQU  H'0006'
SEG7COM1         EQU  H'0007'


;----- LCDDATA4 Bits -----------------------------------------------------
SEG8COM1         EQU  H'0000'
SEG9COM1         EQU  H'0001'
SEG10COM1        EQU  H'0002'
SEG11COM1        EQU  H'0003'
SEG12COM1        EQU  H'0004'
SEG13COM1        EQU  H'0005'
SEG14COM1        EQU  H'0006'
SEG15COM1        EQU  H'0007'


;----- LCDDATA5 Bits -----------------------------------------------------
SEG16COM1        EQU  H'0000'
SEG17COM1        EQU  H'0001'
SEG18COM1        EQU  H'0002'
SEG19COM1        EQU  H'0003'
SEG20COM1        EQU  H'0004'
SEG21COM1        EQU  H'0005'
SEG22COM1        EQU  H'0006'
SEG23COM1        EQU  H'0007'


;----- LCDDATA6 Bits -----------------------------------------------------
SEG0COM2         EQU  H'0000'
SEG1COM2         EQU  H'0001'
SEG2COM2         EQU  H'0002'
SEG3COM2         EQU  H'0003'
SEG4COM2         EQU  H'0004'
SEG5COM2         EQU  H'0005'
SEG6COM2         EQU  H'0006'
SEG7COM2         EQU  H'0007'


;----- LCDDATA7 Bits -----------------------------------------------------
SEG8COM2         EQU  H'0000'
SEG9COM2         EQU  H'0001'
SEG10COM2        EQU  H'0002'
SEG11COM2        EQU  H'0003'
SEG12COM2        EQU  H'0004'
SEG13COM2        EQU  H'0005'
SEG14COM2        EQU  H'0006'
SEG15COM2        EQU  H'0007'


;----- LCDDATA8 Bits -----------------------------------------------------
SEG16COM2        EQU  H'0000'
SEG17COM2        EQU  H'0001'
SEG18COM2        EQU  H'0002'
SEG19COM2        EQU  H'0003'
SEG20COM2        EQU  H'0004'
SEG21COM2        EQU  H'0005'
SEG22COM2        EQU  H'0006'
SEG23COM2        EQU  H'0007'


;----- LCDDATA9 Bits -----------------------------------------------------
SEG0COM3         EQU  H'0000'
SEG1COM3         EQU  H'0001'
SEG2COM3         EQU  H'0002'
SEG3COM3         EQU  H'0003'
SEG4COM3         EQU  H'0004'
SEG5COM3         EQU  H'0005'
SEG6COM3         EQU  H'0006'
SEG7COM3         EQU  H'0007'


;----- LCDDATA10 Bits -----------------------------------------------------
SEG8COM3         EQU  H'0000'
SEG9COM3         EQU  H'0001'
SEG10COM3        EQU  H'0002'
SEG11COM3        EQU  H'0003'
SEG12COM3        EQU  H'0004'
SEG13COM3        EQU  H'0005'
SEG14COM3        EQU  H'0006'
SEG15COM3        EQU  H'0007'


;----- LCDDATA11 Bits -----------------------------------------------------
SEG16COM3        EQU  H'0000'
SEG17COM3        EQU  H'0001'
SEG18COM3        EQU  H'0002'
SEG19COM3        EQU  H'0003'
SEG20COM3        EQU  H'0004'
SEG21COM3        EQU  H'0005'
SEG22COM3        EQU  H'0006'
SEG23COM3        EQU  H'0007'


;----- LCDDATA12 Bits -----------------------------------------------------
SEG24COM0        EQU  H'0000'
SEG25COM0        EQU  H'0001'
SEG26COM0        EQU  H'0002'
SEG27COM0        EQU  H'0003'
SEG28COM0        EQU  H'0004'


;----- LCDDATA15 Bits -----------------------------------------------------
SEG24COM1        EQU  H'0000'
SEG25COM1        EQU  H'0001'
SEG26COM1        EQU  H'0002'
SEG27COM1        EQU  H'0003'
SEG28COM1        EQU  H'0004'


;----- LCDDATA18 Bits -----------------------------------------------------
SEG24COM2        EQU  H'0000'
SEG25COM2        EQU  H'0001'
SEG26COM2        EQU  H'0002'
SEG27COM2        EQU  H'0003'
SEG28COM2        EQU  H'0004'


;----- LCDDATA21 Bits -----------------------------------------------------
SEG24COM3        EQU  H'0000'
SEG25COM3        EQU  H'0001'
SEG26COM3        EQU  H'0002'
SEG27COM3        EQU  H'0003'
SEG28COM3        EQU  H'0004'


;----- STATUS_SHAD Bits -----------------------------------------------------
C_SHAD           EQU  H'0000'
DC_SHAD          EQU  H'0001'
Z_SHAD           EQU  H'0002'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'0013'-H'0014'
       __BADRAM  H'001A'-H'001E'
       __BADRAM  H'001F'
       __BADRAM  H'0093'-H'0094'
       __BADRAM  H'0098'
       __BADRAM  H'009F'
       __BADRAM  H'0111'-H'0115'
       __BADRAM  H'0118'-H'011F'
       __BADRAM  H'018E'-H'018F'
       __BADRAM  H'0197'-H'0198'
       __BADRAM  H'020C'
       __BADRAM  H'020E'-H'020F'
       __BADRAM  H'0211'-H'021F'
       __BADRAM  H'028C'-H'029F'
       __BADRAM  H'030C'-H'031F'
       __BADRAM  H'0330'-H'036F'
       __BADRAM  H'038C'-H'0393'
       __BADRAM  H'0397'-H'039F'
       __BADRAM  H'03A0'-H'03EF'
       __BADRAM  H'040C'-H'0419'
       __BADRAM  H'041A'-H'041F'
       __BADRAM  H'0420'-H'046F'
       __BADRAM  H'048C'-H'049F'
       __BADRAM  H'04A0'-H'04EF'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'0520'-H'056F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'05A0'-H'05EF'
       __BADRAM  H'060C'-H'061F'
       __BADRAM  H'0620'-H'066F'
       __BADRAM  H'068C'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'0790'
       __BADRAM  H'0796'-H'0797'
       __BADRAM  H'079C'-H'079F'
       __BADRAM  H'07AD'-H'07AE'
       __BADRAM  H'07B0'-H'07B1'
       __BADRAM  H'07B3'-H'07B4'
       __BADRAM  H'07B6'-H'07EF'
       __BADRAM  H'080C'-H'081F'
       __BADRAM  H'0820'-H'086F'
       __BADRAM  H'088C'-H'089F'
       __BADRAM  H'08A0'-H'08EF'
       __BADRAM  H'090C'-H'091F'
       __BADRAM  H'0920'-H'096F'
       __BADRAM  H'098C'-H'099F'
       __BADRAM  H'09A0'-H'09EF'
       __BADRAM  H'0A0C'-H'0A1F'
       __BADRAM  H'0A20'-H'0A6F'
       __BADRAM  H'0A8C'-H'0A9F'
       __BADRAM  H'0AA0'-H'0AEF'
       __BADRAM  H'0B0C'-H'0B1F'
       __BADRAM  H'0B20'-H'0B6F'
       __BADRAM  H'0B8C'-H'0B9F'
       __BADRAM  H'0BA0'-H'0BEF'
       __BADRAM  H'0C0C'-H'0C1F'
       __BADRAM  H'0C20'-H'0C6F'
       __BADRAM  H'0C8C'-H'0C9F'
       __BADRAM  H'0CA0'-H'0CEF'
       __BADRAM  H'0D0C'-H'0D1F'
       __BADRAM  H'0D20'-H'0D6F'
       __BADRAM  H'0D8C'-H'0D9F'
       __BADRAM  H'0DA0'-H'0DEF'
       __BADRAM  H'0E0C'-H'0E1F'
       __BADRAM  H'0E20'-H'0E6F'
       __BADRAM  H'0E8C'-H'0E9F'
       __BADRAM  H'0EA0'-H'0EEF'
       __BADRAM  H'0F0C'-H'0F1F'
       __BADRAM  H'0F20'-H'0F6F'
       __BADRAM  H'0F8C'-H'0FE3'
       __BADRAM  H'0FEC'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           8007h
;   CONFIG2           8008h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1         EQU  H'8007'
_CONFIG2         EQU  H'8008'

;----- CONFIG1 Options --------------------------------------------------
_FOSC_INTOSC     EQU  H'3FFC'    ; INTOSC oscillator: I/O function on CLKIN pin
_FOSC_ECL        EQU  H'3FFD'    ; ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pin
_FOSC_ECM        EQU  H'3FFE'    ; ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pin
_FOSC_ECH        EQU  H'3FFF'    ; ECH, External Clock, High Power Mode (4-32 MHz): device clock supplied to CLKIN pin

_WDTE_OFF        EQU  H'3FE7'    ; WDT disabled
_WDTE_SWDTEN     EQU  H'3FEF'    ; WDT controlled by the SWDTEN bit in the WDTCON register
_WDTE_NSLEEP     EQU  H'3FF7'    ; WDT enabled while running and disabled in Sleep
_WDTE_ON         EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON        EQU  H'3FDF'    ; PWRT enabled
_PWRTE_OFF       EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF       EQU  H'3FBF'    ; MCLR/VPP pin function is digital input
_MCLRE_ON        EQU  H'3FFF'    ; MCLR/VPP pin function is MCLR

_CP_ON           EQU  H'3F7F'    ; Program memory code protection is enabled
_CP_OFF          EQU  H'3FFF'    ; Program memory code protection is disabled

_BOREN_OFF       EQU  H'39FF'    ; Brown-out Reset disabled
_BOREN_SBODEN    EQU  H'3BFF'    ; Brown-out Reset controlled by the SBOREN bit in the BORCON register
_BOREN_NSLEEP    EQU  H'3DFF'    ; Brown-out Reset enabled while running and disabled in Sleep
_BOREN_ON        EQU  H'3FFF'    ; Brown-out Reset enabled

_CLKOUTEN_ON     EQU  H'37FF'    ; CLKOUT function is enabled on the CLKOUT pin
_CLKOUTEN_OFF    EQU  H'3FFF'    ; CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin

;----- CONFIG2 Options --------------------------------------------------
_WRT_ALL         EQU  H'3FFC'    ; 000h to 7FFh write protected, no addresses may be modified by PMCON control
_WRT_HALF        EQU  H'3FFD'    ; 000h to 3FFh write protected, 400h to 7FFh may be modified by PMCON control
_WRT_BOOT        EQU  H'3FFE'    ; 000h to 1FFh write protected, 200h to 7FFh may be modified by PMCON control
_WRT_OFF         EQU  H'3FFF'    ; Write protection off

_STVREN_OFF      EQU  H'3DFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'3FFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'3BFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO         EQU  H'3FFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.
_BORV_19         EQU  H'3FFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.

_LPBOR_ON        EQU  H'37FF'    ; Low-Power BOR is enabled
_LPBOR_OFF       EQU  H'3FFF'    ; Low-Power BOR is disabled

;;;; Begin: Added in gputils
_DEBUG_ON        EQU  H'2FFF'    ; In-Circuit Debugger enabled, ICSPCLK and ICSPDAT are dedicated to the debugger.
_DEBUG_OFF       EQU  H'3FFF'    ; In-Circuit Debugger disabled, ICSPCLK and ICSPDAT are general purpose I/O pins.

;;;; End: Added in gputils
_LVP_OFF         EQU  H'1FFF'    ; High-voltage on MCLR/VPP must be used for programming
_LVP_ON          EQU  H'3FFF'    ; Low-voltage programming enabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'8006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'8000'
_IDLOC1          EQU  H'8001'
_IDLOC2          EQU  H'8002'
_IDLOC3          EQU  H'8003'

        LIST
