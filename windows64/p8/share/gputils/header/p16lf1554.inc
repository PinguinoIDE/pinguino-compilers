        LIST

;==========================================================================
; Build date : Aug 13 2015
;  MPASM PIC16LF1554 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16LF1554 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16LF1554
;       2. LIST directive in the source file
;               LIST   P=PIC16LF1554
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
        IFNDEF __16LF1554
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
PORTC            EQU  H'000E'
PIR1             EQU  H'0011'
PIR2             EQU  H'0012'
TMR0             EQU  H'0015'
TMR1             EQU  H'0016'
TMR1L            EQU  H'0016'
TMR1H            EQU  H'0017'
T1CON            EQU  H'0018'
T1GCON           EQU  H'0019'
TMR2             EQU  H'001A'
PR2              EQU  H'001B'
T2CON            EQU  H'001C'

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISC            EQU  H'008E'
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
ADCON2           EQU  H'009F'

;-----Bank2------------------
LATA             EQU  H'010C'
LATC             EQU  H'010E'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'
APFCON           EQU  H'011D'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELC           EQU  H'018E'
PMADR            EQU  H'0191'
PMADRL           EQU  H'0191'
PMADRH           EQU  H'0192'
PMDAT            EQU  H'0193'
PMDATL           EQU  H'0193'
PMDATH           EQU  H'0194'
PMCON1           EQU  H'0195'
PMCON2           EQU  H'0196'
RCREG            EQU  H'0199'
TXREG            EQU  H'019A'
SPBRG            EQU  H'019B'
SPBRGL           EQU  H'019B'
SPBRGH           EQU  H'019C'
RCSTA            EQU  H'019D'
TXSTA            EQU  H'019E'
BAUDCON          EQU  H'019F'

;-----Bank4------------------
WPUA             EQU  H'020C'
SSP1BUF          EQU  H'0211'
SSPBUF           EQU  H'0211'
SSP1ADD          EQU  H'0212'
SSPADD           EQU  H'0212'
SSP1MSK          EQU  H'0213'
SSPMSK           EQU  H'0213'
SSP1STAT         EQU  H'0214'
SSPSTAT          EQU  H'0214'
SSP1CON1         EQU  H'0215'
SSPCON           EQU  H'0215'
SSPCON1          EQU  H'0215'
SSP1CON2         EQU  H'0216'
SSPCON2          EQU  H'0216'
SSP1CON3         EQU  H'0217'
SSPCON3          EQU  H'0217'

;-----Bank7------------------
IOCAP            EQU  H'0391'
IOCAN            EQU  H'0392'
IOCAF            EQU  H'0393'

;-----Bank12------------------
PWM1DCL          EQU  H'0611'
PWM1DCH          EQU  H'0612'
PWM1CON          EQU  H'0613'
PWM1CON0         EQU  H'0613'
PWM2DCL          EQU  H'0614'
PWM2DCH          EQU  H'0615'
PWM2CON          EQU  H'0616'
PWM2CON0         EQU  H'0616'

;-----Bank14------------------
AAD1CON0         EQU  H'0711'
AADCON0          EQU  H'0711'
AD1CON0          EQU  H'0711'
AADCON1          EQU  H'0712'
ADCOMCON         EQU  H'0712'
AAD1CON2         EQU  H'0713'
AADCON2          EQU  H'0713'
AD1CON2          EQU  H'0713'
AAD1CON3         EQU  H'0714'
AADCON3          EQU  H'0714'
AD1CON3          EQU  H'0714'
AADSTAT          EQU  H'0715'
ADSTAT           EQU  H'0715'
AAD1PRE          EQU  H'0716'
AADPRE           EQU  H'0716'
AD1PRE           EQU  H'0716'
AD1PRECON        EQU  H'0716'
AAD1ACQ          EQU  H'0717'
AADACQ           EQU  H'0717'
AD1ACQ           EQU  H'0717'
AD1ACQCON        EQU  H'0717'
AAD1GRD          EQU  H'0718'
AADGRD           EQU  H'0718'
AD1GRD           EQU  H'0718'
AAD1CAP          EQU  H'0719'
AAD1CAPCON       EQU  H'0719'
AADCAP           EQU  H'0719'
AD1CAPCON        EQU  H'0719'
AAD1RES0         EQU  H'071A'
AAD1RES0L        EQU  H'071A'
AD1RES0          EQU  H'071A'
AD1RES0L         EQU  H'071A'
ADRES0           EQU  H'071A'
AAD1RES0H        EQU  H'071B'
AD1RES0H         EQU  H'071B'
AAD1RES1         EQU  H'071C'
AAD1RES1L        EQU  H'071C'
AD1RES1          EQU  H'071C'
AD1RES1L         EQU  H'071C'
ADRES1           EQU  H'071C'
AAD1RES1H        EQU  H'071D'
AD1RES1H         EQU  H'071D'
AAD1CH           EQU  H'071E'
AD1CH            EQU  H'071E'

;-----Bank15------------------
AAD2CON0         EQU  H'0791'
AD2CON0          EQU  H'0791'
AAD2CON2         EQU  H'0793'
AD2CON2          EQU  H'0793'
AAD2CON3         EQU  H'0794'
AD2CON3          EQU  H'0794'
AAD2PRE          EQU  H'0796'
AD2PRE           EQU  H'0796'
AD2PRECON        EQU  H'0796'
AAD2ACQ          EQU  H'0797'
AD2ACQ           EQU  H'0797'
AD2ACQCON        EQU  H'0797'
AAD2GRD          EQU  H'0798'
AD2GRD           EQU  H'0798'
AAD2CAP          EQU  H'0799'
AAD2CAPCON       EQU  H'0799'
AD2CAPCON        EQU  H'0799'
AAD2RES0         EQU  H'079A'
AAD2RES0L        EQU  H'079A'
AD2RES0          EQU  H'079A'
AD2RES0L         EQU  H'079A'
AAD2RES0H        EQU  H'079B'
AD2RES0H         EQU  H'079B'
AAD2RES1         EQU  H'079C'
AAD2RES1L        EQU  H'079C'
AD2RES1          EQU  H'079C'
AD2RES1L         EQU  H'079C'
AAD2RES1H        EQU  H'079D'
AD2RES1H         EQU  H'079D'
AAD2CH           EQU  H'079E'
AD2CH            EQU  H'079E'

;-----Bank31------------------
ICDIO            EQU  H'0F8C'
ICDCON0          EQU  H'0F8D'
ICDSTAT          EQU  H'0F91'
ICDINSTL         EQU  H'0F96'
ICDINSTH         EQU  H'0F97'
ICDBK0CON        EQU  H'0F9C'
ICDBK0L          EQU  H'0F9D'
ICDBK0H          EQU  H'0F9E'
BSRICDSHAD       EQU  H'0FE3'
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


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
SSP1IF           EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'

AD1IF            EQU  H'0006'


;----- PIR2 Bits -----------------------------------------------------
BCL1IF           EQU  H'0003'
AD2IF            EQU  H'0006'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
GO_T1GCON        EQU  H'0003'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
SSP1IE           EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'

AD1IE            EQU  H'0006'


;----- PIE2 Bits -----------------------------------------------------
BCL1IE           EQU  H'0003'
AD2IE            EQU  H'0006'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
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
SPLLEN           EQU  H'0007'

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
PLLSR            EQU  H'0006'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

AD1ON            EQU  H'0000'
ADGO             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_ADCON0        EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
GO_NOT_DONE_ALL  EQU  H'0002'
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
GO_ALL           EQU  H'0002'


;----- ADCON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'

ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
CDAFVR0          EQU  H'0002'
CDAFVR1          EQU  H'0003'


;----- APFCON Bits -----------------------------------------------------
GRDASEL          EQU  H'0000'
GRDBSEL          EQU  H'0001'
TXCKSEL          EQU  H'0002'
SDSEL            EQU  H'0004'
SSSEL            EQU  H'0005'
SDOSEL           EQU  H'0006'
RXDTSEL          EQU  H'0007'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'
ANSA5            EQU  H'0005'



;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'
ANSC4            EQU  H'0004'
ANSC5            EQU  H'0005'



;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'



;----- SSP1STAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSP1CON1 Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSPCON Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSPCON1 Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSP1CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSP1CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- SSPCON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'



;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'



;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'



;----- PWM1DCL Bits -----------------------------------------------------
PWM1DCL0         EQU  H'0006'
PWM1DCL1         EQU  H'0007'


;----- PWM1DCH Bits -----------------------------------------------------
PWM1DCH0         EQU  H'0000'
PWM1DCH1         EQU  H'0001'
PWM1DCH2         EQU  H'0002'
PWM1DCH3         EQU  H'0003'
PWM1DCH4         EQU  H'0004'
PWM1DCH5         EQU  H'0005'
PWM1DCH6         EQU  H'0006'
PWM1DCH7         EQU  H'0007'


;----- PWM1CON Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM1CON0 Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM2DCL Bits -----------------------------------------------------
PWM2DCL0         EQU  H'0006'
PWM2DCL1         EQU  H'0007'


;----- PWM2DCH Bits -----------------------------------------------------
PWM2DCH0         EQU  H'0000'
PWM2DCH1         EQU  H'0001'
PWM2DCH2         EQU  H'0002'
PWM2DCH3         EQU  H'0003'
PWM2DCH4         EQU  H'0004'
PWM2DCH5         EQU  H'0005'
PWM2DCH6         EQU  H'0006'
PWM2DCH7         EQU  H'0007'


;----- PWM2CON Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- PWM2CON0 Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- AAD1CON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_AAD1CON0      EQU  H'0001'

GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_NOT_DONE1     EQU  H'0001'


;----- AADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_AADCON0       EQU  H'0001'

GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_NOT_DONE1     EQU  H'0001'


;----- AD1CON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_AD1CON0       EQU  H'0001'

GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_NOT_DONE1     EQU  H'0001'


;----- AADCON1 Bits -----------------------------------------------------
GO_NOT_DONE_ALL  EQU  H'0002'
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
GO_ALL           EQU  H'0002'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- ADCOMCON Bits -----------------------------------------------------
GO_NOT_DONE_ALL  EQU  H'0002'
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
GO_ALL           EQU  H'0002'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- AAD1CON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- AADCON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- AD1CON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- AAD1CON3 Bits -----------------------------------------------------
AD1DSEN          EQU  H'0000'
AD1IPEN          EQU  H'0001'
AD1IPPOL         EQU  H'0006'
AD1EPPOL         EQU  H'0007'

ADDSEN           EQU  H'0000'
ADIPEN           EQU  H'0001'
ADIPPOL          EQU  H'0006'
ADEPPOL          EQU  H'0007'


;----- AADCON3 Bits -----------------------------------------------------
AD1DSEN          EQU  H'0000'
AD1IPEN          EQU  H'0001'
AD1IPPOL         EQU  H'0006'
AD1EPPOL         EQU  H'0007'

ADDSEN           EQU  H'0000'
ADIPEN           EQU  H'0001'
ADIPPOL          EQU  H'0006'
ADEPPOL          EQU  H'0007'


;----- AD1CON3 Bits -----------------------------------------------------
AD1DSEN          EQU  H'0000'
AD1IPEN          EQU  H'0001'
AD1IPPOL         EQU  H'0006'
AD1EPPOL         EQU  H'0007'

ADDSEN           EQU  H'0000'
ADIPEN           EQU  H'0001'
ADIPPOL          EQU  H'0006'
ADEPPOL          EQU  H'0007'


;----- AADSTAT Bits -----------------------------------------------------
AD1CONV          EQU  H'0002'
AD2CONV          EQU  H'0006'

ADCONV           EQU  H'0002'

AD1STG0          EQU  H'0000'
AD1STG1          EQU  H'0001'
AD2STG0          EQU  H'0004'
AD2STG1          EQU  H'0005'


;----- ADSTAT Bits -----------------------------------------------------
AD1CONV          EQU  H'0002'
AD2CONV          EQU  H'0006'

ADCONV           EQU  H'0002'

AD1STG0          EQU  H'0000'
AD1STG1          EQU  H'0001'
AD2STG0          EQU  H'0004'
AD2STG1          EQU  H'0005'


;----- AAD1PRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AADPRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AD1PRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AD1PRECON Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AAD1ACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AADACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AD1ACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AD1ACQCON Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AAD1GRD Bits -----------------------------------------------------
GRD1POL          EQU  H'0005'
GRD1AOE          EQU  H'0006'
GRD1BOE          EQU  H'0007'

GRDPOL           EQU  H'0005'
GRDAOE           EQU  H'0006'
GRDBOE           EQU  H'0007'


;----- AADGRD Bits -----------------------------------------------------
GRD1POL          EQU  H'0005'
GRD1AOE          EQU  H'0006'
GRD1BOE          EQU  H'0007'

GRDPOL           EQU  H'0005'
GRDAOE           EQU  H'0006'
GRDBOE           EQU  H'0007'


;----- AD1GRD Bits -----------------------------------------------------
GRD1POL          EQU  H'0005'
GRD1AOE          EQU  H'0006'
GRD1BOE          EQU  H'0007'

GRDPOL           EQU  H'0005'
GRDAOE           EQU  H'0006'
GRDBOE           EQU  H'0007'


;----- AAD1CAP Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AAD1CAPCON Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AADCAP Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AD1CAPCON Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AAD1CH Bits -----------------------------------------------------
CH10             EQU  H'0000'
CH11             EQU  H'0001'
CH12             EQU  H'0002'
CH13             EQU  H'0003'


;----- AD1CH Bits -----------------------------------------------------
CH10             EQU  H'0000'
CH11             EQU  H'0001'
CH12             EQU  H'0002'
CH13             EQU  H'0003'


;----- AAD2CON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_AAD2CON0      EQU  H'0001'

GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_NOT_DONE2     EQU  H'0001'


;----- AD2CON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_AD2CON0       EQU  H'0001'

GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_NOT_DONE2     EQU  H'0001'


;----- AAD2CON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- AD2CON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'


;----- AAD2CON3 Bits -----------------------------------------------------
AD2DSEN          EQU  H'0000'
AD2IPEN          EQU  H'0001'
AD2IPPOL         EQU  H'0006'
AD2EPPOL         EQU  H'0007'

ADDSEN           EQU  H'0000'
ADIPEN           EQU  H'0001'
ADIPPOL          EQU  H'0006'
ADEPPOL          EQU  H'0007'


;----- AD2CON3 Bits -----------------------------------------------------
AD2DSEN          EQU  H'0000'
AD2IPEN          EQU  H'0001'
AD2IPPOL         EQU  H'0006'
AD2EPPOL         EQU  H'0007'

ADDSEN           EQU  H'0000'
ADIPEN           EQU  H'0001'
ADIPPOL          EQU  H'0006'
ADEPPOL          EQU  H'0007'


;----- AAD2PRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AD2PRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AD2PRECON Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'


;----- AAD2ACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AD2ACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AD2ACQCON Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'


;----- AAD2GRD Bits -----------------------------------------------------
GRD2POL          EQU  H'0005'
GRD2AOE          EQU  H'0006'
GRD2BOE          EQU  H'0007'

GRDPOL           EQU  H'0005'
GRDAOE           EQU  H'0006'
GRDBOE           EQU  H'0007'


;----- AD2GRD Bits -----------------------------------------------------
GRD2POL          EQU  H'0005'
GRD2AOE          EQU  H'0006'
GRD2BOE          EQU  H'0007'

GRDPOL           EQU  H'0005'
GRDAOE           EQU  H'0006'
GRDBOE           EQU  H'0007'


;----- AAD2CAP Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AAD2CAPCON Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AD2CAPCON Bits -----------------------------------------------------
ADDCAP0          EQU  H'0000'
ADDCAP1          EQU  H'0001'
ADDCAP2          EQU  H'0002'
ADDCAP3          EQU  H'0003'



;----- AAD2CH Bits -----------------------------------------------------
CH20             EQU  H'0000'
CH21             EQU  H'0001'
CH22             EQU  H'0002'
CH23             EQU  H'0003'


;----- AD2CH Bits -----------------------------------------------------
CH20             EQU  H'0000'
CH21             EQU  H'0001'
CH22             EQU  H'0002'
CH23             EQU  H'0003'


;----- ICDIO Bits -----------------------------------------------------
TRIS_ICDCLK      EQU  H'0002'
TRIS_ICDDAT      EQU  H'0003'
LAT_ICDCLK       EQU  H'0004'
LAT_ICDDAT       EQU  H'0005'
PORT_ICDCLK      EQU  H'0006'
PORT_ICDDAT      EQU  H'0007'


;----- ICDCON0 Bits -----------------------------------------------------
RSTVEC           EQU  H'0000'
DBGINEX          EQU  H'0003'
SSTEP            EQU  H'0005'
FREEZ            EQU  H'0006'
INBUG            EQU  H'0007'


;----- ICDSTAT Bits -----------------------------------------------------
USRHLTF          EQU  H'0001'
TRP0HLTF         EQU  H'0006'
TRP1HLTF         EQU  H'0007'


;----- ICDINSTL Bits -----------------------------------------------------
DBGIN0           EQU  H'0000'
DBGIN1           EQU  H'0001'
DBGIN2           EQU  H'0002'
DBGIN3           EQU  H'0003'
DBGIN4           EQU  H'0004'
DBGIN5           EQU  H'0005'
DBGIN6           EQU  H'0006'
DBGIN7           EQU  H'0007'


;----- ICDINSTH Bits -----------------------------------------------------
DBGIN8           EQU  H'0000'
DBGIN9           EQU  H'0001'
DBGIN10          EQU  H'0002'
DBGIN11          EQU  H'0003'
DBGIN12          EQU  H'0004'
DBGIN13          EQU  H'0005'


;----- ICDBK0CON Bits -----------------------------------------------------
BKHLT            EQU  H'0000'
BKEN             EQU  H'0007'


;----- ICDBK0L Bits -----------------------------------------------------
BKA0             EQU  H'0000'
BKA1             EQU  H'0001'
BKA2             EQU  H'0002'
BKA3             EQU  H'0003'
BKA4             EQU  H'0004'
BKA5             EQU  H'0005'
BKA6             EQU  H'0006'
BKA7             EQU  H'0007'


;----- ICDBK0H Bits -----------------------------------------------------
BKA8             EQU  H'0000'
BKA9             EQU  H'0001'
BKA10            EQU  H'0002'
BKA11            EQU  H'0003'
BKA12            EQU  H'0004'
BKA13            EQU  H'0005'
BKA14            EQU  H'0006'


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
       __BADRAM  H'000D'
       __BADRAM  H'000F'
       __BADRAM  H'0010'
       __BADRAM  H'0013'
       __BADRAM  H'0014'
       __BADRAM  H'001D'-H'001F'
       __BADRAM  H'008D'
       __BADRAM  H'008F'
       __BADRAM  H'0090'
       __BADRAM  H'0093'-H'0094'
       __BADRAM  H'0098'
       __BADRAM  H'010D'
       __BADRAM  H'010F'-H'0115'
       __BADRAM  H'0118'-H'011C'
       __BADRAM  H'011E'-H'011F'
       __BADRAM  H'018D'
       __BADRAM  H'018F'-H'0190'
       __BADRAM  H'0197'
       __BADRAM  H'0198'
       __BADRAM  H'01A0'-H'01EF'
       __BADRAM  H'020D'-H'0210'
       __BADRAM  H'0218'-H'021F'
       __BADRAM  H'0220'-H'026F'
       __BADRAM  H'028C'-H'029F'
       __BADRAM  H'02A0'-H'02EF'
       __BADRAM  H'030C'-H'031F'
       __BADRAM  H'0320'-H'036F'
       __BADRAM  H'038C'-H'0390'
       __BADRAM  H'0394'-H'039F'
       __BADRAM  H'03A0'-H'03EF'
       __BADRAM  H'040C'-H'041F'
       __BADRAM  H'0420'-H'046F'
       __BADRAM  H'048C'-H'049F'
       __BADRAM  H'04A0'-H'04EF'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'0520'-H'056F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'05A0'-H'05EF'
       __BADRAM  H'060C'-H'0610'
       __BADRAM  H'0617'-H'061F'
       __BADRAM  H'0620'-H'066F'
       __BADRAM  H'068C'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'0710'
       __BADRAM  H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'0790'
       __BADRAM  H'0792'
       __BADRAM  H'0795'
       __BADRAM  H'079F'
       __BADRAM  H'07A0'-H'07EF'
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
       __BADRAM  H'0F8E'-H'0F90'
       __BADRAM  H'0F92'-H'0F95'
       __BADRAM  H'0F98'-H'0F9B'
       __BADRAM  H'0F9F'
       __BADRAM  H'0FA0'-H'0FBF'
       __BADRAM  H'0FC0'-H'0FCF'
       __BADRAM  H'0FD0'-H'0FE2'
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
_FOSC_ECL        EQU  H'3FFD'    ; ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
_FOSC_ECM        EQU  H'3FFE'    ; ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
_FOSC_ECH        EQU  H'3FFF'    ; ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins

_WDTE_OFF        EQU  H'3FE7'    ; WDT disabled. SWDTEN bit is ignored.
_WDTE_SWDTEN     EQU  H'3FEF'    ; WDT controlled by the SWDTEN bit in the WDTCON register
_WDTE_NSLEEP     EQU  H'3FF7'    ; WDT enabled while running and disabled in Sleep. SWDTEN bit is ignored.
_WDTE_ON         EQU  H'3FFF'    ; WDT enabled. SWDTEN bit is ignored.

_PWRTE_ON        EQU  H'3FDF'    ; PWRT enabled
_PWRTE_OFF       EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF       EQU  H'3FBF'    ; MCLR/VPP pin function is digital input
_MCLRE_ON        EQU  H'3FFF'    ; MCLR/VPP pin function is MCLR

_CP_ON           EQU  H'3F7F'    ; Program memory code protection is enabled
_CP_OFF          EQU  H'3FFF'    ; Program memory code protection is disabled

_BOREN_OFF       EQU  H'39FF'    ; Brown-out Reset disabled. SBOREN bit is ignored.
_BOREN_SBODEN    EQU  H'3BFF'    ; Brown-out Reset controlled by the SBOREN bit in the BORCON register
_BOREN_NSLEEP    EQU  H'3DFF'    ; Brown-out Reset enabled while running and disabled in Sleep. SBOREN bit is ignored.
_BOREN_ON        EQU  H'3FFF'    ; Brown-out Reset enabled

_CLKOUTEN_ON     EQU  H'37FF'    ; CLKOUT function is enabled on the CLKOUT pin
_CLKOUTEN_OFF    EQU  H'3FFF'    ; CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin

;----- CONFIG2 Options --------------------------------------------------
_WRT_ALL         EQU  H'3FFC'    ; 000h to FFFh write protected, no addresses may be modified by PMCON control
_WRT_HALF        EQU  H'3FFD'    ; 000h to 7FFh write protected, 800h to FFFh may be modified by PMCON control
_WRT_BOOT        EQU  H'3FFE'    ; 000h to 1FFh write protected, 200h to FFFh may be modified by PMCON control
_WRT_OFF         EQU  H'3FFF'    ; Write protection off

_STVREN_OFF      EQU  H'3DFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'3FFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'3BFF'    ; Brown-out Reset Voltage (Vbor), 2.7V trip point selected.
_BORV_LO         EQU  H'3FFF'    ; Brown-out Reset Voltage (Vbor), 1.9V trip point selected.

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
