        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18LF4320 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18LF4320 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18LF4320
;       2. LIST directive in the source file
;               LIST   P=PIC18LF4320
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18LF4320
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
PORTA            EQU  H'0F80'
PORTB            EQU  H'0F81'
PORTC            EQU  H'0F82'
PORTD            EQU  H'0F83'
PORTE            EQU  H'0F84'
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
LATD             EQU  H'0F8C'
LATE             EQU  H'0F8D'
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
OSCTUN2          EQU  H'0F9A'
OSCTUNE          EQU  H'0F9B'
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
EECON1           EQU  H'0FA6'
EECON2           EQU  H'0FA7'
EEDATA           EQU  H'0FA8'
EEADR            EQU  H'0FA9'
RCSTA            EQU  H'0FAB'
TXSTA            EQU  H'0FAC'
TXREG            EQU  H'0FAD'
RCREG            EQU  H'0FAE'
SPBRG            EQU  H'0FAF'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
CMCON            EQU  H'0FB4'
CVRCON           EQU  H'0FB5'
ECCPAS           EQU  H'0FB6'
PWM1CON          EQU  H'0FB7'
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

;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
T0CKI            EQU  H'0004'
AN4              EQU  H'0005'
CLKO             EQU  H'0006'
CLKI             EQU  H'0007'

VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
SS               EQU  H'0005'
OSC2             EQU  H'0006'
OSC1             EQU  H'0007'

CVREF            EQU  H'0002'
NOT_SS           EQU  H'0005'

LVDIN            EQU  H'0005'

C1OUT_PORTA      EQU  H'0004'
C2OUT_PORTA      EQU  H'0005'


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
CCP2_PORTB       EQU  H'0003'
KBI0             EQU  H'0004'
KBI1             EQU  H'0005'
KBI2             EQU  H'0006'
KBI3             EQU  H'0007'

AN12             EQU  H'0000'
AN10             EQU  H'0001'
AN8              EQU  H'0002'
AN9              EQU  H'0003'
AN11             EQU  H'0004'
PGM              EQU  H'0005'
PGC              EQU  H'0006'
PGD              EQU  H'0007'

CCP2A            EQU  H'0003'


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
P1A              EQU  H'0002'
SCL              EQU  H'0003'
SDA              EQU  H'0004'
CK               EQU  H'0006'
; DT is a reserved word
; DT               EQU  H'0007'

T1CKI            EQU  H'0000'


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

P1B              EQU  H'0005'
P1C              EQU  H'0006'
P1D              EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'

RD               EQU  H'0000'
WR               EQU  H'0001'
CS               EQU  H'0002'
MCLR             EQU  H'0003'

NOT_RD           EQU  H'0000'
NOT_WR           EQU  H'0001'
NOT_CS           EQU  H'0002'

AN5              EQU  H'0000'
AN6              EQU  H'0001'
AN7              EQU  H'0002'


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


;----- DDRA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'
TRISA7           EQU  H'0007'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'
TRISA7           EQU  H'0007'

RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'


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
PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
PSPMODE          EQU  H'0004'
IBOV             EQU  H'0005'
OBF              EQU  H'0006'
IBF              EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'


;----- OSCTUN2 Bits -----------------------------------------------------
TUNSEL           EQU  H'0007'

TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
PSPIE            EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
PSPIF            EQU  H'0007'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
CCP1IP           EQU  H'0002'
SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'
ADIP             EQU  H'0006'
PSPIP            EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMR3IE           EQU  H'0001'
LVDIE            EQU  H'0002'
BCLIE            EQU  H'0003'
EEIE             EQU  H'0004'
CMIE             EQU  H'0006'
OSCFIE           EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR3IF           EQU  H'0001'
LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'
EEIF             EQU  H'0004'
CMIF             EQU  H'0006'
OSCFIF           EQU  H'0007'


;----- IPR2 Bits -----------------------------------------------------
CCP2IP           EQU  H'0000'
TMR3IP           EQU  H'0001'
LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'
EEIP             EQU  H'0004'
CMIP             EQU  H'0006'
OSCFIP           EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


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
CVRR             EQU  H'0005'
CVROE            EQU  H'0006'
CVREN            EQU  H'0007'

CVR0             EQU  H'0000'
CVR1             EQU  H'0001'
CVR2             EQU  H'0002'
CVR3             EQU  H'0003'


;----- ECCPAS Bits -----------------------------------------------------
ECCPASE          EQU  H'0007'

PSSBD0           EQU  H'0000'
PSSBD1           EQU  H'0001'
PSSAC0           EQU  H'0002'
PSSAC1           EQU  H'0003'
ECCPAS0          EQU  H'0004'
ECCPAS1          EQU  H'0005'
ECCPAS2          EQU  H'0006'


;----- PWM1CON Bits -----------------------------------------------------
PRSEN            EQU  H'0007'

PDC0             EQU  H'0000'
PDC1             EQU  H'0001'
PDC2             EQU  H'0002'
PDC3             EQU  H'0003'
PDC4             EQU  H'0004'
PDC5             EQU  H'0005'
PDC6             EQU  H'0006'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'

DCP2Y            EQU  H'0004'
DCP2X            EQU  H'0005'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'

DCP1Y            EQU  H'0004'
DCP1X            EQU  H'0005'


;----- ADCON2 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ACQT0            EQU  H'0003'
ACQT1            EQU  H'0004'
ACQT2            EQU  H'0005'


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

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'

DONE             EQU  H'0001'

NOT_DONE         EQU  H'0001'

GO_DONE          EQU  H'0001'


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

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DATA         EQU  H'0005'

R                EQU  H'0002'
D                EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

I2C_DAT          EQU  H'0005'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
T1RUN            EQU  H'0006'
RD16             EQU  H'0007'

T1SYNC           EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


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
IVRST            EQU  H'0005'


;----- OSCCON Bits -----------------------------------------------------
SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IOFS             EQU  H'0002'
OSTS             EQU  H'0003'
IDLEN            EQU  H'0007'

SCS              EQU  H'0000'
FLTS             EQU  H'0002'
IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'
IRCF2            EQU  H'0006'


;----- T0CON Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
T08BIT           EQU  H'0006'
TMR0ON           EQU  H'0007'

T0PS0            EQU  H'0000'
T0PS1            EQU  H'0001'
T0PS2            EQU  H'0002'
T0PS3            EQU  H'0003'
T016BIT          EQU  H'0006'


;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
OV               EQU  H'0003'
N                EQU  H'0004'


;----- INTCON3 Bits -----------------------------------------------------
INT1IF           EQU  H'0000'
INT2IF           EQU  H'0001'
INT1IE           EQU  H'0003'
INT2IE           EQU  H'0004'
INT1IP           EQU  H'0006'
INT2IP           EQU  H'0007'

INT1F            EQU  H'0000'
INT2F            EQU  H'0001'
INT1E            EQU  H'0003'
INT2E            EQU  H'0004'
INT1P            EQU  H'0006'
INT2P            EQU  H'0007'


;----- INTCON2 Bits -----------------------------------------------------
RBIP             EQU  H'0000'
TMR0IP           EQU  H'0002'
INTEDG2          EQU  H'0004'
INTEDG1          EQU  H'0005'
INTEDG0          EQU  H'0006'
NOT_RBPU         EQU  H'0007'

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

INTF             EQU  H'0001'
INTE             EQU  H'0004'
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
       __BADRAM  H'0200'-H'0F7F'
       __BADRAM  H'0F85'-H'0F88'
       __BADRAM  H'0F8E'-H'0F91'
       __BADRAM  H'0F97'-H'0F99'
       __BADRAM  H'0F9C'
       __BADRAM  H'0FA3'-H'0FA5'
       __BADRAM  H'0FAA'
       __BADRAM  H'0FB0'
       __BADRAM  H'0FB8'-H'0FB9'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Oscillator Selection bits:
;     OSC = LP             LP Oscillator
;     OSC = XT             XT Oscillator
;     OSC = HS             HS Oscillator
;     OSC = EC             EC oscillator, CLKO function on RA6
;     OSC = ECIO           EC oscillator, port function on RA6
;     OSC = HSPLL          HS oscillator, PLL enabled (clock frequency = 4 x FOSC1)
;     OSC = RCIO           External RC oscillator, port function on RA6
;     OSC = INTIO2         Internal RC oscillator, port function on RA6 and port function on RA7
;     OSC = INTIO1         Internal RC oscillator, CLKO function on RA6 and port function on RA7
;     OSC = RC             External RC oscillator, CLKO function on RA6
;
;   Fail-Safe Clock Monitor Enable bit:
;     FSCM = OFF           Fail-Safe Clock Monitor disabled
;     FSCM = ON            Fail-Safe Clock Monitor enabled
;
;   Internal/External Switchover bit:
;     IESO = OFF           Internal/External Switchover mode disabled
;     IESO = ON            Internal/External Switchover mode enabled
;
;   Power-up Timer enable bit:
;     PWRT = ON            PWRT enabled
;     PWRT = OFF           PWRT disabled
;
;   Brown-out Reset enable bit:
;     BOR = OFF            Brown-out Reset disabled
;     BOR = ON             Brown-out Reset enabled
;
;   Brown-out Reset Voltage bits:
;     BORV = 45            VBOR set to 4.5V
;     BORV = 42            VBOR set to 4.2V
;     BORV = 27            VBOR set to 2.7V
;     BORV = 20            VBOR set to 2.0V
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
;     WDTPS = 256          1:256
;     WDTPS = 512          1:512
;     WDTPS = 1024         1:1024
;     WDTPS = 2048         1:2048
;     WDTPS = 4096         1:4096
;     WDTPS = 8192         1:8192
;     WDTPS = 16384        1:16384
;     WDTPS = 32768        1:32768
;
;   CCP2 MUX bit:
;     CCP2MX = OFF         CCP2 input/output is multiplexed with RB3
;     CCP2MX = ON          CCP2 input/output is multiplexed with RC1
;
;   PORTB A/D Enable bit:
;     PBAD = DIG           PORTB<4:0> pins are configured as digital I/O on Reset
;     PBAD = ANA           PORTB<4:0> pins are configured as analog input channels on Reset
;
;   MCLR Pin Enable bit:
;     MCLRE = OFF          MCLR disabled; RE3 input is enabled in 40-pin devices only (PIC18F4X20)
;     MCLRE = ON           MCLR pin enabled; RE3 input pin disabled
;
;   Stack Full/Underflow Reset Enable bit:
;     STVR = OFF           Stack full/underflow will not cause Reset
;     STVR = ON            Stack full/underflow will cause Reset
;
;   Single-Supply ICSP Enable bit:
;     LVP = OFF            Single-Supply ICSP disabled
;     LVP = ON             Single-Supply ICSP enabled
;
;   Background Debugger Enable bit:
;     DEBUG = ON           Background debugger enabled, RB6 and RB7 are dedicated to In-Circuit Debug
;     DEBUG = OFF          Background debugger disabled, RB6 and RB7 configured as general purpose I/O pins
;
;   Code Protection bit:
;     CP0 = ON             Block 0 (000200-0007FFh) code-protected
;     CP0 = OFF            Block 0 (000200-0007FFh) not code-protected
;
;   Code Protection bit:
;     CP1 = ON             Block 1 (000800-000FFFh) code-protected
;     CP1 = OFF            Block 1 (000800-000FFFh) not code-protected
;
;   Code Protection bit:
;     CP2 = ON             Block 2 (001000-0017FFh) code-protected
;     CP2 = OFF            Block 2 (001000-0017FFh) not code-protected
;
;   Code Protection bit:
;     CP3 = ON             Block 3 (001800-001FFFh) code-protected
;     CP3 = OFF            Block 3 (001800-001FFFh) not code-protected
;
;   Boot Block Code Protection bit:
;     CPB = ON             Boot block (000000-0001FFh) is code-protected
;     CPB = OFF            Boot block (000000-0001FFh) is not code-protected
;
;   Data EEPROM Code Protection bit:
;     CPD = ON             Data EEPROM is code-protected
;     CPD = OFF            Data EEPROM is not code-protected
;
;   Write Protection bit:
;     WRT0 = ON            Block 0 (000200-0007FFh) write-protected
;     WRT0 = OFF           Block 0 (000200-0007FFh) not write-protected
;
;   Write Protection bit:
;     WRT1 = ON            Block 1 (000800-000FFFh) write-protected
;     WRT1 = OFF           Block 1 (000800-000FFFh) not write-protected
;
;   Write Protection bit:
;     WRT2 = ON            Block 2 (001000-0017FFh) write-protected
;     WRT2 = OFF           Block 2 (001000-0017FFh) not write-protected
;
;   Write Protection bit:
;     WRT3 = ON            Block 3 (001800-001FFFh) write-protected
;     WRT3 = OFF           Block 3 (001800-001FFFh) not write-protected
;
;   Configuration Register Write Protection bit:
;     WRTC = ON            Configuration registers (300000-3000FFh) are write-protected
;     WRTC = OFF           Configuration registers (300000-3000FFh) are not write-protected
;
;   Boot Block Write Protection bit:
;     WRTB = ON            Boot block (000000-0001FFh) is write-protected
;     WRTB = OFF           Boot block (000000-0001FFh) is not write-protected
;
;   Data EEPROM Write Protection bit:
;     WRTD = ON            Data EEPROM is write-protected
;     WRTD = OFF           Data EEPROM is not write-protected
;
;   Table Read Protection bit:
;     EBTR0 = ON           Block 0 (000200-0007FFh) protected from table reads executed in other blocks
;     EBTR0 = OFF          Block 0 (000200-0007FFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR1 = ON           Block 1 (000800-000FFFh) protected from table reads executed in other blocks
;     EBTR1 = OFF          Block 1 (000800-000FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR2 = ON           Block 2 (001000-0017FFh) protected from table reads executed in other blocks
;     EBTR2 = OFF          Block 2 (001000-0017FFh) not protected from table reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR3 = ON           Block 3 (001800-001FFFh) protected from table reads executed in other blocks
;     EBTR3 = OFF          Block 3 (001800-001FFFh) not protected from table reads executed in other blocks
;
;   Boot Block Table Read Protection bit:
;     EBTRB = ON           Boot block (000000-0001FFh) is protected from table reads executed in other blocks
;     EBTRB = OFF          Boot block (000000-0001FFh) is not protected from table reads executed in other blocks
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
_CONFIG3H        EQU  H'300005'
_CONFIG4L        EQU  H'300006'
_CONFIG5L        EQU  H'300008'
_CONFIG5H        EQU  H'300009'
_CONFIG6L        EQU  H'30000A'
_CONFIG6H        EQU  H'30000B'
_CONFIG7L        EQU  H'30000C'
_CONFIG7H        EQU  H'30000D'

;----- CONFIG1H Options --------------------------------------------------
_LP_OSC              EQU  H'F0'    ; LP Oscillator
_LP_OSC_1H           EQU  H'F0'    ; LP Oscillator
_XT_OSC              EQU  H'F1'    ; XT Oscillator
_XT_OSC_1H           EQU  H'F1'    ; XT Oscillator
_HS_OSC              EQU  H'F2'    ; HS Oscillator
_HS_OSC_1H           EQU  H'F2'    ; HS Oscillator
_EC_OSC              EQU  H'F4'    ; EC oscillator, CLKO function on RA6
_EC_OSC_1H           EQU  H'F4'    ; EC oscillator, CLKO function on RA6
_ECIOP_OSC           EQU  H'F5'    ; EC oscillator, port function on RA6
_ECIO_OSC_1H         EQU  H'F5'    ; EC oscillator, port function on RA6
_ECIOP_OSC_1H        EQU  H'F5'    ; EC oscillator, port function on RA6
_HSPLL_OSC           EQU  H'F6'    ; HS oscillator, PLL enabled (clock frequency = 4 x FOSC1)
_HSPLL_OSC_1H        EQU  H'F6'    ; HS oscillator, PLL enabled (clock frequency = 4 x FOSC1)
_RCIO_OSC            EQU  H'F7'    ; External RC oscillator, port function on RA6
_RCIO_OSC_1H         EQU  H'F7'    ; External RC oscillator, port function on RA6
_INTIO2_OSC          EQU  H'F8'    ; Internal RC oscillator, port function on RA6 and port function on RA7
_INTIO2_OSC_1H       EQU  H'F8'    ; Internal RC oscillator, port function on RA6 and port function on RA7
_INTIO1_OSC          EQU  H'F9'    ; Internal RC oscillator, CLKO function on RA6 and port function on RA7
_INTIO1_OSC_1H       EQU  H'F9'    ; Internal RC oscillator, CLKO function on RA6 and port function on RA7
_RC_OSC              EQU  H'FC'    ; External RC oscillator, CLKO function on RA6
_RC_OSC_1H           EQU  H'FC'    ; External RC oscillator, CLKO function on RA6

_FSCM_OFF_1H         EQU  H'BF'    ; Fail-Safe Clock Monitor disabled
_FSCM_ON_1H          EQU  H'FF'    ; Fail-Safe Clock Monitor enabled

_IESO_OFF_1H         EQU  H'7F'    ; Internal/External Switchover mode disabled
_IESO_ON_1H          EQU  H'FF'    ; Internal/External Switchover mode enabled

;----- CONFIG2L Options --------------------------------------------------
_PWRT_ON_2L          EQU  H'FE'    ; PWRT enabled
_PWRT_OFF_2L         EQU  H'FF'    ; PWRT disabled

_BOR_OFF_2L          EQU  H'FD'    ; Brown-out Reset disabled
_BOR_ON_2L           EQU  H'FF'    ; Brown-out Reset enabled

_BORV_45_2L          EQU  H'F3'    ; VBOR set to 4.5V
_BORV_42_2L          EQU  H'F7'    ; VBOR set to 4.2V
_BORV_27_2L          EQU  H'FB'    ; VBOR set to 2.7V
_BORV_20_2L          EQU  H'FF'    ; VBOR set to 2.0V

;----- CONFIG2H Options --------------------------------------------------
_WDT_OFF_2H          EQU  H'FE'    ; WDT disabled (control is placed on the SWDTEN bit)
_WDT_ON_2H           EQU  H'FF'    ; WDT enabled

_WDTPS_1_2H          EQU  H'E1'    ; 1:1
_WDTPS_2_2H          EQU  H'E3'    ; 1:2
_WDTPS_4_2H          EQU  H'E5'    ; 1:4
_WDTPS_8_2H          EQU  H'E7'    ; 1:8
_WDTPS_16_2H         EQU  H'E9'    ; 1:16
_WDTPS_32_2H         EQU  H'EB'    ; 1:32
_WDTPS_64_2H         EQU  H'ED'    ; 1:64
_WDTPS_128_2H        EQU  H'EF'    ; 1:128
_WDTPS_256_2H        EQU  H'F1'    ; 1:256
_WDTPS_512_2H        EQU  H'F3'    ; 1:512
_1K                  EQU  H'F5'    ; 1:1024
_WDTPS_1K_2H         EQU  H'F5'    ; 1:1024
_2K                  EQU  H'F7'    ; 1:2048
_WDTPS_2K_2H         EQU  H'F7'    ; 1:2048
_4K                  EQU  H'F9'    ; 1:4096
_WDTPS_4K_2H         EQU  H'F9'    ; 1:4096
_8K                  EQU  H'FB'    ; 1:8192
_WDTPS_8K_2H         EQU  H'FB'    ; 1:8192
_16K                 EQU  H'FD'    ; 1:16384
_WDTPS_16K_2H        EQU  H'FD'    ; 1:16384
_32K                 EQU  H'FF'    ; 1:32768
_WDTPS_32K_2H        EQU  H'FF'    ; 1:32768

;----- CONFIG3H Options --------------------------------------------------
_CCP2MX_OFF          EQU  H'FE'    ; CCP2 input/output is multiplexed with RB3
_CCP2MX_OFF_3H       EQU  H'FE'    ; CCP2 input/output is multiplexed with RB3
_CCP2MX_B3           EQU  H'FE'    ; CCP2 input/output is multiplexed with RB3
_CCP2MX_B3_3H        EQU  H'FE'    ; CCP2 input/output is multiplexed with RB3
_CCP2MX_ON           EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1
_CCP2MX_ON_3H        EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1
_CCP2MX_C1           EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1
_CCP2MX_C1_3H        EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1

_PBAD_DIG_3H         EQU  H'FD'    ; PORTB<4:0> pins are configured as digital I/O on Reset
_PBAD_ANA_3H         EQU  H'FF'    ; PORTB<4:0> pins are configured as analog input channels on Reset

_MCLRE_OFF_3H        EQU  H'7F'    ; MCLR disabled; RE3 input is enabled in 40-pin devices only (PIC18F4X20)
_MCLRE_ON_3H         EQU  H'FF'    ; MCLR pin enabled; RE3 input pin disabled

;----- CONFIG4L Options --------------------------------------------------
_STVR_OFF_4L         EQU  H'FE'    ; Stack full/underflow will not cause Reset
_STVR_ON_4L          EQU  H'FF'    ; Stack full/underflow will cause Reset

_LVP_OFF_4L          EQU  H'FB'    ; Single-Supply ICSP disabled
_LVP_ON_4L           EQU  H'FF'    ; Single-Supply ICSP enabled

_DEBUG_ON_4L         EQU  H'7F'    ; Background debugger enabled, RB6 and RB7 are dedicated to In-Circuit Debug
_DEBUG_OFF_4L        EQU  H'FF'    ; Background debugger disabled, RB6 and RB7 configured as general purpose I/O pins

;----- CONFIG5L Options --------------------------------------------------
_CP0_ON_5L           EQU  H'FE'    ; Block 0 (000200-0007FFh) code-protected
_CP0_OFF_5L          EQU  H'FF'    ; Block 0 (000200-0007FFh) not code-protected

_CP1_ON_5L           EQU  H'FD'    ; Block 1 (000800-000FFFh) code-protected
_CP1_OFF_5L          EQU  H'FF'    ; Block 1 (000800-000FFFh) not code-protected

_CP2_ON_5L           EQU  H'FB'    ; Block 2 (001000-0017FFh) code-protected
_CP2_OFF_5L          EQU  H'FF'    ; Block 2 (001000-0017FFh) not code-protected

_CP3_ON_5L           EQU  H'F7'    ; Block 3 (001800-001FFFh) code-protected
_CP3_OFF_5L          EQU  H'FF'    ; Block 3 (001800-001FFFh) not code-protected

;----- CONFIG5H Options --------------------------------------------------
_CPB_ON_5H           EQU  H'BF'    ; Boot block (000000-0001FFh) is code-protected
_CPB_OFF_5H          EQU  H'FF'    ; Boot block (000000-0001FFh) is not code-protected

_CPD_ON_5H           EQU  H'7F'    ; Data EEPROM is code-protected
_CPD_OFF_5H          EQU  H'FF'    ; Data EEPROM is not code-protected

;----- CONFIG6L Options --------------------------------------------------
_WRT0_ON_6L          EQU  H'FE'    ; Block 0 (000200-0007FFh) write-protected
_WRT0_OFF_6L         EQU  H'FF'    ; Block 0 (000200-0007FFh) not write-protected

_WRT1_ON_6L          EQU  H'FD'    ; Block 1 (000800-000FFFh) write-protected
_WRT1_OFF_6L         EQU  H'FF'    ; Block 1 (000800-000FFFh) not write-protected

_WRT2_ON_6L          EQU  H'FB'    ; Block 2 (001000-0017FFh) write-protected
_WRT2_OFF_6L         EQU  H'FF'    ; Block 2 (001000-0017FFh) not write-protected

_WRT3_ON_6L          EQU  H'F7'    ; Block 3 (001800-001FFFh) write-protected
_WRT3_OFF_6L         EQU  H'FF'    ; Block 3 (001800-001FFFh) not write-protected

;----- CONFIG6H Options --------------------------------------------------
_WRTC_ON_6H          EQU  H'DF'    ; Configuration registers (300000-3000FFh) are write-protected
_WRTC_OFF_6H         EQU  H'FF'    ; Configuration registers (300000-3000FFh) are not write-protected

_WRTB_ON_6H          EQU  H'BF'    ; Boot block (000000-0001FFh) is write-protected
_WRTB_OFF_6H         EQU  H'FF'    ; Boot block (000000-0001FFh) is not write-protected

_WRTD_ON_6H          EQU  H'7F'    ; Data EEPROM is write-protected
_WRTD_OFF_6H         EQU  H'FF'    ; Data EEPROM is not write-protected

;----- CONFIG7L Options --------------------------------------------------
_EBTR0_ON_7L         EQU  H'FE'    ; Block 0 (000200-0007FFh) protected from table reads executed in other blocks
_EBTR0_OFF_7L        EQU  H'FF'    ; Block 0 (000200-0007FFh) not protected from table reads executed in other blocks

_EBTR1_ON_7L         EQU  H'FD'    ; Block 1 (000800-000FFFh) protected from table reads executed in other blocks
_EBTR1_OFF_7L        EQU  H'FF'    ; Block 1 (000800-000FFFh) not protected from table reads executed in other blocks

_EBTR2_ON_7L         EQU  H'FB'    ; Block 2 (001000-0017FFh) protected from table reads executed in other blocks
_EBTR2_OFF_7L        EQU  H'FF'    ; Block 2 (001000-0017FFh) not protected from table reads executed in other blocks

_EBTR3_ON_7L         EQU  H'F7'    ; Block 3 (001800-001FFFh) protected from table reads executed in other blocks
_EBTR3_OFF_7L        EQU  H'FF'    ; Block 3 (001800-001FFFh) not protected from table reads executed in other blocks

;----- CONFIG7H Options --------------------------------------------------
_EBTRB_ON_7H         EQU  H'BF'    ; Boot block (000000-0001FFh) is protected from table reads executed in other blocks
_EBTRB_OFF_7H        EQU  H'FF'    ; Boot block (000000-0001FFh) is not protected from table reads executed in other blocks


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
