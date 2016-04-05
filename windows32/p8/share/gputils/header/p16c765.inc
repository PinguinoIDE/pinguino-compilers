        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16C765 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16C765 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16C765
;       2. LIST directive in the source file
;               LIST   P=PIC16C765
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16C765
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
PIR2             EQU  H'000D'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
CCPR1            EQU  H'0015'
CCPR1L           EQU  H'0015'
CCPR1H           EQU  H'0016'
CCP1CON          EQU  H'0017'
RCSTA            EQU  H'0018'
TXREG            EQU  H'0019'
RCREG            EQU  H'001A'
CCPR2            EQU  H'001B'
CCPR2L           EQU  H'001B'
CCPR2H           EQU  H'001C'
CCP2CON          EQU  H'001D'
ADRES            EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
TRISC            EQU  H'0087'
TRISD            EQU  H'0088'
TRISE            EQU  H'0089'
PIE1             EQU  H'008C'
PIE2             EQU  H'008D'
PCON             EQU  H'008E'
PR2              EQU  H'0092'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
ADCON1           EQU  H'009F'

;-----Bank3------------------
UIR              EQU  H'0190'
UIE              EQU  H'0191'
UEIR             EQU  H'0192'
UEIE             EQU  H'0193'
USTAT            EQU  H'0194'
UCTRL            EQU  H'0195'
UADDR            EQU  H'0196'
USWSTAT          EQU  H'0197'
UEP0             EQU  H'0198'
UEP1             EQU  H'0199'
UEP2             EQU  H'019A'
BD0OST           EQU  H'01A0'
BD0OBC           EQU  H'01A1'
BD0OAL           EQU  H'01A2'
BD0IST           EQU  H'01A4'
BD0IBC           EQU  H'01A5'
BD0IAL           EQU  H'01A6'
BD1OST           EQU  H'01A8'
BD1OBC           EQU  H'01A9'
BD1OAL           EQU  H'01AA'
BD1IST           EQU  H'01AC'
BD1IBC           EQU  H'01AD'
BD1IAL           EQU  H'01AE'
BD2OST           EQU  H'01B0'
BD2OBC           EQU  H'01B1'
BD2OAL           EQU  H'01B2'
BD2IST           EQU  H'01B4'
BD2IBC           EQU  H'01B5'
BD2IAL           EQU  H'01B6'

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
USBIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
PSPIF            EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'


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


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'


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
PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
USBIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
PSPIE            EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'

NOT_BO           EQU  H'0000'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
NOT_TX8          EQU  H'0006'

TX8_9            EQU  H'0006'


;----- ADCON1 Bits -----------------------------------------------------
PCFG0            EQU  H'0000'
PCFG1            EQU  H'0001'
PCFG2            EQU  H'0002'


;----- UIR Bits -----------------------------------------------------
USB_RST          EQU  H'0000'
UERR             EQU  H'0001'
ACTIVITY         EQU  H'0002'
TOK_DNE          EQU  H'0003'
UIDLE            EQU  H'0004'
STALL            EQU  H'0005'


;----- UIE Bits -----------------------------------------------------
USB_RST          EQU  H'0000'
UERR             EQU  H'0001'
ACTIVITY         EQU  H'0002'
TOK_DNE          EQU  H'0003'
UIDLE            EQU  H'0004'
STALL            EQU  H'0005'


;----- UEIR Bits -----------------------------------------------------
PID_ERR          EQU  H'0000'
CRC5             EQU  H'0001'
CRC16            EQU  H'0002'
DFN8             EQU  H'0003'
BTO_ERR          EQU  H'0004'
WRT_ERR          EQU  H'0005'
OWN_ERR          EQU  H'0006'
BTS_ERR          EQU  H'0007'


;----- UEIE Bits -----------------------------------------------------
PID_ERR          EQU  H'0000'
CRC5             EQU  H'0001'
CRC16            EQU  H'0002'
DFN8             EQU  H'0003'
BTO_ERR          EQU  H'0004'
WRT_ERR          EQU  H'0005'
OWN_ERR          EQU  H'0006'
BTS_ERR          EQU  H'0007'


;----- USTAT Bits -----------------------------------------------------
IN               EQU  H'0002'

ENDP0            EQU  H'0003'
ENDP1            EQU  H'0004'


;----- UCTRL Bits -----------------------------------------------------
SUSPND           EQU  H'0001'
RESUME           EQU  H'0002'
DEV_ATT          EQU  H'0003'
PKT_DIS          EQU  H'0004'
SE0              EQU  H'0005'


;----- UEP0 Bits -----------------------------------------------------
EP_STALL         EQU  H'0000'
EP_IN_EN         EQU  H'0001'
EP_OUT_EN        EQU  H'0002'
EP_CTL_DIS       EQU  H'0003'


;----- UEP1 Bits -----------------------------------------------------
EP_STALL         EQU  H'0000'
EP_IN_EN         EQU  H'0001'
EP_OUT_EN        EQU  H'0002'
EP_CTL_DIS       EQU  H'0003'


;----- UEP2 Bits -----------------------------------------------------
EP_STALL         EQU  H'0000'
EP_IN_EN         EQU  H'0001'
EP_OUT_EN        EQU  H'0002'
EP_CTL_DIS       EQU  H'0003'


;----- BD0OST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD0OBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'


;----- BD0IST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD0IBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'


;----- BD1OST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD1OBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'


;----- BD1IST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD1IBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'


;----- BD2OST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD2OBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'


;----- BD2IST Bits -----------------------------------------------------
PID0_BSTALL      EQU  H'0002'
PID1_DTS         EQU  H'0003'
PID2             EQU  H'0004'
PID3             EQU  H'0005'
DATA0_1          EQU  H'0006'
UOWN             EQU  H'0007'

PID0             EQU  H'0002'
PID1             EQU  H'0003'
DATA01           EQU  H'0006'
OWN              EQU  H'0007'

BSTALL           EQU  H'0002'
DTS              EQU  H'0003'


;----- BD2IBC Bits -----------------------------------------------------
BC0              EQU  H'0000'
BC1              EQU  H'0001'
BC2              EQU  H'0002'
BC3              EQU  H'0003'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0013'-H'0014'
       __BADRAM  H'008F'-H'0091'
       __BADRAM  H'0093'-H'0097'
       __BADRAM  H'009A'-H'009E'
       __BADRAM  H'0105'
       __BADRAM  H'0107'-H'0109'
       __BADRAM  H'010C'-H'011F'
       __BADRAM  H'0185'
       __BADRAM  H'0187'-H'0189'
       __BADRAM  H'018C'-H'018F'
       __BADRAM  H'019B'-H'019F'
       __BADRAM  H'01A3'
       __BADRAM  H'01A7'
       __BADRAM  H'01AB'
       __BADRAM  H'01AF'
       __BADRAM  H'01B3'
       __BADRAM  H'01E0'-H'01EF'

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
_FOSC_HS             EQU  H'3FFC'    ; HS oscillator
_HS_OSC              EQU  H'3FFC'    ; HS oscillator
_FOSC_EC             EQU  H'3FFD'    ; External clock. CLKOUT on OSC2 pin
_EC_OSC              EQU  H'3FFD'    ; External clock. CLKOUT on OSC2 pin
_FOSC_H4             EQU  H'3FFE'    ; HS osc with 4x PLL enabled
_H4_OSC              EQU  H'3FFE'    ; HS osc with 4x PLL enabled
_FOSC_E4             EQU  H'3FFF'    ; External clock with 4x PLL enabled. CLKOUT on OSC2 pin
_E4_OSC              EQU  H'3FFF'    ; External clock with 4x PLL enabled. CLKOUT on OSC2 pin

_WDTE_OFF            EQU  H'3FFB'    ; WDT disabled
_WDT_OFF             EQU  H'3FFB'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FF7'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_CP_ALL              EQU  H'00CF'    ; All memory is code protected
_CP_75               EQU  H'15DF'    ; 0800h-1FFFh code protected
_CP_50               EQU  H'2AEF'    ; 1000h-1FFFh code protected
_CP_OFF              EQU  H'3FFF'    ; Code protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
