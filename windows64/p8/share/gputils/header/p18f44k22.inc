        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18F44K22 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18F44K22 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18F44K22
;       2. LIST directive in the source file
;               LIST   P=PIC18F44K22
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18F44K22
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
ANSELA           EQU  H'0F38'
ANSELB           EQU  H'0F39'
ANSELC           EQU  H'0F3A'
ANSELD           EQU  H'0F3B'
ANSELE           EQU  H'0F3C'
PMD2             EQU  H'0F3D'
PMD1             EQU  H'0F3E'
PMD0             EQU  H'0F3F'
DACCON1          EQU  H'0F40'
VREFCON2         EQU  H'0F40'
DACCON0          EQU  H'0F41'
VREFCON1         EQU  H'0F41'
FVRCON           EQU  H'0F42'
VREFCON0         EQU  H'0F42'
CTMUICON         EQU  H'0F43'
CTMUICONH        EQU  H'0F43'
CTMUCON1         EQU  H'0F44'
CTMUCONL         EQU  H'0F44'
CTMUCON0         EQU  H'0F45'
CTMUCONH         EQU  H'0F45'
SRCON1           EQU  H'0F46'
SRCON0           EQU  H'0F47'
CCPTMRS1         EQU  H'0F48'
CCPTMRS0         EQU  H'0F49'
T6CON            EQU  H'0F4A'
PR6              EQU  H'0F4B'
TMR6             EQU  H'0F4C'
T5GCON           EQU  H'0F4D'
T5CON            EQU  H'0F4E'
TMR5             EQU  H'0F4F'
TMR5L            EQU  H'0F4F'
TMR5H            EQU  H'0F50'
T4CON            EQU  H'0F51'
PR4              EQU  H'0F52'
TMR4             EQU  H'0F53'
CCP5CON          EQU  H'0F54'
CCPR5            EQU  H'0F55'
CCPR5L           EQU  H'0F55'
CCPR5H           EQU  H'0F56'
CCP4CON          EQU  H'0F57'
CCPR4            EQU  H'0F58'
CCPR4L           EQU  H'0F58'
CCPR4H           EQU  H'0F59'
PSTR3CON         EQU  H'0F5A'
CCP3AS           EQU  H'0F5B'
ECCP3AS          EQU  H'0F5B'
PWM3CON          EQU  H'0F5C'
CCP3CON          EQU  H'0F5D'
CCPR3            EQU  H'0F5E'
CCPR3L           EQU  H'0F5E'
CCPR3H           EQU  H'0F5F'
SLRCON           EQU  H'0F60'
WPUB             EQU  H'0F61'
IOCB             EQU  H'0F62'
PSTR2CON         EQU  H'0F63'
CCP2AS           EQU  H'0F64'
ECCP2AS          EQU  H'0F64'
PWM2CON          EQU  H'0F65'
CCP2CON          EQU  H'0F66'
CCPR2            EQU  H'0F67'
CCPR2L           EQU  H'0F67'
CCPR2H           EQU  H'0F68'
SSP2CON3         EQU  H'0F69'
SSP2MSK          EQU  H'0F6A'
SSP2CON2         EQU  H'0F6B'
SSP2CON1         EQU  H'0F6C'
SSP2STAT         EQU  H'0F6D'
SSP2ADD          EQU  H'0F6E'
SSP2BUF          EQU  H'0F6F'
BAUD2CON         EQU  H'0F70'
BAUDCON2         EQU  H'0F70'
RC2STA           EQU  H'0F71'
RCSTA2           EQU  H'0F71'
TX2STA           EQU  H'0F72'
TXSTA2           EQU  H'0F72'
TX2REG           EQU  H'0F73'
TXREG2           EQU  H'0F73'
RC2REG           EQU  H'0F74'
RCREG2           EQU  H'0F74'
SP2BRG           EQU  H'0F75'
SPBRG2           EQU  H'0F75'
SP2BRGH          EQU  H'0F76'
SPBRGH2          EQU  H'0F76'
CM12CON          EQU  H'0F77'
CM2CON1          EQU  H'0F77'
CM2CON           EQU  H'0F78'
CM2CON0          EQU  H'0F78'
CM1CON           EQU  H'0F79'
CM1CON0          EQU  H'0F79'
PIE4             EQU  H'0F7A'
PIR4             EQU  H'0F7B'
IPR4             EQU  H'0F7C'
PIE5             EQU  H'0F7D'
PIR5             EQU  H'0F7E'
IPR5             EQU  H'0F7F'
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
OSCTUNE          EQU  H'0F9B'
HLVDCON          EQU  H'0F9C'
LVDCON           EQU  H'0F9C'
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
RC1STA           EQU  H'0FAB'
RCSTA            EQU  H'0FAB'
RCSTA1           EQU  H'0FAB'
TX1STA           EQU  H'0FAC'
TXSTA            EQU  H'0FAC'
TXSTA1           EQU  H'0FAC'
TX1REG           EQU  H'0FAD'
TXREG            EQU  H'0FAD'
TXREG1           EQU  H'0FAD'
RC1REG           EQU  H'0FAE'
RCREG            EQU  H'0FAE'
RCREG1           EQU  H'0FAE'
SP1BRG           EQU  H'0FAF'
SPBRG            EQU  H'0FAF'
SPBRG1           EQU  H'0FAF'
SP1BRGH          EQU  H'0FB0'
SPBRGH           EQU  H'0FB0'
SPBRGH1          EQU  H'0FB0'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
T3GCON           EQU  H'0FB4'
ECCP1AS          EQU  H'0FB6'
ECCPAS           EQU  H'0FB6'
PWM1CON          EQU  H'0FB7'
PWMCON           EQU  H'0FB7'
BAUD1CON         EQU  H'0FB8'
BAUDCON          EQU  H'0FB8'
BAUDCON1         EQU  H'0FB8'
BAUDCTL          EQU  H'0FB8'
PSTR1CON         EQU  H'0FB9'
PSTRCON          EQU  H'0FB9'
T2CON            EQU  H'0FBA'
PR2              EQU  H'0FBB'
TMR2             EQU  H'0FBC'
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
SSP1CON2         EQU  H'0FC5'
SSPCON2          EQU  H'0FC5'
SSP1CON1         EQU  H'0FC6'
SSPCON1          EQU  H'0FC6'
SSP1STAT         EQU  H'0FC7'
SSPSTAT          EQU  H'0FC7'
SSP1ADD          EQU  H'0FC8'
SSPADD           EQU  H'0FC8'
SSP1BUF          EQU  H'0FC9'
SSPBUF           EQU  H'0FC9'
SSP1MSK          EQU  H'0FCA'
SSPMSK           EQU  H'0FCA'
SSP1CON3         EQU  H'0FCB'
SSPCON3          EQU  H'0FCB'
T1GCON           EQU  H'0FCC'
T1CON            EQU  H'0FCD'
TMR1             EQU  H'0FCE'
TMR1L            EQU  H'0FCE'
TMR1H            EQU  H'0FCF'
RCON             EQU  H'0FD0'
WDTCON           EQU  H'0FD1'
OSCCON2          EQU  H'0FD2'
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


;----- ANSELC Bits -----------------------------------------------------
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'
ANSC4            EQU  H'0004'
ANSC5            EQU  H'0005'
ANSC6            EQU  H'0006'
ANSC7            EQU  H'0007'


;----- ANSELD Bits -----------------------------------------------------
ANSD0            EQU  H'0000'
ANSD1            EQU  H'0001'
ANSD2            EQU  H'0002'
ANSD3            EQU  H'0003'
ANSD4            EQU  H'0004'
ANSD5            EQU  H'0005'
ANSD6            EQU  H'0006'
ANSD7            EQU  H'0007'


;----- ANSELE Bits -----------------------------------------------------
ANSE0            EQU  H'0000'
ANSE1            EQU  H'0001'
ANSE2            EQU  H'0002'


;----- PMD2 Bits -----------------------------------------------------
ADCMD            EQU  H'0000'
CMP1MD           EQU  H'0001'
CMP2MD           EQU  H'0002'
CTMUMD           EQU  H'0003'


;----- PMD1 Bits -----------------------------------------------------
CCP1MD           EQU  H'0000'
CCP2MD           EQU  H'0001'
CCP3MD           EQU  H'0002'
CCP4MD           EQU  H'0003'
CCP5MD           EQU  H'0004'
MSSP1MD          EQU  H'0006'
MSSP2MD          EQU  H'0007'


;----- PMD0 Bits -----------------------------------------------------
TMR1MD           EQU  H'0000'
TMR2MD           EQU  H'0001'
TMR3MD           EQU  H'0002'
TMR4MD           EQU  H'0003'
TMR5MD           EQU  H'0004'
TMR6MD           EQU  H'0005'
UART1MD          EQU  H'0006'
UART2MD          EQU  H'0007'


;----- DACCON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'


;----- VREFCON2 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'


;----- DACCON0 Bits -----------------------------------------------------
DACNSS           EQU  H'0000'
DACOE            EQU  H'0005'
DACLPS           EQU  H'0006'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'


;----- VREFCON1 Bits -----------------------------------------------------
DACNSS           EQU  H'0000'
DACOE            EQU  H'0005'
DACLPS           EQU  H'0006'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'


;----- FVRCON Bits -----------------------------------------------------
FVRST            EQU  H'0006'
FVREN            EQU  H'0007'

FVRS0            EQU  H'0004'
FVRS1            EQU  H'0005'


;----- VREFCON0 Bits -----------------------------------------------------
FVRST            EQU  H'0006'
FVREN            EQU  H'0007'

FVRS0            EQU  H'0004'
FVRS1            EQU  H'0005'


;----- CTMUICON Bits -----------------------------------------------------
IRNG0            EQU  H'0000'
IRNG1            EQU  H'0001'
ITRIM0           EQU  H'0002'
ITRIM1           EQU  H'0003'
ITRIM2           EQU  H'0004'
ITRIM3           EQU  H'0005'
ITRIM4           EQU  H'0006'
ITRIM5           EQU  H'0007'


;----- CTMUICONH Bits -----------------------------------------------------
IRNG0            EQU  H'0000'
IRNG1            EQU  H'0001'
ITRIM0           EQU  H'0002'
ITRIM1           EQU  H'0003'
ITRIM2           EQU  H'0004'
ITRIM3           EQU  H'0005'
ITRIM4           EQU  H'0006'
ITRIM5           EQU  H'0007'


;----- CTMUCON1 Bits -----------------------------------------------------
EDG1STAT         EQU  H'0000'
EDG2STAT         EQU  H'0001'
EDG1POL          EQU  H'0004'
EDG2POL          EQU  H'0007'

EDG1SEL0         EQU  H'0002'
EDG1SEL1         EQU  H'0003'
EDG2SEL0         EQU  H'0005'
EDG2SEL1         EQU  H'0006'


;----- CTMUCONL Bits -----------------------------------------------------
EDG1STAT         EQU  H'0000'
EDG2STAT         EQU  H'0001'
EDG1POL          EQU  H'0004'
EDG2POL          EQU  H'0007'

EDG1SEL0         EQU  H'0002'
EDG1SEL1         EQU  H'0003'
EDG2SEL0         EQU  H'0005'
EDG2SEL1         EQU  H'0006'


;----- CTMUCON0 Bits -----------------------------------------------------
CTTRIG           EQU  H'0000'
IDISSEN          EQU  H'0001'
EDGSEQEN         EQU  H'0002'
EDGEN            EQU  H'0003'
TGEN             EQU  H'0004'
CTMUSIDL         EQU  H'0005'
CTMUEN           EQU  H'0007'


;----- CTMUCONH Bits -----------------------------------------------------
CTTRIG           EQU  H'0000'
IDISSEN          EQU  H'0001'
EDGSEQEN         EQU  H'0002'
EDGEN            EQU  H'0003'
TGEN             EQU  H'0004'
CTMUSIDL         EQU  H'0005'
CTMUEN           EQU  H'0007'


;----- SRCON1 Bits -----------------------------------------------------
SRRC1E           EQU  H'0000'
SRRC2E           EQU  H'0001'
SRRCKE           EQU  H'0002'
SRRPE            EQU  H'0003'
SRSC1E           EQU  H'0004'
SRSC2E           EQU  H'0005'
SRSCKE           EQU  H'0006'
SRSPE            EQU  H'0007'


;----- SRCON0 Bits -----------------------------------------------------
SRPR             EQU  H'0000'
SRPS             EQU  H'0001'
SRNQEN           EQU  H'0002'
SRQEN            EQU  H'0003'
SRLEN            EQU  H'0007'

SRCLK0           EQU  H'0004'
SRCLK1           EQU  H'0005'
SRCLK2           EQU  H'0006'


;----- CCPTMRS1 Bits -----------------------------------------------------
C4TSEL0          EQU  H'0000'
C4TSEL1          EQU  H'0001'
C5TSEL0          EQU  H'0002'
C5TSEL1          EQU  H'0003'


;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0003'
C2TSEL1          EQU  H'0004'
C3TSEL0          EQU  H'0006'
C3TSEL1          EQU  H'0007'


;----- T6CON Bits -----------------------------------------------------
TMR6ON           EQU  H'0002'

T6CKPS0          EQU  H'0000'
T6CKPS1          EQU  H'0001'
T6OUTPS0         EQU  H'0003'
T6OUTPS1         EQU  H'0004'
T6OUTPS2         EQU  H'0005'
T6OUTPS3         EQU  H'0006'


;----- T5GCON Bits -----------------------------------------------------
T5GVAL           EQU  H'0002'
T5GGO_NOT_DONE   EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
TMR5GE           EQU  H'0007'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GGO            EQU  H'0003'

T5G_DONE         EQU  H'0003'


;----- T5CON Bits -----------------------------------------------------
TMR5ON           EQU  H'0000'
T5RD16           EQU  H'0001'
NOT_T5SYNC       EQU  H'0002'
T5SOSCEN         EQU  H'0003'

T5SYNC           EQU  H'0002'
T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- T4CON Bits -----------------------------------------------------
TMR4ON           EQU  H'0002'

T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'


;----- PSTR3CON Bits -----------------------------------------------------
STR3A            EQU  H'0000'
STR3B            EQU  H'0001'
STR3C            EQU  H'0002'
STR3D            EQU  H'0003'
STR3SYNC         EQU  H'0004'


;----- CCP3AS Bits -----------------------------------------------------
CCP3ASE          EQU  H'0007'

P3SSBD0          EQU  H'0000'
P3SSBD1          EQU  H'0001'
P3SSAC0          EQU  H'0002'
P3SSAC1          EQU  H'0003'
CCP3AS0          EQU  H'0004'
CCP3AS1          EQU  H'0005'
CCP3AS2          EQU  H'0006'


PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'


;----- ECCP3AS Bits -----------------------------------------------------
CCP3ASE          EQU  H'0007'

P3SSBD0          EQU  H'0000'
P3SSBD1          EQU  H'0001'
P3SSAC0          EQU  H'0002'
P3SSAC1          EQU  H'0003'
CCP3AS0          EQU  H'0004'
CCP3AS1          EQU  H'0005'
CCP3AS2          EQU  H'0006'


PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'


;----- PWM3CON Bits -----------------------------------------------------
P3RSEN           EQU  H'0007'

P3DC0            EQU  H'0000'
P3DC1            EQU  H'0001'
P3DC2            EQU  H'0002'
P3DC3            EQU  H'0003'
P3DC4            EQU  H'0004'
P3DC5            EQU  H'0005'
P3DC6            EQU  H'0006'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'
P3M0             EQU  H'0006'
P3M1             EQU  H'0007'


;----- SLRCON Bits -----------------------------------------------------
SLRA             EQU  H'0000'
SLRB             EQU  H'0001'
SLRC             EQU  H'0002'
SLRD             EQU  H'0003'
SLRE             EQU  H'0004'


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
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'


;----- PSTR2CON Bits -----------------------------------------------------
STR2A            EQU  H'0000'
STR2B            EQU  H'0001'
STR2C            EQU  H'0002'
STR2D            EQU  H'0003'
STR2SYNC         EQU  H'0004'


;----- CCP2AS Bits -----------------------------------------------------
CCP2ASE          EQU  H'0007'

P2SSBD0          EQU  H'0000'
P2SSBD1          EQU  H'0001'
P2SSAC0          EQU  H'0002'
P2SSAC1          EQU  H'0003'
CCP2AS0          EQU  H'0004'
CCP2AS1          EQU  H'0005'
CCP2AS2          EQU  H'0006'


PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'


;----- ECCP2AS Bits -----------------------------------------------------
CCP2ASE          EQU  H'0007'

P2SSBD0          EQU  H'0000'
P2SSBD1          EQU  H'0001'
P2SSAC0          EQU  H'0002'
P2SSAC1          EQU  H'0003'
CCP2AS0          EQU  H'0004'
CCP2AS1          EQU  H'0005'
CCP2AS2          EQU  H'0006'


PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'


;----- PWM2CON Bits -----------------------------------------------------
P2RSEN           EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'


;----- SSP2CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- SSP2MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSP2CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSP2CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSP2STAT Bits -----------------------------------------------------
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


NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'


;----- BAUD2CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- BAUDCON2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- RC2STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'

RX9D2            EQU  H'0000'
OERR2            EQU  H'0001'
FERR2            EQU  H'0002'
ADDEN2           EQU  H'0003'
CREN2            EQU  H'0004'
SREN2            EQU  H'0005'
RX92             EQU  H'0006'
SPEN2            EQU  H'0007'


;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'

RX9D2            EQU  H'0000'
OERR2            EQU  H'0001'
FERR2            EQU  H'0002'
ADDEN2           EQU  H'0003'
CREN2            EQU  H'0004'
SREN2            EQU  H'0005'
RX92             EQU  H'0006'
SPEN2            EQU  H'0007'


;----- TX2STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TX9D2            EQU  H'0000'
TRMT2            EQU  H'0001'
BRGH2            EQU  H'0002'
SENDB2           EQU  H'0003'
SYNC2            EQU  H'0004'
TXEN2            EQU  H'0005'
TX92             EQU  H'0006'
CSRC2            EQU  H'0007'


;----- TXSTA2 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TX9D2            EQU  H'0000'
TRMT2            EQU  H'0001'
BRGH2            EQU  H'0002'
SENDB2           EQU  H'0003'
SYNC2            EQU  H'0004'
TXEN2            EQU  H'0005'
TX92             EQU  H'0006'
CSRC2            EQU  H'0007'


;----- CM12CON Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C1SYNC           EQU  H'0001'
C2HYS            EQU  H'0002'
C1HYS            EQU  H'0003'
C2RSEL           EQU  H'0004'
C1RSEL           EQU  H'0005'
MC2OUT           EQU  H'0006'
MC1OUT           EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C1SYNC           EQU  H'0001'
C2HYS            EQU  H'0002'
C1HYS            EQU  H'0003'
C2RSEL           EQU  H'0004'
C1RSEL           EQU  H'0005'
MC2OUT           EQU  H'0006'
MC1OUT           EQU  H'0007'


;----- CM2CON Bits -----------------------------------------------------
C2R              EQU  H'0002'
C2SP             EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT_CM2CON     EQU  H'0006'
C2ON             EQU  H'0007'

C2CH0            EQU  H'0000'
C2CH1            EQU  H'0001'


;----- CM2CON0 Bits -----------------------------------------------------
C2R              EQU  H'0002'
C2SP             EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT_CM2CON0    EQU  H'0006'
C2ON             EQU  H'0007'

C2CH0            EQU  H'0000'
C2CH1            EQU  H'0001'


;----- CM1CON Bits -----------------------------------------------------
C1R              EQU  H'0002'
C1SP             EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT_CM1CON     EQU  H'0006'
C1ON             EQU  H'0007'

C1CH0            EQU  H'0000'
C1CH1            EQU  H'0001'


;----- CM1CON0 Bits -----------------------------------------------------
C1R              EQU  H'0002'
C1SP             EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT_CM1CON0    EQU  H'0006'
C1ON             EQU  H'0007'

C1CH0            EQU  H'0000'
C1CH1            EQU  H'0001'


;----- PIE4 Bits -----------------------------------------------------
CCP3IE           EQU  H'0000'
CCP4IE           EQU  H'0001'
CCP5IE           EQU  H'0002'


;----- PIR4 Bits -----------------------------------------------------
CCP3IF           EQU  H'0000'
CCP4IF           EQU  H'0001'
CCP5IF           EQU  H'0002'


;----- IPR4 Bits -----------------------------------------------------
CCP3IP           EQU  H'0000'
CCP4IP           EQU  H'0001'
CCP5IP           EQU  H'0002'


;----- PIE5 Bits -----------------------------------------------------
TMR4IE           EQU  H'0000'
TMR5IE           EQU  H'0001'
TMR6IE           EQU  H'0002'


;----- PIR5 Bits -----------------------------------------------------
TMR4IF           EQU  H'0000'
TMR5IF           EQU  H'0001'
TMR6IF           EQU  H'0002'


;----- IPR5 Bits -----------------------------------------------------
TMR4IP           EQU  H'0000'
TMR5IP           EQU  H'0001'
TMR6IP           EQU  H'0002'


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
AN4              EQU  H'0005'

C12IN0M          EQU  H'0000'
C12IN1M          EQU  H'0001'
C2INP            EQU  H'0002'
C1INP            EQU  H'0003'
C1OUT_PORTA      EQU  H'0004'
C2OUT_PORTA      EQU  H'0005'

C12IN0N          EQU  H'0000'
C12IN1N          EQU  H'0001'
VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
T0CKI            EQU  H'0004'
SS               EQU  H'0005'

VREFN            EQU  H'0002'
SRQ              EQU  H'0004'
NOT_SS           EQU  H'0005'

CVREF            EQU  H'0002'
LVDIN            EQU  H'0005'

DACOUT           EQU  H'0002'
HLVDIN           EQU  H'0005'

SS1              EQU  H'0005'

NOT_SS1          EQU  H'0005'

SRNQ             EQU  H'0005'


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
AN13             EQU  H'0005'
PGC              EQU  H'0006'
PGD              EQU  H'0007'

FLT0             EQU  H'0000'
C12IN3M          EQU  H'0001'
C12IN2M          EQU  H'0003'
T5G              EQU  H'0004'
T1G              EQU  H'0005'

SRI              EQU  H'0000'
C12IN3N          EQU  H'0001'
C12IN2N          EQU  H'0003'
CCP3_PORTB       EQU  H'0005'

CTED1            EQU  H'0002'
CTED2            EQU  H'0003'
T3CKI_PORTB      EQU  H'0005'

P2A_PORTB        EQU  H'0003'
P3A_PORTB        EQU  H'0005'


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
T5CKI            EQU  H'0002'
SCK              EQU  H'0003'
SDI              EQU  H'0004'
SDO              EQU  H'0005'
TX               EQU  H'0006'
RX               EQU  H'0007'

P2B_PORTC        EQU  H'0000'
P2A_PORTC        EQU  H'0001'
P1A              EQU  H'0002'
SCL              EQU  H'0003'
SDA              EQU  H'0004'
CK               EQU  H'0006'
; DT is a reserved word
; DT               EQU  H'0007'

T1CKI            EQU  H'0000'
CCP2_PORTC       EQU  H'0001'
CCP1             EQU  H'0002'
SCK1             EQU  H'0003'
SDI1             EQU  H'0004'
SDO1             EQU  H'0005'
TX1              EQU  H'0006'
RX1              EQU  H'0007'

T3CKI_PORTC      EQU  H'0000'
CTPLS            EQU  H'0002'
SCL1             EQU  H'0003'
SDA1             EQU  H'0004'
CK1              EQU  H'0006'
DT1              EQU  H'0007'

T3G              EQU  H'0000'
AN14             EQU  H'0002'
AN15             EQU  H'0003'
AN16             EQU  H'0004'
AN17             EQU  H'0005'
AN18             EQU  H'0006'
AN19             EQU  H'0007'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'

P2B_PORTD        EQU  H'0002'
P2C              EQU  H'0003'
P2D              EQU  H'0004'
P1B              EQU  H'0005'
P1C              EQU  H'0006'
P1D              EQU  H'0007'

CCP4             EQU  H'0001'
TX2              EQU  H'0006'
RX2              EQU  H'0007'

SCK2             EQU  H'0000'
SDI2             EQU  H'0001'
NOT_SS2          EQU  H'0003'
SDO2             EQU  H'0004'
CK2              EQU  H'0006'
DT2              EQU  H'0007'

SCL2             EQU  H'0000'
SDA2             EQU  H'0001'
SS2              EQU  H'0003'

AN20             EQU  H'0000'
AN21             EQU  H'0001'
AN22             EQU  H'0002'
AN23             EQU  H'0003'
AN24             EQU  H'0004'
AN25             EQU  H'0005'
AN26             EQU  H'0006'
AN27             EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'

AN5              EQU  H'0000'
AN6              EQU  H'0001'
AN7              EQU  H'0002'
MCLR             EQU  H'0003'

P3A_PORTE        EQU  H'0000'
P3B              EQU  H'0001'
CCP5             EQU  H'0002'
NOT_MCLR         EQU  H'0003'

CCP3_PORTE       EQU  H'0000'
VPP              EQU  H'0003'


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
WPUE3            EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
WPUE3            EQU  H'0007'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'


;----- OSCTUNE Bits -----------------------------------------------------
PLLEN            EQU  H'0006'
INTSRC           EQU  H'0007'

TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- HLVDCON Bits -----------------------------------------------------
HLVDEN           EQU  H'0004'
IRVST            EQU  H'0005'
BGVST            EQU  H'0006'
VDIRMAG          EQU  H'0007'

HLVDL0           EQU  H'0000'
HLVDL1           EQU  H'0001'
HLVDL2           EQU  H'0002'
HLVDL3           EQU  H'0003'

LVDL0            EQU  H'0000'
LVDL1            EQU  H'0001'
LVDL2            EQU  H'0002'
LVDL3            EQU  H'0003'
LVDEN            EQU  H'0004'
IVRST            EQU  H'0005'

LVV0             EQU  H'0000'
LVV1             EQU  H'0001'
LVV2             EQU  H'0002'
LVV3             EQU  H'0003'
BGST             EQU  H'0005'


;----- LVDCON Bits -----------------------------------------------------
HLVDEN           EQU  H'0004'
IRVST            EQU  H'0005'
BGVST            EQU  H'0006'
VDIRMAG          EQU  H'0007'

HLVDL0           EQU  H'0000'
HLVDL1           EQU  H'0001'
HLVDL2           EQU  H'0002'
HLVDL3           EQU  H'0003'

LVDL0            EQU  H'0000'
LVDL1            EQU  H'0001'
LVDL2            EQU  H'0002'
LVDL3            EQU  H'0003'
LVDEN            EQU  H'0004'
IVRST            EQU  H'0005'

LVV0             EQU  H'0000'
LVV1             EQU  H'0001'
LVV2             EQU  H'0002'
LVV3             EQU  H'0003'
BGST             EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSP1IE           EQU  H'0003'
TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'
ADIE             EQU  H'0006'

SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'
ADIF             EQU  H'0006'

SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
CCP1IP           EQU  H'0002'
SSP1IP           EQU  H'0003'
TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'
ADIP             EQU  H'0006'

SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMR3IE           EQU  H'0001'
HLVDIE           EQU  H'0002'
BCL1IE           EQU  H'0003'
EEIE             EQU  H'0004'
C2IE             EQU  H'0005'
C1IE             EQU  H'0006'
OSCFIE           EQU  H'0007'

LVDIE            EQU  H'0002'
BCLIE            EQU  H'0003'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR3IF           EQU  H'0001'
HLVDIF           EQU  H'0002'
BCL1IF           EQU  H'0003'
EEIF             EQU  H'0004'
C2IF             EQU  H'0005'
C1IF             EQU  H'0006'
OSCFIF           EQU  H'0007'

LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'


;----- IPR2 Bits -----------------------------------------------------
CCP2IP           EQU  H'0000'
TMR3IP           EQU  H'0001'
HLVDIP           EQU  H'0002'
BCL1IP           EQU  H'0003'
EEIP             EQU  H'0004'
C2IP             EQU  H'0005'
C1IP             EQU  H'0006'
OSCFIP           EQU  H'0007'

LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'


;----- PIE3 Bits -----------------------------------------------------
TMR1GIE          EQU  H'0000'
TMR3GIE          EQU  H'0001'
TMR5GIE          EQU  H'0002'
CTMUIE           EQU  H'0003'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'
BCL2IE           EQU  H'0006'
SSP2IE           EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
TMR1GIF          EQU  H'0000'
TMR3GIF          EQU  H'0001'
TMR5GIF          EQU  H'0002'
CTMUIF           EQU  H'0003'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'
BCL2IF           EQU  H'0006'
SSP2IF           EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
TMR1GIP          EQU  H'0000'
TMR3GIP          EQU  H'0001'
TMR5GIP          EQU  H'0002'
CTMUIP           EQU  H'0003'
TX2IP            EQU  H'0004'
RC2IP            EQU  H'0005'
BCL2IP           EQU  H'0006'
SSP2IP           EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- EEADR Bits -----------------------------------------------------
EEADR0           EQU  H'0000'
EEADR1           EQU  H'0001'
EEADR2           EQU  H'0002'
EEADR3           EQU  H'0003'
EEADR4           EQU  H'0004'
EEADR5           EQU  H'0005'
EEADR6           EQU  H'0006'
EEADR7           EQU  H'0007'


;----- RC1STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


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

ADEN             EQU  H'0003'

RX9D1            EQU  H'0000'
OERR1            EQU  H'0001'
FERR1            EQU  H'0002'
ADDEN1           EQU  H'0003'
CREN1            EQU  H'0004'
SREN1            EQU  H'0005'
RX91             EQU  H'0006'
SPEN1            EQU  H'0007'


;----- TX1STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

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
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TX9D1            EQU  H'0000'
TRMT1            EQU  H'0001'
BRGH1            EQU  H'0002'
SENDB1           EQU  H'0003'
SYNC1            EQU  H'0004'
TXEN1            EQU  H'0005'
TX91             EQU  H'0006'
CSRC1            EQU  H'0007'


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
T3RD16           EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
T3SOSCEN         EQU  H'0003'

T3OSCEN          EQU  H'0003'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'


;----- T3GCON Bits -----------------------------------------------------
T3GVAL           EQU  H'0002'
T3GGO_NOT_DONE   EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3G_DONE         EQU  H'0003'

T3GGO            EQU  H'0003'


;----- ECCP1AS Bits -----------------------------------------------------
CCP1ASE          EQU  H'0007'

P1SSBD0          EQU  H'0000'
P1SSBD1          EQU  H'0001'
P1SSAC0          EQU  H'0002'
P1SSAC1          EQU  H'0003'
CCP1AS0          EQU  H'0004'
CCP1AS1          EQU  H'0005'
CCP1AS2          EQU  H'0006'


PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'

ECCPASE          EQU  H'0007'

PSSBD0           EQU  H'0000'
PSSBD1           EQU  H'0001'
PSSAC0           EQU  H'0002'
PSSAC1           EQU  H'0003'
ECCPAS0          EQU  H'0004'
ECCPAS1          EQU  H'0005'
ECCPAS2          EQU  H'0006'


;----- ECCPAS Bits -----------------------------------------------------
CCP1ASE          EQU  H'0007'

P1SSBD0          EQU  H'0000'
P1SSBD1          EQU  H'0001'
P1SSAC0          EQU  H'0002'
P1SSAC1          EQU  H'0003'
CCP1AS0          EQU  H'0004'
CCP1AS1          EQU  H'0005'
CCP1AS2          EQU  H'0006'


PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'

ECCPASE          EQU  H'0007'

PSSBD0           EQU  H'0000'
PSSBD1           EQU  H'0001'
PSSAC0           EQU  H'0002'
PSSAC1           EQU  H'0003'
ECCPAS0          EQU  H'0004'
ECCPAS1          EQU  H'0005'
ECCPAS2          EQU  H'0006'


;----- PWM1CON Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'

PRSEN            EQU  H'0007'

PDC0             EQU  H'0000'
PDC1             EQU  H'0001'
PDC2             EQU  H'0002'
PDC3             EQU  H'0003'
PDC4             EQU  H'0004'
PDC5             EQU  H'0005'
PDC6             EQU  H'0006'


;----- PWMCON Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'

PRSEN            EQU  H'0007'

PDC0             EQU  H'0000'
PDC1             EQU  H'0001'
PDC2             EQU  H'0002'
PDC3             EQU  H'0003'
PDC4             EQU  H'0004'
PDC5             EQU  H'0005'
PDC6             EQU  H'0006'


;----- BAUD1CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
CKTXP            EQU  H'0004'
DTRXP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'

SCKP             EQU  H'0004'


;----- PSTR1CON Bits -----------------------------------------------------
STR1A            EQU  H'0000'
STR1B            EQU  H'0001'
STR1C            EQU  H'0002'
STR1D            EQU  H'0003'
STR1SYNC         EQU  H'0004'


;----- PSTRCON Bits -----------------------------------------------------
STR1A            EQU  H'0000'
STR1B            EQU  H'0001'
STR1C            EQU  H'0002'
STR1D            EQU  H'0003'
STR1SYNC         EQU  H'0004'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'


;----- ADCON2 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ACQT0            EQU  H'0003'
ACQT1            EQU  H'0004'
ACQT2            EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
TRIGSEL          EQU  H'0007'

NVCFG0           EQU  H'0000'
NVCFG1           EQU  H'0001'
PVCFG0           EQU  H'0002'
PVCFG1           EQU  H'0003'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

DONE             EQU  H'0001'

NOT_DONE         EQU  H'0001'

GO_DONE          EQU  H'0001'


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


;----- SSP1CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSPCON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSP1STAT Bits -----------------------------------------------------
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


NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'


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


NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'


;----- SSP1MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSPMSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


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


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1G_DONE         EQU  H'0003'

T1GGO            EQU  H'0003'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
T1RD16           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1SOSCEN         EQU  H'0003'

RD16             EQU  H'0001'
T1SYNC           EQU  H'0002'
T1OSCEN          EQU  H'0003'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- RCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_PD           EQU  H'0002'
NOT_TO           EQU  H'0003'
NOT_RI           EQU  H'0004'
SBOREN           EQU  H'0006'
IPEN             EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

SWDTE            EQU  H'0000'


;----- OSCCON2 Bits -----------------------------------------------------
LFIOFS           EQU  H'0000'
MFIOFS           EQU  H'0001'
PRISD            EQU  H'0002'
SOSCGO           EQU  H'0003'
MFIOSEL          EQU  H'0004'
SOSCRUN          EQU  H'0006'
PLLRDY           EQU  H'0007'


;----- OSCCON Bits -----------------------------------------------------
HFIOFS           EQU  H'0002'
OSTS             EQU  H'0003'
IDLEN            EQU  H'0007'

SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IOFS             EQU  H'0002'
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
       __BADRAM  H'0300'-H'0F37'
       __BADRAM  H'0F85'-H'0F88'
       __BADRAM  H'0F8E'-H'0F91'
       __BADRAM  H'0F97'-H'0F9A'
       __BADRAM  H'0FAA'
       __BADRAM  H'0FB5'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Oscillator Selection bits:
;     FOSC = LP            LP oscillator
;     FOSC = XT            XT oscillator
;     FOSC = HSHP          HS oscillator (high power > 16 MHz)
;     FOSC = HSMP          HS oscillator (medium power 4-16 MHz)
;     FOSC = ECHP          EC oscillator, CLKOUT function on OSC2 (high power, >16 MHz)
;     FOSC = ECHPIO6       EC oscillator (high power, >16 MHz)
;     FOSC = RC            External RC oscillator, CLKOUT function on OSC2
;     FOSC = RCIO6         External RC oscillator
;     FOSC = INTIO67       Internal oscillator block
;     FOSC = INTIO7        Internal oscillator block, CLKOUT function on OSC2
;     FOSC = ECMP          EC oscillator, CLKOUT function on OSC2 (medium power, 500 kHz-16 MHz)
;     FOSC = ECMPIO6       EC oscillator (medium power, 500 kHz-16 MHz)
;     FOSC = ECLP          EC oscillator, CLKOUT function on OSC2 (low power, <500 kHz)
;     FOSC = ECLPIO6       EC oscillator (low power, <500 kHz)
;
;   4X PLL Enable:
;     PLLCFG = OFF         Oscillator used directly
;     PLLCFG = ON          Oscillator multiplied by 4
;
;   Primary clock enable bit:
;     PRICLKEN = OFF       Primary clock can be disabled by software
;     PRICLKEN = ON        Primary clock is always enabled
;
;   Fail-Safe Clock Monitor Enable bit:
;     FCMEN = OFF          Fail-Safe Clock Monitor disabled
;     FCMEN = ON           Fail-Safe Clock Monitor enabled
;
;   Internal/External Oscillator Switchover bit:
;     IESO = OFF           Oscillator Switchover mode disabled
;     IESO = ON            Oscillator Switchover mode enabled
;
;   Power-up Timer Enable bit:
;     PWRTEN = ON          Power up timer enabled
;     PWRTEN = OFF         Power up timer disabled
;
;   Brown-out Reset Enable bits:
;     BOREN = OFF          Brown-out Reset disabled in hardware and software
;     BOREN = ON           Brown-out Reset enabled and controlled by software (SBOREN is enabled)
;     BOREN = NOSLP        Brown-out Reset enabled in hardware only and disabled in Sleep mode (SBOREN is disabled)
;     BOREN = SBORDIS      Brown-out Reset enabled in hardware only (SBOREN is disabled)
;
;   Brown Out Reset Voltage bits:
;     BORV = 285           VBOR set to 2.85 V nominal
;     BORV = 250           VBOR set to 2.50 V nominal
;     BORV = 220           VBOR set to 2.20 V nominal
;     BORV = 190           VBOR set to 1.90 V nominal
;
;   Watchdog Timer Enable bits:
;     WDTEN = OFF          Watch dog timer is always disabled. SWDTEN has no effect.
;     WDTEN = NOSLP        WDT is disabled in sleep, otherwise enabled. SWDTEN bit has no effect
;     WDTEN = SWON         WDT is controlled by SWDTEN bit of the WDTCON register
;     WDTEN = ON           WDT is always enabled. SWDTEN bit has no effect
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
;     CCP2MX = PORTB3      CCP2 input/output is multiplexed with RB3
;     CCP2MX = PORTC1      CCP2 input/output is multiplexed with RC1
;
;   PORTB A/D Enable bit:
;     PBADEN = OFF         PORTB<5:0> pins are configured as digital I/O on Reset
;     PBADEN = ON          PORTB<5:0> pins are configured as analog input channels on Reset
;
;   P3A/CCP3 Mux bit:
;     CCP3MX = PORTE0      P3A/CCP3 input/output is mulitplexed with RE0
;     CCP3MX = PORTB5      P3A/CCP3 input/output is multiplexed with RB5
;
;   HFINTOSC Fast Start-up:
;     HFOFST = OFF         HFINTOSC output and ready status are delayed by the oscillator stable status
;     HFOFST = ON          HFINTOSC output and ready status are not delayed by the oscillator stable status
;
;   Timer3 Clock input mux bit:
;     T3CMX = PORTB5       T3CKI is on RB5
;     T3CMX = PORTC0       T3CKI is on RC0
;
;   ECCP2 B output mux bit:
;     P2BMX = PORTC0       P2B is on RC0
;     P2BMX = PORTD2       P2B is on RD2
;
;   MCLR Pin Enable bit:
;     MCLRE = INTMCLR      RE3 input pin enabled; MCLR disabled
;     MCLRE = EXTMCLR      MCLR pin enabled, RE3 input pin disabled
;
;   Stack Full/Underflow Reset Enable bit:
;     STVREN = OFF         Stack full/underflow will not cause Reset
;     STVREN = ON          Stack full/underflow will cause Reset
;
;   Single-Supply ICSP Enable bit:
;     LVP = OFF            Single-Supply ICSP disabled
;     LVP = ON             Single-Supply ICSP enabled if MCLRE is also 1
;
;   Extended Instruction Set Enable bit:
;     XINST = OFF          Instruction set extension and Indexed Addressing mode disabled (Legacy mode)
;     XINST = ON           Instruction set extension and Indexed Addressing mode enabled
;
;   Background Debug:
;     DEBUG = ON           Enabled
;     DEBUG = OFF          Disabled
;
;   Code Protection Block 0:
;     CP0 = ON             Block 0 (000800-001FFFh) code-protected
;     CP0 = OFF            Block 0 (000800-001FFFh) not code-protected
;
;   Code Protection Block 1:
;     CP1 = ON             Block 1 (002000-003FFFh) code-protected
;     CP1 = OFF            Block 1 (002000-003FFFh) not code-protected
;
;   Boot Block Code Protection bit:
;     CPB = ON             Boot block (000000-0007FFh) code-protected
;     CPB = OFF            Boot block (000000-0007FFh) not code-protected
;
;   Data EEPROM Code Protection bit:
;     CPD = ON             Data EEPROM code-protected
;     CPD = OFF            Data EEPROM not code-protected
;
;   Write Protection Block 0:
;     WRT0 = ON            Block 0 (000800-001FFFh) write-protected
;     WRT0 = OFF           Block 0 (000800-001FFFh) not write-protected
;
;   Write Protection Block 1:
;     WRT1 = ON            Block 1 (002000-003FFFh) write-protected
;     WRT1 = OFF           Block 1 (002000-003FFFh) not write-protected
;
;   Configuration Register Write Protection bit:
;     WRTC = ON            Configuration registers (300000-3000FFh) write-protected
;     WRTC = OFF           Configuration registers (300000-3000FFh) not write-protected
;
;   Boot Block Write Protection bit:
;     WRTB = ON            Boot Block (000000-0007FFh) write-protected
;     WRTB = OFF           Boot Block (000000-0007FFh) not write-protected
;
;   Data EEPROM Write Protection bit:
;     WRTD = ON            Data EEPROM write-protected
;     WRTD = OFF           Data EEPROM not write-protected
;
;   Table Read Protection Block 0:
;     EBTR0 = ON           Block 0 (000800-001FFFh) protected from table reads executed in other blocks
;     EBTR0 = OFF          Block 0 (000800-001FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 1:
;     EBTR1 = ON           Block 1 (002000-003FFFh) protected from table reads executed in other blocks
;     EBTR1 = OFF          Block 1 (002000-003FFFh) not protected from table reads executed in other blocks
;
;   Boot Block Table Read Protection bit:
;     EBTRB = ON           Boot Block (000000-0007FFh) protected from table reads executed in other blocks
;     EBTRB = OFF          Boot Block (000000-0007FFh) not protected from table reads executed in other blocks
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
_FOSC_LP_1H          EQU  H'F0'    ; LP oscillator
_FOSC_XT_1H          EQU  H'F1'    ; XT oscillator
_FOSC_HSHP_1H        EQU  H'F2'    ; HS oscillator (high power > 16 MHz)
_FOSC_HSMP_1H        EQU  H'F3'    ; HS oscillator (medium power 4-16 MHz)
_FOSC_ECHP_1H        EQU  H'F4'    ; EC oscillator, CLKOUT function on OSC2 (high power, >16 MHz)
_FOSC_ECHPIO6_1H     EQU  H'F5'    ; EC oscillator (high power, >16 MHz)
_FOSC_RC_1H          EQU  H'F6'    ; External RC oscillator, CLKOUT function on OSC2
_FOSC_RCIO6_1H       EQU  H'F7'    ; External RC oscillator
_FOSC_INTIO67_1H     EQU  H'F8'    ; Internal oscillator block
_FOSC_INTIO7_1H      EQU  H'F9'    ; Internal oscillator block, CLKOUT function on OSC2
_FOSC_ECMP_1H        EQU  H'FA'    ; EC oscillator, CLKOUT function on OSC2 (medium power, 500 kHz-16 MHz)
_FOSC_ECMPIO6_1H     EQU  H'FB'    ; EC oscillator (medium power, 500 kHz-16 MHz)
_FOSC_ECLP_1H        EQU  H'FC'    ; EC oscillator, CLKOUT function on OSC2 (low power, <500 kHz)
_FOSC_ECLPIO6_1H     EQU  H'FD'    ; EC oscillator (low power, <500 kHz)

_PLLCFG_OFF_1H       EQU  H'EF'    ; Oscillator used directly
_PLLCFG_ON_1H        EQU  H'FF'    ; Oscillator multiplied by 4

_PRICLKEN_OFF_1H     EQU  H'DF'    ; Primary clock can be disabled by software
_PRICLKEN_ON_1H      EQU  H'FF'    ; Primary clock is always enabled

_FCMEN_OFF_1H        EQU  H'BF'    ; Fail-Safe Clock Monitor disabled
_FCMEN_ON_1H         EQU  H'FF'    ; Fail-Safe Clock Monitor enabled

_IESO_OFF_1H         EQU  H'7F'    ; Oscillator Switchover mode disabled
_IESO_ON_1H          EQU  H'FF'    ; Oscillator Switchover mode enabled

;----- CONFIG2L Options --------------------------------------------------
_PWRTEN_ON_2L        EQU  H'FE'    ; Power up timer enabled
_PWRTEN_OFF_2L       EQU  H'FF'    ; Power up timer disabled

_BOREN_OFF_2L        EQU  H'F9'    ; Brown-out Reset disabled in hardware and software
_BOREN_ON_2L         EQU  H'FB'    ; Brown-out Reset enabled and controlled by software (SBOREN is enabled)
_BOREN_NOSLP_2L      EQU  H'FD'    ; Brown-out Reset enabled in hardware only and disabled in Sleep mode (SBOREN is disabled)
_BOREN_SBORDIS_2L    EQU  H'FF'    ; Brown-out Reset enabled in hardware only (SBOREN is disabled)

_BORV_285_2L         EQU  H'E7'    ; VBOR set to 2.85 V nominal
_BORV_250_2L         EQU  H'EF'    ; VBOR set to 2.50 V nominal
_BORV_220_2L         EQU  H'F7'    ; VBOR set to 2.20 V nominal
_BORV_190_2L         EQU  H'FF'    ; VBOR set to 1.90 V nominal

;----- CONFIG2H Options --------------------------------------------------
_WDTEN_OFF_2H        EQU  H'FC'    ; Watch dog timer is always disabled. SWDTEN has no effect.
_WDTEN_NOSLP_2H      EQU  H'FD'    ; WDT is disabled in sleep, otherwise enabled. SWDTEN bit has no effect
_WDTEN_SWON_2H       EQU  H'FE'    ; WDT is controlled by SWDTEN bit of the WDTCON register
_WDTEN_ON_2H         EQU  H'FF'    ; WDT is always enabled. SWDTEN bit has no effect

_WDTPS_1_2H          EQU  H'C3'    ; 1:1
_WDTPS_2_2H          EQU  H'C7'    ; 1:2
_WDTPS_4_2H          EQU  H'CB'    ; 1:4
_WDTPS_8_2H          EQU  H'CF'    ; 1:8
_WDTPS_16_2H         EQU  H'D3'    ; 1:16
_WDTPS_32_2H         EQU  H'D7'    ; 1:32
_WDTPS_64_2H         EQU  H'DB'    ; 1:64
_WDTPS_128_2H        EQU  H'DF'    ; 1:128
_WDTPS_256_2H        EQU  H'E3'    ; 1:256
_WDTPS_512_2H        EQU  H'E7'    ; 1:512
_WDTPS_1024_2H       EQU  H'EB'    ; 1:1024
_WDTPS_2048_2H       EQU  H'EF'    ; 1:2048
_WDTPS_4096_2H       EQU  H'F3'    ; 1:4096
_WDTPS_8192_2H       EQU  H'F7'    ; 1:8192
_WDTPS_16384_2H      EQU  H'FB'    ; 1:16384
_WDTPS_32768_2H      EQU  H'FF'    ; 1:32768

;----- CONFIG3H Options --------------------------------------------------
_CCP2MX_PORTB3_3H    EQU  H'FE'    ; CCP2 input/output is multiplexed with RB3
_CCP2MX_PORTC1_3H    EQU  H'FF'    ; CCP2 input/output is multiplexed with RC1

_PBADEN_OFF_3H       EQU  H'FD'    ; PORTB<5:0> pins are configured as digital I/O on Reset
_PBADEN_ON_3H        EQU  H'FF'    ; PORTB<5:0> pins are configured as analog input channels on Reset

_CCP3MX_PORTE0_3H    EQU  H'FB'    ; P3A/CCP3 input/output is mulitplexed with RE0
_CCP3MX_PORTB5_3H    EQU  H'FF'    ; P3A/CCP3 input/output is multiplexed with RB5

_HFOFST_OFF_3H       EQU  H'F7'    ; HFINTOSC output and ready status are delayed by the oscillator stable status
_HFOFST_ON_3H        EQU  H'FF'    ; HFINTOSC output and ready status are not delayed by the oscillator stable status

_T3CMX_PORTB5_3H     EQU  H'EF'    ; T3CKI is on RB5
_T3CMX_PORTC0_3H     EQU  H'FF'    ; T3CKI is on RC0

_P2BMX_PORTC0_3H     EQU  H'DF'    ; P2B is on RC0
_P2BMX_PORTD2_3H     EQU  H'FF'    ; P2B is on RD2

_MCLRE_INTMCLR_3H    EQU  H'7F'    ; RE3 input pin enabled; MCLR disabled
_MCLRE_EXTMCLR_3H    EQU  H'FF'    ; MCLR pin enabled, RE3 input pin disabled

;----- CONFIG4L Options --------------------------------------------------
_STVREN_OFF_4L       EQU  H'FE'    ; Stack full/underflow will not cause Reset
_STVREN_ON_4L        EQU  H'FF'    ; Stack full/underflow will cause Reset

_LVP_OFF_4L          EQU  H'FB'    ; Single-Supply ICSP disabled
_LVP_ON_4L           EQU  H'FF'    ; Single-Supply ICSP enabled if MCLRE is also 1

_XINST_OFF_4L        EQU  H'BF'    ; Instruction set extension and Indexed Addressing mode disabled (Legacy mode)
_XINST_ON_4L         EQU  H'FF'    ; Instruction set extension and Indexed Addressing mode enabled

_DEBUG_ON_4L         EQU  H'7F'    ; Enabled
_DEBUG_OFF_4L        EQU  H'FF'    ; Disabled

;----- CONFIG5L Options --------------------------------------------------
_CP0_ON_5L           EQU  H'FE'    ; Block 0 (000800-001FFFh) code-protected
_CP0_OFF_5L          EQU  H'FF'    ; Block 0 (000800-001FFFh) not code-protected

_CP1_ON_5L           EQU  H'FD'    ; Block 1 (002000-003FFFh) code-protected
_CP1_OFF_5L          EQU  H'FF'    ; Block 1 (002000-003FFFh) not code-protected

;----- CONFIG5H Options --------------------------------------------------
_CPB_ON_5H           EQU  H'BF'    ; Boot block (000000-0007FFh) code-protected
_CPB_OFF_5H          EQU  H'FF'    ; Boot block (000000-0007FFh) not code-protected

_CPD_ON_5H           EQU  H'7F'    ; Data EEPROM code-protected
_CPD_OFF_5H          EQU  H'FF'    ; Data EEPROM not code-protected

;----- CONFIG6L Options --------------------------------------------------
_WRT0_ON_6L          EQU  H'FE'    ; Block 0 (000800-001FFFh) write-protected
_WRT0_OFF_6L         EQU  H'FF'    ; Block 0 (000800-001FFFh) not write-protected

_WRT1_ON_6L          EQU  H'FD'    ; Block 1 (002000-003FFFh) write-protected
_WRT1_OFF_6L         EQU  H'FF'    ; Block 1 (002000-003FFFh) not write-protected

;----- CONFIG6H Options --------------------------------------------------
_WRTC_ON_6H          EQU  H'DF'    ; Configuration registers (300000-3000FFh) write-protected
_WRTC_OFF_6H         EQU  H'FF'    ; Configuration registers (300000-3000FFh) not write-protected

_WRTB_ON_6H          EQU  H'BF'    ; Boot Block (000000-0007FFh) write-protected
_WRTB_OFF_6H         EQU  H'FF'    ; Boot Block (000000-0007FFh) not write-protected

_WRTD_ON_6H          EQU  H'7F'    ; Data EEPROM write-protected
_WRTD_OFF_6H         EQU  H'FF'    ; Data EEPROM not write-protected

;----- CONFIG7L Options --------------------------------------------------
_EBTR0_ON_7L         EQU  H'FE'    ; Block 0 (000800-001FFFh) protected from table reads executed in other blocks
_EBTR0_OFF_7L        EQU  H'FF'    ; Block 0 (000800-001FFFh) not protected from table reads executed in other blocks

_EBTR1_ON_7L         EQU  H'FD'    ; Block 1 (002000-003FFFh) protected from table reads executed in other blocks
_EBTR1_OFF_7L        EQU  H'FF'    ; Block 1 (002000-003FFFh) not protected from table reads executed in other blocks

;----- CONFIG7H Options --------------------------------------------------
_EBTRB_ON_7H         EQU  H'BF'    ; Boot Block (000000-0007FFh) protected from table reads executed in other blocks
_EBTRB_OFF_7H        EQU  H'FF'    ; Boot Block (000000-0007FFh) not protected from table reads executed in other blocks


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
