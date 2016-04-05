        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18F8720 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18F8720 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18F8720
;       2. LIST directive in the source file
;               LIST   P=PIC18F8720
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18F8720
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF

;==========================================================================
;       18xxxx Family        EQUates
;==========================================================================
FSR0            EQU 0
FSR1            EQU 1
FSR2            EQU 2

FAST            EQU 1

W               EQU 0
A               EQU 0
ACCESS          EQU 0
BANKED          EQU 1
;==========================================================================

;==========================================================================
;       16Cxxx/17Cxxx Substitutions
;==========================================================================
  #define DDRA  TRISA      ; PIC17Cxxx SFR substitution
  #define DDRB  TRISB      ; PIC17Cxxx SFR substitution
  #define DDRC  TRISC      ; PIC17Cxxx SFR substitution
  #define DDRD  TRISD      ; PIC17Cxxx SFR substitution
  #define DDRE  TRISE      ; PIC17Cxxx SFR substitution

;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Files -----------------------------------------------------
RCSTA2           EQU  H'0F6B'
TXSTA2           EQU  H'0F6C'
TXREG2           EQU  H'0F6D'
RCREG2           EQU  H'0F6E'
SPBRG2           EQU  H'0F6F'
CCP5CON          EQU  H'0F70'
CCPR5            EQU  H'0F71'
CCPR5L           EQU  H'0F71'
CCPR5H           EQU  H'0F72'
CCP4CON          EQU  H'0F73'
CCPR4            EQU  H'0F74'
CCPR4L           EQU  H'0F74'
CCPR4H           EQU  H'0F75'
T4CON            EQU  H'0F76'
PR4              EQU  H'0F77'
TMR4             EQU  H'0F78'
PORTA            EQU  H'0F80'
PORTB            EQU  H'0F81'
PORTC            EQU  H'0F82'
PORTD            EQU  H'0F83'
PORTE            EQU  H'0F84'
PORTF            EQU  H'0F85'
PORTG            EQU  H'0F86'
PORTH            EQU  H'0F87'
PORTJ            EQU  H'0F88'
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
LATD             EQU  H'0F8C'
LATE             EQU  H'0F8D'
LATF             EQU  H'0F8E'
LATG             EQU  H'0F8F'
LATH             EQU  H'0F90'
LATJ             EQU  H'0F91'
DDRA             EQU  H'0F92'
TRISA            EQU  H'0F92'
DDRB             EQU  H'0F93'
TRISB            EQU  H'0F93'
DDRC             EQU  H'0F94'
TRISC            EQU  H'0F94'
DDRD             EQU  H'0F95'
TRISD            EQU  H'0F95'
DDRE             EQU  H'0F96'
TRISE            EQU  H'0F96'
DDRF             EQU  H'0F97'
TRISF            EQU  H'0F97'
DDRG             EQU  H'0F98'
TRISG            EQU  H'0F98'
DDRH             EQU  H'0F99'
TRISH            EQU  H'0F99'
DDRJ             EQU  H'0F9A'
TRISJ            EQU  H'0F9A'
MEMCON           EQU  H'0F9C'
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
PIE3             EQU  H'0FA3'
PIR3             EQU  H'0FA4'
IPR3             EQU  H'0FA5'
EECON1           EQU  H'0FA6'
EECON2           EQU  H'0FA7'
EEDATA           EQU  H'0FA8'
EEADR            EQU  H'0FA9'
EEADRH           EQU  H'0FAA'
RCSTA            EQU  H'0FAB'
RCSTA1           EQU  H'0FAB'
TXSTA            EQU  H'0FAC'
TXSTA1           EQU  H'0FAC'
TXREG            EQU  H'0FAD'
TXREG1           EQU  H'0FAD'
RCREG            EQU  H'0FAE'
RCREG1           EQU  H'0FAE'
SPBRG            EQU  H'0FAF'
SPBRG1           EQU  H'0FAF'
PSPCON           EQU  H'0FB0'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
CMCON            EQU  H'0FB4'
CVRCON           EQU  H'0FB5'
CCP3CON          EQU  H'0FB7'
CCPR3            EQU  H'0FB8'
CCPR3L           EQU  H'0FB8'
CCPR3H           EQU  H'0FB9'
CCP2CON          EQU  H'0FBA'
CCPR2            EQU  H'0FBB'
CCPR2L           EQU  H'0FBB'
CCPR2H           EQU  H'0FBC'
CCP1CON          EQU  H'0FBD'
CCPR1            EQU  H'0FBE'
CCPR1L           EQU  H'0FBE'
CCPR1H           EQU  H'0FBF'
ADCON2           EQU  H'0FC0'
ADCON1           EQU  H'0FC1'
ADCON0           EQU  H'0FC2'
ADRES            EQU  H'0FC3'
ADRESL           EQU  H'0FC3'
ADRESH           EQU  H'0FC4'
SSPCON2          EQU  H'0FC5'
SSPCON1          EQU  H'0FC6'
SSPSTAT          EQU  H'0FC7'
SSPADD           EQU  H'0FC8'
SSPBUF           EQU  H'0FC9'
T2CON            EQU  H'0FCA'
PR2              EQU  H'0FCB'
TMR2             EQU  H'0FCC'
T1CON            EQU  H'0FCD'
TMR1             EQU  H'0FCE'
TMR1L            EQU  H'0FCE'
TMR1H            EQU  H'0FCF'
RCON             EQU  H'0FD0'
WDTCON           EQU  H'0FD1'
LVDCON           EQU  H'0FD2'
OSCCON           EQU  H'0FD3'
T0CON            EQU  H'0FD5'
TMR0             EQU  H'0FD6'
TMR0L            EQU  H'0FD6'
TMR0H            EQU  H'0FD7'
STATUS           EQU  H'0FD8'
FSR2L            EQU  H'0FD9'
FSR2H            EQU  H'0FDA'
PLUSW2           EQU  H'0FDB'
PREINC2          EQU  H'0FDC'
POSTDEC2         EQU  H'0FDD'
POSTINC2         EQU  H'0FDE'
INDF2            EQU  H'0FDF'
BSR              EQU  H'0FE0'
FSR1L            EQU  H'0FE1'
FSR1H            EQU  H'0FE2'
PLUSW1           EQU  H'0FE3'
PREINC1          EQU  H'0FE4'
POSTDEC1         EQU  H'0FE5'
POSTINC1         EQU  H'0FE6'
INDF1            EQU  H'0FE7'
WREG             EQU  H'0FE8'
FSR0L            EQU  H'0FE9'
FSR0H            EQU  H'0FEA'
PLUSW0           EQU  H'0FEB'
PREINC0          EQU  H'0FEC'
POSTDEC0         EQU  H'0FED'
POSTINC0         EQU  H'0FEE'
INDF0            EQU  H'0FEF'
INTCON3          EQU  H'0FF0'
INTCON2          EQU  H'0FF1'
INTCON           EQU  H'0FF2'
INTCON1          EQU  H'0FF2'
PROD             EQU  H'0FF3'
PRODL            EQU  H'0FF3'
PRODH            EQU  H'0FF4'
TABLAT           EQU  H'0FF5'
TBLPTR           EQU  H'0FF6'
TBLPTRL          EQU  H'0FF6'
TBLPTRH          EQU  H'0FF7'
TBLPTRU          EQU  H'0FF8'
PC               EQU  H'0FF9'
PCL              EQU  H'0FF9'
PCLATH           EQU  H'0FFA'
PCLATU           EQU  H'0FFB'
STKPTR           EQU  H'0FFC'
TOS              EQU  H'0FFD'
TOSL             EQU  H'0FFD'
TOSH             EQU  H'0FFE'
TOSU             EQU  H'0FFF'

;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
ADEN             EQU  H'0003'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'

RX9D2            EQU  H'0000'
OERR2            EQU  H'0001'
FERR2            EQU  H'0002'
ADDEN2           EQU  H'0003'
CREN2            EQU  H'0004'
SREN2            EQU  H'0005'
RX92             EQU  H'0006'
SPEN2            EQU  H'0007'


;----- TXSTA2 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
TX8_9            EQU  H'0006'

NOT_TX8          EQU  H'0006'

TX9D2            EQU  H'0000'
TRMT2            EQU  H'0001'
BRGH2            EQU  H'0002'
SENDB2           EQU  H'0003'
SYNC2            EQU  H'0004'
TXEN2            EQU  H'0005'
TX92             EQU  H'0006'
CSRC2            EQU  H'0007'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'

DCCP5Y           EQU  H'0004'
DCCP5X           EQU  H'0005'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'

DCCP4Y           EQU  H'0004'
DCCP4X           EQU  H'0005'


;----- T4CON Bits -----------------------------------------------------
TMR4ON           EQU  H'0002'

T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
T0CKI            EQU  H'0004'
AN4              EQU  H'0005'
OSC2             EQU  H'0006'

VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
LVDIN            EQU  H'0005'
CLKO             EQU  H'0006'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'

INT0             EQU  H'0000'
INT1             EQU  H'0001'
INT2             EQU  H'0002'
INT3             EQU  H'0003'
KBI0             EQU  H'0004'
KBI1             EQU  H'0005'
KBI2             EQU  H'0006'
KBI3             EQU  H'0007'

CCP2_PORTB       EQU  H'0003'
PGM              EQU  H'0005'
PGC              EQU  H'0006'
PGD              EQU  H'0007'

CCP2A_PORTB      EQU  H'0003'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'

T1OSO            EQU  H'0000'
T1OSI            EQU  H'0001'
CCP1             EQU  H'0002'
SCK              EQU  H'0003'
SDI              EQU  H'0004'
SDO              EQU  H'0005'
TX               EQU  H'0006'
RX               EQU  H'0007'

T13CKI           EQU  H'0000'
CCP2_PORTC       EQU  H'0001'
SCL              EQU  H'0003'
SDA              EQU  H'0004'
CK               EQU  H'0006'
; DT is a reserved word
; DT               EQU  H'0007'

CCP2A_PORTC      EQU  H'0001'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'

PSP0             EQU  H'0000'
PSP1             EQU  H'0001'
PSP2             EQU  H'0002'
PSP3             EQU  H'0003'
PSP4             EQU  H'0004'
PSP5             EQU  H'0005'
PSP6             EQU  H'0006'
PSP7             EQU  H'0007'

AD0              EQU  H'0000'
AD1              EQU  H'0001'
AD2              EQU  H'0002'
AD3              EQU  H'0003'
AD4              EQU  H'0004'
AD5              EQU  H'0005'
AD6              EQU  H'0006'
AD7              EQU  H'0007'

AD00             EQU  H'0000'
AD01             EQU  H'0001'
AD02             EQU  H'0002'
AD03             EQU  H'0003'
AD04             EQU  H'0004'
AD05             EQU  H'0005'
AD06             EQU  H'0006'
AD07             EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'

RD               EQU  H'0000'
WR               EQU  H'0001'
CS               EQU  H'0002'
CCP2_PORTE       EQU  H'0007'

AD8              EQU  H'0000'
AD9              EQU  H'0001'
AD10             EQU  H'0002'
AD11             EQU  H'0003'
AD12             EQU  H'0004'
AD13             EQU  H'0005'
AD14             EQU  H'0006'
AD15             EQU  H'0007'

AD08             EQU  H'0000'
AD09             EQU  H'0001'
CCP2C            EQU  H'0007'


;----- PORTF Bits -----------------------------------------------------
RF0              EQU  H'0000'
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'

AN5              EQU  H'0000'
AN6              EQU  H'0001'
AN7              EQU  H'0002'
AN8              EQU  H'0003'
AN9              EQU  H'0004'
AN10             EQU  H'0005'
AN11             EQU  H'0006'
SS               EQU  H'0007'

C2OUT_PORTF      EQU  H'0001'
C1OUT_PORTF      EQU  H'0002'
CVREF_PORTF      EQU  H'0005'


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'

CCP3             EQU  H'0000'
TX2              EQU  H'0001'
RX2              EQU  H'0002'
CCP4             EQU  H'0003'
CCP5             EQU  H'0004'

CK2              EQU  H'0001'
DT2              EQU  H'0002'


;----- PORTH Bits -----------------------------------------------------
RH0              EQU  H'0000'
RH1              EQU  H'0001'
RH2              EQU  H'0002'
RH3              EQU  H'0003'
RH4              EQU  H'0004'
RH5              EQU  H'0005'
RH6              EQU  H'0006'
RH7              EQU  H'0007'

A16              EQU  H'0000'
A17              EQU  H'0001'
A18              EQU  H'0002'
A19              EQU  H'0003'
AN12             EQU  H'0004'
AN13             EQU  H'0005'
AN14             EQU  H'0006'
AN15             EQU  H'0007'

AD16             EQU  H'0000'
AD17             EQU  H'0001'
AD18             EQU  H'0002'
AD19             EQU  H'0003'


;----- PORTJ Bits -----------------------------------------------------
RJ0              EQU  H'0000'
RJ1              EQU  H'0001'
RJ2              EQU  H'0002'
RJ3              EQU  H'0003'
RJ4              EQU  H'0004'
RJ5              EQU  H'0005'
RJ6              EQU  H'0006'
RJ7              EQU  H'0007'

ALE              EQU  H'0000'
OE               EQU  H'0001'
WRL              EQU  H'0002'
WRH              EQU  H'0003'
BA0              EQU  H'0004'
CE               EQU  H'0005'
LB               EQU  H'0006'
UB               EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'
LATA6            EQU  H'0006'


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
LATE3            EQU  H'0003'
LATE4            EQU  H'0004'
LATE5            EQU  H'0005'
LATE6            EQU  H'0006'
LATE7            EQU  H'0007'


;----- LATF Bits -----------------------------------------------------
LATF0            EQU  H'0000'
LATF1            EQU  H'0001'
LATF2            EQU  H'0002'
LATF3            EQU  H'0003'
LATF4            EQU  H'0004'
LATF5            EQU  H'0005'
LATF6            EQU  H'0006'
LATF7            EQU  H'0007'


;----- LATG Bits -----------------------------------------------------
LATG0            EQU  H'0000'
LATG1            EQU  H'0001'
LATG2            EQU  H'0002'
LATG3            EQU  H'0003'
LATG4            EQU  H'0004'


;----- LATH Bits -----------------------------------------------------
LATH0            EQU  H'0000'
LATH1            EQU  H'0001'
LATH2            EQU  H'0002'
LATH3            EQU  H'0003'
LATH4            EQU  H'0004'
LATH5            EQU  H'0005'
LATH6            EQU  H'0006'
LATH7            EQU  H'0007'


;----- LATJ Bits -----------------------------------------------------
LATJ0            EQU  H'0000'
LATJ1            EQU  H'0001'
LATJ2            EQU  H'0002'
LATJ3            EQU  H'0003'
LATJ4            EQU  H'0004'
LATJ5            EQU  H'0005'
LATJ6            EQU  H'0006'
LATJ7            EQU  H'0007'


;----- DDRA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'


;----- DDRB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'

RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'

RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- DDRC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'

RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'

RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- DDRD Bits -----------------------------------------------------
TRISD0           EQU  H'0000'
TRISD1           EQU  H'0001'
TRISD2           EQU  H'0002'
TRISD3           EQU  H'0003'
TRISD4           EQU  H'0004'
TRISD5           EQU  H'0005'
TRISD6           EQU  H'0006'
TRISD7           EQU  H'0007'

RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'


;----- TRISD Bits -----------------------------------------------------
TRISD0           EQU  H'0000'
TRISD1           EQU  H'0001'
TRISD2           EQU  H'0002'
TRISD3           EQU  H'0003'
TRISD4           EQU  H'0004'
TRISD5           EQU  H'0005'
TRISD6           EQU  H'0006'
TRISD7           EQU  H'0007'

RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'


;----- DDRE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
TRISE3           EQU  H'0003'
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
TRISE3           EQU  H'0003'
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'


;----- DDRF Bits -----------------------------------------------------
TRISF0           EQU  H'0000'
TRISF1           EQU  H'0001'
TRISF2           EQU  H'0002'
TRISF3           EQU  H'0003'
TRISF4           EQU  H'0004'
TRISF5           EQU  H'0005'
TRISF6           EQU  H'0006'
TRISF7           EQU  H'0007'

RF0              EQU  H'0000'
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'


;----- TRISF Bits -----------------------------------------------------
TRISF0           EQU  H'0000'
TRISF1           EQU  H'0001'
TRISF2           EQU  H'0002'
TRISF3           EQU  H'0003'
TRISF4           EQU  H'0004'
TRISF5           EQU  H'0005'
TRISF6           EQU  H'0006'
TRISF7           EQU  H'0007'

RF0              EQU  H'0000'
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'


;----- DDRG Bits -----------------------------------------------------
TRISG0           EQU  H'0000'
TRISG1           EQU  H'0001'
TRISG2           EQU  H'0002'
TRISG3           EQU  H'0003'
TRISG4           EQU  H'0004'

RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'


;----- TRISG Bits -----------------------------------------------------
TRISG0           EQU  H'0000'
TRISG1           EQU  H'0001'
TRISG2           EQU  H'0002'
TRISG3           EQU  H'0003'
TRISG4           EQU  H'0004'

RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'


;----- DDRH Bits -----------------------------------------------------
TRISH0           EQU  H'0000'
TRISH1           EQU  H'0001'
TRISH2           EQU  H'0002'
TRISH3           EQU  H'0003'
TRISH4           EQU  H'0004'
TRISH5           EQU  H'0005'
TRISH6           EQU  H'0006'
TRISH7           EQU  H'0007'

RH0              EQU  H'0000'
RH1              EQU  H'0001'
RH2              EQU  H'0002'
RH3              EQU  H'0003'
RH4              EQU  H'0004'
RH5              EQU  H'0005'
RH6              EQU  H'0006'
RH7              EQU  H'0007'


;----- TRISH Bits -----------------------------------------------------
TRISH0           EQU  H'0000'
TRISH1           EQU  H'0001'
TRISH2           EQU  H'0002'
TRISH3           EQU  H'0003'
TRISH4           EQU  H'0004'
TRISH5           EQU  H'0005'
TRISH6           EQU  H'0006'
TRISH7           EQU  H'0007'

RH0              EQU  H'0000'
RH1              EQU  H'0001'
RH2              EQU  H'0002'
RH3              EQU  H'0003'
RH4              EQU  H'0004'
RH5              EQU  H'0005'
RH6              EQU  H'0006'
RH7              EQU  H'0007'


;----- DDRJ Bits -----------------------------------------------------
TRISJ0           EQU  H'0000'
TRISJ1           EQU  H'0001'
TRISJ2           EQU  H'0002'
TRISJ3           EQU  H'0003'
TRISJ4           EQU  H'0004'
TRISJ5           EQU  H'0005'
TRISJ6           EQU  H'0006'
TRISJ7           EQU  H'0007'

RJ0              EQU  H'0000'
RJ1              EQU  H'0001'
RJ2              EQU  H'0002'
RJ3              EQU  H'0003'
RJ4              EQU  H'0004'
RJ5              EQU  H'0005'
RJ6              EQU  H'0006'
RJ7              EQU  H'0007'


;----- TRISJ Bits -----------------------------------------------------
TRISJ0           EQU  H'0000'
TRISJ1           EQU  H'0001'
TRISJ2           EQU  H'0002'
TRISJ3           EQU  H'0003'
TRISJ4           EQU  H'0004'
TRISJ5           EQU  H'0005'
TRISJ6           EQU  H'0006'
TRISJ7           EQU  H'0007'

RJ0              EQU  H'0000'
RJ1              EQU  H'0001'
RJ2              EQU  H'0002'
RJ3              EQU  H'0003'
RJ4              EQU  H'0004'
RJ5              EQU  H'0005'
RJ6              EQU  H'0006'
RJ7              EQU  H'0007'


;----- MEMCON Bits -----------------------------------------------------
EBDIS            EQU  H'0007'

WM0              EQU  H'0000'
WM1              EQU  H'0001'
WAIT0            EQU  H'0004'
WAIT1            EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
PSPIE            EQU  H'0007'

TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
PSPIF            EQU  H'0007'

TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
CCP1IP           EQU  H'0002'
SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'
ADIP             EQU  H'0006'
PSPIP            EQU  H'0007'

TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMR3IE           EQU  H'0001'
LVDIE            EQU  H'0002'
BCLIE            EQU  H'0003'
EEIE             EQU  H'0004'
CMIE             EQU  H'0006'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR3IF           EQU  H'0001'
LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'
EEIF             EQU  H'0004'
CMIF             EQU  H'0006'


;----- IPR2 Bits -----------------------------------------------------
CCP2IP           EQU  H'0000'
TMR3IP           EQU  H'0001'
LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'
EEIP             EQU  H'0004'
CMIP             EQU  H'0006'


;----- PIE3 Bits -----------------------------------------------------
CCP3IE           EQU  H'0000'
CCP4IE           EQU  H'0001'
CCP5IE           EQU  H'0002'
TMR4IE           EQU  H'0003'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'


;----- PIR3 Bits -----------------------------------------------------
CCP3IF           EQU  H'0000'
CCP4IF           EQU  H'0001'
CCP5IF           EQU  H'0002'
TMR4IF           EQU  H'0003'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'


;----- IPR3 Bits -----------------------------------------------------
CCP3IP           EQU  H'0000'
CCP4IP           EQU  H'0001'
CCP5IP           EQU  H'0002'
TMR4IP           EQU  H'0003'
TX2IP            EQU  H'0004'
RC2IP            EQU  H'0005'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'

EEFS             EQU  H'0006'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
ADEN             EQU  H'0003'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


;----- RCSTA1 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
ADEN             EQU  H'0003'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'

TX8_9            EQU  H'0006'

NOT_TX8          EQU  H'0006'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- TXSTA1 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'

TX8_9            EQU  H'0006'

NOT_TX8          EQU  H'0006'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- PSPCON Bits -----------------------------------------------------
PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
TMR3CS           EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
T3CCP1           EQU  H'0003'
T3CCP2           EQU  H'0006'
RD16             EQU  H'0007'

T3SYNC           EQU  H'0002'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'

T3INSYNC         EQU  H'0002'

T3NSYNC          EQU  H'0002'


;----- CMCON Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT_CMCON      EQU  H'0006'
C2OUT_CMCON      EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- CVRCON Bits -----------------------------------------------------
CVRSS            EQU  H'0004'
CVRR             EQU  H'0005'
CVROE            EQU  H'0006'
CVREN            EQU  H'0007'

CVR0             EQU  H'0000'
CVR1             EQU  H'0001'
CVR2             EQU  H'0002'
CVR3             EQU  H'0003'
CVREF_CVRCON     EQU  H'0004'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'

DCCP3Y           EQU  H'0004'
DCCP3X           EQU  H'0005'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'

DCCP2Y           EQU  H'0004'
DCCP2X           EQU  H'0005'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'

DCCP1Y           EQU  H'0004'
DCCP1X           EQU  H'0005'


;----- ADCON2 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'


;----- ADCON1 Bits -----------------------------------------------------
PCFG0            EQU  H'0000'
PCFG1            EQU  H'0001'
PCFG2            EQU  H'0002'
PCFG3            EQU  H'0003'
VCFG0            EQU  H'0004'
VCFG1            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

DONE             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'

GO_DONE          EQU  H'0001'

GO               EQU  H'0001'

NOT_DONE         EQU  H'0001'

GODONE           EQU  H'0001'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSPCON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

R                EQU  H'0002'
D                EQU  H'0005'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
RD16             EQU  H'0007'

T1SYNC           EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'

T1INSYNC         EQU  H'0002'


;----- RCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_PD           EQU  H'0002'
NOT_TO           EQU  H'0003'
NOT_RI           EQU  H'0004'
IPEN             EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'
NOT_IPEN         EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

SWDTE            EQU  H'0000'


;----- LVDCON Bits -----------------------------------------------------
LVDEN            EQU  H'0004'
IRVST            EQU  H'0005'

LVDL0            EQU  H'0000'
LVDL1            EQU  H'0001'
LVDL2            EQU  H'0002'
LVDL3            EQU  H'0003'

LVV0             EQU  H'0000'
LVV1             EQU  H'0001'
LVV2             EQU  H'0002'
LVV3             EQU  H'0003'
BGST             EQU  H'0005'


;----- OSCCON Bits -----------------------------------------------------
SCS              EQU  H'0000'


;----- T0CON Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
T08BIT           EQU  H'0006'
TMR0ON           EQU  H'0007'

T0PS0            EQU  H'0000'
T0PS1            EQU  H'0001'
T0PS2            EQU  H'0002'


;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
OV               EQU  H'0003'
N                EQU  H'0004'


;----- INTCON3 Bits -----------------------------------------------------
INT1IF           EQU  H'0000'
INT2IF           EQU  H'0001'
INT3IF           EQU  H'0002'
INT1IE           EQU  H'0003'
INT2IE           EQU  H'0004'
INT3IE           EQU  H'0005'
INT1IP           EQU  H'0006'
INT2IP           EQU  H'0007'

INT1F            EQU  H'0000'
INT2F            EQU  H'0001'
INT3F            EQU  H'0002'
INT1E            EQU  H'0003'
INT2E            EQU  H'0004'
INT3E            EQU  H'0005'
INT1P            EQU  H'0006'
INT2P            EQU  H'0007'


;----- INTCON2 Bits -----------------------------------------------------
RBIP             EQU  H'0000'
INT3IP           EQU  H'0001'
TMR0IP           EQU  H'0002'
INTEDG3          EQU  H'0003'
INTEDG2          EQU  H'0004'
INTEDG1          EQU  H'0005'
INTEDG0          EQU  H'0006'
NOT_RBPU         EQU  H'0007'

INT3P            EQU  H'0001'
T0IP             EQU  H'0002'
RBPU             EQU  H'0007'


;----- INTCON Bits -----------------------------------------------------
RBIF             EQU  H'0000'
INT0IF           EQU  H'0001'
TMR0IF           EQU  H'0002'
RBIE             EQU  H'0003'
INT0IE           EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE_GIEL        EQU  H'0006'
GIE_GIEH         EQU  H'0007'

INT0F            EQU  H'0001'
T0IF             EQU  H'0002'
INT0E            EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

GIEL             EQU  H'0006'
GIEH             EQU  H'0007'


;----- INTCON1 Bits -----------------------------------------------------
RBIF             EQU  H'0000'
INT0IF           EQU  H'0001'
TMR0IF           EQU  H'0002'
RBIE             EQU  H'0003'
INT0IE           EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE_GIEL        EQU  H'0006'
GIE_GIEH         EQU  H'0007'

INT0F            EQU  H'0001'
T0IF             EQU  H'0002'
INT0E            EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

GIEL             EQU  H'0006'
GIEH             EQU  H'0007'


;----- STKPTR Bits -----------------------------------------------------
STKUNF           EQU  H'0006'
STKFUL           EQU  H'0007'

STKPTR0          EQU  H'0000'
STKPTR1          EQU  H'0001'
STKPTR2          EQU  H'0002'
STKPTR3          EQU  H'0003'
STKPTR4          EQU  H'0004'
STKOVF           EQU  H'0007'

SP0              EQU  H'0000'
SP1              EQU  H'0001'
SP2              EQU  H'0002'
SP3              EQU  H'0003'
SP4              EQU  H'0004'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'0F00'-H'0F5F'
       __BADRAM  H'0F60'-H'0F6A'
       __BADRAM  H'0F79'-H'0F7F'
       __BADRAM  H'0F9B'
       __BADRAM  H'0FB6'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Oscillator Selection bits:
;     OSC = LP             LP oscillator
;     OSC = XT             XT oscillator
;     OSC = HS             HS oscillator
;     OSC = RC             RC oscillator w/ OSC2 configured as divide-by-4 clock output
;     OSC = EC             EC oscillator w/ OSC2 configured as divide-by-4 clock output
;     OSC = ECIO           EC oscillator w/ OSC2 configured as RA6
;     OSC = HSPLL          HS oscillator with PLL enabled; clock frequency = (4 x FOSC)
;     OSC = RCIO           RC oscillator w/ OSC2 configured as RA6
;
;   Oscillator System Clock Switch Enable bit:
;     OSCS = ON            Timer1 Oscillator system clock switch option is enabled (oscillator switching is enabled)
;     OSCS = OFF           Oscillator system clock switch option is disabled (main oscillator is source)
;
;   Power-up Timer Enable bit:
;     PWRT = ON            PWRT enabled
;     PWRT = OFF           PWRT disabled
;
;   Brown-out Reset Enable bit:
;     BOR = OFF            Brown-out Reset disabled
;     BOR = ON             Brown-out Reset enabled
;
;   Brown-out Reset Voltage bits:
;     BORV = 45            VBOR set to 4.5V
;     BORV = 42            VBOR set to 4.2V
;     BORV = 27            VBOR set to 2.7V
;     BORV = 25            VBOR set to 2.5V
;
;   Watchdog Timer Enable bit:
;     WDT = OFF            WDT disabled (control is placed on the SWDTEN bit)
;     WDT = ON             WDT enabled
;
;   Watchdog Timer Postscale Select bits:
;     WDTPS = 1            1:1
;     WDTPS = 2            1:2
;     WDTPS = 4            1:4
;     WDTPS = 8            1:8
;     WDTPS = 16           1:16
;     WDTPS = 32           1:32
;     WDTPS = 64           1:64
;     WDTPS = 128          1:128
;
;   Processor Mode Select bits:
;     MODE = EM            Extended Microcontroller mode
;     MODE = MPB           Microprocessor with Boot Block mode
;     MODE = MP            Microprocessor mode
;     MODE = MC            Microcontroller mode
;
;   External Bus Data Wait Enable bit:
;     WAIT = ON            Wait selections for table reads and table writes are determined by the WAIT1:WAIT0 bits (MEMCOM<5:4>)
;     WAIT = OFF           Wait selections unavailable for table reads and table writes
;
;   CCP2 Mux bit:
;     CCP2MUX = OFF        CCP2 is multiplexed with RB3 in Extended Microcontroller, Microprocessor or Microprocessor with Boot Block mode. Or with RE7 in Microcontroller mode.
;     CCP2MUX = ON         CCP2 input/output is multiplexed with RC1
;
;   Stack Full/Underflow Reset Enable bit:
;     STVR = OFF           Stack full/underflow will not cause Reset
;     STVR = ON            Stack full/underflow will cause Reset
;
;   Low-Voltage ICSP Enable bit:
;     LVP = OFF            Low-voltage ICSP disabled
;     LVP = ON             Low-voltage ICSP enabled
;
;   Background Debugger Enable bit:
;     DEBUG = ON           Background debugger enabled. RB6 and RB7 are dedicated to In-Circuit Debug.
;     DEBUG = OFF          Background debugger disabled. RB6 and RB7 configured as general purpose I/O pins.
;
;   Code Protection bit:
;     CP0 = ON             Block 0 (000200-003FFFh) code-protected
;     CP0 = OFF            Block 0 (000200-003FFFh) not code-protected
;
;   Code Protection bit:
;     CP1 = ON             Block 1 (004000-007FFFh) code-protected
;     CP1 = OFF            Block 1 (004000-007FFFh) not code-protected
;
;   Code Protection bit:
;     CP2 = ON             Block 2 (008000-00BFFFh) code-protected
;     CP2 = OFF            Block 2 (008000-00BFFFh) not code-protected
;
;   Code Protection bit:
;     CP3 = ON             Block 3 (00C000-00FFFFh) code-protected
;     CP3 = OFF            Block 3 (00C000-00FFFFh) not code-protected
;
;   Code Protection bit:
;     CP4 = ON             Block 4 (010000-013FFFh) code-protected
;     CP4 = OFF            Block 4 (010000-013FFFh) not code-protected
;
;   Code Protection bit:
;     CP5 = ON             Block 5 (014000-017FFFh) code-protected
;     CP5 = OFF            Block 5 (014000-017FFFh) not code-protected
;
;   Code Protection bit:
;     CP6 = ON             Block 6 (018000-01BFFFh) code-protected
;     CP6 = OFF            Block 6 (018000-01BFFFh) not code-protected
;
;   Code Protection bit:
;     CP7 = ON             Block 7 (01C000-01FFFFh) code-protected
;     CP7 = OFF            Block 7 (01C000-01FFFFh) not code-protected
;
;   Boot Block Code Protection bit:
;     CPB = ON             Boot Block (000000-0001FFh) code-protected
;     CPB = OFF            Boot Block (000000-0001FFh) not code-protected
;
;   Data EEPROM Code Protection bit:
;     CPD = ON             Data EEPROM code-protected
;     CPD = OFF            Data EEPROM not code-protected
;
;   Write Protection bit:
;     WRT0 = ON            Block 0 (000200-003FFFh) write-protected
;     WRT0 = OFF           Block 0 (000200-003FFFh) not write-protected
;
;   Write Protection bit:
;     WRT1 = ON            Block 1 (004000-007FFFh) write-protected
;     WRT1 = OFF           Block 1 (004000-007FFFh) not write-protected
;
;   Write Protection bit:
;     WRT2 = ON            Block 2 (008000-00BFFFh) write-protected
;     WRT2 = OFF           Block 2 (008000-00BFFFh) not write-protected
;
;   Write Protection bit:
;     WRT3 = ON            Block 3 (00C000-00FFFFh) write-protected
;     WRT3 = OFF           Block 3 (00C000-00FFFFh) not write-protected
;
;   Write Protection bit:
;     WRT4 = ON            Block 4 (010000-013FFFh) write-protected
;     WRT4 = OFF           Block 4 (010000-013FFFh) not write-protected
;
;   Write Protection bit:
;     WRT5 = ON            Block 5 (014000-017FFFh) write-protected
;     WRT5 = OFF           Block 5 (014000-017FFFh) not write-protected
;
;   Write Protection bit:
;     WRT6 = ON            Block 6 (018000-01BFFFh) write-protected
;     WRT6 = OFF           Block 6 (018000-01BFFFh) not write-protected
;
;   Write Protection bit:
;     WRT7 = ON            Block 7 (01C000-01FFFFh) write-protected
;     WRT7 = OFF           Block 7 (01C000-01FFFFh) not write-protected
;
;   Configuration Register Write Protection bit:
;     WRTC = ON            Configuration registers (300000-3000FFh) write-protected
;     WRTC = OFF           Configuration registers (300000-3000FFh) not write-protected
;
;   Boot Block Write Protection bit:
;     WRTB = ON            Boot Block (000000-0001FFh) write-protected
;     WRTB = OFF           Boot Block (000000-0001FFh) not write-protected
;
;   Data EEPROM Write Protection bit:
;     WRTD = ON            Data EEPROM write-protected
;     WRTD = OFF           Data EEPROM not write-protected
;
;   Table Read Protection bit:
;     EBTR0 = ON           Block 0 (000200-003FFFh) protected from table reads executed in other blocks
;     EBTR0 = OFF          Block 0 (000200-003FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR1 = ON           Block 1 (004000-007FFFh) protected from table reads executed in other blocks
;     EBTR1 = OFF          Block 1 (004000-007FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR2 = ON           Block 2 (008000-00BFFFh) protected from table reads executed in other blocks
;     EBTR2 = OFF          Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR3 = ON           Block 3 (00C000-00FFFFh) protected from table reads executed in other blocks
;     EBTR3 = OFF          Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR4 = ON           Block 4 (010000-013FFFh) protected from table reads executed in other blocks
;     EBTR4 = OFF          Block 4 (010000-013FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR5 = ON           Block 5 (014000-017FFFh) protected from table reads executed in other blocks
;     EBTR5 = OFF          Block 5 (014000-017FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR6 = ON           Block 6 (018000-01BFFFh) protected from table reads executed in other blocks
;     EBTR6 = OFF          Block 6 (018000-01BFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR7 = ON           Block 7 (01C000-01FFFFh) protected from table reads executed in other blocks
;     EBTR7 = OFF          Block 7 (01C000-01FFFFh) not protected from table reads executed in other blocks
;
;   Boot Block Table Read Protection bit:
;     EBTRB = ON           Boot Block (000000-0001FFh) protected from table reads executed in other blocks
;     EBTRB = OFF          Boot Block (000000-0001FFh) not protected from table reads executed in other blocks
;
;==========================================================================
;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1H        300001h
;   CONFIG2L        300002h
;   CONFIG2H        300003h
;   CONFIG3L        300004h
;   CONFIG3H        300005h
;   CONFIG4L        300006h
;   CONFIG5L        300008h
;   CONFIG5H        300009h
;   CONFIG6L        30000Ah
;   CONFIG6H        30000Bh
;   CONFIG7L        30000Ch
;   CONFIG7H        30000Dh
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1H        EQU  H'300001'
_CONFIG2L        EQU  H'300002'
_CONFIG2H        EQU  H'300003'
_CONFIG3L        EQU  H'300004'
_CONFIG3H        EQU  H'300005'
_CONFIG4L        EQU  H'300006'
_CONFIG5L        EQU  H'300008'
_CONFIG5H        EQU  H'300009'
_CONFIG6L        EQU  H'30000A'
_CONFIG6H        EQU  H'30000B'
_CONFIG7L        EQU  H'30000C'
_CONFIG7H        EQU  H'30000D'

;----- CONFIG1H Options --------------------------------------------------
_LP_OSC              EQU  H'F8'    ; LP oscillator
_LP_OSC_1H           EQU  H'F8'    ; LP oscillator
_XT_OSC              EQU  H'F9'    ; XT oscillator
_XT_OSC_1H           EQU  H'F9'    ; XT oscillator
_HS_OSC              EQU  H'FA'    ; HS oscillator
_HS_OSC_1H           EQU  H'FA'    ; HS oscillator
_RC_OSC              EQU  H'FB'    ; RC oscillator w/ OSC2 configured as divide-by-4 clock output
_RC_OSC_1H           EQU  H'FB'    ; RC oscillator w/ OSC2 configured as divide-by-4 clock output
_EC_OSC              EQU  H'FC'    ; EC oscillator w/ OSC2 configured as divide-by-4 clock output
_EC_OSC_1H           EQU  H'FC'    ; EC oscillator w/ OSC2 configured as divide-by-4 clock output
_ECIO_OSC            EQU  H'FD'    ; EC oscillator w/ OSC2 configured as RA6
_ECIO_OSC_1H         EQU  H'FD'    ; EC oscillator w/ OSC2 configured as RA6
_HSPLL_OSC           EQU  H'FE'    ; HS oscillator with PLL enabled; clock frequency = (4 x FOSC)
_HSPLL_OSC_1H        EQU  H'FE'    ; HS oscillator with PLL enabled; clock frequency = (4 x FOSC)
_RCIO_OSC            EQU  H'FF'    ; RC oscillator w/ OSC2 configured as RA6
_RCIO_OSC_1H         EQU  H'FF'    ; RC oscillator w/ OSC2 configured as RA6

_OSCS_ON_1H          EQU  H'DF'    ; Timer1 Oscillator system clock switch option is enabled (oscillator switching is enabled)
_OSCS_OFF_1H         EQU  H'FF'    ; Oscillator system clock switch option is disabled (main oscillator is source)

;----- CONFIG2L Options --------------------------------------------------
_PWRT_ON_2L          EQU  H'FE'    ; PWRT enabled
_PWRT_OFF_2L         EQU  H'FF'    ; PWRT disabled

_BOR_OFF_2L          EQU  H'FD'    ; Brown-out Reset disabled
_BOR_ON_2L           EQU  H'FF'    ; Brown-out Reset enabled

_BORV_45_2L          EQU  H'F3'    ; VBOR set to 4.5V
_BORV_42_2L          EQU  H'F7'    ; VBOR set to 4.2V
_BORV_27_2L          EQU  H'FB'    ; VBOR set to 2.7V
_BORV_20             EQU  H'FF'    ; VBOR set to 2.5V
_BORV_20_2L          EQU  H'FF'    ; VBOR set to 2.5V

;----- CONFIG2H Options --------------------------------------------------
_WDT_OFF_2H          EQU  H'FE'    ; WDT disabled (control is placed on the SWDTEN bit)
_WDT_ON_2H           EQU  H'FF'    ; WDT enabled

_WDTPS_1_2H          EQU  H'F1'    ; 1:1
_WDTPS_2_2H          EQU  H'F3'    ; 1:2
_WDTPS_4_2H          EQU  H'F5'    ; 1:4
_WDTPS_8_2H          EQU  H'F7'    ; 1:8
_WDTPS_16_2H         EQU  H'F9'    ; 1:16
_WDTPS_32_2H         EQU  H'FB'    ; 1:32
_WDTPS_64_2H         EQU  H'FD'    ; 1:64
_WDTPS_128_2H        EQU  H'FF'    ; 1:128

;----- CONFIG3L Options --------------------------------------------------
_XMC_MODE            EQU  H'FC'    ; Extended Microcontroller mode
_XMC_MODE_3L         EQU  H'FC'    ; Extended Microcontroller mode
_MPB_MODE            EQU  H'FD'    ; Microprocessor with Boot Block mode
_MPB_MODE_3L         EQU  H'FD'    ; Microprocessor with Boot Block mode
_MP_MODE             EQU  H'FE'    ; Microprocessor mode
_MP_MODE_3L          EQU  H'FE'    ; Microprocessor mode
_MC_MODE             EQU  H'FF'    ; Microcontroller mode
_MC_MODE_3L          EQU  H'FF'    ; Microcontroller mode

_WAIT_ON_3L          EQU  H'7F'    ; Wait selections for table reads and table writes are determined by the WAIT1:WAIT0 bits (MEMCOM<5:4>)
_WAIT_OFF_3L         EQU  H'FF'    ; Wait selections unavailable for table reads and table writes

;----- CONFIG3H Options --------------------------------------------------
_CCP2MX_OFF          EQU  H'FE'    ; CCP2 is multiplexed with RB3 in Extended Microcontroller, Microprocessor or Microprocessor with Boot Block mode. Or with RE7 in Microcontroller mode.
_CCP2MX_OFF_3H       EQU  H'FE'    ; CCP2 is multiplexed with RB3 in Extended Microcontroller, Microprocessor or Microprocessor with Boot Block mode. Or with RE7 in Microcontroller mode.
_CCP2MX_ON           EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1
_CCP2MX_ON_3H        EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1

;----- CONFIG4L Options --------------------------------------------------
_STVR_OFF_4L         EQU  H'FE'    ; Stack full/underflow will not cause Reset
_STVR_ON_4L          EQU  H'FF'    ; Stack full/underflow will cause Reset

_LVP_OFF_4L          EQU  H'FB'    ; Low-voltage ICSP disabled
_LVP_ON_4L           EQU  H'FF'    ; Low-voltage ICSP enabled

_DEBUG_ON_4L         EQU  H'7F'    ; Background debugger enabled. RB6 and RB7 are dedicated to In-Circuit Debug.
_DEBUG_OFF_4L        EQU  H'FF'    ; Background debugger disabled. RB6 and RB7 configured as general purpose I/O pins.

;----- CONFIG5L Options --------------------------------------------------
_CP0_ON_5L           EQU  H'FE'    ; Block 0 (000200-003FFFh) code-protected
_CP0_OFF_5L          EQU  H'FF'    ; Block 0 (000200-003FFFh) not code-protected

_CP1_ON_5L           EQU  H'FD'    ; Block 1 (004000-007FFFh) code-protected
_CP1_OFF_5L          EQU  H'FF'    ; Block 1 (004000-007FFFh) not code-protected

_CP2_ON_5L           EQU  H'FB'    ; Block 2 (008000-00BFFFh) code-protected
_CP2_OFF_5L          EQU  H'FF'    ; Block 2 (008000-00BFFFh) not code-protected

_CP3_ON_5L           EQU  H'F7'    ; Block 3 (00C000-00FFFFh) code-protected
_CP3_OFF_5L          EQU  H'FF'    ; Block 3 (00C000-00FFFFh) not code-protected

_CP4_ON_5L           EQU  H'EF'    ; Block 4 (010000-013FFFh) code-protected
_CP4_OFF_5L          EQU  H'FF'    ; Block 4 (010000-013FFFh) not code-protected

_CP5_ON_5L           EQU  H'DF'    ; Block 5 (014000-017FFFh) code-protected
_CP5_OFF_5L          EQU  H'FF'    ; Block 5 (014000-017FFFh) not code-protected

_CP6_ON_5L           EQU  H'BF'    ; Block 6 (018000-01BFFFh) code-protected
_CP6_OFF_5L          EQU  H'FF'    ; Block 6 (018000-01BFFFh) not code-protected

_CP7_ON_5L           EQU  H'7F'    ; Block 7 (01C000-01FFFFh) code-protected
_CP7_OFF_5L          EQU  H'FF'    ; Block 7 (01C000-01FFFFh) not code-protected

;----- CONFIG5H Options --------------------------------------------------
_CPB_ON_5H           EQU  H'BF'    ; Boot Block (000000-0001FFh) code-protected
_CPB_OFF_5H          EQU  H'FF'    ; Boot Block (000000-0001FFh) not code-protected

_CPD_ON_5H           EQU  H'7F'    ; Data EEPROM code-protected
_CPD_OFF_5H          EQU  H'FF'    ; Data EEPROM not code-protected

;----- CONFIG6L Options --------------------------------------------------
_WRT0_ON_6L          EQU  H'FE'    ; Block 0 (000200-003FFFh) write-protected
_WRT0_OFF_6L         EQU  H'FF'    ; Block 0 (000200-003FFFh) not write-protected

_WRT1_ON_6L          EQU  H'FD'    ; Block 1 (004000-007FFFh) write-protected
_WRT1_OFF_6L         EQU  H'FF'    ; Block 1 (004000-007FFFh) not write-protected

_WRT2_ON_6L          EQU  H'FB'    ; Block 2 (008000-00BFFFh) write-protected
_WRT2_OFF_6L         EQU  H'FF'    ; Block 2 (008000-00BFFFh) not write-protected

_WRT3_ON_6L          EQU  H'F7'    ; Block 3 (00C000-00FFFFh) write-protected
_WRT3_OFF_6L         EQU  H'FF'    ; Block 3 (00C000-00FFFFh) not write-protected

_WRT4_ON_6L          EQU  H'EF'    ; Block 4 (010000-013FFFh) write-protected
_WRT4_OFF_6L         EQU  H'FF'    ; Block 4 (010000-013FFFh) not write-protected

_WRT5_ON_6L          EQU  H'DF'    ; Block 5 (014000-017FFFh) write-protected
_WRT5_OFF_6L         EQU  H'FF'    ; Block 5 (014000-017FFFh) not write-protected

_WRT6_ON_6L          EQU  H'BF'    ; Block 6 (018000-01BFFFh) write-protected
_WRT6_OFF_6L         EQU  H'FF'    ; Block 6 (018000-01BFFFh) not write-protected

_WRT7_ON_6L          EQU  H'7F'    ; Block 7 (01C000-01FFFFh) write-protected
_WRT7_OFF_6L         EQU  H'FF'    ; Block 7 (01C000-01FFFFh) not write-protected

;----- CONFIG6H Options --------------------------------------------------
_WRTC_ON_6H          EQU  H'DF'    ; Configuration registers (300000-3000FFh) write-protected
_WRTC_OFF_6H         EQU  H'FF'    ; Configuration registers (300000-3000FFh) not write-protected

_WRTB_ON_6H          EQU  H'BF'    ; Boot Block (000000-0001FFh) write-protected
_WRTB_OFF_6H         EQU  H'FF'    ; Boot Block (000000-0001FFh) not write-protected

_WRTD_ON_6H          EQU  H'7F'    ; Data EEPROM write-protected
_WRTD_OFF_6H         EQU  H'FF'    ; Data EEPROM not write-protected

;----- CONFIG7L Options --------------------------------------------------
_EBTR0_ON_7L         EQU  H'FE'    ; Block 0 (000200-003FFFh) protected from table reads executed in other blocks
_EBTR0_OFF_7L        EQU  H'FF'    ; Block 0 (000200-003FFFh) not protected from table reads executed in other blocks

_EBTR1_ON_7L         EQU  H'FD'    ; Block 1 (004000-007FFFh) protected from table reads executed in other blocks
_EBTR1_OFF_7L        EQU  H'FF'    ; Block 1 (004000-007FFFh) not protected from table reads executed in other blocks

_EBTR2_ON_7L         EQU  H'FB'    ; Block 2 (008000-00BFFFh) protected from table reads executed in other blocks
_EBTR2_OFF_7L        EQU  H'FF'    ; Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks

_EBTR3_ON_7L         EQU  H'F7'    ; Block 3 (00C000-00FFFFh) protected from table reads executed in other blocks
_EBTR3_OFF_7L        EQU  H'FF'    ; Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks

_EBTR4_ON_7L         EQU  H'EF'    ; Block 4 (010000-013FFFh) protected from table reads executed in other blocks
_EBTR4_OFF_7L        EQU  H'FF'    ; Block 4 (010000-013FFFh) not protected from table reads executed in other blocks

_EBTR5_ON_7L         EQU  H'DF'    ; Block 5 (014000-017FFFh) protected from table reads executed in other blocks
_EBTR5_OFF_7L        EQU  H'FF'    ; Block 5 (014000-017FFFh) not protected from table reads executed in other blocks

_EBTR6_ON_7L         EQU  H'BF'    ; Block 6 (018000-01BFFFh) protected from table reads executed in other blocks
_EBTR6_OFF_7L        EQU  H'FF'    ; Block 6 (018000-01BFFFh) not protected from table reads executed in other blocks

_EBTR7_ON_7L         EQU  H'7F'    ; Block 7 (01C000-01FFFFh) protected from table reads executed in other blocks
_EBTR7_OFF_7L        EQU  H'FF'    ; Block 7 (01C000-01FFFFh) not protected from table reads executed in other blocks

;----- CONFIG7H Options --------------------------------------------------
_EBTRB_ON_7H         EQU  H'BF'    ; Boot Block (000000-0001FFh) protected from table reads executed in other blocks
_EBTRB_OFF_7H        EQU  H'FF'    ; Boot Block (000000-0001FFh) not protected from table reads executed in other blocks


;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'3FFFFE'
_DEVID2          EQU  H'3FFFFF'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'200000'
_IDLOC1          EQU  H'200001'
_IDLOC2          EQU  H'200002'
_IDLOC3          EQU  H'200003'
_IDLOC4          EQU  H'200004'
_IDLOC5          EQU  H'200005'
_IDLOC6          EQU  H'200006'
_IDLOC7          EQU  H'200007'

        LIST
