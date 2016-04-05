        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18F67K90 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18F67K90 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18F67K90
;       2. LIST directive in the source file
;               LIST   P=PIC18F67K90
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18F67K90
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
LCDCON           EQU  H'0EF4'
LCDPS            EQU  H'0EF5'
LCDSE0           EQU  H'0EF6'
LCDSE1           EQU  H'0EF7'
LCDSE2           EQU  H'0EF8'
LCDSE3           EQU  H'0EF9'
LCDSE4           EQU  H'0EFA'
LCDRL            EQU  H'0EFC'
LCDREF           EQU  H'0EFD'
SSP2CON2         EQU  H'0EFE'
SSP2CON1         EQU  H'0EFF'
SSP2STAT         EQU  H'0F00'
SSP2ADD          EQU  H'0F01'
SSP2BUF          EQU  H'0F02'
T4CON            EQU  H'0F03'
PR4              EQU  H'0F04'
TMR4             EQU  H'0F05'
CCP7CON          EQU  H'0F06'
CCPR7            EQU  H'0F07'
CCPR7L           EQU  H'0F07'
CCPR7H           EQU  H'0F08'
CCP6CON          EQU  H'0F09'
CCPR6            EQU  H'0F0A'
CCPR6L           EQU  H'0F0A'
CCPR6H           EQU  H'0F0B'
CCP5CON          EQU  H'0F0C'
CCPR5            EQU  H'0F0D'
CCPR5L           EQU  H'0F0D'
CCPR5H           EQU  H'0F0E'
CCP4CON          EQU  H'0F0F'
CCPR4            EQU  H'0F10'
CCPR4L           EQU  H'0F10'
CCPR4H           EQU  H'0F11'
T5GCON           EQU  H'0F12'
T5CON            EQU  H'0F13'
TMR5             EQU  H'0F14'
TMR5L            EQU  H'0F14'
TMR5H            EQU  H'0F15'
PMD3             EQU  H'0F16'
PMD2             EQU  H'0F17'
PMD1             EQU  H'0F18'
PMD0             EQU  H'0F19'
PSTR3CON         EQU  H'0F1A'
PSTR2CON         EQU  H'0F1B'
TXREG2           EQU  H'0F1C'
RCREG2           EQU  H'0F1D'
SPBRG2           EQU  H'0F1E'
SPBRGH2          EQU  H'0F1F'
BAUDCON2         EQU  H'0F20'
TXSTA2           EQU  H'0F21'
RCSTA2           EQU  H'0F22'
ANCON2           EQU  H'0F23'
ANCON1           EQU  H'0F24'
ANCON0           EQU  H'0F25'
ODCON3           EQU  H'0F27'
ODCON2           EQU  H'0F28'
ODCON1           EQU  H'0F29'
REFOCON          EQU  H'0F2A'
CCPTMRS2         EQU  H'0F2B'
CCPTMRS1         EQU  H'0F2C'
CCPTMRS0         EQU  H'0F2D'
CM3CON           EQU  H'0F2E'
CM3CON1          EQU  H'0F2E'
CM2CON           EQU  H'0F2F'
CM2CON1          EQU  H'0F2F'
T12CON           EQU  H'0F30'
PR12             EQU  H'0F31'
TMR12            EQU  H'0F32'
T10CON           EQU  H'0F33'
PR10             EQU  H'0F34'
TMR10            EQU  H'0F35'
T8CON            EQU  H'0F36'
PR8              EQU  H'0F37'
TMR8             EQU  H'0F38'
T6CON            EQU  H'0F39'
PR6              EQU  H'0F3A'
TMR6             EQU  H'0F3B'
T7GCON           EQU  H'0F3C'
T7CON            EQU  H'0F3D'
TMR7             EQU  H'0F3E'
TMR7L            EQU  H'0F3E'
TMR7H            EQU  H'0F3F'
CCP10CON         EQU  H'0F40'
CCPR10           EQU  H'0F41'
CCPR10L          EQU  H'0F41'
CCPR10H          EQU  H'0F42'
CCP9CON          EQU  H'0F43'
CCPR9            EQU  H'0F44'
CCPR9L           EQU  H'0F44'
CCPR9H           EQU  H'0F45'
CCP8CON          EQU  H'0F46'
CCPR8            EQU  H'0F47'
CCPR8L           EQU  H'0F47'
CCPR8H           EQU  H'0F48'
CCP3CON          EQU  H'0F49'
CCPR3            EQU  H'0F4A'
CCPR3L           EQU  H'0F4A'
CCPR3H           EQU  H'0F4B'
ECCP3DEL         EQU  H'0F4C'
PWM3CON          EQU  H'0F4C'
ECCP3AS          EQU  H'0F4D'
CCP2CON          EQU  H'0F4E'
ECCP2CON         EQU  H'0F4E'
CCPR2            EQU  H'0F4F'
CCPR2L           EQU  H'0F4F'
CCPR2H           EQU  H'0F50'
ECCP2DEL         EQU  H'0F51'
PWM2CON          EQU  H'0F51'
ECCP2AS          EQU  H'0F52'
PADCFG1          EQU  H'0F53'
CM1CON           EQU  H'0F54'
CM1CON1          EQU  H'0F54'
CTMUICON         EQU  H'0F55'
CTMUCONL         EQU  H'0F56'
CTMUCONH         EQU  H'0F57'
ALRMVAL          EQU  H'0F58'
ALRMVALL         EQU  H'0F58'
ALRMVALH         EQU  H'0F59'
ALRMRPT          EQU  H'0F5A'
ALRMCFG          EQU  H'0F5B'
RTCVAL           EQU  H'0F5C'
RTCVALL          EQU  H'0F5C'
RTCVALH          EQU  H'0F5D'
RTCCAL           EQU  H'0F5E'
RTCCFG           EQU  H'0F5F'
PIE6             EQU  H'0F60'
EEDATA           EQU  H'0F61'
EEADR            EQU  H'0F62'
EEADRH           EQU  H'0F63'
OSCCON2          EQU  H'0F64'
BAUDCON          EQU  H'0F65'
BAUDCON1         EQU  H'0F65'
BAUDCTL          EQU  H'0F65'
LCDDATA0         EQU  H'0F66'
LCDDATA1         EQU  H'0F67'
LCDDATA2         EQU  H'0F68'
LCDDATA3         EQU  H'0F69'
LCDDATA4         EQU  H'0F6A'
LCDDATA6         EQU  H'0F6C'
LCDDATA7         EQU  H'0F6D'
LCDDATA8         EQU  H'0F6E'
LCDDATA9         EQU  H'0F6F'
LCDDATA10        EQU  H'0F70'
LCDDATA12        EQU  H'0F72'
LCDDATA13        EQU  H'0F73'
LCDDATA14        EQU  H'0F74'
LCDDATA15        EQU  H'0F75'
LCDDATA16        EQU  H'0F76'
LCDDATA18        EQU  H'0F78'
LCDDATA19        EQU  H'0F79'
LCDDATA20        EQU  H'0F7A'
LCDDATA21        EQU  H'0F7B'
LCDDATA22        EQU  H'0F7C'
EECON2           EQU  H'0F7E'
EECON1           EQU  H'0F7F'
PORTA            EQU  H'0F80'
PORTB            EQU  H'0F81'
PORTC            EQU  H'0F82'
PORTD            EQU  H'0F83'
PORTE            EQU  H'0F84'
PORTF            EQU  H'0F85'
PORTG            EQU  H'0F86'
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
LATD             EQU  H'0F8C'
LATE             EQU  H'0F8D'
LATF             EQU  H'0F8E'
LATG             EQU  H'0F8F'
TRISA            EQU  H'0F92'
TRISB            EQU  H'0F93'
TRISC            EQU  H'0F94'
TRISD            EQU  H'0F95'
TRISE            EQU  H'0F96'
TRISF            EQU  H'0F97'
TRISG            EQU  H'0F98'
OSCTUNE          EQU  H'0F9B'
PSTR1CON         EQU  H'0F9C'
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
PIE3             EQU  H'0FA3'
PIR3             EQU  H'0FA4'
IPR3             EQU  H'0FA5'
PIR6             EQU  H'0FA6'
HLVDCON          EQU  H'0FA8'
IPR6             EQU  H'0FA9'
T1GCON           EQU  H'0FAA'
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
T3GCON           EQU  H'0FB0'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
CMSTAT           EQU  H'0FB4'
CMSTATUS         EQU  H'0FB4'
CVRCON           EQU  H'0FB5'
PIE4             EQU  H'0FB6'
PIR4             EQU  H'0FB7'
IPR4             EQU  H'0FB8'
PIE5             EQU  H'0FB9'
PIR5             EQU  H'0FBA'
CCP1CON          EQU  H'0FBB'
ECCP1CON         EQU  H'0FBB'
CCPR1            EQU  H'0FBC'
CCPR1L           EQU  H'0FBC'
CCPR1H           EQU  H'0FBD'
ECCP1DEL         EQU  H'0FBE'
PWM1CON          EQU  H'0FBE'
ECCP1AS          EQU  H'0FBF'
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
T2CON            EQU  H'0FCA'
PR2              EQU  H'0FCB'
TMR2             EQU  H'0FCC'
T1CON            EQU  H'0FCD'
TMR1             EQU  H'0FCE'
TMR1L            EQU  H'0FCE'
TMR1H            EQU  H'0FCF'
RCON             EQU  H'0FD0'
WDTCON           EQU  H'0FD1'
IPR5             EQU  H'0FD2'
OSCCON           EQU  H'0FD3'
SPBRGH1          EQU  H'0FD4'
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

;----- LCDCON Bits -----------------------------------------------------
WERR             EQU  H'0005'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'

LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
CS0              EQU  H'0002'
CS1              EQU  H'0003'


;----- LCDPS Bits -----------------------------------------------------
WA               EQU  H'0004'
LCDA             EQU  H'0005'
BIASMD           EQU  H'0006'
WFT              EQU  H'0007'

LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'


;----- LCDSE0 Bits -----------------------------------------------------
SE00             EQU  H'0000'
SE01             EQU  H'0001'
SE02             EQU  H'0002'
SE03             EQU  H'0003'
SE04             EQU  H'0004'
SE05             EQU  H'0005'
SE06             EQU  H'0006'
SE07             EQU  H'0007'


;----- LCDSE1 Bits -----------------------------------------------------
SE08             EQU  H'0000'
SE09             EQU  H'0001'
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
SE29             EQU  H'0005'
SE30             EQU  H'0006'
SE31             EQU  H'0007'


;----- LCDSE4 Bits -----------------------------------------------------
SE32             EQU  H'0000'


;----- LCDRL Bits -----------------------------------------------------
LCDIRI           EQU  H'0003'

LRLAT0           EQU  H'0000'
LRLAT1           EQU  H'0001'
LRLAT2           EQU  H'0002'
LRLBP0           EQU  H'0004'
LRLBP1           EQU  H'0005'
LRLAP0           EQU  H'0006'
LRLAP1           EQU  H'0007'


;----- LCDREF Bits -----------------------------------------------------
VLCD1PE          EQU  H'0000'
VLCD2PE          EQU  H'0001'
VLCD3PE          EQU  H'0002'
LCDIRS           EQU  H'0006'
LCDIRE           EQU  H'0007'

LCDCST0          EQU  H'0003'
LCDCST1          EQU  H'0004'
LCDCST2          EQU  H'0005'


;----- SSP2CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


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

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'


;----- SSP2ADD Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- T4CON Bits -----------------------------------------------------
T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
TMR4ON           EQU  H'0002'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'



;----- CCP7CON Bits -----------------------------------------------------
CCP7M0           EQU  H'0000'
CCP7M1           EQU  H'0001'
CCP7M2           EQU  H'0002'
CCP7M3           EQU  H'0003'
DC7B0            EQU  H'0004'
DC7B1            EQU  H'0005'

CCP7Y            EQU  H'0004'
CCP7X            EQU  H'0005'


;----- CCP6CON Bits -----------------------------------------------------
CCP6M0           EQU  H'0000'
CCP6M1           EQU  H'0001'
CCP6M2           EQU  H'0002'
CCP6M3           EQU  H'0003'
DC6B0            EQU  H'0004'
DC6B1            EQU  H'0005'

CCP6Y            EQU  H'0004'
CCP6X            EQU  H'0005'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'

CCP5Y            EQU  H'0004'
CCP5X            EQU  H'0005'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'

CCP4Y            EQU  H'0004'
CCP4X            EQU  H'0005'


;----- T5GCON Bits -----------------------------------------------------
T5GVAL           EQU  H'0002'
T5GGO_NOT_T5DONE EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
TMR5GE           EQU  H'0007'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GGO            EQU  H'0003'

NOT_T5DONE       EQU  H'0003'


;----- T5CON Bits -----------------------------------------------------
TMR5ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T5SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'

T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- PMD3 Bits -----------------------------------------------------
TMR12MD          EQU  H'0000'
CCP4MD           EQU  H'0001'
CCP5MD           EQU  H'0002'
CCP6MD           EQU  H'0003'
CCP7MD           EQU  H'0004'
CCP8MD           EQU  H'0005'
CCP9MD           EQU  H'0006'
CCP10MD          EQU  H'0007'


;----- PMD2 Bits -----------------------------------------------------
CMP1MD           EQU  H'0000'
CMP2MD           EQU  H'0001'
CMP3MD           EQU  H'0002'
TMR5MD           EQU  H'0003'
TMR6MD           EQU  H'0004'
TMR7MD           EQU  H'0005'
TMR8MD           EQU  H'0006'
TMR10MD          EQU  H'0007'


;----- PMD1 Bits -----------------------------------------------------
TMR1MD           EQU  H'0001'
TMR2MD           EQU  H'0002'
TMR3MD           EQU  H'0003'
TMR4MD           EQU  H'0004'
RTCCMD           EQU  H'0005'
CTMUMD           EQU  H'0006'


;----- PMD0 Bits -----------------------------------------------------
ADCMD            EQU  H'0000'
SSP1MD           EQU  H'0001'
SSP2MD           EQU  H'0002'
UART1MD          EQU  H'0003'
UART2MD          EQU  H'0004'
CCP1MD           EQU  H'0005'
CCP2MD           EQU  H'0006'
CCP3MD           EQU  H'0007'


;----- PSTR3CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- PSTR2CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- BAUDCON2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


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


;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RX9D2            EQU  H'0000'
OERR2            EQU  H'0001'
FERR2            EQU  H'0002'
ADDEN2           EQU  H'0003'
CREN2            EQU  H'0004'
SREN2            EQU  H'0005'
RX92             EQU  H'0006'
SPEN2            EQU  H'0007'


;----- ANCON2 Bits -----------------------------------------------------
ANSEL16          EQU  H'0000'
ANSEL17          EQU  H'0001'
ANSEL18          EQU  H'0002'
ANSEL19          EQU  H'0003'


;----- ANCON1 Bits -----------------------------------------------------
ANSEL8           EQU  H'0000'
ANSEL9           EQU  H'0001'
ANSEL10          EQU  H'0002'
ANSEL11          EQU  H'0003'


;----- ANCON0 Bits -----------------------------------------------------
ANSEL0           EQU  H'0000'
ANSEL1           EQU  H'0001'
ANSEL2           EQU  H'0002'
ANSEL3           EQU  H'0003'
ANSEL4           EQU  H'0004'
ANSEL5           EQU  H'0005'
ANSEL6           EQU  H'0006'
ANSEL7           EQU  H'0007'


;----- ODCON3 Bits -----------------------------------------------------
CTMUDS           EQU  H'0000'
U1OD             EQU  H'0006'
U2OD             EQU  H'0007'


;----- ODCON2 Bits -----------------------------------------------------
CCP3OD           EQU  H'0000'
CCP4OD           EQU  H'0001'
CCP5OD           EQU  H'0002'
CCP6OD           EQU  H'0003'
CCP7OD           EQU  H'0004'
CCP8OD           EQU  H'0005'
CCP9OD           EQU  H'0006'
CCP10OD          EQU  H'0007'


;----- ODCON1 Bits -----------------------------------------------------
SPI2OD           EQU  H'0000'
CCP1OD           EQU  H'0005'
CCP2OD           EQU  H'0006'
SPI1OD           EQU  H'0007'


;----- REFOCON Bits -----------------------------------------------------
ROSEL            EQU  H'0004'
ROSSLP           EQU  H'0005'
ROON             EQU  H'0007'

RODIV0           EQU  H'0000'
RODIV1           EQU  H'0001'
RODIV2           EQU  H'0002'
RODIV3           EQU  H'0003'


;----- CCPTMRS2 Bits -----------------------------------------------------
C9TSEL0          EQU  H'0002'
C10TSEL0         EQU  H'0004'

C8TSEL0          EQU  H'0000'
C8TSEL1          EQU  H'0001'


;----- CCPTMRS1 Bits -----------------------------------------------------
C5TSEL0          EQU  H'0002'
C6TSEL0          EQU  H'0004'

C4TSEL0          EQU  H'0000'
C4TSEL1          EQU  H'0001'
C7TSEL0          EQU  H'0006'
C7TSEL1          EQU  H'0007'


;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C1TSEL2          EQU  H'0002'
C2TSEL0          EQU  H'0003'
C2TSEL1          EQU  H'0004'
C2TSEL2          EQU  H'0005'
C3TSEL0          EQU  H'0006'
C3TSEL1          EQU  H'0007'


;----- CM3CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM3CON1 Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM2CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM2CON1 Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- T12CON Bits -----------------------------------------------------
TMR12ON          EQU  H'0002'

T12CKPS0         EQU  H'0000'
T12CKPS1         EQU  H'0001'
T12OUTPS0        EQU  H'0003'
T12OUTPS1        EQU  H'0004'
T12OUTPS2        EQU  H'0005'
T12OUTPS3        EQU  H'0006'


;----- T10CON Bits -----------------------------------------------------
TMR10ON          EQU  H'0002'

T10CKPS0         EQU  H'0000'
T10CKPS1         EQU  H'0001'
T10OUTPS0        EQU  H'0003'
T10OUTPS1        EQU  H'0004'
T10OUTPS2        EQU  H'0005'
T10OUTPS3        EQU  H'0006'


;----- T8CON Bits -----------------------------------------------------
TMR8ON           EQU  H'0002'

T8CKPS0          EQU  H'0000'
T8CKPS1          EQU  H'0001'
T8OUTPS0         EQU  H'0003'
T8OUTPS1         EQU  H'0004'
T8OUTPS2         EQU  H'0005'
T8OUTPS3         EQU  H'0006'


;----- T6CON Bits -----------------------------------------------------
TMR6ON           EQU  H'0002'

T6CKPS0          EQU  H'0000'
T6CKPS1          EQU  H'0001'
T6OUTPS0         EQU  H'0003'
T6OUTPS1         EQU  H'0004'
T6OUTPS2         EQU  H'0005'
T6OUTPS3         EQU  H'0006'


;----- T7GCON Bits -----------------------------------------------------
T7GVAL           EQU  H'0002'
T7GGO_NOT_T7DONE EQU  H'0003'
T7GSPM           EQU  H'0004'
T7GTM            EQU  H'0005'
T7GPOL           EQU  H'0006'
TMR7GE           EQU  H'0007'

T7GSS0           EQU  H'0000'
T7GSS1           EQU  H'0001'
T7GGO            EQU  H'0003'

NOT_T7DONE       EQU  H'0003'


;----- T7CON Bits -----------------------------------------------------
TMR7ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T7SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'

T7CKPS0          EQU  H'0004'
T7CKPS1          EQU  H'0005'
TMR7CS0          EQU  H'0006'
TMR7CS1          EQU  H'0007'


;----- CCP10CON Bits -----------------------------------------------------
CCP10M0          EQU  H'0000'
CCP10M1          EQU  H'0001'
CCP10M2          EQU  H'0002'
CCP10M3          EQU  H'0003'
DC10B0           EQU  H'0004'
DC10B1           EQU  H'0005'

CCP10Y           EQU  H'0004'
CCP10X           EQU  H'0005'


;----- CCP9CON Bits -----------------------------------------------------
CCP9M0           EQU  H'0000'
CCP9M1           EQU  H'0001'
CCP9M2           EQU  H'0002'
CCP9M3           EQU  H'0003'
DC9B0            EQU  H'0004'
DC9B1            EQU  H'0005'

CCP9Y            EQU  H'0004'
CCP9X            EQU  H'0005'


;----- CCP8CON Bits -----------------------------------------------------
CCP8M0           EQU  H'0000'
CCP8M1           EQU  H'0001'
CCP8M2           EQU  H'0002'
CCP8M3           EQU  H'0003'
DC8B0            EQU  H'0004'
DC8B1            EQU  H'0005'

CCP8Y            EQU  H'0004'
CCP8X            EQU  H'0005'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'
P3M0             EQU  H'0006'
P3M1             EQU  H'0007'

CCP3Y            EQU  H'0004'
CCP3X            EQU  H'0005'


;----- ECCP3DEL Bits -----------------------------------------------------
P3RSEN           EQU  H'0007'

P3DC0            EQU  H'0000'
P3DC1            EQU  H'0001'
P3DC2            EQU  H'0002'
P3DC3            EQU  H'0003'
P3DC4            EQU  H'0004'
P3DC5            EQU  H'0005'
P3DC6            EQU  H'0006'


;----- PWM3CON Bits -----------------------------------------------------
P3RSEN           EQU  H'0007'

P3DC0            EQU  H'0000'
P3DC1            EQU  H'0001'
P3DC2            EQU  H'0002'
P3DC3            EQU  H'0003'
P3DC4            EQU  H'0004'
P3DC5            EQU  H'0005'
P3DC6            EQU  H'0006'


;----- ECCP3AS Bits -----------------------------------------------------
ECCP3ASE         EQU  H'0007'

PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'
ECCP3AS0         EQU  H'0004'
ECCP3AS1         EQU  H'0005'
ECCP3AS2         EQU  H'0006'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'


;----- ECCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'

CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'


;----- ECCP2DEL Bits -----------------------------------------------------
P2RSEN           EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- PWM2CON Bits -----------------------------------------------------
P2RSEN           EQU  H'0007'

P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'


;----- ECCP2AS Bits -----------------------------------------------------
ECCP2ASE         EQU  H'0007'

PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'
ECCP2AS0         EQU  H'0004'
ECCP2AS1         EQU  H'0005'
ECCP2AS2         EQU  H'0006'


;----- PADCFG1 Bits -----------------------------------------------------
REPU             EQU  H'0006'
RDPU             EQU  H'0007'

RTSECSEL0        EQU  H'0001'
RTSECSEL1        EQU  H'0002'


;----- CM1CON Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CM1CON1 Bits -----------------------------------------------------
CREF             EQU  H'0002'
CPOL             EQU  H'0005'
COE              EQU  H'0006'
CON              EQU  H'0007'

CCH0             EQU  H'0000'
CCH1             EQU  H'0001'
EVPOL0           EQU  H'0003'
EVPOL1           EQU  H'0004'


;----- CTMUICON Bits -----------------------------------------------------
IRNG0            EQU  H'0000'
IRNG1            EQU  H'0001'
ITRIM0           EQU  H'0002'
ITRIM1           EQU  H'0003'
ITRIM2           EQU  H'0004'
ITRIM3           EQU  H'0005'
ITRIM4           EQU  H'0006'
ITRIM5           EQU  H'0007'


;----- CTMUCONL Bits -----------------------------------------------------
EDG1STAT         EQU  H'0000'
EDG2STAT         EQU  H'0001'
EDG1POL          EQU  H'0004'
EDG2POL          EQU  H'0007'

EDG1SEL0         EQU  H'0002'
EDG1SEL1         EQU  H'0003'
EDG2SEL0         EQU  H'0005'
EDG2SEL1         EQU  H'0006'


;----- CTMUCONH Bits -----------------------------------------------------
CTTRIG           EQU  H'0000'
IDISSEN          EQU  H'0001'
EDGSEQEN         EQU  H'0002'
EDGEN            EQU  H'0003'
TGEN             EQU  H'0004'
CTMUSIDL         EQU  H'0005'
CTMUEN           EQU  H'0007'


;----- ALRMRPT Bits -----------------------------------------------------
ARPT0            EQU  H'0000'
ARPT1            EQU  H'0001'
ARPT2            EQU  H'0002'
ARPT3            EQU  H'0003'
ARPT4            EQU  H'0004'
ARPT5            EQU  H'0005'
ARPT6            EQU  H'0006'
ARPT7            EQU  H'0007'


;----- ALRMCFG Bits -----------------------------------------------------
CHIME            EQU  H'0006'
ALRMEN           EQU  H'0007'

ALRMPTR0         EQU  H'0000'
ALRMPTR1         EQU  H'0001'
AMASK0           EQU  H'0002'
AMASK1           EQU  H'0003'
AMASK2           EQU  H'0004'
AMASK3           EQU  H'0005'


;----- RTCVALH Bits -----------------------------------------------------
WAITE0           EQU  H'0000'
WAITE1           EQU  H'0001'
WAITM0           EQU  H'0002'
WAITM1           EQU  H'0003'
WAITM2           EQU  H'0004'
WAITM3           EQU  H'0005'
WAITB0           EQU  H'0006'
WAITB1           EQU  H'0007'


;----- RTCCAL Bits -----------------------------------------------------
CAL0             EQU  H'0000'
CAL1             EQU  H'0001'
CAL2             EQU  H'0002'
CAL3             EQU  H'0003'
CAL4             EQU  H'0004'
CAL5             EQU  H'0005'
CAL6             EQU  H'0006'
CAL7             EQU  H'0007'


;----- RTCCFG Bits -----------------------------------------------------
RTCOE            EQU  H'0002'
HALFSEC          EQU  H'0003'
RTCSYNC          EQU  H'0004'
RTCWREN          EQU  H'0005'
RTCEN            EQU  H'0007'

RTCPTR0          EQU  H'0000'
RTCPTR1          EQU  H'0001'


;----- PIE6 Bits -----------------------------------------------------
CMP1IE           EQU  H'0000'
CMP2IE           EQU  H'0001'
CMP3IE           EQU  H'0002'
EEIE             EQU  H'0004'


;----- OSCCON2 Bits -----------------------------------------------------
MFIOSEL          EQU  H'0000'
MFIOFS           EQU  H'0001'
SOSCGO           EQU  H'0003'
SOSCRUN          EQU  H'0006'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
TXCKP            EQU  H'0004'
RXDTP            EQU  H'0005'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- LCDDATA0 Bits -----------------------------------------------------
S00C0            EQU  H'0000'
S01C0            EQU  H'0001'
S02C0            EQU  H'0002'
S03C0            EQU  H'0003'
S04C0            EQU  H'0004'
S05C0            EQU  H'0005'
S06C0            EQU  H'0006'
S07C0            EQU  H'0007'


;----- LCDDATA1 Bits -----------------------------------------------------
S08C0            EQU  H'0000'
S09C0            EQU  H'0001'
S10C0            EQU  H'0002'
S11C0            EQU  H'0003'
S12C0            EQU  H'0004'
S13C0            EQU  H'0005'
S14C0            EQU  H'0006'
S15C0            EQU  H'0007'


;----- LCDDATA2 Bits -----------------------------------------------------
S16C0            EQU  H'0000'
S17C0            EQU  H'0001'
S18C0            EQU  H'0002'
S19C0            EQU  H'0003'
S20C0            EQU  H'0004'
S21C0            EQU  H'0005'
S22C0            EQU  H'0006'
S23C0            EQU  H'0007'


;----- LCDDATA3 Bits -----------------------------------------------------
S24C0            EQU  H'0000'
S25C0            EQU  H'0001'
S26C0            EQU  H'0002'
S27C0            EQU  H'0003'
S28C0            EQU  H'0004'
S29C0            EQU  H'0005'
S30C0            EQU  H'0006'
S31C0            EQU  H'0007'


;----- LCDDATA4 Bits -----------------------------------------------------
S32C0            EQU  H'0000'


;----- LCDDATA6 Bits -----------------------------------------------------
S00C1            EQU  H'0000'
S01C1            EQU  H'0001'
S02C1            EQU  H'0002'
S03C1            EQU  H'0003'
S04C1            EQU  H'0004'
S05C1            EQU  H'0005'
S06C1            EQU  H'0006'
S07C1            EQU  H'0007'


;----- LCDDATA7 Bits -----------------------------------------------------
S08C1            EQU  H'0000'
S09C1            EQU  H'0001'
S10C1            EQU  H'0002'
S11C1            EQU  H'0003'
S12C1            EQU  H'0004'
S13C1            EQU  H'0005'
S14C1            EQU  H'0006'
S15C1            EQU  H'0007'


;----- LCDDATA8 Bits -----------------------------------------------------
S16C1            EQU  H'0000'
S17C1            EQU  H'0001'
S18C1            EQU  H'0002'
S19C1            EQU  H'0003'
S20C1            EQU  H'0004'
S21C1            EQU  H'0005'
S22C1            EQU  H'0006'
S23C1            EQU  H'0007'


;----- LCDDATA9 Bits -----------------------------------------------------
S24C1            EQU  H'0000'
S25C1            EQU  H'0001'
S26C1            EQU  H'0002'
S27C1            EQU  H'0003'
S28C1            EQU  H'0004'
S29C1            EQU  H'0005'
S30C1            EQU  H'0006'
S31C1            EQU  H'0007'


;----- LCDDATA10 Bits -----------------------------------------------------
S32C1            EQU  H'0000'


;----- LCDDATA12 Bits -----------------------------------------------------
S00C2            EQU  H'0000'
S01C2            EQU  H'0001'
S02C2            EQU  H'0002'
S03C2            EQU  H'0003'
S04C2            EQU  H'0004'
S05C2            EQU  H'0005'
S06C2            EQU  H'0006'
S07C2            EQU  H'0007'


;----- LCDDATA13 Bits -----------------------------------------------------
S08C2            EQU  H'0000'
S09C2            EQU  H'0001'
S10C2            EQU  H'0002'
S11C2            EQU  H'0003'
S12C2            EQU  H'0004'
S13C2            EQU  H'0005'
S14C2            EQU  H'0006'
S15C2            EQU  H'0007'


;----- LCDDATA14 Bits -----------------------------------------------------
S16C2            EQU  H'0000'
S17C2            EQU  H'0001'
S18C2            EQU  H'0002'
S19C2            EQU  H'0003'
S20C2            EQU  H'0004'
S21C2            EQU  H'0005'
S22C2            EQU  H'0006'
S23C2            EQU  H'0007'


;----- LCDDATA15 Bits -----------------------------------------------------
S24C2            EQU  H'0000'
S25C2            EQU  H'0001'
S26C2            EQU  H'0002'
S27C2            EQU  H'0003'
S28C2            EQU  H'0004'
S29C2            EQU  H'0005'
S30C2            EQU  H'0006'
S31C2            EQU  H'0007'


;----- LCDDATA16 Bits -----------------------------------------------------
S32C2            EQU  H'0000'


;----- LCDDATA18 Bits -----------------------------------------------------
S00C3            EQU  H'0000'
S01C3            EQU  H'0001'
S02C3            EQU  H'0002'
S03C3            EQU  H'0003'
S04C3            EQU  H'0004'
S05C3            EQU  H'0005'
S06C3            EQU  H'0006'
S07C3            EQU  H'0007'


;----- LCDDATA19 Bits -----------------------------------------------------
S08C3            EQU  H'0000'
S09C3            EQU  H'0001'
S10C3            EQU  H'0002'
S11C3            EQU  H'0003'
S12C3            EQU  H'0004'
S13C3            EQU  H'0005'
S14C3            EQU  H'0006'
S15C3            EQU  H'0007'


;----- LCDDATA20 Bits -----------------------------------------------------
S16C3            EQU  H'0000'
S17C3            EQU  H'0001'
S18C3            EQU  H'0002'
S19C3            EQU  H'0003'
S20C3            EQU  H'0004'
S21C3            EQU  H'0005'
S22C3            EQU  H'0006'
S23C3            EQU  H'0007'


;----- LCDDATA21 Bits -----------------------------------------------------
S24C3            EQU  H'0000'
S25C3            EQU  H'0001'
S26C3            EQU  H'0002'
S27C3            EQU  H'0003'
S28C3            EQU  H'0004'
S29C3            EQU  H'0005'
S30C3            EQU  H'0006'
S31C3            EQU  H'0007'


;----- LCDDATA22 Bits -----------------------------------------------------
S32C3            EQU  H'0000'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


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
OSC2             EQU  H'0006'
OSC1             EQU  H'0007'

ULPWUIN          EQU  H'0000'
SEG18            EQU  H'0001'
VREF_MINUS       EQU  H'0002'
VREF_PLUS        EQU  H'0003'
SEG14            EQU  H'0004'
SEG15            EQU  H'0005'
CLKO             EQU  H'0006'
CLKI             EQU  H'0007'

T0CKI            EQU  H'0004'
T1CKI            EQU  H'0005'

T3G              EQU  H'0005'

LVDIN            EQU  H'0005'


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

SEG30            EQU  H'0000'
SEG8             EQU  H'0001'
SEG9             EQU  H'0002'
SEG10            EQU  H'0003'
SEG11            EQU  H'0004'
SEG29            EQU  H'0005'

FLT0             EQU  H'0000'
CTED1            EQU  H'0002'
CTED2            EQU  H'0003'
T3CKI            EQU  H'0005'

CCP2_PA2         EQU  H'0003'
T1G              EQU  H'0005'

PGM              EQU  H'0005'
PGC              EQU  H'0006'
PGD              EQU  H'0007'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'

SEG32            EQU  H'0001'
SEG13            EQU  H'0002'
SEG17            EQU  H'0003'
SEG16            EQU  H'0004'
SEG12            EQU  H'0005'
SEG27            EQU  H'0006'
SEG28            EQU  H'0007'

SOSCO            EQU  H'0000'
SOSCI            EQU  H'0001'
SCK1             EQU  H'0003'
SDI1             EQU  H'0004'
SDO1             EQU  H'0005'
TX1              EQU  H'0006'
RX1              EQU  H'0007'

SCKLI            EQU  H'0000'
CCP2_PORTC       EQU  H'0001'
CCP1             EQU  H'0002'
SCL1             EQU  H'0003'
SDA1             EQU  H'0004'
CK1              EQU  H'0006'
DT1              EQU  H'0007'

PA2_PORTC        EQU  H'0001'
PA1              EQU  H'0002'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'

AD0              EQU  H'0000'
AD1              EQU  H'0001'
AD2              EQU  H'0002'
AD3              EQU  H'0003'
AD4              EQU  H'0004'
AD5              EQU  H'0005'
AD6              EQU  H'0006'
AD7              EQU  H'0007'

PSP0             EQU  H'0000'
PSP1             EQU  H'0001'
PSP2             EQU  H'0002'
PSP3             EQU  H'0003'
PSP4             EQU  H'0004'
PSP5             EQU  H'0005'
PSP6             EQU  H'0006'
PSP7             EQU  H'0007'

SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

CTPLS            EQU  H'0000'
T5CKI            EQU  H'0001'
SDO2             EQU  H'0004'
SDI2             EQU  H'0005'
SCK2             EQU  H'0006'
SS2              EQU  H'0007'

T7G              EQU  H'0001'
SDA2             EQU  H'0005'
SCL2             EQU  H'0006'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'

AD8              EQU  H'0000'
AD9              EQU  H'0001'
AD10             EQU  H'0002'
AD11             EQU  H'0003'
AD12             EQU  H'0004'
AD13             EQU  H'0005'
AD14             EQU  H'0006'
AD15             EQU  H'0007'

PD2              EQU  H'0000'
PC2              EQU  H'0001'
PB2              EQU  H'0002'
PC3              EQU  H'0003'
PB3              EQU  H'0004'
PC1              EQU  H'0005'
PB1              EQU  H'0006'
PA2_PORTE        EQU  H'0007'

CCP10            EQU  H'0002'
CCP9             EQU  H'0003'
CCP8             EQU  H'0004'
CCP7             EQU  H'0005'
CCP6             EQU  H'0006'
CCP2_PORTE       EQU  H'0007'

RD               EQU  H'0000'
WR               EQU  H'0001'
CS               EQU  H'0002'
COM0             EQU  H'0003'
COM1             EQU  H'0004'
COM2             EQU  H'0005'
COM3             EQU  H'0006'
SEG31            EQU  H'0007'

LCDBIAS1         EQU  H'0000'
LCDBIAS2         EQU  H'0001'
LCDBIAS3         EQU  H'0002'
REFO             EQU  H'0004'


;----- PORTF Bits -----------------------------------------------------
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'

AN6              EQU  H'0001'
AN7              EQU  H'0002'
AN8              EQU  H'0003'
AN9              EQU  H'0004'
AN10             EQU  H'0005'
AN11             EQU  H'0006'
AN5              EQU  H'0007'

SEG19            EQU  H'0001'
SEG20            EQU  H'0002'
SEG21            EQU  H'0003'
SEG22            EQU  H'0004'
SEG23            EQU  H'0005'
SEG24            EQU  H'0006'
SEG25            EQU  H'0007'

C2OUT_PORTF      EQU  H'0001'
C1OUT_PORTF      EQU  H'0002'
C2INB            EQU  H'0003'
C2INA            EQU  H'0004'
C1INB            EQU  H'0005'
C1INA            EQU  H'0006'
SS1              EQU  H'0007'

CTDIN            EQU  H'0001'
CTMUI            EQU  H'0003'
CVREF            EQU  H'0005'


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'
RG5              EQU  H'0005'

CCP3             EQU  H'0000'
C3OUT_PORTG      EQU  H'0001'
C3INA            EQU  H'0002'
C3INB            EQU  H'0003'
C3INC            EQU  H'0004'

PA3              EQU  H'0000'
TX2              EQU  H'0001'
RX2              EQU  H'0002'
PD3              EQU  H'0003'
PD1              EQU  H'0004'

AN19             EQU  H'0001'
AN18             EQU  H'0002'
AN17             EQU  H'0003'
AN16             EQU  H'0004'

CK2              EQU  H'0001'
DT2              EQU  H'0002'
CCP4             EQU  H'0003'
CCP5             EQU  H'0004'

SEG26            EQU  H'0004'

T7CKI            EQU  H'0004'

T5G              EQU  H'0004'

RTCC             EQU  H'0004'


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
LATE3            EQU  H'0003'
LATE4            EQU  H'0004'
LATE5            EQU  H'0005'
LATE6            EQU  H'0006'
LATE7            EQU  H'0007'


;----- LATF Bits -----------------------------------------------------
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
TRISE3           EQU  H'0003'
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'


;----- TRISF Bits -----------------------------------------------------
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


;----- OSCTUNE Bits -----------------------------------------------------
PLLEN            EQU  H'0006'
INTSRC           EQU  H'0007'

TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- PSTR1CON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'

CMPL0            EQU  H'0006'
CMPL1            EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
TMR1GIE          EQU  H'0002'
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
TMR1GIF          EQU  H'0002'
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
TMR1GIP          EQU  H'0002'
SSP1IP           EQU  H'0003'
TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'
ADIP             EQU  H'0006'

SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'


;----- PIE2 Bits -----------------------------------------------------
TMR3GIE          EQU  H'0000'
TMR3IE           EQU  H'0001'
HLVDIE           EQU  H'0002'
BCL1IE           EQU  H'0003'
BCL2IE           EQU  H'0004'
SSP2IE           EQU  H'0005'
OSCFIE           EQU  H'0007'

LVDIE            EQU  H'0002'
BCLIE            EQU  H'0003'


;----- PIR2 Bits -----------------------------------------------------
TMR3GIF          EQU  H'0000'
TMR3IF           EQU  H'0001'
HLVDIF           EQU  H'0002'
BCL1IF           EQU  H'0003'
BCL2IF           EQU  H'0004'
SSP2IF           EQU  H'0005'
OSCFIF           EQU  H'0007'

LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'


;----- IPR2 Bits -----------------------------------------------------
TMR3GIP          EQU  H'0000'
TMR3IP           EQU  H'0001'
HLVDIP           EQU  H'0002'
BCL1IP           EQU  H'0003'
BCL2IP           EQU  H'0004'
SSP2IP           EQU  H'0005'
OSCFIP           EQU  H'0007'

LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'


;----- PIE3 Bits -----------------------------------------------------
RTCCIE           EQU  H'0000'
CCP1IE           EQU  H'0001'
CCP2IE           EQU  H'0002'
CTMUIE           EQU  H'0003'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'
LCDIE            EQU  H'0006'
TMR5GIE          EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
RTCCIF           EQU  H'0000'
CCP1IF           EQU  H'0001'
CCP2IF           EQU  H'0002'
CTMUIF           EQU  H'0003'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'
LCDIF            EQU  H'0006'
TMR5GIF          EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
RTCCIP           EQU  H'0000'
CCP1IP           EQU  H'0001'
CCP2IP           EQU  H'0002'
CTMUIP           EQU  H'0003'
TX2IP            EQU  H'0004'
RC2IP            EQU  H'0005'
LCDIP            EQU  H'0006'
TMR5GIP          EQU  H'0007'


;----- PIR6 Bits -----------------------------------------------------
CMP1IF           EQU  H'0000'
CMP2IF           EQU  H'0001'
CMP3IF           EQU  H'0002'
EEIF             EQU  H'0004'


;----- HLVDCON Bits -----------------------------------------------------
HLVDEN           EQU  H'0004'
IRVST            EQU  H'0005'
BGVST            EQU  H'0006'
VDIRMAG          EQU  H'0007'

HLVDL0           EQU  H'0000'
HLVDL1           EQU  H'0001'
HLVDL2           EQU  H'0002'
HLVDL3           EQU  H'0003'


;----- IPR6 Bits -----------------------------------------------------
CMP1IP           EQU  H'0000'
CMP2IP           EQU  H'0001'
CMP3IP           EQU  H'0002'
EEIP             EQU  H'0004'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_T1DONE EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GGO            EQU  H'0003'

NOT_T1DONE       EQU  H'0003'


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
SENDB            EQU  H'0003'
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
SENDB            EQU  H'0003'
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


;----- T3GCON Bits -----------------------------------------------------
T3GVAL           EQU  H'0002'
T3GGO_NOT_T3DONE EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GGO            EQU  H'0003'

NOT_T3DONE       EQU  H'0003'


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
RD16             EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'



;----- CMSTAT Bits -----------------------------------------------------
CMP1OUT          EQU  H'0005'
CMP2OUT          EQU  H'0006'
CMP3OUT          EQU  H'0007'

C1OUT_CMSTAT     EQU  H'0005'
C2OUT_CMSTAT     EQU  H'0006'
C3OUT_CMSTAT     EQU  H'0007'


;----- CMSTATUS Bits -----------------------------------------------------
CMP1OUT          EQU  H'0005'
CMP2OUT          EQU  H'0006'
CMP3OUT          EQU  H'0007'

C1OUT_CMSTATUS   EQU  H'0005'
C2OUT_CMSTATUS   EQU  H'0006'
C3OUT_CMSTATUS   EQU  H'0007'


;----- CVRCON Bits -----------------------------------------------------
CVRSS            EQU  H'0005'
CVROE            EQU  H'0006'
CVREN            EQU  H'0007'

CVR0             EQU  H'0000'
CVR1             EQU  H'0001'
CVR2             EQU  H'0002'
CVR3             EQU  H'0003'
CVR4             EQU  H'0004'


;----- PIE4 Bits -----------------------------------------------------
CCP3IE           EQU  H'0000'
CCP4IE           EQU  H'0001'
CCP5IE           EQU  H'0002'
CCP6IE           EQU  H'0003'
CCP7IE           EQU  H'0004'
CCP8IE           EQU  H'0005'
CCP9IE           EQU  H'0006'
CCP10IE          EQU  H'0007'


;----- PIR4 Bits -----------------------------------------------------
CCP3IF           EQU  H'0000'
CCP4IF           EQU  H'0001'
CCP5IF           EQU  H'0002'
CCP6IF           EQU  H'0003'
CCP7IF           EQU  H'0004'
CCP8IF           EQU  H'0005'
CCP9IF           EQU  H'0006'
CCP10IF          EQU  H'0007'


;----- IPR4 Bits -----------------------------------------------------
CCP3IP           EQU  H'0000'
CCP4IP           EQU  H'0001'
CCP5IP           EQU  H'0002'
CCP6IP           EQU  H'0003'
CCP7IP           EQU  H'0004'
CCP8IP           EQU  H'0005'
CCP9IP           EQU  H'0006'
CCP10IP          EQU  H'0007'


;----- PIE5 Bits -----------------------------------------------------
TMR4IE           EQU  H'0000'
TMR5IE           EQU  H'0001'
TMR6IE           EQU  H'0002'
TMR7IE           EQU  H'0003'
TMR8IE           EQU  H'0004'
TMR10IE          EQU  H'0005'
TMR12IE          EQU  H'0006'
TMR7GIE          EQU  H'0007'


;----- PIR5 Bits -----------------------------------------------------
TMR4IF           EQU  H'0000'
TMR5IF           EQU  H'0001'
TMR6IF           EQU  H'0002'
TMR7IF           EQU  H'0003'
TMR8IF           EQU  H'0004'
TMR10IF          EQU  H'0005'
TMR12IF          EQU  H'0006'
TMR7GIF          EQU  H'0007'


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


;----- ECCP1CON Bits -----------------------------------------------------
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


;----- ECCP1DEL Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'


;----- PWM1CON Bits -----------------------------------------------------
P1RSEN           EQU  H'0007'

P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'


;----- ECCP1AS Bits -----------------------------------------------------
ECCP1ASE         EQU  H'0007'

PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'
ECCP1AS0         EQU  H'0004'
ECCP1AS1         EQU  H'0005'
ECCP1AS2         EQU  H'0006'


;----- ADCON2 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ACQT0            EQU  H'0003'
ACQT1            EQU  H'0004'
ACQT2            EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
VNCFG            EQU  H'0003'

CHSN0            EQU  H'0000'
CHSN1            EQU  H'0001'
CHSN2            EQU  H'0002'
VCFG0            EQU  H'0004'
VCFG1            EQU  H'0005'
TRIGSEL0         EQU  H'0006'
TRIGSEL1         EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

DONE             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO               EQU  H'0001'

NOT_DONE         EQU  H'0001'


;----- SSP1CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'

ADMSK1           EQU  H'0001'
ADMSK2           EQU  H'0002'
ADMSK3           EQU  H'0003'
ADMSK4           EQU  H'0004'
ADMSK5           EQU  H'0005'


;----- SSP1CON1 Bits -----------------------------------------------------
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

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'


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

R_W              EQU  H'0002'
D_A              EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DAT          EQU  H'0005'


;----- SSP1ADD Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'



;----- SSPADD Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'



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
RD16             EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
SOSCEN           EQU  H'0003'

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
NOT_CM           EQU  H'0005'
SBOREN           EQU  H'0006'
IPEN             EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'
CM               EQU  H'0005'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'
ULPSINK          EQU  H'0001'
ULPEN            EQU  H'0002'
SRETEN           EQU  H'0004'
ULPLVL           EQU  H'0005'
REGSLP           EQU  H'0007'

SWDTE            EQU  H'0000'


;----- IPR5 Bits -----------------------------------------------------
TMR4IP           EQU  H'0000'
TMR5IP           EQU  H'0001'
TMR6IP           EQU  H'0002'
TMR7IP           EQU  H'0003'
TMR8IP           EQU  H'0004'
TMR10IP          EQU  H'0005'
TMR12IP          EQU  H'0006'
TMR7GIP          EQU  H'0007'


;----- OSCCON Bits -----------------------------------------------------
HFIOFS           EQU  H'0002'
OSTS             EQU  H'0003'
IDLEN            EQU  H'0007'

SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
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


;----- STKPTR Bits -----------------------------------------------------
STKUNF           EQU  H'0006'
STKFUL           EQU  H'0007'

SP0              EQU  H'0000'
SP1              EQU  H'0001'
SP2              EQU  H'0002'
SP3              EQU  H'0003'
SP4              EQU  H'0004'
STKOVF           EQU  H'0007'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'0EFB'
       __BADRAM  H'0F26'
       __BADRAM  H'0F6B'
       __BADRAM  H'0F71'
       __BADRAM  H'0F77'
       __BADRAM  H'0F7D'
       __BADRAM  H'0F87'-H'0F88'
       __BADRAM  H'0F90'-H'0F91'
       __BADRAM  H'0F99'-H'0F9A'
       __BADRAM  H'0FA7'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   VREG Sleep Enable bit:
;     RETEN = OFF          Disabled - Controlled by SRETEN bit
;     RETEN = ON           Enabled
;
;   LF-INTOSC Low-power Enable bit:
;     INTOSCSEL = LOW      LF-INTOSC in Low-power mode during Sleep
;     INTOSCSEL = HIGH     LF-INTOSC in High-power mode during Sleep
;
;   SOSC Power Selection and mode Configuration bits:
;     SOSCSEL = LOW        Low Power SOSC circuit selected
;     SOSCSEL = DIG        Digital (SCLKI) mode
;     SOSCSEL = HIGH       High Power SOSC circuit selected
;
;   Extended Instruction Set:
;     XINST = OFF          Disabled
;     XINST = ON           Enabled
;
;   Oscillator:
;     FOSC = LP            LP oscillator
;     FOSC = XT            XT oscillator
;     FOSC = HS2           HS oscillator (High power, 16 MHz - 25 MHz)
;     FOSC = HS1           HS oscillator (Medium power, 4 MHz - 16 MHz)
;     FOSC = EC3IO         EC oscillator, CLKOUT function on OSC2 (High power, 16 MHz - 64 MHz)
;     FOSC = EC3           EC oscillator (High power, 16 MHz - 64 MHz)
;     FOSC = RC            External RC oscillator, CLKOUT function on OSC2
;     FOSC = RCIO          External RC oscillator
;     FOSC = INTIO2        Internal RC oscillator
;     FOSC = INTIO1        Internal RC oscillator, CLKOUT function on OSC2
;     FOSC = EC2IO         EC oscillator, CLKOUT function on OSC2 (Medium power, 160 kHz - 16 MHz)
;     FOSC = EC2           EC oscillator (Medium power, 160 kHz -  16 MHz)
;     FOSC = EC1IO         EC oscillator, CLKOUT function on OSC2 (Low power, DC - 160 kHz)
;     FOSC = EC1           EC oscillator (Low power, DC - 160 kHz)
;
;   PLL x4 Enable bit:
;     PLLCFG = OFF         Disabled
;     PLLCFG = ON          Enabled
;
;   Fail-Safe Clock Monitor:
;     FCMEN = OFF          Disabled
;     FCMEN = ON           Enabled
;
;   Internal External Oscillator Switch Over Mode:
;     IESO = OFF           Disabled
;     IESO = ON            Enabled
;
;   Power Up Timer:
;     PWRTEN = ON          Enabled
;     PWRTEN = OFF         Disabled
;
;   Brown Out Detect:
;     BOREN = OFF          Disabled in hardware, SBOREN disabled
;     BOREN = ON           Controlled with SBOREN bit
;     BOREN = NOSLP        Enabled while active, disabled in SLEEP, SBOREN disabled
;     BOREN = SBORDIS      Enabled in hardware, SBOREN disabled
;
;   Brown-out Reset Voltage bits:
;     BORV = 0             3.0V
;     BORV = 1             2.7V
;     BORV = 2             2.0V
;     BORV = 3             1.8V
;
;   BORMV Power level:
;     BORPWR = LOW         BORMV set to low power level
;     BORPWR = MEDIUM      BORMV set to medium power level
;     BORPWR = HIGH        BORMV set to high power level
;     BORPWR = ZPBORMV     ZPBORMV instead of BORMV is selected
;
;   Watchdog Timer:
;     WDTEN = OFF          WDT disabled in hardware; SWDTEN bit disabled
;     WDTEN = NOSLP        WDT enabled only while device is active and disabled in Sleep mode; SWDTEN bit disabled
;     WDTEN = ON           WDT controlled by SWDTEN bit setting
;     WDTEN = SWDTDIS      WDT enabled in hardware; SWDTEN bit disabled
;
;   Watchdog Postscaler:
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
;     WDTPS = 65536        1:65536
;     WDTPS = 131072       1:131072
;     WDTPS = 262144       1:262144
;     WDTPS = 524288       1:524288
;     WDTPS = 1048576      1:1048576
;
;   RTCC Clock Select:
;     RTCOSC = INTOSCREF   RTCC uses INTRC
;     RTCOSC = SOSCREF     RTCC uses SOSC
;
;   CCP2 Mux:
;     CCP2MX = PORTBE      RE7-Microcontroller Mode/RB3-All other modes
;     CCP2MX = PORTC       RC1
;
;   MSSP address masking:
;     MSSPMSK = MSK5       5 bit address masking mode
;     MSSPMSK = MSK7       7 Bit address masking mode
;
;   Master Clear Enable:
;     MCLRE = OFF          MCLR Disabled, RG5 Enabled
;     MCLRE = ON           MCLR Enabled, RG5 Disabled
;
;   Stack Overflow Reset:
;     STVREN = OFF         Disabled
;     STVREN = ON          Enabled
;
;   Boot Block Size:
;     BBSIZ = BB1K         1K word Boot Block size
;     BBSIZ = BB2K         2K word Boot Block size
;
;   Background Debug:
;     DEBUG = ON           Enabled
;     DEBUG = OFF          Disabled
;
;   Code Protect 00800-03FFF:
;     CP0 = ON             Enabled
;     CP0 = OFF            Disabled
;
;   Code Protect 04000-07FFF:
;     CP1 = ON             Enabled
;     CP1 = OFF            Disabled
;
;   Code Protect 08000-0BFFF:
;     CP2 = ON             Enabled
;     CP2 = OFF            Disabled
;
;   Code Protect 0C000-0FFFF:
;     CP3 = ON             Enabled
;     CP3 = OFF            Disabled
;
;   Code Protect 10000-13FFF:
;     CP4 = ON             Enabled
;     CP4 = OFF            Disabled
;
;   Code Protect 14000-17FFF:
;     CP5 = ON             Enabled
;     CP5 = OFF            Disabled
;
;   Code Protect 18000-1BFFF:
;     CP6 = ON             Enabled
;     CP6 = OFF            Disabled
;
;   Code Protect 1C000-1FFFF:
;     CP7 = ON             Enabled
;     CP7 = OFF            Disabled
;
;   Code Protect Boot:
;     CPB = ON             Enabled
;     CPB = OFF            Disabled
;
;   Data EE Read Protect:
;     CPD = ON             Enabled
;     CPD = OFF            Disabled
;
;   Table Write Protect 00800-03FFF:
;     WRT0 = ON            Enabled
;     WRT0 = OFF           Disabled
;
;   Table Write Protect 04000-07FFF:
;     WRT1 = ON            Enabled
;     WRT1 = OFF           Disabled
;
;   Table Write Protect 08000-0BFFF:
;     WRT2 = ON            Enabled
;     WRT2 = OFF           Disabled
;
;   Table Write Protect 0C000-0FFFF:
;     WRT3 = ON            Enabled
;     WRT3 = OFF           Disabled
;
;   Table Write Protect 10000-13FFF:
;     WRT4 = ON            Enabled
;     WRT4 = OFF           Disabled
;
;   Table Write Protect 14000-17FFF:
;     WRT5 = ON            Enabled
;     WRT5 = OFF           Disabled
;
;   Table Write Protect 18000-1BFFF:
;     WRT6 = ON            Enabled
;     WRT6 = OFF           Disabled
;
;   Table Write Protect 1C000-1FFFF:
;     WRT7 = ON            Enabled
;     WRT7 = OFF           Disabled
;
;   Config. Write Protect:
;     WRTC = ON            Enabled
;     WRTC = OFF           Disabled
;
;   Table Write Protect Boot:
;     WRTB = ON            Enabled
;     WRTB = OFF           Disabled
;
;   Data EE Write Protect:
;     WRTD = ON            Enabled
;     WRTD = OFF           Disabled
;
;   Table Read Protect 00800-03FFF:
;     EBRT0 = ON           Enabled
;     EBRT0 = OFF          Disabled
;
;   Table Read Protect 04000-07FFF:
;     EBRT1 = ON           Enabled
;     EBRT1 = OFF          Disabled
;
;   Table Read Protect 08000-0BFFF:
;     EBRT2 = ON           Enabled
;     EBRT2 = OFF          Disabled
;
;   Table Read Protect 0C000-0FFFF:
;     EBRT3 = ON           Enabled
;     EBRT3 = OFF          Disabled
;
;   Table Read Protect 10000-13FFF:
;     EBRT4 = ON           Enabled
;     EBRT4 = OFF          Disabled
;
;   Table Read Protect 14000-17FFF:
;     EBRT5 = ON           Enabled
;     EBRT5 = OFF          Disabled
;
;   Table Read Protect 18000-1BFFF:
;     EBRT6 = ON           Enabled
;     EBRT6 = OFF          Disabled
;
;   Table Read Protect 1C000-1FFFF:
;     EBRT7 = ON           Enabled
;     EBRT7 = OFF          Disabled
;
;   Table Read Protect Boot:
;     EBRTB = ON           Enabled
;     EBRTB = OFF          Disabled
;
;==========================================================================
;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1L        300000h
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
_CONFIG1L        EQU  H'300000'
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

;----- CONFIG1L Options --------------------------------------------------
_RETEN_OFF_1L        EQU  H'FE'    ; Disabled - Controlled by SRETEN bit
_RETEN_ON_1L         EQU  H'FF'    ; Enabled

_INTOSCSEL_LOW_1L    EQU  H'FB'    ; LF-INTOSC in Low-power mode during Sleep
_INTOSCSEL_HIGH_1L   EQU  H'FF'    ; LF-INTOSC in High-power mode during Sleep

_SOSCSEL_LOW_1L      EQU  H'EF'    ; Low Power SOSC circuit selected
_SOSCSEL_DIG_1L      EQU  H'F7'    ; Digital (SCLKI) mode
_SOSCSEL_HIGH_1L     EQU  H'FF'    ; High Power SOSC circuit selected

_XINST_OFF_1L        EQU  H'BF'    ; Disabled
_XINST_ON_1L         EQU  H'FF'    ; Enabled

;----- CONFIG1H Options --------------------------------------------------
_FOSC_LP_1H          EQU  H'F0'    ; LP oscillator
_FOSC_XT_1H          EQU  H'F1'    ; XT oscillator
_FOSC_HS2_1H         EQU  H'F2'    ; HS oscillator (High power, 16 MHz - 25 MHz)
_FOSC_HS1_1H         EQU  H'F3'    ; HS oscillator (Medium power, 4 MHz - 16 MHz)
_FOSC_EC3IO_1H       EQU  H'F4'    ; EC oscillator, CLKOUT function on OSC2 (High power, 16 MHz - 64 MHz)
_FOSC_EC3_1H         EQU  H'F5'    ; EC oscillator (High power, 16 MHz - 64 MHz)
_FOSC_RC_1H          EQU  H'F6'    ; External RC oscillator, CLKOUT function on OSC2
_FOSC_RCIO_1H        EQU  H'F7'    ; External RC oscillator
_FOSC_INTIO2_1H      EQU  H'F8'    ; Internal RC oscillator
_FOSC_INTIO1_1H      EQU  H'F9'    ; Internal RC oscillator, CLKOUT function on OSC2
_FOSC_EC2IO_1H       EQU  H'FA'    ; EC oscillator, CLKOUT function on OSC2 (Medium power, 160 kHz - 16 MHz)
_FOSC_EC2_1H         EQU  H'FB'    ; EC oscillator (Medium power, 160 kHz -  16 MHz)
_FOSC_EC1IO_1H       EQU  H'FC'    ; EC oscillator, CLKOUT function on OSC2 (Low power, DC - 160 kHz)
_FOSC_EC1_1H         EQU  H'FD'    ; EC oscillator (Low power, DC - 160 kHz)

_PLLCFG_OFF_1H       EQU  H'EF'    ; Disabled
_PLLCFG_ON_1H        EQU  H'FF'    ; Enabled

_FCMEN_OFF_1H        EQU  H'BF'    ; Disabled
_FCMEN_ON_1H         EQU  H'FF'    ; Enabled

_IESO_OFF_1H         EQU  H'7F'    ; Disabled
_IESO_ON_1H          EQU  H'FF'    ; Enabled

;----- CONFIG2L Options --------------------------------------------------
_PWRTEN_ON_2L        EQU  H'FE'    ; Enabled
_PWRTEN_OFF_2L       EQU  H'FF'    ; Disabled

_BOREN_OFF_2L        EQU  H'F9'    ; Disabled in hardware, SBOREN disabled
_BOREN_ON_2L         EQU  H'FB'    ; Controlled with SBOREN bit
_BOREN_NOSLP_2L      EQU  H'FD'    ; Enabled while active, disabled in SLEEP, SBOREN disabled
_BOREN_SBORDIS_2L    EQU  H'FF'    ; Enabled in hardware, SBOREN disabled

_BORV_0_2L           EQU  H'E7'    ; 3.0V
_BORV_1_2L           EQU  H'EF'    ; 2.7V
_BORV_2_2L           EQU  H'F7'    ; 2.0V
_BORV_3_2L           EQU  H'FF'    ; 1.8V

_BORPWR_LOW_2L       EQU  H'9F'    ; BORMV set to low power level
_BORPWR_MEDIUM_2L    EQU  H'BF'    ; BORMV set to medium power level
_BORPWR_HIGH_2L      EQU  H'DF'    ; BORMV set to high power level
_BORPWR_ZPBORMV_2L   EQU  H'FF'    ; ZPBORMV instead of BORMV is selected

;----- CONFIG2H Options --------------------------------------------------
_WDTEN_OFF_2H        EQU  H'FC'    ; WDT disabled in hardware; SWDTEN bit disabled
_WDTEN_NOSLP_2H      EQU  H'FD'    ; WDT enabled only while device is active and disabled in Sleep mode; SWDTEN bit disabled
_WDTEN_ON_2H         EQU  H'FE'    ; WDT controlled by SWDTEN bit setting
_WDTEN_SWDTDIS_2H    EQU  H'FF'    ; WDT enabled in hardware; SWDTEN bit disabled

_WDTPS_1_2H          EQU  H'83'    ; 1:1
_WDTPS_2_2H          EQU  H'87'    ; 1:2
_WDTPS_4_2H          EQU  H'8B'    ; 1:4
_WDTPS_8_2H          EQU  H'8F'    ; 1:8
_WDTPS_16_2H         EQU  H'93'    ; 1:16
_WDTPS_32_2H         EQU  H'97'    ; 1:32
_WDTPS_64_2H         EQU  H'9B'    ; 1:64
_WDTPS_128_2H        EQU  H'9F'    ; 1:128
_WDTPS_256_2H        EQU  H'A3'    ; 1:256
_WDTPS_512_2H        EQU  H'A7'    ; 1:512
_WDTPS_1024_2H       EQU  H'AB'    ; 1:1024
_WDTPS_2048_2H       EQU  H'AF'    ; 1:2048
_WDTPS_4096_2H       EQU  H'B3'    ; 1:4096
_WDTPS_8192_2H       EQU  H'B7'    ; 1:8192
_WDTPS_16384_2H      EQU  H'BB'    ; 1:16384
_WDTPS_32768_2H      EQU  H'BF'    ; 1:32768
_WDTPS_65536_2H      EQU  H'C3'    ; 1:65536
_WDTPS_131072_2H     EQU  H'C7'    ; 1:131072
_WDTPS_262144_2H     EQU  H'CB'    ; 1:262144
_WDTPS_524288_2H     EQU  H'CF'    ; 1:524288
_WDTPS_1048576_2H    EQU  H'FF'    ; 1:1048576

;----- CONFIG3L Options --------------------------------------------------
_RTCOSC_INTOSCREF_3L EQU  H'FE'    ; RTCC uses INTRC
_RTCOSC_SOSCREF_3L   EQU  H'FF'    ; RTCC uses SOSC

;----- CONFIG3H Options --------------------------------------------------
_CCP2MX_PORTBE_3H    EQU  H'FE'    ; RE7-Microcontroller Mode/RB3-All other modes
_CCP2MX_PORTC_3H     EQU  H'FF'    ; RC1

_MSSPMSK_MSK5_3H     EQU  H'F7'    ; 5 bit address masking mode
_MSSPMSK_MSK7_3H     EQU  H'FF'    ; 7 Bit address masking mode

_MCLRE_OFF_3H        EQU  H'7F'    ; MCLR Disabled, RG5 Enabled
_MCLRE_ON_3H         EQU  H'FF'    ; MCLR Enabled, RG5 Disabled

;----- CONFIG4L Options --------------------------------------------------
_STVREN_OFF_4L       EQU  H'FE'    ; Disabled
_STVREN_ON_4L        EQU  H'FF'    ; Enabled

_BBSIZ_BB1K_4L       EQU  H'EF'    ; 1K word Boot Block size
_BBSIZ_BB2K_4L       EQU  H'FF'    ; 2K word Boot Block size

_DEBUG_ON_4L         EQU  H'7F'    ; Enabled
_DEBUG_OFF_4L        EQU  H'FF'    ; Disabled

;----- CONFIG5L Options --------------------------------------------------
_CP0_ON_5L           EQU  H'FE'    ; Enabled
_CP0_OFF_5L          EQU  H'FF'    ; Disabled

_CP1_ON_5L           EQU  H'FD'    ; Enabled
_CP1_OFF_5L          EQU  H'FF'    ; Disabled

_CP2_ON_5L           EQU  H'FB'    ; Enabled
_CP2_OFF_5L          EQU  H'FF'    ; Disabled

_CP3_ON_5L           EQU  H'F7'    ; Enabled
_CP3_OFF_5L          EQU  H'FF'    ; Disabled

_CP4_ON_5L           EQU  H'EF'    ; Enabled
_CP4_OFF_5L          EQU  H'FF'    ; Disabled

_CP5_ON_5L           EQU  H'DF'    ; Enabled
_CP5_OFF_5L          EQU  H'FF'    ; Disabled

_CP6_ON_5L           EQU  H'BF'    ; Enabled
_CP6_OFF_5L          EQU  H'FF'    ; Disabled

_CP7_ON_5L           EQU  H'7F'    ; Enabled
_CP7_OFF_5L          EQU  H'FF'    ; Disabled

;----- CONFIG5H Options --------------------------------------------------
_CPB_ON_5H           EQU  H'BF'    ; Enabled
_CPB_OFF_5H          EQU  H'FF'    ; Disabled

_CPD_ON_5H           EQU  H'7F'    ; Enabled
_CPD_OFF_5H          EQU  H'FF'    ; Disabled

;----- CONFIG6L Options --------------------------------------------------
_WRT0_ON_6L          EQU  H'FE'    ; Enabled
_WRT0_OFF_6L         EQU  H'FF'    ; Disabled

_WRT1_ON_6L          EQU  H'FD'    ; Enabled
_WRT1_OFF_6L         EQU  H'FF'    ; Disabled

_WRT2_ON_6L          EQU  H'FB'    ; Enabled
_WRT2_OFF_6L         EQU  H'FF'    ; Disabled

_WRT3_ON_6L          EQU  H'F7'    ; Enabled
_WRT3_OFF_6L         EQU  H'FF'    ; Disabled

_WRT4_ON_6L          EQU  H'EF'    ; Enabled
_WRT4_OFF_6L         EQU  H'FF'    ; Disabled

_WRT5_ON_6L          EQU  H'DF'    ; Enabled
_WRT5_OFF_6L         EQU  H'FF'    ; Disabled

_WRT6_ON_6L          EQU  H'BF'    ; Enabled
_WRT6_OFF_6L         EQU  H'FF'    ; Disabled

_WRT7_ON_6L          EQU  H'7F'    ; Enabled
_WRT7_OFF_6L         EQU  H'FF'    ; Disabled

;----- CONFIG6H Options --------------------------------------------------
_WRTC_ON_6H          EQU  H'DF'    ; Enabled
_WRTC_OFF_6H         EQU  H'FF'    ; Disabled

_WRTB_ON_6H          EQU  H'BF'    ; Enabled
_WRTB_OFF_6H         EQU  H'FF'    ; Disabled

_WRTD_ON_6H          EQU  H'7F'    ; Enabled
_WRTD_OFF_6H         EQU  H'FF'    ; Disabled

;----- CONFIG7L Options --------------------------------------------------
_EBRT0_ON_7L         EQU  H'FE'    ; Enabled
_EBRT0_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT1_ON_7L         EQU  H'FD'    ; Enabled
_EBRT1_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT2_ON_7L         EQU  H'FB'    ; Enabled
_EBRT2_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT3_ON_7L         EQU  H'F7'    ; Enabled
_EBRT3_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT4_ON_7L         EQU  H'EF'    ; Enabled
_EBRT4_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT5_ON_7L         EQU  H'DF'    ; Enabled
_EBRT5_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT6_ON_7L         EQU  H'BF'    ; Enabled
_EBRT6_OFF_7L        EQU  H'FF'    ; Disabled

_EBRT7_ON_7L         EQU  H'7F'    ; Enabled
_EBRT7_OFF_7L        EQU  H'FF'    ; Disabled

;----- CONFIG7H Options --------------------------------------------------
_EBRTB_ON_7H         EQU  H'BF'    ; Enabled
_EBRTB_OFF_7H        EQU  H'FF'    ; Disabled


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
