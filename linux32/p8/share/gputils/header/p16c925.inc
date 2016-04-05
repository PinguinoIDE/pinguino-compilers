        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16C925 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16C925 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16C925
;       2. LIST directive in the source file
;               LIST   P=PIC16C925
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16C925
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
PORTC            EQU  H'0007'
PORTD            EQU  H'0008'
PORTE            EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
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
TRISC            EQU  H'0087'
TRISD            EQU  H'0088'
TRISE            EQU  H'0089'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
PR2              EQU  H'0092'
SSPADD           EQU  H'0093'
SSPSTAT          EQU  H'0094'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
PORTF            EQU  H'0107'
PORTG            EQU  H'0108'
PMCON1           EQU  H'010C'
LCDSE            EQU  H'010D'
LCDPS            EQU  H'010E'
LCDCON           EQU  H'010F'
LCDD00           EQU  H'0110'
LCDD01           EQU  H'0111'
LCDD02           EQU  H'0112'
LCDD03           EQU  H'0113'
LCDD04           EQU  H'0114'
LCDD05           EQU  H'0115'
LCDD06           EQU  H'0116'
LCDD07           EQU  H'0117'
LCDD08           EQU  H'0118'
LCDD09           EQU  H'0119'
LCDD10           EQU  H'011A'
LCDD11           EQU  H'011B'
LCDD12           EQU  H'011C'
LCDD13           EQU  H'011D'
LCDD14           EQU  H'011E'
LCDD15           EQU  H'011F'

;-----Bank3------------------
TRISF            EQU  H'0187'
TRISG            EQU  H'0188'
PMDATA           EQU  H'018C'
PMADR            EQU  H'018D'
PMDATH           EQU  H'018E'
PMADRH           EQU  H'018F'

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
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'


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
LCDIF            EQU  H'0007'


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
CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
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
TRISE3           EQU  H'0003'
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'

PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
ADIE             EQU  H'0006'
LCDIE            EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


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


;----- ADCON1 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

PCFG0            EQU  H'0000'
PCFG1            EQU  H'0001'
PCFG2            EQU  H'0002'
PCFG3            EQU  H'0003'


;----- PORTF Bits -----------------------------------------------------
RF0              EQU  H'0000'
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'
RG5              EQU  H'0005'
RG6              EQU  H'0006'
RG7              EQU  H'0007'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'


;----- LCDSE Bits -----------------------------------------------------
SE0              EQU  H'0000'
SE5              EQU  H'0001'
SE9              EQU  H'0002'
SE12             EQU  H'0003'
SE16             EQU  H'0004'
SE20             EQU  H'0005'
SE27             EQU  H'0006'
SE29             EQU  H'0007'


;----- LCDPS Bits -----------------------------------------------------
LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'


;----- LCDCON Bits -----------------------------------------------------
VGEN             EQU  H'0004'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'

LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
CS0              EQU  H'0002'
CS1              EQU  H'0003'
BIAS             EQU  H'0004'
WERR             EQU  H'0005'


;----- LCDD00 Bits -----------------------------------------------------
SEG00            EQU  H'0000'
SEG01            EQU  H'0001'
SEG02            EQU  H'0002'
SEG03            EQU  H'0003'
SEG04            EQU  H'0004'
SEG05            EQU  H'0005'
SEG06            EQU  H'0006'
SEG07            EQU  H'0007'


;----- LCDD01 Bits -----------------------------------------------------
SEG08            EQU  H'0000'
SEG09            EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'


;----- LCDD02 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'


;----- LCDD03 Bits -----------------------------------------------------
SEG24            EQU  H'0000'
SEG25            EQU  H'0001'
SEG26            EQU  H'0002'
SEG27            EQU  H'0003'
SEG28            EQU  H'0004'
SEG29            EQU  H'0005'
SEG30            EQU  H'0006'
SEG31            EQU  H'0007'


;----- LCDD04 Bits -----------------------------------------------------
SEG00            EQU  H'0000'
SEG01            EQU  H'0001'
SEG02            EQU  H'0002'
SEG03            EQU  H'0003'
SEG04            EQU  H'0004'
SEG05            EQU  H'0005'
SEG06            EQU  H'0006'
SEG07            EQU  H'0007'


;----- LCDD05 Bits -----------------------------------------------------
SEG08            EQU  H'0000'
SEG09            EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'


;----- LCDD06 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'


;----- LCDD07 Bits -----------------------------------------------------
SEG24            EQU  H'0000'
SEG25            EQU  H'0001'
SEG26            EQU  H'0002'
SEG27            EQU  H'0003'
SEG28            EQU  H'0004'
SEG29            EQU  H'0005'
SEG30            EQU  H'0006'
SEG31            EQU  H'0007'


;----- LCDD08 Bits -----------------------------------------------------
SEG00            EQU  H'0000'
SEG01            EQU  H'0001'
SEG02            EQU  H'0002'
SEG03            EQU  H'0003'
SEG04            EQU  H'0004'
SEG05            EQU  H'0005'
SEG06            EQU  H'0006'
SEG07            EQU  H'0007'


;----- LCDD09 Bits -----------------------------------------------------
SEG08            EQU  H'0000'
SEG09            EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'


;----- LCDD10 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'


;----- LCDD11 Bits -----------------------------------------------------
SEG24            EQU  H'0000'
SEG25            EQU  H'0001'
SEG26            EQU  H'0002'
SEG27            EQU  H'0003'
SEG28            EQU  H'0004'
SEG29            EQU  H'0005'
SEG30            EQU  H'0006'
SEG31            EQU  H'0007'


;----- LCDD12 Bits -----------------------------------------------------
SEG00            EQU  H'0000'
SEG01            EQU  H'0001'
SEG02            EQU  H'0002'
SEG03            EQU  H'0003'
SEG04            EQU  H'0004'
SEG05            EQU  H'0005'
SEG06            EQU  H'0006'
SEG07            EQU  H'0007'


;----- LCDD13 Bits -----------------------------------------------------
SEG08            EQU  H'0000'
SEG09            EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'


;----- LCDD14 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'


;----- LCDD15 Bits -----------------------------------------------------
SEG24            EQU  H'0000'
SEG25            EQU  H'0001'
SEG26            EQU  H'0002'
SEG27            EQU  H'0003'
SEG28            EQU  H'0004'
SEG29            EQU  H'0005'
SEG30            EQU  H'0006'
SEG31            EQU  H'0007'


;----- TRISF Bits -----------------------------------------------------
TRISF0           EQU  H'0000'
TRISF1           EQU  H'0001'
TRISF2           EQU  H'0002'
TRISF3           EQU  H'0003'
TRISF4           EQU  H'0004'
TRISF5           EQU  H'0005'
TRISF6           EQU  H'0006'
TRISF7           EQU  H'0007'


;----- TRISG Bits -----------------------------------------------------
TRISG0           EQU  H'0000'
TRISG1           EQU  H'0001'
TRISG2           EQU  H'0002'
TRISG3           EQU  H'0003'
TRISG4           EQU  H'0004'
TRISG5           EQU  H'0005'
TRISG6           EQU  H'0006'
TRISG7           EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'000D'
       __BADRAM  H'0018'-H'001D'
       __BADRAM  H'008D'
       __BADRAM  H'008F'-H'0091'
       __BADRAM  H'0095'-H'009D'
       __BADRAM  H'0105'
       __BADRAM  H'0109'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'0185'
       __BADRAM  H'0189'
       __BADRAM  H'0190'-H'019F'
       __BADRAM  H'01A0'-H'01EF'

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
_FOSC_LP             EQU  H'3FFC'    ; LP oscillator
_LP_OSC              EQU  H'3FFC'    ; LP oscillator
_FOSC_XT             EQU  H'3FFD'    ; XT oscillator
_XT_OSC              EQU  H'3FFD'    ; XT oscillator
_FOSC_HS             EQU  H'3FFE'    ; HS oscillator
_HS_OSC              EQU  H'3FFE'    ; HS oscillator
_FOSC_RC             EQU  H'3FFF'    ; RC oscillator
_RC_OSC              EQU  H'3FFF'    ; RC oscillator

_WDTE_OFF            EQU  H'3FFB'    ; WDT disabled
_WDT_OFF             EQU  H'3FFB'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FF7'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_CP_ALL              EQU  H'3FCF'    ; All memory is code protected
_CP_75               EQU  H'3FDF'    ; 0000h-0EFFh code protected
_CP_50               EQU  H'3FEF'    ; 0000h-07FFh code protected
_CP_OFF              EQU  H'3FFF'    ; Code protection off

_BOREN_OFF           EQU  H'3FBF'    ; BOR disabled
_BODEN_OFF           EQU  H'3FBF'    ; BOR disabled
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BODEN_ON            EQU  H'3FFF'    ; BOR enabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
