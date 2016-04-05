        LIST

;==========================================================================
; Build date : Feb 01 2016
;  MPASM PIC18LF47K40 processor include
; 
;  (c) Copyright 1999-2016 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18LF47K40 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18LF47K40
;       2. LIST directive in the source file
;               LIST   P=PIC18LF47K40
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18LF47K40
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF

;==========================================================================
;       18xxxx Family        EQUates
;==========================================================================
FSR0             EQU  0
FSR1             EQU  1
FSR2             EQU  2

FAST             EQU  1

W                EQU  0
A                EQU  0
ACCESS           EQU  0
BANKED           EQU  1
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
RX2PPS           EQU  H'0E8D'
TX2PPS           EQU  H'0E8E'
SSP2CLKPPS       EQU  H'0E8F'
SSP2DATPPS       EQU  H'0E90'
SSP2SSPPS        EQU  H'0E91'
SSP2BUF          EQU  H'0E92'
SSP2ADD          EQU  H'0E93'
SSP2MSK          EQU  H'0E94'
SSP2STAT         EQU  H'0E95'
SSP2CON1         EQU  H'0E96'
SSP2CON2         EQU  H'0E97'
SSP2CON3         EQU  H'0E98'
RC2REG           EQU  H'0E99'
RCREG2           EQU  H'0E99'
TX2REG           EQU  H'0E9A'
TXREG2           EQU  H'0E9A'
SP2BRG           EQU  H'0E9B'
SP2BRGL          EQU  H'0E9B'
SPBRG2           EQU  H'0E9B'
SP2BRGH          EQU  H'0E9C'
SPBRGH2          EQU  H'0E9C'
RC2STA           EQU  H'0E9D'
RCSTA2           EQU  H'0E9D'
TX2STA           EQU  H'0E9E'
TXSTA2           EQU  H'0E9E'
BAUD2CON         EQU  H'0E9F'
BAUDCON2         EQU  H'0E9F'
BAUDCTL2         EQU  H'0E9F'
PPSLOCK          EQU  H'0EA0'
INT0PPS          EQU  H'0EA1'
INT1PPS          EQU  H'0EA2'
INT2PPS          EQU  H'0EA3'
T0CKIPPS         EQU  H'0EA4'
T1CKIPPS         EQU  H'0EA5'
T1GPPS           EQU  H'0EA6'
T3CKIPPS         EQU  H'0EA7'
T3GPPS           EQU  H'0EA8'
T5CKIPPS         EQU  H'0EA9'
T5GPPS           EQU  H'0EAA'
T2INPPS          EQU  H'0EAB'
T4INPPS          EQU  H'0EAC'
T6INPPS          EQU  H'0EAD'
ADACTPPS         EQU  H'0EAE'
CCP1PPS          EQU  H'0EAF'
CCP2PPS          EQU  H'0EB0'
CWG1PPS          EQU  H'0EB1'
CWGINPPS         EQU  H'0EB1'
MDCARLPPS        EQU  H'0EB2'
MDCARHPPS        EQU  H'0EB3'
MDSRCPPS         EQU  H'0EB4'
RX1PPS           EQU  H'0EB5'
TX1PPS           EQU  H'0EB6'
SSP1CLKPPS       EQU  H'0EB7'
SSP1DATPPS       EQU  H'0EB8'
SSP1SSPPS        EQU  H'0EB9'
IPR0             EQU  H'0EBA'
IPR1             EQU  H'0EBB'
IPR2             EQU  H'0EBC'
IPR3             EQU  H'0EBD'
IPR4             EQU  H'0EBE'
IPR5             EQU  H'0EBF'
IPR6             EQU  H'0EC0'
IPR7             EQU  H'0EC1'
PIE0             EQU  H'0EC2'
PIE1             EQU  H'0EC3'
PIE2             EQU  H'0EC4'
PIE3             EQU  H'0EC5'
PIE4             EQU  H'0EC6'
PIE5             EQU  H'0EC7'
PIE6             EQU  H'0EC8'
PIE7             EQU  H'0EC9'
PIR0             EQU  H'0ECA'
PIR1             EQU  H'0ECB'
PIR2             EQU  H'0ECC'
PIR3             EQU  H'0ECD'
PIR4             EQU  H'0ECE'
PIR5             EQU  H'0ECF'
PIR6             EQU  H'0ED0'
PIR7             EQU  H'0ED1'
WDTCON0          EQU  H'0ED2'
WDTCON1          EQU  H'0ED3'
WDTPSL           EQU  H'0ED4'
WDTPSH           EQU  H'0ED5'
WDTTMR           EQU  H'0ED6'
CPUDOZE          EQU  H'0ED7'
OSCCON1          EQU  H'0ED8'
OSCCON2          EQU  H'0ED9'
OSCCON3          EQU  H'0EDA'
OSCSTAT          EQU  H'0EDB'
OSCSTAT1         EQU  H'0EDB'
OSCEN            EQU  H'0EDC'
OSCTUNE          EQU  H'0EDD'
OSCFRQ           EQU  H'0EDE'
BORCON           EQU  H'0EE0'
PMD0             EQU  H'0EE1'
PMD1             EQU  H'0EE2'
PMD2             EQU  H'0EE3'
PMD3             EQU  H'0EE4'
PMD4             EQU  H'0EE5'
PMD5             EQU  H'0EE6'
RA0PPS           EQU  H'0EE7'
RA1PPS           EQU  H'0EE8'
RA2PPS           EQU  H'0EE9'
RA3PPS           EQU  H'0EEA'
RA4PPS           EQU  H'0EEB'
RA5PPS           EQU  H'0EEC'
RA6PPS           EQU  H'0EED'
RA7PPS           EQU  H'0EEE'
RB0PPS           EQU  H'0EEF'
RB1PPS           EQU  H'0EF0'
RB2PPS           EQU  H'0EF1'
RB3PPS           EQU  H'0EF2'
RB4PPS           EQU  H'0EF3'
RB5PPS           EQU  H'0EF4'
RB6PPS           EQU  H'0EF5'
RB7PPS           EQU  H'0EF6'
RC0PPS           EQU  H'0EF7'
RC1PPS           EQU  H'0EF8'
RC2PPS           EQU  H'0EF9'
RC3PPS           EQU  H'0EFA'
RC4PPS           EQU  H'0EFB'
RC5PPS           EQU  H'0EFC'
RC6PPS           EQU  H'0EFD'
RC7PPS           EQU  H'0EFE'
RD0PPS           EQU  H'0EFF'
RD1PPS           EQU  H'0F00'
RD2PPS           EQU  H'0F01'
RD3PPS           EQU  H'0F02'
RD4PPS           EQU  H'0F03'
RD5PPS           EQU  H'0F04'
RD6PPS           EQU  H'0F05'
RD7PPS           EQU  H'0F06'
RE0PPS           EQU  H'0F07'
RE1PPS           EQU  H'0F08'
RE2PPS           EQU  H'0F09'
IOCAF            EQU  H'0F0A'
IOCAN            EQU  H'0F0B'
IOCAP            EQU  H'0F0C'
INLVLA           EQU  H'0F0D'
SLRCONA          EQU  H'0F0E'
ODCONA           EQU  H'0F0F'
WPUA             EQU  H'0F10'
ANSELA           EQU  H'0F11'
IOCBF            EQU  H'0F12'
IOCBN            EQU  H'0F13'
IOCBP            EQU  H'0F14'
INLVLB           EQU  H'0F15'
SLRCONB          EQU  H'0F16'
ODCONB           EQU  H'0F17'
WPUB             EQU  H'0F18'
ANSELB           EQU  H'0F19'
IOCCF            EQU  H'0F1A'
IOCCN            EQU  H'0F1B'
IOCCP            EQU  H'0F1C'
INLVLC           EQU  H'0F1D'
SLRCONC          EQU  H'0F1E'
ODCONC           EQU  H'0F1F'
WPUC             EQU  H'0F20'
ANSELC           EQU  H'0F21'
INLVLD           EQU  H'0F22'
SLRCOND          EQU  H'0F23'
ODCOND           EQU  H'0F24'
WPUD             EQU  H'0F25'
ANSELD           EQU  H'0F26'
IOCEF            EQU  H'0F27'
IOCEN            EQU  H'0F28'
IOCEP            EQU  H'0F29'
INLVLE           EQU  H'0F2A'
SLRCONE          EQU  H'0F2B'
ODCONE           EQU  H'0F2C'
WPUE             EQU  H'0F2D'
ANSELE           EQU  H'0F2E'
HLVDCON0         EQU  H'0F2F'
HLVDCON1         EQU  H'0F30'
FVRCON           EQU  H'0F31'
ZCDCON           EQU  H'0F32'
DAC1CON0         EQU  H'0F33'
DAC1CON1         EQU  H'0F34'
CM2CON0          EQU  H'0F35'
CM2CON1          EQU  H'0F36'
CM2NCH           EQU  H'0F37'
CM2PCH           EQU  H'0F38'
CM1CON0          EQU  H'0F39'
CM1CON1          EQU  H'0F3A'
CM1NCH           EQU  H'0F3B'
CM1PCH           EQU  H'0F3C'
CMOUT            EQU  H'0F3D'
CLKRCON          EQU  H'0F3E'
CLKRCLK          EQU  H'0F3F'
CWG1CLKCON       EQU  H'0F40'
CWG1ISM          EQU  H'0F41'
CWG1DBR          EQU  H'0F42'
CWG1DBF          EQU  H'0F43'
CWG1CON0         EQU  H'0F44'
CWG1CON1         EQU  H'0F45'
CWG1AS0          EQU  H'0F46'
CWG1AS1          EQU  H'0F47'
CWG1STR          EQU  H'0F48'
SCANLADR         EQU  H'0F49'
SCANLADRL        EQU  H'0F49'
SCANLADRH        EQU  H'0F4A'
SCANLADRU        EQU  H'0F4B'
SCANHADR         EQU  H'0F4C'
SCANHADRL        EQU  H'0F4C'
SCANHADRH        EQU  H'0F4D'
SCANHADRU        EQU  H'0F4E'
SCANCON0         EQU  H'0F4F'
SCANTRIG         EQU  H'0F50'
MDCON0           EQU  H'0F51'
MDCON1           EQU  H'0F52'
MDSRC            EQU  H'0F53'
MDCARL           EQU  H'0F54'
MDCARH           EQU  H'0F55'
ADACT            EQU  H'0F56'
ADCLK            EQU  H'0F57'
ADREF            EQU  H'0F58'
ADCON1           EQU  H'0F59'
ADCON2           EQU  H'0F5A'
ADCON3           EQU  H'0F5B'
ADACQ            EQU  H'0F5C'
ADCAP            EQU  H'0F5D'
ADPRE            EQU  H'0F5E'
ADPCH            EQU  H'0F5F'
ADCON0           EQU  H'0F60'
ADPREV           EQU  H'0F61'
ADPREVL          EQU  H'0F61'
ADPREVH          EQU  H'0F62'
ADRES            EQU  H'0F63'
ADRESL           EQU  H'0F63'
ADRESH           EQU  H'0F64'
ADSTAT           EQU  H'0F65'
ADRPT            EQU  H'0F66'
ADCNT            EQU  H'0F67'
ADSTPT           EQU  H'0F68'
ADSTPTL          EQU  H'0F68'
ADSTPTH          EQU  H'0F69'
ADLTH            EQU  H'0F6A'
ADLTHL           EQU  H'0F6A'
ADLTHH           EQU  H'0F6B'
ADUTH            EQU  H'0F6C'
ADUTHL           EQU  H'0F6C'
ADUTHH           EQU  H'0F6D'
ADERR            EQU  H'0F6E'
ADERRL           EQU  H'0F6E'
ADERRH           EQU  H'0F6F'
ADACC            EQU  H'0F70'
ADACCL           EQU  H'0F70'
ADACCH           EQU  H'0F71'
ADFLTR           EQU  H'0F72'
ADFLTRL          EQU  H'0F72'
ADFLTRH          EQU  H'0F73'
CRCDATA          EQU  H'0F74'
CRCDATL          EQU  H'0F74'
CRCDATH          EQU  H'0F75'
CRCACC           EQU  H'0F76'
CRCACCL          EQU  H'0F76'
CRCACCH          EQU  H'0F77'
CRCSHFT          EQU  H'0F78'
CRCSHIFTL        EQU  H'0F78'
CRCSHIFTH        EQU  H'0F79'
CRCXOR           EQU  H'0F7A'
CRCXORL          EQU  H'0F7A'
CRCXORH          EQU  H'0F7B'
CRCCON0          EQU  H'0F7C'
CRCCON1          EQU  H'0F7D'
NVMADR           EQU  H'0F7E'
NVMADRL          EQU  H'0F7E'
NVMADRH          EQU  H'0F7F'
NVMDAT           EQU  H'0F80'
NVMCON1          EQU  H'0F81'
NVMCON2          EQU  H'0F82'
LATA             EQU  H'0F83'
LATB             EQU  H'0F84'
LATC             EQU  H'0F85'
LATD             EQU  H'0F86'
LATE             EQU  H'0F87'
DDRA             EQU  H'0F88'
TRISA            EQU  H'0F88'
DDRB             EQU  H'0F89'
TRISB            EQU  H'0F89'
DDRC             EQU  H'0F8A'
TRISC            EQU  H'0F8A'
DDRD             EQU  H'0F8B'
TRISD            EQU  H'0F8B'
DDRE             EQU  H'0F8C'
TRISE            EQU  H'0F8C'
PORTA            EQU  H'0F8D'
PORTB            EQU  H'0F8E'
PORTC            EQU  H'0F8F'
PORTD            EQU  H'0F90'
PORTE            EQU  H'0F91'
SSP1BUF          EQU  H'0F92'
SSP1ADD          EQU  H'0F93'
SSP1MSK          EQU  H'0F94'
SSP1STAT         EQU  H'0F95'
SSP1CON1         EQU  H'0F96'
SSP1CON2         EQU  H'0F97'
SSP1CON3         EQU  H'0F98'
RC1REG           EQU  H'0F99'
RCREG1           EQU  H'0F99'
TX1REG           EQU  H'0F9A'
TXREG1           EQU  H'0F9A'
SP1BRG           EQU  H'0F9B'
SP1BRGL          EQU  H'0F9B'
SPBRG1           EQU  H'0F9B'
SP1BRGH          EQU  H'0F9C'
SPBRGH1          EQU  H'0F9C'
RC1STA           EQU  H'0F9D'
RCSTA1           EQU  H'0F9D'
TX1STA           EQU  H'0F9E'
TXSTA1           EQU  H'0F9E'
BAUD1CON         EQU  H'0F9F'
BAUDCON1         EQU  H'0F9F'
BAUDCTL1         EQU  H'0F9F'
PWM4DCL          EQU  H'0FA0'
PWM4DCH          EQU  H'0FA1'
PWM4CON          EQU  H'0FA2'
PWM3DCL          EQU  H'0FA3'
PWM3DCH          EQU  H'0FA4'
PWM3CON          EQU  H'0FA5'
CCPR2            EQU  H'0FA6'
CCPR2L           EQU  H'0FA6'
CCPR2H           EQU  H'0FA7'
CCP2CON          EQU  H'0FA8'
CCP2CAP          EQU  H'0FA9'
CCPR1            EQU  H'0FAA'
CCPR1L           EQU  H'0FAA'
CCPR1H           EQU  H'0FAB'
CCP1CON          EQU  H'0FAC'
CCP1CAP          EQU  H'0FAD'
CCPTMRS          EQU  H'0FAE'
T6TMR            EQU  H'0FAF'
TMR6             EQU  H'0FAF'
PR6              EQU  H'0FB0'
T6PR             EQU  H'0FB0'
T6CON            EQU  H'0FB1'
T6HLT            EQU  H'0FB2'
T6CLKCON         EQU  H'0FB3'
T6RST            EQU  H'0FB4'
T4TMR            EQU  H'0FB5'
TMR4             EQU  H'0FB5'
PR4              EQU  H'0FB6'
T4PR             EQU  H'0FB6'
T4CON            EQU  H'0FB7'
T4HLT            EQU  H'0FB8'
T4CLKCON         EQU  H'0FB9'
T4RST            EQU  H'0FBA'
T2TMR            EQU  H'0FBB'
TMR2             EQU  H'0FBB'
PR2              EQU  H'0FBC'
T2PR             EQU  H'0FBC'
T2CON            EQU  H'0FBD'
T2HLT            EQU  H'0FBE'
T2CLKCON         EQU  H'0FBF'
T2RST            EQU  H'0FC0'
TMR5L            EQU  H'0FC1'
TMR5H            EQU  H'0FC2'
T5CON            EQU  H'0FC3'
PR5              EQU  H'0FC4'
T5GCON           EQU  H'0FC4'
T5GATE           EQU  H'0FC5'
TMR5GATE         EQU  H'0FC5'
T5CLK            EQU  H'0FC6'
TMR5CLK          EQU  H'0FC6'
TMR3L            EQU  H'0FC7'
TMR3H            EQU  H'0FC8'
T3CON            EQU  H'0FC9'
PR3              EQU  H'0FCA'
T3GCON           EQU  H'0FCA'
T3GATE           EQU  H'0FCB'
TMR3GATE         EQU  H'0FCB'
T3CLK            EQU  H'0FCC'
TMR3CLK          EQU  H'0FCC'
TMR1L            EQU  H'0FCD'
TMR1H            EQU  H'0FCE'
T1CON            EQU  H'0FCF'
PR1              EQU  H'0FD0'
T1GCON           EQU  H'0FD0'
T1GATE           EQU  H'0FD1'
TMR1GATE         EQU  H'0FD1'
T1CLK            EQU  H'0FD2'
TMR1CLK          EQU  H'0FD2'
TMR0             EQU  H'0FD3'
TMR0L            EQU  H'0FD3'
PR0              EQU  H'0FD4'
TMR0H            EQU  H'0FD4'
T0CON0           EQU  H'0FD5'
T0CON1           EQU  H'0FD6'
PCON0            EQU  H'0FD7'
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

;----- SSP2MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSP2STAT Bits -----------------------------------------------------
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


;----- SSP2CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


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


;----- SSP2CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- RC2STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- RCSTA2 Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TX2STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC_TX2STA      EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA2 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC_TXSTA2      EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUD2CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL2 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- PPSLOCK Bits -----------------------------------------------------
PPSLOCKED        EQU  H'0000'


;----- INT0PPS Bits -----------------------------------------------------
INT0PPS0         EQU  H'0000'
INT0PPS1         EQU  H'0001'
INT0PPS2         EQU  H'0002'
INT0PPS3         EQU  H'0003'
INT0PPS4         EQU  H'0004'


;----- INT1PPS Bits -----------------------------------------------------
INT1PPS0         EQU  H'0000'
INT1PPS1         EQU  H'0001'
INT1PPS2         EQU  H'0002'
INT1PPS3         EQU  H'0003'
INT1PPS4         EQU  H'0004'


;----- INT2PPS Bits -----------------------------------------------------
INT2PPS0         EQU  H'0000'
INT2PPS1         EQU  H'0001'
INT2PPS2         EQU  H'0002'
INT2PPS3         EQU  H'0003'
INT2PPS4         EQU  H'0004'


;----- T0CKIPPS Bits -----------------------------------------------------
T0CKIPPS0        EQU  H'0000'
T0CKIPPS1        EQU  H'0001'
T0CKIPPS2        EQU  H'0002'
T0CKIPPS3        EQU  H'0003'
T0CKIPPS4        EQU  H'0004'


;----- T1CKIPPS Bits -----------------------------------------------------
T1CKIPPS0        EQU  H'0000'
T1CKIPPS1        EQU  H'0001'
T1CKIPPS2        EQU  H'0002'
T1CKIPPS3        EQU  H'0003'
T1CKIPPS4        EQU  H'0004'


;----- T1GPPS Bits -----------------------------------------------------
T1GPPS0          EQU  H'0000'
T1GPPS1          EQU  H'0001'
T1GPPS2          EQU  H'0002'
T1GPPS3          EQU  H'0003'
T1GPPS4          EQU  H'0004'


;----- T3CKIPPS Bits -----------------------------------------------------
T3CKIPPS0        EQU  H'0000'
T3CKIPPS1        EQU  H'0001'
T3CKIPPS2        EQU  H'0002'
T3CKIPPS3        EQU  H'0003'
T3CKIPPS4        EQU  H'0004'


;----- T3GPPS Bits -----------------------------------------------------
T3GPPS0          EQU  H'0000'
T3GPPS1          EQU  H'0001'
T3GPPS2          EQU  H'0002'
T3GPPS3          EQU  H'0003'
T3GPPS4          EQU  H'0004'


;----- T5CKIPPS Bits -----------------------------------------------------
T5CKIPPS0        EQU  H'0000'
T5CKIPPS1        EQU  H'0001'
T5CKIPPS2        EQU  H'0002'
T5CKIPPS3        EQU  H'0003'
T5CKIPPS4        EQU  H'0004'


;----- T5GPPS Bits -----------------------------------------------------
T5GPPS0          EQU  H'0000'
T5GPPS1          EQU  H'0001'
T5GPPS2          EQU  H'0002'
T5GPPS3          EQU  H'0003'
T5GPPS4          EQU  H'0004'


;----- T2INPPS Bits -----------------------------------------------------
T2INPPS0         EQU  H'0000'
T2INPPS1         EQU  H'0001'
T2INPPS2         EQU  H'0002'
T2INPPS3         EQU  H'0003'
T2INPPS4         EQU  H'0004'


;----- T4INPPS Bits -----------------------------------------------------
T4INPPS0         EQU  H'0000'
T4INPPS1         EQU  H'0001'
T4INPPS2         EQU  H'0002'
T4INPPS3         EQU  H'0003'
T4INPPS4         EQU  H'0004'


;----- T6INPPS Bits -----------------------------------------------------
T6INPPS0         EQU  H'0000'
T6INPPS1         EQU  H'0001'
T6INPPS2         EQU  H'0002'
T6INPPS3         EQU  H'0003'
T6INPPS4         EQU  H'0004'


;----- ADACTPPS Bits -----------------------------------------------------
ADACTPPS0        EQU  H'0000'
ADACTPPS1        EQU  H'0001'
ADACTPPS2        EQU  H'0002'
ADACTPPS3        EQU  H'0003'
ADACTPPS4        EQU  H'0004'


;----- CCP1PPS Bits -----------------------------------------------------
CCP1PPS0         EQU  H'0000'
CCP1PPS1         EQU  H'0001'
CCP1PPS2         EQU  H'0002'
CCP1PPS3         EQU  H'0003'
CCP1PPS4         EQU  H'0004'


;----- CCP2PPS Bits -----------------------------------------------------
CCP2PPS0         EQU  H'0000'
CCP2PPS1         EQU  H'0001'
CCP2PPS2         EQU  H'0002'
CCP2PPS3         EQU  H'0003'
CCP2PPS4         EQU  H'0004'


;----- CWG1PPS Bits -----------------------------------------------------
CWGINPPS0        EQU  H'0000'
CWGINPPS1        EQU  H'0001'
CWGINPPS2        EQU  H'0002'
CWGINPPS3        EQU  H'0003'
CWGINPPS4        EQU  H'0004'


CWG1INPPS0       EQU  H'0000'
CWG1INPPS1       EQU  H'0001'
CWG1INPPS2       EQU  H'0002'
CWG1INPPS3       EQU  H'0003'
CWG1INPPS4       EQU  H'0004'


;----- CWGINPPS Bits -----------------------------------------------------
CWGINPPS0        EQU  H'0000'
CWGINPPS1        EQU  H'0001'
CWGINPPS2        EQU  H'0002'
CWGINPPS3        EQU  H'0003'
CWGINPPS4        EQU  H'0004'


CWG1INPPS0       EQU  H'0000'
CWG1INPPS1       EQU  H'0001'
CWG1INPPS2       EQU  H'0002'
CWG1INPPS3       EQU  H'0003'
CWG1INPPS4       EQU  H'0004'


;----- MDCARLPPS Bits -----------------------------------------------------
MDCARLPPS0       EQU  H'0000'
MDCARLPPS1       EQU  H'0001'
MDCARLPPS2       EQU  H'0002'
MDCARLPPS3       EQU  H'0003'
MDCARLPPS4       EQU  H'0004'


;----- MDCARHPPS Bits -----------------------------------------------------
MDCARHPPS0       EQU  H'0000'
MDCARHPPS1       EQU  H'0001'
MDCARHPPS2       EQU  H'0002'
MDCARHPPS3       EQU  H'0003'
MDCARHPPS4       EQU  H'0004'


;----- MDSRCPPS Bits -----------------------------------------------------
MDSRCPPS0        EQU  H'0000'
MDSRCPPS1        EQU  H'0001'
MDSRCPPS2        EQU  H'0002'
MDSRCPPS3        EQU  H'0003'
MDSRCPPS4        EQU  H'0004'


;----- IPR0 Bits -----------------------------------------------------
INT0IP           EQU  H'0000'
INT1IP           EQU  H'0001'
INT2IP           EQU  H'0002'
IOCIP            EQU  H'0004'
TMR0IP           EQU  H'0005'


;----- IPR1 Bits -----------------------------------------------------
ADIP             EQU  H'0000'
ADTIP            EQU  H'0001'
CSWIP            EQU  H'0006'
OSCFIP           EQU  H'0007'


;----- IPR2 Bits -----------------------------------------------------
C1IP             EQU  H'0000'
C2IP             EQU  H'0001'
ZCDIP            EQU  H'0006'
HLVDIP           EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
SSP1IP           EQU  H'0000'
BCL1IP           EQU  H'0001'
SSP2IP           EQU  H'0002'
BCL2IP           EQU  H'0003'
TX1IP            EQU  H'0004'
RC1IP            EQU  H'0005'
TX2IP            EQU  H'0006'
RC2IP            EQU  H'0007'


;----- IPR4 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
TMR3IP           EQU  H'0002'
TMR4IP           EQU  H'0003'
TMR5IP           EQU  H'0004'
TMR6IP           EQU  H'0005'


;----- IPR5 Bits -----------------------------------------------------
TMR1GIP          EQU  H'0000'
TMR3GIP          EQU  H'0001'
TMR5GIP          EQU  H'0002'


;----- IPR6 Bits -----------------------------------------------------
CCP1IP           EQU  H'0000'
CCP2IP           EQU  H'0001'


;----- IPR7 Bits -----------------------------------------------------
CWGIP            EQU  H'0000'
NVMIP            EQU  H'0005'
CRCIP            EQU  H'0006'
SCANIP           EQU  H'0007'

CWG1IP           EQU  H'0000'


;----- PIE0 Bits -----------------------------------------------------
INT0IE           EQU  H'0000'
INT1IE           EQU  H'0001'
INT2IE           EQU  H'0002'
IOCIE            EQU  H'0004'
TMR0IE           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
ADIE             EQU  H'0000'
ADTIE            EQU  H'0001'
CSWIE            EQU  H'0006'
OSCFIE           EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
C1IE             EQU  H'0000'
C2IE             EQU  H'0001'
ZCDIE            EQU  H'0006'
HLVDIE           EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
SSP1IE           EQU  H'0000'
BCL1IE           EQU  H'0001'
SSP2IE           EQU  H'0002'
BCL2IE           EQU  H'0003'
TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'
TX2IE            EQU  H'0006'
RC2IE            EQU  H'0007'


;----- PIE4 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
TMR3IE           EQU  H'0002'
TMR4IE           EQU  H'0003'
TMR5IE           EQU  H'0004'
TMR6IE           EQU  H'0005'


;----- PIE5 Bits -----------------------------------------------------
TMR1GIE          EQU  H'0000'
TMR3GIE          EQU  H'0001'
TMR5GIE          EQU  H'0002'


;----- PIE6 Bits -----------------------------------------------------
CCP1IE           EQU  H'0000'
CCP2IE           EQU  H'0001'


;----- PIE7 Bits -----------------------------------------------------
CWGIE            EQU  H'0000'
NVMIE            EQU  H'0005'
CRCIE            EQU  H'0006'
SCANIE           EQU  H'0007'

CWG1IE           EQU  H'0000'


;----- PIR0 Bits -----------------------------------------------------
INT0IF           EQU  H'0000'
INT1IF           EQU  H'0001'
INT2IF           EQU  H'0002'
IOCIF            EQU  H'0004'
TMR0IF           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
ADIF             EQU  H'0000'
ADTIF            EQU  H'0001'
CSWIF            EQU  H'0006'
OSCFIF           EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
C1IF             EQU  H'0000'
C2IF             EQU  H'0001'
ZCDIF            EQU  H'0006'
HLVDIF           EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
SSP1IF           EQU  H'0000'
BCL1IF           EQU  H'0001'
SSP2IF           EQU  H'0002'
BCL2IF           EQU  H'0003'
TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'
TX2IF            EQU  H'0006'
RC2IF            EQU  H'0007'


;----- PIR4 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
TMR3IF           EQU  H'0002'
TMR4IF           EQU  H'0003'
TMR5IF           EQU  H'0004'
TMR6IF           EQU  H'0005'


;----- PIR5 Bits -----------------------------------------------------
TMR1GIF          EQU  H'0000'
TMR3GIF          EQU  H'0001'
TMR5GIF          EQU  H'0002'


;----- PIR6 Bits -----------------------------------------------------
CCP1IF           EQU  H'0000'
CCP2IF           EQU  H'0001'


;----- PIR7 Bits -----------------------------------------------------
CWGIF            EQU  H'0000'
NVMIF            EQU  H'0005'
CRCIF            EQU  H'0006'
SCANIF           EQU  H'0007'

CWG1IF           EQU  H'0000'


;----- WDTCON0 Bits -----------------------------------------------------
SEN              EQU  H'0000'

SWDTEN           EQU  H'0000'

WDTSEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'
WDTPS4           EQU  H'0005'


;----- WDTCON1 Bits -----------------------------------------------------
WINDOW0          EQU  H'0000'
WINDOW1          EQU  H'0001'
WINDOW2          EQU  H'0002'


WDTWINDOW0       EQU  H'0000'
WDTWINDOW1       EQU  H'0001'
WDTWINDOW2       EQU  H'0002'
WDTCS0           EQU  H'0004'
WDTCS1           EQU  H'0005'
WDTCS2           EQU  H'0006'


;----- WDTPSL Bits -----------------------------------------------------
PSCNT0           EQU  H'0000'
PSCNT1           EQU  H'0001'
PSCNT2           EQU  H'0002'
PSCNT3           EQU  H'0003'
PSCNT4           EQU  H'0004'
PSCNT5           EQU  H'0005'
PSCNT6           EQU  H'0006'
PSCNT7           EQU  H'0007'


WDTPSCNT0        EQU  H'0000'
WDTPSCNT1        EQU  H'0001'
WDTPSCNT2        EQU  H'0002'
WDTPSCNT3        EQU  H'0003'
WDTPSCNT4        EQU  H'0004'
WDTPSCNT5        EQU  H'0005'
WDTPSCNT6        EQU  H'0006'
WDTPSCNT7        EQU  H'0007'


;----- WDTPSH Bits -----------------------------------------------------
PSCNT8           EQU  H'0000'
PSCNT9           EQU  H'0001'
PSCNT10          EQU  H'0002'
PSCNT11          EQU  H'0003'
PSCNT12          EQU  H'0004'
PSCNT13          EQU  H'0005'
PSCNT14          EQU  H'0006'
PSCNT15          EQU  H'0007'


WDTPSCNT8        EQU  H'0000'
WDTPSCNT9        EQU  H'0001'
WDTPSCNT10       EQU  H'0002'
WDTPSCNT11       EQU  H'0003'
WDTPSCNT12       EQU  H'0004'
WDTPSCNT13       EQU  H'0005'
WDTPSCNT14       EQU  H'0006'
WDTPSCNT15       EQU  H'0007'


;----- WDTTMR Bits -----------------------------------------------------
PSCNT16          EQU  H'0000'
PSCNT17          EQU  H'0001'
STATE            EQU  H'0002'

WDTPSCNT16       EQU  H'0000'
WDTPSCNT17       EQU  H'0001'
WDTSTATE         EQU  H'0002'
WDTTMR0          EQU  H'0003'
WDTTMR1          EQU  H'0004'
WDTTMR2          EQU  H'0005'
WDTTMR3          EQU  H'0006'
WDTTMR4          EQU  H'0007'


;----- CPUDOZE Bits -----------------------------------------------------
DOE              EQU  H'0004'
ROI              EQU  H'0005'
DOZEN            EQU  H'0006'
IDLEN            EQU  H'0007'

DOZE0            EQU  H'0000'
DOZE1            EQU  H'0001'
DOZE2            EQU  H'0002'


;----- OSCCON1 Bits -----------------------------------------------------
NDIV0            EQU  H'0000'
NDIV1            EQU  H'0001'
NDIV2            EQU  H'0002'
NDIV3            EQU  H'0003'
NOSC0            EQU  H'0004'
NOSC1            EQU  H'0005'
NOSC2            EQU  H'0006'


;----- OSCCON2 Bits -----------------------------------------------------
CDIV0            EQU  H'0000'
CDIV1            EQU  H'0001'
CDIV2            EQU  H'0002'
CDIV3            EQU  H'0003'
COSC0            EQU  H'0004'
COSC1            EQU  H'0005'
COSC2            EQU  H'0006'


;----- OSCCON3 Bits -----------------------------------------------------
NOSCR            EQU  H'0003'
ORDY             EQU  H'0004'
SOSCPWR          EQU  H'0006'
CSWHOLD          EQU  H'0007'


;----- OSCSTAT Bits -----------------------------------------------------
PLLR             EQU  H'0000'
ADOR             EQU  H'0002'
SOR              EQU  H'0003'
LFOR             EQU  H'0004'
MFOR             EQU  H'0005'
HFOR             EQU  H'0006'
EXTOR            EQU  H'0007'


;----- OSCSTAT1 Bits -----------------------------------------------------
PLLR             EQU  H'0000'
ADOR             EQU  H'0002'
SOR              EQU  H'0003'
LFOR             EQU  H'0004'
MFOR             EQU  H'0005'
HFOR             EQU  H'0006'
EXTOR            EQU  H'0007'


;----- OSCEN Bits -----------------------------------------------------
ADOEN            EQU  H'0002'
SOSCEN           EQU  H'0003'
LFOEN            EQU  H'0004'
MFOEN            EQU  H'0005'
HFOEN            EQU  H'0006'
EXTOEN           EQU  H'0007'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- OSCFRQ Bits -----------------------------------------------------
FRQ0             EQU  H'0000'
FRQ1             EQU  H'0001'
FRQ2             EQU  H'0002'
FRQ3             EQU  H'0003'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
SBOREN           EQU  H'0007'


;----- PMD0 Bits -----------------------------------------------------
IOCMD            EQU  H'0000'
CLKRMD           EQU  H'0001'
NVMMD            EQU  H'0002'
SCANMD           EQU  H'0003'
CRCMD            EQU  H'0004'
HLVDMD           EQU  H'0005'
FVRMD            EQU  H'0006'
SYSCMD           EQU  H'0007'


;----- PMD1 Bits -----------------------------------------------------
TMR0MD           EQU  H'0000'
TMR1MD           EQU  H'0001'
TMR2MD           EQU  H'0002'
TMR3MD           EQU  H'0003'
TMR4MD           EQU  H'0004'
TMR5MD           EQU  H'0005'
TMR6MD           EQU  H'0006'


;----- PMD2 Bits -----------------------------------------------------
ZCDMD            EQU  H'0000'
CMP1MD           EQU  H'0001'
CMP2MD           EQU  H'0002'
ADCMD            EQU  H'0005'
DACMD            EQU  H'0006'


;----- PMD3 Bits -----------------------------------------------------
CCP1MD           EQU  H'0000'
CCP2MD           EQU  H'0001'
PWM3MD           EQU  H'0002'
PWM4MD           EQU  H'0003'


;----- PMD4 Bits -----------------------------------------------------
CWGMD            EQU  H'0000'
MSSP1MD          EQU  H'0004'
MSSP2MD          EQU  H'0005'
UART1MD          EQU  H'0006'
UART2MD          EQU  H'0007'

CWG1MD           EQU  H'0000'


;----- PMD5 Bits -----------------------------------------------------
DSMMD            EQU  H'0000'


;----- RA0PPS Bits -----------------------------------------------------
RA0PPS0          EQU  H'0000'
RA0PPS1          EQU  H'0001'
RA0PPS2          EQU  H'0002'
RA0PPS3          EQU  H'0003'
RA0PPS4          EQU  H'0004'


;----- RA1PPS Bits -----------------------------------------------------
RA1PPS0          EQU  H'0000'
RA1PPS1          EQU  H'0001'
RA1PPS2          EQU  H'0002'
RA1PPS3          EQU  H'0003'
RA1PPS4          EQU  H'0004'


;----- RA2PPS Bits -----------------------------------------------------
RA2PPS0          EQU  H'0000'
RA2PPS1          EQU  H'0001'
RA2PPS2          EQU  H'0002'
RA2PPS3          EQU  H'0003'
RA2PPS4          EQU  H'0004'


;----- RA3PPS Bits -----------------------------------------------------
RA3PPS0          EQU  H'0000'
RA3PPS1          EQU  H'0001'
RA3PPS2          EQU  H'0002'
RA3PPS3          EQU  H'0003'
RA3PPS4          EQU  H'0004'


;----- RA4PPS Bits -----------------------------------------------------
RA4PPS0          EQU  H'0000'
RA4PPS1          EQU  H'0001'
RA4PPS2          EQU  H'0002'
RA4PPS3          EQU  H'0003'
RA4PPS4          EQU  H'0004'


;----- RA5PPS Bits -----------------------------------------------------
RA5PPS0          EQU  H'0000'
RA5PPS1          EQU  H'0001'
RA5PPS2          EQU  H'0002'
RA5PPS3          EQU  H'0003'
RA5PPS4          EQU  H'0004'


;----- RA6PPS Bits -----------------------------------------------------
RA6PPS0          EQU  H'0000'
RA6PPS1          EQU  H'0001'
RA6PPS2          EQU  H'0002'
RA6PPS3          EQU  H'0003'
RA6PPS4          EQU  H'0004'


;----- RA7PPS Bits -----------------------------------------------------
RA7PPS0          EQU  H'0000'
RA7PPS1          EQU  H'0001'
RA7PPS2          EQU  H'0002'
RA7PPS3          EQU  H'0003'
RA7PPS4          EQU  H'0004'


;----- RB0PPS Bits -----------------------------------------------------
RB0PPS0          EQU  H'0000'
RB0PPS1          EQU  H'0001'
RB0PPS2          EQU  H'0002'
RB0PPS3          EQU  H'0003'
RB0PPS4          EQU  H'0004'


;----- RB1PPS Bits -----------------------------------------------------
RB1PPS0          EQU  H'0000'
RB1PPS1          EQU  H'0001'
RB1PPS2          EQU  H'0002'
RB1PPS3          EQU  H'0003'
RB1PPS4          EQU  H'0004'


;----- RB2PPS Bits -----------------------------------------------------
RB2PPS0          EQU  H'0000'
RB2PPS1          EQU  H'0001'
RB2PPS2          EQU  H'0002'
RB2PPS3          EQU  H'0003'
RB2PPS4          EQU  H'0004'


;----- RB3PPS Bits -----------------------------------------------------
RB3PPS0          EQU  H'0000'
RB3PPS1          EQU  H'0001'
RB3PPS2          EQU  H'0002'
RB3PPS3          EQU  H'0003'
RB3PPS4          EQU  H'0004'


;----- RB4PPS Bits -----------------------------------------------------
RB4PPS0          EQU  H'0000'
RB4PPS1          EQU  H'0001'
RB4PPS2          EQU  H'0002'
RB4PPS3          EQU  H'0003'
RB4PPS4          EQU  H'0004'


;----- RB5PPS Bits -----------------------------------------------------
RB5PPS0          EQU  H'0000'
RB5PPS1          EQU  H'0001'
RB5PPS2          EQU  H'0002'
RB5PPS3          EQU  H'0003'
RB5PPS4          EQU  H'0004'


;----- RB6PPS Bits -----------------------------------------------------
RB6PPS0          EQU  H'0000'
RB6PPS1          EQU  H'0001'
RB6PPS2          EQU  H'0002'
RB6PPS3          EQU  H'0003'
RB6PPS4          EQU  H'0004'


;----- RB7PPS Bits -----------------------------------------------------
RB7PPS0          EQU  H'0000'
RB7PPS1          EQU  H'0001'
RB7PPS2          EQU  H'0002'
RB7PPS3          EQU  H'0003'
RB7PPS4          EQU  H'0004'


;----- RC0PPS Bits -----------------------------------------------------
RC0PPS0          EQU  H'0000'
RC0PPS1          EQU  H'0001'
RC0PPS2          EQU  H'0002'
RC0PPS3          EQU  H'0003'
RC0PPS4          EQU  H'0004'


;----- RC1PPS Bits -----------------------------------------------------
RC1PPS0          EQU  H'0000'
RC1PPS1          EQU  H'0001'
RC1PPS2          EQU  H'0002'
RC1PPS3          EQU  H'0003'
RC1PPS4          EQU  H'0004'


;----- RC2PPS Bits -----------------------------------------------------
RC2PPS0          EQU  H'0000'
RC2PPS1          EQU  H'0001'
RC2PPS2          EQU  H'0002'
RC2PPS3          EQU  H'0003'
RC2PPS4          EQU  H'0004'


;----- RC3PPS Bits -----------------------------------------------------
RC3PPS0          EQU  H'0000'
RC3PPS1          EQU  H'0001'
RC3PPS2          EQU  H'0002'
RC3PPS3          EQU  H'0003'
RC3PPS4          EQU  H'0004'


;----- RC4PPS Bits -----------------------------------------------------
RC4PPS0          EQU  H'0000'
RC4PPS1          EQU  H'0001'
RC4PPS2          EQU  H'0002'
RC4PPS3          EQU  H'0003'
RC4PPS4          EQU  H'0004'


;----- RC5PPS Bits -----------------------------------------------------
RC5PPS0          EQU  H'0000'
RC5PPS1          EQU  H'0001'
RC5PPS2          EQU  H'0002'
RC5PPS3          EQU  H'0003'
RC5PPS4          EQU  H'0004'


;----- RC6PPS Bits -----------------------------------------------------
RC6PPS0          EQU  H'0000'
RC6PPS1          EQU  H'0001'
RC6PPS2          EQU  H'0002'
RC6PPS3          EQU  H'0003'
RC6PPS4          EQU  H'0004'


;----- RC7PPS Bits -----------------------------------------------------
RC7PPS0          EQU  H'0000'
RC7PPS1          EQU  H'0001'
RC7PPS2          EQU  H'0002'
RC7PPS3          EQU  H'0003'
RC7PPS4          EQU  H'0004'


;----- RD0PPS Bits -----------------------------------------------------
RD0PPS0          EQU  H'0000'
RD0PPS1          EQU  H'0001'
RD0PPS2          EQU  H'0002'
RD0PPS3          EQU  H'0003'
RD0PPS4          EQU  H'0004'


;----- RD1PPS Bits -----------------------------------------------------
RD1PPS0          EQU  H'0000'
RD1PPS1          EQU  H'0001'
RD1PPS2          EQU  H'0002'
RD1PPS3          EQU  H'0003'
RD1PPS4          EQU  H'0004'


;----- RD2PPS Bits -----------------------------------------------------
RD2PPS0          EQU  H'0000'
RD2PPS1          EQU  H'0001'
RD2PPS2          EQU  H'0002'
RD2PPS3          EQU  H'0003'
RD2PPS4          EQU  H'0004'


;----- RD3PPS Bits -----------------------------------------------------
RD3PPS0          EQU  H'0000'
RD3PPS1          EQU  H'0001'
RD3PPS2          EQU  H'0002'
RD3PPS3          EQU  H'0003'
RD3PPS4          EQU  H'0004'


;----- RD4PPS Bits -----------------------------------------------------
RD4PPS0          EQU  H'0000'
RD4PPS1          EQU  H'0001'
RD4PPS2          EQU  H'0002'
RD4PPS3          EQU  H'0003'
RD4PPS4          EQU  H'0004'


;----- RD5PPS Bits -----------------------------------------------------
RD5PPS0          EQU  H'0000'
RD5PPS1          EQU  H'0001'
RD5PPS2          EQU  H'0002'
RD5PPS3          EQU  H'0003'
RD5PPS4          EQU  H'0004'


;----- RD6PPS Bits -----------------------------------------------------
RD6PPS0          EQU  H'0000'
RD6PPS1          EQU  H'0001'
RD6PPS2          EQU  H'0002'
RD6PPS3          EQU  H'0003'
RD6PPS4          EQU  H'0004'


;----- RD7PPS Bits -----------------------------------------------------
RD7PPS0          EQU  H'0000'
RD7PPS1          EQU  H'0001'
RD7PPS2          EQU  H'0002'
RD7PPS3          EQU  H'0003'
RD7PPS4          EQU  H'0004'


;----- RE0PPS Bits -----------------------------------------------------
RE0PPS0          EQU  H'0000'
RE0PPS1          EQU  H'0001'
RE0PPS2          EQU  H'0002'
RE0PPS3          EQU  H'0003'
RE0PPS4          EQU  H'0004'


;----- RE1PPS Bits -----------------------------------------------------
RE1PPS0          EQU  H'0000'
RE1PPS1          EQU  H'0001'
RE1PPS2          EQU  H'0002'
RE1PPS3          EQU  H'0003'
RE1PPS4          EQU  H'0004'


;----- RE2PPS Bits -----------------------------------------------------
RE2PPS0          EQU  H'0000'
RE2PPS1          EQU  H'0001'
RE2PPS2          EQU  H'0002'
RE2PPS3          EQU  H'0003'
RE2PPS4          EQU  H'0004'


;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'
IOCAF6           EQU  H'0006'
IOCAF7           EQU  H'0007'


;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'
IOCAN6           EQU  H'0006'
IOCAN7           EQU  H'0007'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'
IOCAP6           EQU  H'0006'
IOCAP7           EQU  H'0007'


;----- INLVLA Bits -----------------------------------------------------
INLVLA0          EQU  H'0000'
INLVLA1          EQU  H'0001'
INLVLA2          EQU  H'0002'
INLVLA3          EQU  H'0003'
INLVLA4          EQU  H'0004'
INLVLA5          EQU  H'0005'
INLVLA6          EQU  H'0006'
INLVLA7          EQU  H'0007'


;----- SLRCONA Bits -----------------------------------------------------
SLRA0            EQU  H'0000'
SLRA1            EQU  H'0001'
SLRA2            EQU  H'0002'
SLRA3            EQU  H'0003'
SLRA4            EQU  H'0004'
SLRA5            EQU  H'0005'
SLRA6            EQU  H'0006'
SLRA7            EQU  H'0007'


;----- ODCONA Bits -----------------------------------------------------
ODCA0            EQU  H'0000'
ODCA1            EQU  H'0001'
ODCA2            EQU  H'0002'
ODCA3            EQU  H'0003'
ODCA4            EQU  H'0004'
ODCA5            EQU  H'0005'
ODCA6            EQU  H'0006'
ODCA7            EQU  H'0007'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'
WPUA6            EQU  H'0006'
WPUA7            EQU  H'0007'


;----- ANSELA Bits -----------------------------------------------------
ANSELA0          EQU  H'0000'
ANSELA1          EQU  H'0001'
ANSELA2          EQU  H'0002'
ANSELA3          EQU  H'0003'
ANSELA4          EQU  H'0004'
ANSELA5          EQU  H'0005'
ANSELA6          EQU  H'0006'
ANSELA7          EQU  H'0007'


;----- IOCBF Bits -----------------------------------------------------
IOCBF0           EQU  H'0000'
IOCBF1           EQU  H'0001'
IOCBF2           EQU  H'0002'
IOCBF3           EQU  H'0003'
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'


;----- IOCBN Bits -----------------------------------------------------
IOCBN0           EQU  H'0000'
IOCBN1           EQU  H'0001'
IOCBN2           EQU  H'0002'
IOCBN3           EQU  H'0003'
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'


;----- IOCBP Bits -----------------------------------------------------
IOCBP0           EQU  H'0000'
IOCBP1           EQU  H'0001'
IOCBP2           EQU  H'0002'
IOCBP3           EQU  H'0003'
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'


;----- INLVLB Bits -----------------------------------------------------
INLVLB0          EQU  H'0000'
INLVLB1          EQU  H'0001'
INLVLB2          EQU  H'0002'
INLVLB3          EQU  H'0003'
INLVLB4          EQU  H'0004'
INLVLB5          EQU  H'0005'
INLVLB6          EQU  H'0006'
INLVLB7          EQU  H'0007'


;----- SLRCONB Bits -----------------------------------------------------
SLRB0            EQU  H'0000'
SLRB1            EQU  H'0001'
SLRB2            EQU  H'0002'
SLRB3            EQU  H'0003'
SLRB4            EQU  H'0004'
SLRB5            EQU  H'0005'
SLRB6            EQU  H'0006'
SLRB7            EQU  H'0007'


;----- ODCONB Bits -----------------------------------------------------
ODCB0            EQU  H'0000'
ODCB1            EQU  H'0001'
ODCB2            EQU  H'0002'
ODCB3            EQU  H'0003'
ODCB4            EQU  H'0004'
ODCB5            EQU  H'0005'
ODCB6            EQU  H'0006'
ODCB7            EQU  H'0007'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- ANSELB Bits -----------------------------------------------------
ANSELB0          EQU  H'0000'
ANSELB1          EQU  H'0001'
ANSELB2          EQU  H'0002'
ANSELB3          EQU  H'0003'
ANSELB4          EQU  H'0004'
ANSELB5          EQU  H'0005'
ANSELB6          EQU  H'0006'
ANSELB7          EQU  H'0007'


;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'
IOCCF6           EQU  H'0006'
IOCCF7           EQU  H'0007'


;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'
IOCCN6           EQU  H'0006'
IOCCN7           EQU  H'0007'


;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'
IOCCP6           EQU  H'0006'
IOCCP7           EQU  H'0007'


;----- INLVLC Bits -----------------------------------------------------
INLVLC0          EQU  H'0000'
INLVLC1          EQU  H'0001'
INLVLC2          EQU  H'0002'
INLVLC3          EQU  H'0003'
INLVLC4          EQU  H'0004'
INLVLC5          EQU  H'0005'
INLVLC6          EQU  H'0006'
INLVLC7          EQU  H'0007'


;----- SLRCONC Bits -----------------------------------------------------
SLRC0            EQU  H'0000'
SLRC1            EQU  H'0001'
SLRC2            EQU  H'0002'
SLRC3            EQU  H'0003'
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'
SLRC6            EQU  H'0006'
SLRC7            EQU  H'0007'


;----- ODCONC Bits -----------------------------------------------------
ODCC0            EQU  H'0000'
ODCC1            EQU  H'0001'
ODCC2            EQU  H'0002'
ODCC3            EQU  H'0003'
ODCC4            EQU  H'0004'
ODCC5            EQU  H'0005'
ODCC6            EQU  H'0006'
ODCC7            EQU  H'0007'


;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'
WPUC6            EQU  H'0006'
WPUC7            EQU  H'0007'


;----- ANSELC Bits -----------------------------------------------------
ANSELC0          EQU  H'0000'
ANSELC1          EQU  H'0001'
ANSELC2          EQU  H'0002'
ANSELC3          EQU  H'0003'
ANSELC4          EQU  H'0004'
ANSELC5          EQU  H'0005'
ANSELC6          EQU  H'0006'
ANSELC7          EQU  H'0007'


;----- INLVLD Bits -----------------------------------------------------
INLVLD0          EQU  H'0000'
INLVLD1          EQU  H'0001'
INLVLD2          EQU  H'0002'
INLVLD3          EQU  H'0003'
INLVLD4          EQU  H'0004'
INLVLD5          EQU  H'0005'
INLVLD6          EQU  H'0006'
INLVLD7          EQU  H'0007'


;----- SLRCOND Bits -----------------------------------------------------
SLRD0            EQU  H'0000'
SLRD1            EQU  H'0001'
SLRD2            EQU  H'0002'
SLRD3            EQU  H'0003'
SLRD4            EQU  H'0004'
SLRD5            EQU  H'0005'
SLRD6            EQU  H'0006'
SLRD7            EQU  H'0007'


;----- ODCOND Bits -----------------------------------------------------
ODCD0            EQU  H'0000'
ODCD1            EQU  H'0001'
ODCD2            EQU  H'0002'
ODCD3            EQU  H'0003'
ODCD4            EQU  H'0004'
ODCD5            EQU  H'0005'
ODCD6            EQU  H'0006'
ODCD7            EQU  H'0007'


;----- WPUD Bits -----------------------------------------------------
WPUD0            EQU  H'0000'
WPUD1            EQU  H'0001'
WPUD2            EQU  H'0002'
WPUD3            EQU  H'0003'
WPUD4            EQU  H'0004'
WPUD5            EQU  H'0005'
WPUD6            EQU  H'0006'
WPUD7            EQU  H'0007'


;----- ANSELD Bits -----------------------------------------------------
ANSELD0          EQU  H'0000'
ANSELD1          EQU  H'0001'
ANSELD2          EQU  H'0002'
ANSELD3          EQU  H'0003'
ANSELD4          EQU  H'0004'
ANSELD5          EQU  H'0005'
ANSELD6          EQU  H'0006'
ANSELD7          EQU  H'0007'


;----- IOCEF Bits -----------------------------------------------------
IOCEF3           EQU  H'0003'


;----- IOCEN Bits -----------------------------------------------------
IOCEN3           EQU  H'0003'


;----- IOCEP Bits -----------------------------------------------------
IOCEP3           EQU  H'0003'


;----- INLVLE Bits -----------------------------------------------------
INLVLE0          EQU  H'0000'
INLVLE1          EQU  H'0001'
INLVLE2          EQU  H'0002'
INLVLE3          EQU  H'0003'


;----- SLRCONE Bits -----------------------------------------------------
SLRE0            EQU  H'0000'
SLRE1            EQU  H'0001'
SLRE2            EQU  H'0002'


;----- ODCONE Bits -----------------------------------------------------
ODCE0            EQU  H'0000'
ODCE1            EQU  H'0001'
ODCE2            EQU  H'0002'


;----- WPUE Bits -----------------------------------------------------
WPUE0            EQU  H'0000'
WPUE1            EQU  H'0001'
WPUE2            EQU  H'0002'
WPUE3            EQU  H'0003'


;----- ANSELE Bits -----------------------------------------------------
ANSELE0          EQU  H'0000'
ANSELE1          EQU  H'0001'
ANSELE2          EQU  H'0002'


;----- HLVDCON0 Bits -----------------------------------------------------
INTL             EQU  H'0000'
INTH             EQU  H'0001'
RDY              EQU  H'0004'
OUT_HLVDCON0     EQU  H'0005'
EN               EQU  H'0007'

HLVDINTL         EQU  H'0000'
HLVDINTH         EQU  H'0001'
HLVDRDY          EQU  H'0004'
HLVDOUT          EQU  H'0005'
HLVDEN           EQU  H'0007'


;----- HLVDCON1 Bits -----------------------------------------------------
SEL0             EQU  H'0000'
SEL1             EQU  H'0001'
SEL2             EQU  H'0002'
SEL3             EQU  H'0003'

HLVDSEL0         EQU  H'0000'
HLVDSEL1         EQU  H'0001'
HLVDSEL2         EQU  H'0002'
HLVDSEL3         EQU  H'0003'


;----- FVRCON Bits -----------------------------------------------------
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'

ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
CDAFVR0          EQU  H'0002'
CDAFVR1          EQU  H'0003'


;----- ZCDCON Bits -----------------------------------------------------
ZCDINTN          EQU  H'0000'
ZCDINTP          EQU  H'0001'
ZCDPOL           EQU  H'0004'
ZCDOUT           EQU  H'0005'
ZCDSEN           EQU  H'0007'


;----- DAC1CON0 Bits -----------------------------------------------------
NSS              EQU  H'0000'
OE2              EQU  H'0004'
OE1              EQU  H'0005'
EN               EQU  H'0007'

DAC1NSS          EQU  H'0000'
DAC1PSS0         EQU  H'0002'
DAC1PSS1         EQU  H'0003'
DAC1OE2          EQU  H'0004'
DAC1OE1          EQU  H'0005'
DAC1EN           EQU  H'0007'

PSS0             EQU  H'0002'
PSS1             EQU  H'0003'


;----- DAC1CON1 Bits -----------------------------------------------------
DAC1R0           EQU  H'0000'
DAC1R1           EQU  H'0001'
DAC1R2           EQU  H'0002'
DAC1R3           EQU  H'0003'
DAC1R4           EQU  H'0004'


;----- CM2CON0 Bits -----------------------------------------------------
SYNC_CM2CON0     EQU  H'0000'
HYS              EQU  H'0001'
POL              EQU  H'0004'
OUT_CM2CON0      EQU  H'0006'
EN               EQU  H'0007'

C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2POL            EQU  H'0004'
C2OUT            EQU  H'0006'
C2EN             EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
INTN             EQU  H'0000'
INTP             EQU  H'0001'

C2INTN           EQU  H'0000'
C2INTP           EQU  H'0001'


;----- CM2NCH Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'


;----- CM2PCH Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'

C2PCH0           EQU  H'0000'
C2PCH1           EQU  H'0001'
C2PCH2           EQU  H'0002'


;----- CM1CON0 Bits -----------------------------------------------------
SYNC_CM1CON0     EQU  H'0000'
HYS              EQU  H'0001'
POL              EQU  H'0004'
OUT_CM1CON0      EQU  H'0006'
EN               EQU  H'0007'

C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1POL            EQU  H'0004'
C1OUT            EQU  H'0006'
C1EN             EQU  H'0007'


;----- CM1CON1 Bits -----------------------------------------------------
INTN             EQU  H'0000'
INTP             EQU  H'0001'

C1INTN           EQU  H'0000'
C1INTP           EQU  H'0001'


;----- CM1NCH Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'


;----- CM1PCH Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'

C1PCH0           EQU  H'0000'
C1PCH1           EQU  H'0001'
C1PCH2           EQU  H'0002'


;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'


;----- CLKRCON Bits -----------------------------------------------------
EN               EQU  H'0007'

CLKRDIV0         EQU  H'0000'
CLKRDIV1         EQU  H'0001'
CLKRDIV2         EQU  H'0002'
CLKRDC0          EQU  H'0003'
CLKRDC1          EQU  H'0004'
CLKREN           EQU  H'0007'

DIV0             EQU  H'0000'
DIV1             EQU  H'0001'
DIV2             EQU  H'0002'
DC0_CLKRCON      EQU  H'0003'
DC1_CLKRCON      EQU  H'0004'


;----- CLKRCLK Bits -----------------------------------------------------
CLKRCLK0         EQU  H'0000'
CLKRCLK1         EQU  H'0001'
CLKRCLK2         EQU  H'0002'

CLK0             EQU  H'0000'
CLK1             EQU  H'0001'
CLK2             EQU  H'0002'


;----- CWG1CLKCON Bits -----------------------------------------------------
CS               EQU  H'0000'

CWG1CS           EQU  H'0000'


;----- CWG1ISM Bits -----------------------------------------------------
CWG1ISM0         EQU  H'0000'
CWG1ISM1         EQU  H'0001'
CWG1ISM2         EQU  H'0002'
CWG1ISM3         EQU  H'0003'


;----- CWG1DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'
DBR4             EQU  H'0004'
DBR5             EQU  H'0005'


CWG1DBR0         EQU  H'0000'
CWG1DBR1         EQU  H'0001'
CWG1DBR2         EQU  H'0002'
CWG1DBR3         EQU  H'0003'
CWG1DBR4         EQU  H'0004'
CWG1DBR5         EQU  H'0005'


;----- CWG1DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'
DBF4             EQU  H'0004'
DBF5             EQU  H'0005'


CWG1DBF0         EQU  H'0000'
CWG1DBF1         EQU  H'0001'
CWG1DBF2         EQU  H'0002'
CWG1DBF3         EQU  H'0003'
CWG1DBF4         EQU  H'0004'
CWG1DBF5         EQU  H'0005'


;----- CWG1CON0 Bits -----------------------------------------------------
LD               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
G1EN             EQU  H'0007'

CWG1LD           EQU  H'0006'
CWG1EN           EQU  H'0007'

CWG1MODE0        EQU  H'0000'
CWG1MODE1        EQU  H'0001'
CWG1MODE2        EQU  H'0002'


;----- CWG1CON1 Bits -----------------------------------------------------
POLA             EQU  H'0000'
POLB             EQU  H'0001'
POLC             EQU  H'0002'
POLD             EQU  H'0003'
IN               EQU  H'0005'

CWG1POLA         EQU  H'0000'
CWG1POLB         EQU  H'0001'
CWG1POLC         EQU  H'0002'
CWG1POLD         EQU  H'0003'
CWG1IN           EQU  H'0005'


;----- CWG1AS0 Bits -----------------------------------------------------
REN              EQU  H'0006'
SHUTDOWN         EQU  H'0007'

LSAC0            EQU  H'0002'
LSAC1            EQU  H'0003'
LSBD0            EQU  H'0004'
LSBD1            EQU  H'0005'

CWG1REN          EQU  H'0006'
CWG1SHUTDOWN     EQU  H'0007'

CWG1LSAC0        EQU  H'0002'
CWG1LSAC1        EQU  H'0003'
CWG1LSBD0        EQU  H'0004'
CWG1LSBD1        EQU  H'0005'


;----- CWG1AS1 Bits -----------------------------------------------------
AS0E             EQU  H'0000'
AS1E             EQU  H'0001'
AS2E             EQU  H'0002'
AS3E             EQU  H'0003'
AS4E             EQU  H'0004'
AS5E             EQU  H'0005'


;----- CWG1STR Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
OVRA             EQU  H'0004'
OVRB             EQU  H'0005'
OVRC             EQU  H'0006'
OVRD             EQU  H'0007'

CWG1STRA         EQU  H'0000'
CWG1STRB         EQU  H'0001'
CWG1STRC         EQU  H'0002'
CWG1STRD         EQU  H'0003'
CWG1OVRA         EQU  H'0004'
CWG1OVRB         EQU  H'0005'
CWG1OVRC         EQU  H'0006'
CWG1OVRD         EQU  H'0007'


;----- SCANLADRL Bits -----------------------------------------------------
LADR0            EQU  H'0000'
LADR1            EQU  H'0001'
LADR2            EQU  H'0002'
LADR3            EQU  H'0003'
LADR4            EQU  H'0004'
LADR5            EQU  H'0005'
LADR6            EQU  H'0006'
LADR7            EQU  H'0007'


SCANLADR0        EQU  H'0000'
SCANLADR1        EQU  H'0001'
SCANLADR2        EQU  H'0002'
SCANLADR3        EQU  H'0003'
SCANLADR4        EQU  H'0004'
SCANLADR5        EQU  H'0005'
SCANLADR6        EQU  H'0006'
SCANLADR7        EQU  H'0007'


;----- SCANLADRH Bits -----------------------------------------------------
LADR8            EQU  H'0000'
LADR9            EQU  H'0001'
LADR10           EQU  H'0002'
LADR11           EQU  H'0003'
LADR12           EQU  H'0004'
LADR13           EQU  H'0005'
LADR14           EQU  H'0006'
LADR15           EQU  H'0007'


SCANLADR8        EQU  H'0000'
SCANLADR9        EQU  H'0001'
SCANLADR10       EQU  H'0002'
SCANLADR11       EQU  H'0003'
SCANLADR12       EQU  H'0004'
SCANLADR13       EQU  H'0005'
SCANLADR14       EQU  H'0006'
SCANLADR15       EQU  H'0007'


;----- SCANLADRU Bits -----------------------------------------------------
LADR16           EQU  H'0000'
LADR17           EQU  H'0001'
LADR18           EQU  H'0002'
LADR19           EQU  H'0003'
LADR20           EQU  H'0004'
LADR21           EQU  H'0005'


SCANLADR16       EQU  H'0000'
SCANLADR17       EQU  H'0001'
SCANLADR18       EQU  H'0002'
SCANLADR19       EQU  H'0003'
SCANLADR20       EQU  H'0004'
SCANLADR21       EQU  H'0005'


;----- SCANHADRL Bits -----------------------------------------------------
HADR0            EQU  H'0000'
HADR1            EQU  H'0001'
HADR2            EQU  H'0002'
HADR3            EQU  H'0003'
HADR4            EQU  H'0004'
HADR5            EQU  H'0005'
HADR6            EQU  H'0006'
HADR7            EQU  H'0007'


SCANHADR0        EQU  H'0000'
SCANHADR1        EQU  H'0001'
SCANHADR2        EQU  H'0002'
SCANHADR3        EQU  H'0003'
SCANHADR4        EQU  H'0004'
SCANHADR5        EQU  H'0005'
SCANHADR6        EQU  H'0006'
SCANHADR7        EQU  H'0007'


;----- SCANHADRH Bits -----------------------------------------------------
HADR8            EQU  H'0000'
HADR9            EQU  H'0001'
HADR10           EQU  H'0002'
HADR11           EQU  H'0003'
HADR12           EQU  H'0004'
HADR13           EQU  H'0005'
HADR14           EQU  H'0006'
HADR15           EQU  H'0007'


SCANHADR8        EQU  H'0000'
SCANHADR9        EQU  H'0001'
SCANHADR10       EQU  H'0002'
SCANHADR11       EQU  H'0003'
SCANHADR12       EQU  H'0004'
SCANHADR13       EQU  H'0005'
SCANHADR14       EQU  H'0006'
SCANHADR15       EQU  H'0007'


;----- SCANHADRU Bits -----------------------------------------------------
HADR16           EQU  H'0000'
HADR17           EQU  H'0001'
HADR18           EQU  H'0002'
HADR19           EQU  H'0003'
HADR20           EQU  H'0004'
HADR21           EQU  H'0005'


SCANHADR16       EQU  H'0000'
SCANHADR17       EQU  H'0001'
SCANHADR18       EQU  H'0002'
SCANHADR19       EQU  H'0003'
SCANHADR20       EQU  H'0004'
SCANHADR21       EQU  H'0005'


;----- SCANCON0 Bits -----------------------------------------------------
INTM             EQU  H'0003'
INVALID          EQU  H'0004'
BUSY             EQU  H'0005'
GO_SCANCON0      EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'

SCANINTM         EQU  H'0003'
SCANINVALID      EQU  H'0004'
SCANBUSY         EQU  H'0005'
SCANGO           EQU  H'0006'
SCANEN           EQU  H'0007'

SCANMODE0        EQU  H'0000'
SCANMODE1        EQU  H'0001'

DABORT           EQU  H'0004'


;----- SCANTRIG Bits -----------------------------------------------------
TSEL0            EQU  H'0000'
TSEL1            EQU  H'0001'
TSEL2            EQU  H'0002'
TSEL3            EQU  H'0003'


SCANTSEL0        EQU  H'0000'
SCANTSEL1        EQU  H'0001'
SCANTSEL2        EQU  H'0002'
SCANTSEL3        EQU  H'0003'


;----- MDCON0 Bits -----------------------------------------------------
BIT              EQU  H'0000'
OPOL             EQU  H'0004'
OUT_MDCON0       EQU  H'0005'
EN               EQU  H'0007'

MDBIT            EQU  H'0000'
MDOPOL           EQU  H'0004'
MDOUT            EQU  H'0005'
MDEN             EQU  H'0007'


;----- MDCON1 Bits -----------------------------------------------------
CLSYNC           EQU  H'0000'
CLPOL            EQU  H'0001'
CHSYNC           EQU  H'0004'
CHPOL            EQU  H'0005'

MDCLSYNC         EQU  H'0000'
MDCLPOL          EQU  H'0001'
MDCHSYNC         EQU  H'0004'
MDCHPOL          EQU  H'0005'


;----- MDSRC Bits -----------------------------------------------------
SRCS0            EQU  H'0000'
SRCS1            EQU  H'0001'
SRCS2            EQU  H'0002'
SRCS3            EQU  H'0003'


MDSRCS0          EQU  H'0000'
MDSRCS1          EQU  H'0001'
MDSRCS2          EQU  H'0002'
MDSRCS3          EQU  H'0003'


;----- MDCARL Bits -----------------------------------------------------
CLS0             EQU  H'0000'
CLS1             EQU  H'0001'
CLS2             EQU  H'0002'


MDCLS0           EQU  H'0000'
MDCLS1           EQU  H'0001'
MDCLS2           EQU  H'0002'


;----- MDCARH Bits -----------------------------------------------------
CHS0             EQU  H'0000'
CHS1             EQU  H'0001'
CHS2             EQU  H'0002'


MDCHS0           EQU  H'0000'
MDCHS1           EQU  H'0001'
MDCHS2           EQU  H'0002'


;----- ADACT Bits -----------------------------------------------------
ADACT0           EQU  H'0000'
ADACT1           EQU  H'0001'
ADACT2           EQU  H'0002'
ADACT3           EQU  H'0003'
ADACT4           EQU  H'0004'


;----- ADCLK Bits -----------------------------------------------------
ADCS0            EQU  H'0000'
ADCS1            EQU  H'0001'
ADCS2            EQU  H'0002'
ADCS3            EQU  H'0003'
ADCS4            EQU  H'0004'
ADCS5            EQU  H'0005'


;----- ADREF Bits -----------------------------------------------------
ADNREF           EQU  H'0004'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADDSEN           EQU  H'0000'
ADGPOL           EQU  H'0005'
ADIPEN           EQU  H'0006'
ADPPOL           EQU  H'0007'

NVCFG0           EQU  H'0000'
NVCFG1           EQU  H'0001'
PVCFG0           EQU  H'0002'
PVCFG1           EQU  H'0003'


;----- ADCON2 Bits -----------------------------------------------------
ADACLR           EQU  H'0003'
ADPSIS           EQU  H'0007'

ADMD0            EQU  H'0000'
ADMD1            EQU  H'0001'
ADMD2            EQU  H'0002'
ADCRS0           EQU  H'0004'
ADCRS1           EQU  H'0005'
ADCRS2           EQU  H'0006'


;----- ADCON3 Bits -----------------------------------------------------
ADSOI            EQU  H'0003'

ADTMD0           EQU  H'0000'
ADTMD1           EQU  H'0001'
ADTMD2           EQU  H'0002'
ADCALC0          EQU  H'0004'
ADCALC1          EQU  H'0005'
ADCALC2          EQU  H'0006'


;----- ADACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'
ADACQ7           EQU  H'0007'


;----- ADCAP Bits -----------------------------------------------------
ADCAP0           EQU  H'0000'
ADCAP1           EQU  H'0001'
ADCAP2           EQU  H'0002'
ADCAP3           EQU  H'0003'
ADCAP4           EQU  H'0004'


;----- ADPRE Bits -----------------------------------------------------
ADPRE0           EQU  H'0000'
ADPRE1           EQU  H'0001'
ADPRE2           EQU  H'0002'
ADPRE3           EQU  H'0003'
ADPRE4           EQU  H'0004'
ADPRE5           EQU  H'0005'
ADPRE6           EQU  H'0006'
ADPRE7           EQU  H'0007'


;----- ADPCH Bits -----------------------------------------------------
ADPCH0           EQU  H'0000'
ADPCH1           EQU  H'0001'
ADPCH2           EQU  H'0002'
ADPCH3           EQU  H'0003'
ADPCH4           EQU  H'0004'
ADPCH5           EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADGO             EQU  H'0000'
ADCS             EQU  H'0004'
ADCONT           EQU  H'0006'
ADON             EQU  H'0007'

GO_ADCON0        EQU  H'0000'
ADFM0            EQU  H'0002'
ADFM1            EQU  H'0003'

DONE             EQU  H'0000'

GO_NOT_DONE      EQU  H'0000'


;----- ADPREVL Bits -----------------------------------------------------
ADPREV0          EQU  H'0000'
ADPREV1          EQU  H'0001'
ADPREV2          EQU  H'0002'
ADPREV3          EQU  H'0003'
ADPREV4          EQU  H'0004'
ADPREV5          EQU  H'0005'
ADPREV6          EQU  H'0006'
ADPREV7          EQU  H'0007'


;----- ADPREVH Bits -----------------------------------------------------
ADPREV8          EQU  H'0000'
ADPREV9          EQU  H'0001'
ADPREV10         EQU  H'0002'
ADPREV11         EQU  H'0003'
ADPREV12         EQU  H'0004'
ADPREV13         EQU  H'0005'
ADPREV14         EQU  H'0006'
ADPREV15         EQU  H'0007'


;----- ADRESL Bits -----------------------------------------------------
ADRES0           EQU  H'0000'
ADRES1           EQU  H'0001'
ADRES2           EQU  H'0002'
ADRES3           EQU  H'0003'
ADRES4           EQU  H'0004'
ADRES5           EQU  H'0005'
ADRES6           EQU  H'0006'
ADRES7           EQU  H'0007'


;----- ADRESH Bits -----------------------------------------------------
ADRES8           EQU  H'0000'
ADRES9           EQU  H'0001'
ADRES10          EQU  H'0002'
ADRES11          EQU  H'0003'
ADRES12          EQU  H'0004'
ADRES13          EQU  H'0005'
ADRES14          EQU  H'0006'
ADRES15          EQU  H'0007'


;----- ADSTAT Bits -----------------------------------------------------
ADMACT           EQU  H'0003'
ADMATH           EQU  H'0004'
ADLTHR           EQU  H'0005'
ADUTHR           EQU  H'0006'
ADAOV            EQU  H'0007'

ADSTAT0          EQU  H'0000'
ADSTAT1          EQU  H'0001'
ADSTAT2          EQU  H'0002'


;----- ADRPT Bits -----------------------------------------------------
ADRPT0           EQU  H'0000'
ADRPT1           EQU  H'0001'
ADRPT2           EQU  H'0002'
ADRPT3           EQU  H'0003'
ADRPT4           EQU  H'0004'
ADRPT5           EQU  H'0005'
ADRPT6           EQU  H'0006'
ADRPT7           EQU  H'0007'


;----- ADCNT Bits -----------------------------------------------------
ADCNT0           EQU  H'0000'
ADCNT1           EQU  H'0001'
ADCNT2           EQU  H'0002'
ADCNT3           EQU  H'0003'
ADCNT4           EQU  H'0004'
ADCNT5           EQU  H'0005'
ADCNT6           EQU  H'0006'
ADCNT7           EQU  H'0007'


;----- ADSTPTL Bits -----------------------------------------------------
ADSTPT0          EQU  H'0000'
ADSTPT1          EQU  H'0001'
ADSTPT2          EQU  H'0002'
ADSTPT3          EQU  H'0003'
ADSTPT4          EQU  H'0004'
ADSTPT5          EQU  H'0005'
ADSTPT6          EQU  H'0006'
ADSTPT7          EQU  H'0007'


;----- ADSTPTH Bits -----------------------------------------------------
ADSTPT8          EQU  H'0000'
ADSTPT9          EQU  H'0001'
ADSTPT10         EQU  H'0002'
ADSTPT11         EQU  H'0003'
ADSTPT12         EQU  H'0004'
ADSTPT13         EQU  H'0005'
ADSTPT14         EQU  H'0006'
ADSTPT15         EQU  H'0007'


;----- ADLTHL Bits -----------------------------------------------------
ADLTH0           EQU  H'0000'
ADLTH1           EQU  H'0001'
ADLTH2           EQU  H'0002'
ADLTH3           EQU  H'0003'
ADLTH4           EQU  H'0004'
ADLTH5           EQU  H'0005'
ADLTH6           EQU  H'0006'
ADLTH7           EQU  H'0007'


;----- ADLTHH Bits -----------------------------------------------------
ADLTH8           EQU  H'0000'
ADLTH9           EQU  H'0001'
ADLTH10          EQU  H'0002'
ADLTH11          EQU  H'0003'
ADLTH12          EQU  H'0004'
ADLTH13          EQU  H'0005'
ADLTH14          EQU  H'0006'
ADLTH15          EQU  H'0007'


;----- ADUTHL Bits -----------------------------------------------------
ADUTH0           EQU  H'0000'
ADUTH1           EQU  H'0001'
ADUTH2           EQU  H'0002'
ADUTH3           EQU  H'0003'
ADUTH4           EQU  H'0004'
ADUTH5           EQU  H'0005'
ADUTH6           EQU  H'0006'
ADUTH7           EQU  H'0007'


;----- ADUTHH Bits -----------------------------------------------------
ADUTH8           EQU  H'0000'
ADUTH9           EQU  H'0001'
ADUTH10          EQU  H'0002'
ADUTH11          EQU  H'0003'
ADUTH12          EQU  H'0004'
ADUTH13          EQU  H'0005'
ADUTH14          EQU  H'0006'
ADUTH15          EQU  H'0007'


;----- ADERRL Bits -----------------------------------------------------
ADERR0           EQU  H'0000'
ADERR1           EQU  H'0001'
ADERR2           EQU  H'0002'
ADERR3           EQU  H'0003'
ADERR4           EQU  H'0004'
ADERR5           EQU  H'0005'
ADERR6           EQU  H'0006'
ADERR7           EQU  H'0007'


;----- ADERRH Bits -----------------------------------------------------
ADERR8           EQU  H'0000'
ADERR9           EQU  H'0001'
ADERR10          EQU  H'0002'
ADERR11          EQU  H'0003'
ADERR12          EQU  H'0004'
ADERR13          EQU  H'0005'
ADERR14          EQU  H'0006'
ADERR15          EQU  H'0007'


;----- ADACCL Bits -----------------------------------------------------
ADACC0           EQU  H'0000'
ADACC1           EQU  H'0001'
ADACC2           EQU  H'0002'
ADACC3           EQU  H'0003'
ADACC4           EQU  H'0004'
ADACC5           EQU  H'0005'
ADACC6           EQU  H'0006'
ADACC7           EQU  H'0007'


;----- ADACCH Bits -----------------------------------------------------
ADACC8           EQU  H'0000'
ADACC9           EQU  H'0001'
ADACC10          EQU  H'0002'
ADACC11          EQU  H'0003'
ADACC12          EQU  H'0004'
ADACC13          EQU  H'0005'
ADACC14          EQU  H'0006'
ADACC15          EQU  H'0007'


;----- ADFLTRL Bits -----------------------------------------------------
ADFLTR0          EQU  H'0000'
ADFLTR1          EQU  H'0001'
ADFLTR2          EQU  H'0002'
ADFLTR3          EQU  H'0003'
ADFLTR4          EQU  H'0004'
ADFLTR5          EQU  H'0005'
ADFLTR6          EQU  H'0006'
ADFLTR7          EQU  H'0007'


;----- ADFLTRH Bits -----------------------------------------------------
ADFLTR8          EQU  H'0000'
ADFLTR9          EQU  H'0001'
ADFLTR10         EQU  H'0002'
ADFLTR11         EQU  H'0003'
ADFLTR12         EQU  H'0004'
ADFLTR13         EQU  H'0005'
ADFLTR14         EQU  H'0006'
ADFLTR15         EQU  H'0007'


;----- CRCDATL Bits -----------------------------------------------------
DATA0            EQU  H'0000'
DATA1            EQU  H'0001'
DATA2            EQU  H'0002'
DATA3            EQU  H'0003'
DATA4            EQU  H'0004'
DATA5            EQU  H'0005'
DATA6            EQU  H'0006'
DATA7            EQU  H'0007'


;----- CRCDATH Bits -----------------------------------------------------
DATA8            EQU  H'0000'
DATA9            EQU  H'0001'
DATA10           EQU  H'0002'
DATA11           EQU  H'0003'
DATA12           EQU  H'0004'
DATA13           EQU  H'0005'
DATA14           EQU  H'0006'
DATA15           EQU  H'0007'


;----- CRCACCL Bits -----------------------------------------------------
ACC0             EQU  H'0000'
ACC1             EQU  H'0001'
ACC2             EQU  H'0002'
ACC3             EQU  H'0003'
ACC4             EQU  H'0004'
ACC5             EQU  H'0005'
ACC6             EQU  H'0006'
ACC7             EQU  H'0007'


;----- CRCACCH Bits -----------------------------------------------------
ACC8             EQU  H'0000'
ACC9             EQU  H'0001'
ACC10            EQU  H'0002'
ACC11            EQU  H'0003'
ACC12            EQU  H'0004'
ACC13            EQU  H'0005'
ACC14            EQU  H'0006'
ACC15            EQU  H'0007'


;----- CRCSHIFTL Bits -----------------------------------------------------
SHFT0            EQU  H'0000'
SHFT1            EQU  H'0001'
SHFT2            EQU  H'0002'
SHFT3            EQU  H'0003'
SHFT4            EQU  H'0004'
SHFT5            EQU  H'0005'
SHFT6            EQU  H'0006'
SHFT7            EQU  H'0007'


;----- CRCSHIFTH Bits -----------------------------------------------------
SHFT8            EQU  H'0000'
SHFT9            EQU  H'0001'
SHFT10           EQU  H'0002'
SHFT11           EQU  H'0003'
SHFT12           EQU  H'0004'
SHFT13           EQU  H'0005'
SHFT14           EQU  H'0006'
SHFT15           EQU  H'0007'


;----- CRCXORL Bits -----------------------------------------------------
X1               EQU  H'0001'
X2               EQU  H'0002'
X3               EQU  H'0003'
X4               EQU  H'0004'
X5               EQU  H'0005'
X6               EQU  H'0006'
X7               EQU  H'0007'


;----- CRCXORH Bits -----------------------------------------------------
X8               EQU  H'0000'
X9               EQU  H'0001'
X10              EQU  H'0002'
X11              EQU  H'0003'
X12              EQU  H'0004'
X13              EQU  H'0005'
X14              EQU  H'0006'
X15              EQU  H'0007'


;----- CRCCON0 Bits -----------------------------------------------------
FULL             EQU  H'0000'
SHIFTM           EQU  H'0001'
ACCM             EQU  H'0004'
BUSY             EQU  H'0005'
CRCGO            EQU  H'0006'
EN               EQU  H'0007'

CRCEN            EQU  H'0007'


;----- CRCCON1 Bits -----------------------------------------------------
PLEN0            EQU  H'0000'
PLEN1            EQU  H'0001'
PLEN2            EQU  H'0002'
PLEN3            EQU  H'0003'
DLEN0            EQU  H'0004'
DLEN1            EQU  H'0005'
DLEN2            EQU  H'0006'
DLEN3            EQU  H'0007'


;----- NVMADR Bits -----------------------------------------------------
ADR0             EQU  H'0000'
ADR1             EQU  H'0001'
ADR2             EQU  H'0002'
ADR3             EQU  H'0003'
ADR4             EQU  H'0004'
ADR5             EQU  H'0005'
ADR6             EQU  H'0006'
ADR7             EQU  H'0007'

NVMADR0          EQU  H'0000'
NVMADR1          EQU  H'0001'
NVMADR2          EQU  H'0002'
NVMADR3          EQU  H'0003'
NVMADR4          EQU  H'0004'
NVMADR5          EQU  H'0005'
NVMADR6          EQU  H'0006'
NVMADR7          EQU  H'0007'


;----- NVMADRL Bits -----------------------------------------------------
ADR0             EQU  H'0000'
ADR1             EQU  H'0001'
ADR2             EQU  H'0002'
ADR3             EQU  H'0003'
ADR4             EQU  H'0004'
ADR5             EQU  H'0005'
ADR6             EQU  H'0006'
ADR7             EQU  H'0007'

NVMADR0          EQU  H'0000'
NVMADR1          EQU  H'0001'
NVMADR2          EQU  H'0002'
NVMADR3          EQU  H'0003'
NVMADR4          EQU  H'0004'
NVMADR5          EQU  H'0005'
NVMADR6          EQU  H'0006'
NVMADR7          EQU  H'0007'


;----- NVMADRH Bits -----------------------------------------------------
NVMADR8          EQU  H'0000'
NVMADR9          EQU  H'0001'

ADR8             EQU  H'0000'
ADR9             EQU  H'0001'


;----- NVMDAT Bits -----------------------------------------------------
NVMDAT0          EQU  H'0000'
NVMDAT1          EQU  H'0001'
NVMDAT2          EQU  H'0002'
NVMDAT3          EQU  H'0003'
NVMDAT4          EQU  H'0004'
NVMDAT5          EQU  H'0005'
NVMDAT6          EQU  H'0006'
NVMDAT7          EQU  H'0007'


;----- NVMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'

NVMREG0          EQU  H'0006'
NVMREG1          EQU  H'0007'


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

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'

RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'


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


;----- SSP1MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSP1STAT Bits -----------------------------------------------------
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


;----- SSP1CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


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


;----- SSP1CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- RC1STA Bits -----------------------------------------------------
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
SYNC_TX1STA      EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA1 Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC_TXSTA1      EQU  H'0004'
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


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- PWM4DCL Bits -----------------------------------------------------
DC0_PWM4DCL      EQU  H'0006'
DC1_PWM4DCL      EQU  H'0007'

PWM4DC0          EQU  H'0006'
PWM4DC1          EQU  H'0007'

PWMPW0           EQU  H'0006'
PWMPW1           EQU  H'0007'


;----- PWM4DCH Bits -----------------------------------------------------
DC2              EQU  H'0000'
DC3              EQU  H'0001'
DC4              EQU  H'0002'
DC5              EQU  H'0003'
DC6              EQU  H'0004'
DC7              EQU  H'0005'
DC8              EQU  H'0006'
DC9              EQU  H'0007'

PWM4DC2          EQU  H'0000'
PWM4DC3          EQU  H'0001'
PWM4DC4          EQU  H'0002'
PWM4DC5          EQU  H'0003'
PWM4DC6          EQU  H'0004'
PWM4DC7          EQU  H'0005'
PWM4DC8          EQU  H'0006'
PWM4DC9          EQU  H'0007'

PWMPW2           EQU  H'0000'
PWMPW3           EQU  H'0001'
PWMPW4           EQU  H'0002'
PWMPW5           EQU  H'0003'
PWMPW6           EQU  H'0004'
PWMPW7           EQU  H'0005'
PWMPW8           EQU  H'0006'
PWMPW9           EQU  H'0007'


;----- PWM4CON Bits -----------------------------------------------------
POL              EQU  H'0004'
OUT_PWM4CON      EQU  H'0005'
EN               EQU  H'0007'

PWM4POL          EQU  H'0004'
PWM4OUT          EQU  H'0005'
PWM4EN           EQU  H'0007'


;----- PWM3DCL Bits -----------------------------------------------------
DC0_PWM3DCL      EQU  H'0006'
DC1_PWM3DCL      EQU  H'0007'

PWM3DC0          EQU  H'0006'
PWM3DC1          EQU  H'0007'

PWMPW0           EQU  H'0006'
PWMPW1           EQU  H'0007'


;----- PWM3DCH Bits -----------------------------------------------------
DC2              EQU  H'0000'
DC3              EQU  H'0001'
DC4              EQU  H'0002'
DC5              EQU  H'0003'
DC6              EQU  H'0004'
DC7              EQU  H'0005'
DC8              EQU  H'0006'
DC9              EQU  H'0007'

PWM3DC2          EQU  H'0000'
PWM3DC3          EQU  H'0001'
PWM3DC4          EQU  H'0002'
PWM3DC5          EQU  H'0003'
PWM3DC6          EQU  H'0004'
PWM3DC7          EQU  H'0005'
PWM3DC8          EQU  H'0006'
PWM3DC9          EQU  H'0007'

PWMPW2           EQU  H'0000'
PWMPW3           EQU  H'0001'
PWMPW4           EQU  H'0002'
PWMPW5           EQU  H'0003'
PWMPW6           EQU  H'0004'
PWMPW7           EQU  H'0005'
PWMPW8           EQU  H'0006'
PWMPW9           EQU  H'0007'


;----- PWM3CON Bits -----------------------------------------------------
POL              EQU  H'0004'
OUT_PWM3CON      EQU  H'0005'
EN               EQU  H'0007'

PWM3POL          EQU  H'0004'
PWM3OUT          EQU  H'0005'
PWM3EN           EQU  H'0007'


;----- CCP2CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP2CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP2FMT          EQU  H'0004'
CCP2OUT          EQU  H'0005'
CCP2EN           EQU  H'0007'

CCP2MODE0        EQU  H'0000'
CCP2MODE1        EQU  H'0001'
CCP2MODE2        EQU  H'0002'
CCP2MODE3        EQU  H'0003'


;----- CCP2CAP Bits -----------------------------------------------------
CTS0             EQU  H'0000'
CTS1             EQU  H'0001'


CCP2CTS0         EQU  H'0000'
CCP2CTS1         EQU  H'0001'


;----- CCP1CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP1CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP1FMT          EQU  H'0004'
CCP1OUT          EQU  H'0005'
CCP1EN           EQU  H'0007'

CCP1MODE0        EQU  H'0000'
CCP1MODE1        EQU  H'0001'
CCP1MODE2        EQU  H'0002'
CCP1MODE3        EQU  H'0003'


;----- CCP1CAP Bits -----------------------------------------------------
CTS0             EQU  H'0000'
CTS1             EQU  H'0001'


CCP1CTS0         EQU  H'0000'
CCP1CTS1         EQU  H'0001'


;----- CCPTMRS Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
P3TSEL0          EQU  H'0004'
P3TSEL1          EQU  H'0005'
P4TSEL0          EQU  H'0006'
P4TSEL1          EQU  H'0007'


;----- T6CON Bits -----------------------------------------------------
ON_T6CON         EQU  H'0007'

T6ON             EQU  H'0007'

T6OUTPS0         EQU  H'0000'
T6OUTPS1         EQU  H'0001'
T6OUTPS2         EQU  H'0002'
T6OUTPS3         EQU  H'0003'
T6CKPS0          EQU  H'0004'
T6CKPS1          EQU  H'0005'
T6CKPS2          EQU  H'0006'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'
TMR6ON           EQU  H'0007'


;----- T6HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'
MODE4            EQU  H'0004'

T6CKSYNC         EQU  H'0005'
T6CKPOL          EQU  H'0006'
T6PSYNC          EQU  H'0007'

T6MODE0          EQU  H'0000'
T6MODE1          EQU  H'0001'
T6MODE2          EQU  H'0002'
T6MODE3          EQU  H'0003'
T6MODE4          EQU  H'0004'


;----- T6CLKCON Bits -----------------------------------------------------
T6CS0            EQU  H'0000'
T6CS1            EQU  H'0001'
T6CS2            EQU  H'0002'
T6CS3            EQU  H'0003'


;----- T6RST Bits -----------------------------------------------------
RSEL0            EQU  H'0000'
RSEL1            EQU  H'0001'
RSEL2            EQU  H'0002'
RSEL3            EQU  H'0003'


T6RSEL0          EQU  H'0000'
T6RSEL1          EQU  H'0001'
T6RSEL2          EQU  H'0002'
T6RSEL3          EQU  H'0003'


;----- T4CON Bits -----------------------------------------------------
ON_T4CON         EQU  H'0007'

T4ON             EQU  H'0007'

T4OUTPS0         EQU  H'0000'
T4OUTPS1         EQU  H'0001'
T4OUTPS2         EQU  H'0002'
T4OUTPS3         EQU  H'0003'
T4CKPS0          EQU  H'0004'
T4CKPS1          EQU  H'0005'
T4CKPS2          EQU  H'0006'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'
TMR4ON           EQU  H'0007'


;----- T4HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'
MODE4            EQU  H'0004'

T4CKSYNC         EQU  H'0005'
T4CKPOL          EQU  H'0006'
T4PSYNC          EQU  H'0007'

T4MODE0          EQU  H'0000'
T4MODE1          EQU  H'0001'
T4MODE2          EQU  H'0002'
T4MODE3          EQU  H'0003'
T4MODE4          EQU  H'0004'


;----- T4CLKCON Bits -----------------------------------------------------
T4CS0            EQU  H'0000'
T4CS1            EQU  H'0001'
T4CS2            EQU  H'0002'
T4CS3            EQU  H'0003'


;----- T4RST Bits -----------------------------------------------------
RSEL0            EQU  H'0000'
RSEL1            EQU  H'0001'
RSEL2            EQU  H'0002'
RSEL3            EQU  H'0003'


T4RSEL0          EQU  H'0000'
T4RSEL1          EQU  H'0001'
T4RSEL2          EQU  H'0002'
T4RSEL3          EQU  H'0003'


;----- T2CON Bits -----------------------------------------------------
ON_T2CON         EQU  H'0007'

T2ON             EQU  H'0007'

T2OUTPS0         EQU  H'0000'
T2OUTPS1         EQU  H'0001'
T2OUTPS2         EQU  H'0002'
T2OUTPS3         EQU  H'0003'
T2CKPS0          EQU  H'0004'
T2CKPS1          EQU  H'0005'
T2CKPS2          EQU  H'0006'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'
TMR2ON           EQU  H'0007'


;----- T2HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'
MODE4            EQU  H'0004'

T2CKSYNC         EQU  H'0005'
T2CKPOL          EQU  H'0006'
T2PSYNC          EQU  H'0007'

T2MODE0          EQU  H'0000'
T2MODE1          EQU  H'0001'
T2MODE2          EQU  H'0002'
T2MODE3          EQU  H'0003'
T2MODE4          EQU  H'0004'


;----- T2CLKCON Bits -----------------------------------------------------
T2CS0            EQU  H'0000'
T2CS1            EQU  H'0001'
T2CS2            EQU  H'0002'
T2CS3            EQU  H'0003'


;----- T2RST Bits -----------------------------------------------------
RSEL0            EQU  H'0000'
RSEL1            EQU  H'0001'
RSEL2            EQU  H'0002'
RSEL3            EQU  H'0003'


T2RSEL0          EQU  H'0000'
T2RSEL1          EQU  H'0001'
T2RSEL2          EQU  H'0002'
T2RSEL3          EQU  H'0003'


;----- TMR5L Bits -----------------------------------------------------
TMR5L0           EQU  H'0000'
TMR5L1           EQU  H'0001'
TMR5L2           EQU  H'0002'
TMR5L3           EQU  H'0003'
TMR5L4           EQU  H'0004'
TMR5L5           EQU  H'0005'
TMR5L6           EQU  H'0006'
TMR5L7           EQU  H'0007'



;----- TMR5H Bits -----------------------------------------------------
TMR5H0           EQU  H'0000'
TMR5H1           EQU  H'0001'
TMR5H2           EQU  H'0002'
TMR5H3           EQU  H'0003'
TMR5H4           EQU  H'0004'
TMR5H5           EQU  H'0005'
TMR5H6           EQU  H'0006'
TMR5H7           EQU  H'0007'



;----- T5CON Bits -----------------------------------------------------
ON_T5CON         EQU  H'0000'
RD16             EQU  H'0001'
NOT_SYNC         EQU  H'0002'

TMR5ON           EQU  H'0000'
T5RD16           EQU  H'0001'
NOT_T5SYNC       EQU  H'0002'
T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'

CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'


;----- PR5 Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T5GVAL           EQU  H'0002'
T5GGO_NOT_DONE   EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
T5GE             EQU  H'0007'

T5GGO            EQU  H'0003'


;----- T5GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T5GVAL           EQU  H'0002'
T5GGO_NOT_DONE   EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
T5GE             EQU  H'0007'

T5GGO            EQU  H'0003'


;----- T5GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GSS2           EQU  H'0002'
T5GSS3           EQU  H'0003'


;----- TMR5GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GSS2           EQU  H'0002'
T5GSS3           EQU  H'0003'


;----- T5CLK Bits -----------------------------------------------------
T5CS0            EQU  H'0000'
T5CS1            EQU  H'0001'
T5CS2            EQU  H'0002'
T5CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR5CLK Bits -----------------------------------------------------
T5CS0            EQU  H'0000'
T5CS1            EQU  H'0001'
T5CS2            EQU  H'0002'
T5CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR3L Bits -----------------------------------------------------
TMR3L0           EQU  H'0000'
TMR3L1           EQU  H'0001'
TMR3L2           EQU  H'0002'
TMR3L3           EQU  H'0003'
TMR3L4           EQU  H'0004'
TMR3L5           EQU  H'0005'
TMR3L6           EQU  H'0006'
TMR3L7           EQU  H'0007'



;----- TMR3H Bits -----------------------------------------------------
TMR3H0           EQU  H'0000'
TMR3H1           EQU  H'0001'
TMR3H2           EQU  H'0002'
TMR3H3           EQU  H'0003'
TMR3H4           EQU  H'0004'
TMR3H5           EQU  H'0005'
TMR3H6           EQU  H'0006'
TMR3H7           EQU  H'0007'



;----- T3CON Bits -----------------------------------------------------
ON_T3CON         EQU  H'0000'
RD16             EQU  H'0001'
NOT_SYNC         EQU  H'0002'

TMR3ON           EQU  H'0000'
T3RD16           EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'

CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'


;----- PR3 Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T3GVAL           EQU  H'0002'
T3GGO_NOT_DONE   EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
T3GE             EQU  H'0007'

T3GGO            EQU  H'0003'


;----- T3GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T3GVAL           EQU  H'0002'
T3GGO_NOT_DONE   EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
T3GE             EQU  H'0007'

T3GGO            EQU  H'0003'


;----- T3GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GSS2           EQU  H'0002'
T3GSS3           EQU  H'0003'


;----- TMR3GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GSS2           EQU  H'0002'
T3GSS3           EQU  H'0003'


;----- T3CLK Bits -----------------------------------------------------
T3CS0            EQU  H'0000'
T3CS1            EQU  H'0001'
T3CS2            EQU  H'0002'
T3CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR3CLK Bits -----------------------------------------------------
T3CS0            EQU  H'0000'
T3CS1            EQU  H'0001'
T3CS2            EQU  H'0002'
T3CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR1L Bits -----------------------------------------------------
TMR1L0           EQU  H'0000'
TMR1L1           EQU  H'0001'
TMR1L2           EQU  H'0002'
TMR1L3           EQU  H'0003'
TMR1L4           EQU  H'0004'
TMR1L5           EQU  H'0005'
TMR1L6           EQU  H'0006'
TMR1L7           EQU  H'0007'



;----- TMR1H Bits -----------------------------------------------------
TMR1H0           EQU  H'0000'
TMR1H1           EQU  H'0001'
TMR1H2           EQU  H'0002'
TMR1H3           EQU  H'0003'
TMR1H4           EQU  H'0004'
TMR1H5           EQU  H'0005'
TMR1H6           EQU  H'0006'
TMR1H7           EQU  H'0007'



;----- T1CON Bits -----------------------------------------------------
ON_T1CON         EQU  H'0000'
RD16             EQU  H'0001'
NOT_SYNC         EQU  H'0002'

TMR1ON           EQU  H'0000'
T1RD16           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'

CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'


;----- PR1 Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
T1GE             EQU  H'0007'

T1GGO            EQU  H'0003'


;----- T1GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
T1GE             EQU  H'0007'

T1GGO            EQU  H'0003'


;----- T1GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GSS2           EQU  H'0002'
T1GSS3           EQU  H'0003'


;----- TMR1GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GSS2           EQU  H'0002'
T1GSS3           EQU  H'0003'


;----- T1CLK Bits -----------------------------------------------------
T1CS0            EQU  H'0000'
T1CS1            EQU  H'0001'
T1CS2            EQU  H'0002'
T1CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR1CLK Bits -----------------------------------------------------
T1CS0            EQU  H'0000'
T1CS1            EQU  H'0001'
T1CS2            EQU  H'0002'
T1CS3            EQU  H'0003'

CS0              EQU  H'0000'
CS1              EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


;----- TMR0 Bits -----------------------------------------------------
TMR0L0           EQU  H'0000'
TMR0L1           EQU  H'0001'
TMR0L2           EQU  H'0002'
TMR0L3           EQU  H'0003'
TMR0L4           EQU  H'0004'
TMR0L5           EQU  H'0005'
TMR0L6           EQU  H'0006'
TMR0L7           EQU  H'0007'


;----- TMR0L Bits -----------------------------------------------------
TMR0L0           EQU  H'0000'
TMR0L1           EQU  H'0001'
TMR0L2           EQU  H'0002'
TMR0L3           EQU  H'0003'
TMR0L4           EQU  H'0004'
TMR0L5           EQU  H'0005'
TMR0L6           EQU  H'0006'
TMR0L7           EQU  H'0007'


;----- PR0 Bits -----------------------------------------------------
TMR0H0           EQU  H'0000'
TMR0H1           EQU  H'0001'
TMR0H2           EQU  H'0002'
TMR0H3           EQU  H'0003'
TMR0H4           EQU  H'0004'
TMR0H5           EQU  H'0005'
TMR0H6           EQU  H'0006'
TMR0H7           EQU  H'0007'

T0PR0            EQU  H'0000'
T0PR1            EQU  H'0001'
T0PR2            EQU  H'0002'
T0PR3            EQU  H'0003'
T0PR4            EQU  H'0004'
T0PR5            EQU  H'0005'
T0PR6            EQU  H'0006'
T0PR7            EQU  H'0007'


;----- TMR0H Bits -----------------------------------------------------
TMR0H0           EQU  H'0000'
TMR0H1           EQU  H'0001'
TMR0H2           EQU  H'0002'
TMR0H3           EQU  H'0003'
TMR0H4           EQU  H'0004'
TMR0H5           EQU  H'0005'
TMR0H6           EQU  H'0006'
TMR0H7           EQU  H'0007'

T0PR0            EQU  H'0000'
T0PR1            EQU  H'0001'
T0PR2            EQU  H'0002'
T0PR3            EQU  H'0003'
T0PR4            EQU  H'0004'
T0PR5            EQU  H'0005'
T0PR6            EQU  H'0006'
T0PR7            EQU  H'0007'


;----- T0CON0 Bits -----------------------------------------------------
T016BIT          EQU  H'0004'
T0OUT            EQU  H'0005'
T0EN             EQU  H'0007'

T0OUTPS0         EQU  H'0000'
T0OUTPS1         EQU  H'0001'
T0OUTPS2         EQU  H'0002'
T0OUTPS3         EQU  H'0003'


;----- T0CON1 Bits -----------------------------------------------------
T0ASYNC          EQU  H'0004'

T0CKPS0          EQU  H'0000'
T0CKPS1          EQU  H'0001'
T0CKPS2          EQU  H'0002'
T0CKPS3          EQU  H'0003'
T0CS0            EQU  H'0005'
T0CS1            EQU  H'0006'
T0CS2            EQU  H'0007'

T0PS0            EQU  H'0000'
T0PS1            EQU  H'0001'
T0PS2            EQU  H'0002'
T0PS3            EQU  H'0003'



;----- PCON0 Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
NOT_RWDT         EQU  H'0004'
NOT_WDTWV        EQU  H'0005'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
RI               EQU  H'0002'
RMCLR            EQU  H'0003'
RWDT             EQU  H'0004'
WDTWV            EQU  H'0005'


;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
OV               EQU  H'0003'
N                EQU  H'0004'
NOT_PD           EQU  H'0005'
NOT_TO           EQU  H'0006'

PD               EQU  H'0005'
TO               EQU  H'0006'


;----- INTCON Bits -----------------------------------------------------
INT0EDG          EQU  H'0000'
INT1EDG          EQU  H'0001'
INT2EDG          EQU  H'0002'
IPEN             EQU  H'0005'
PEIE_GIEL        EQU  H'0006'
GIE_GIEH         EQU  H'0007'

PEIE             EQU  H'0006'
GIE              EQU  H'0007'

GIEL             EQU  H'0006'
GIEH             EQU  H'0007'


;----- STKPTR Bits -----------------------------------------------------
STKPTR0          EQU  H'0000'
STKPTR1          EQU  H'0001'
STKPTR2          EQU  H'0002'
STKPTR3          EQU  H'0003'
STKPTR4          EQU  H'0004'
STKPTR5          EQU  H'0005'

SP0              EQU  H'0000'
SP1              EQU  H'0001'
SP2              EQU  H'0002'
SP3              EQU  H'0003'
SP4              EQU  H'0004'
SP5              EQU  H'0005'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'0E7E'-H'0E8C'
       __BADRAM  H'0EDF'
       __BADRAM  H'0FF0'-H'0FF1'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   :
;     FEXTOSC = LP         LP (crystal oscillator) optimized for 32.768 kHz; PFM set to low power
;     FEXTOSC = XT         XT (crystal oscillator) above 100 kHz, below 8 MHz; PFM set to medium power
;     FEXTOSC = HS         HS (crystal oscillator) above 8 MHz; PFM set to high power
;     FEXTOSC = RESERVED   Reserved (DO NOT USE)
;     FEXTOSC = OFF        Oscillator not enabled
;     FEXTOSC = ECL        EC (external clock) below 100 kHz; PFM set to low power
;     FEXTOSC = ECM        EC (external clock) for 500 kHz to 8 MHz; PFM set to medium power
;     FEXTOSC = ECH        EC (external clock) above 8 MHz; PFM set to high power
;
;   :
;     RSTOSC = HFINTOSC_64MHZHFINTOSC with HFFRQ = 64 MHz and CDIV = 1:1
;     RSTOSC = RESERVED_1  Reserved
;     RSTOSC = EXTOSC_4PLL EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
;     RSTOSC = RESERVED_2  Reserved
;     RSTOSC = SOSC        Secondary Oscillator
;     RSTOSC = LFINTOSC    Low-Frequency Oscillator
;     RSTOSC = HFINTOSC_1MHZHFINTOSC with HFFRQ = 4 MHz and CDIV = 4:1
;     RSTOSC = EXTOSC      EXTOSC operating per FEXTOSC bits (device manufacturing default)
;
;   :
;     CLKOUTEN = ON        CLKOUT function is enabled
;     CLKOUTEN = OFF       CLKOUT function is disabled
;
;   :
;     CSWEN = OFF          The NOSC and NDIV bits cannot be changed by user software
;     CSWEN = ON           Writing to NOSC and NDIV is allowed
;
;   Fail-Safe Clock Monitor Enable bit:
;     FCMEN = OFF          Fail-Safe Clock Monitor disabled
;     FCMEN = ON           Fail-Safe Clock Monitor enabled
;
;   :
;     MCLRE = INTMCLR      If LVP = 0, MCLR pin function is port defined function; If LVP =1, RE3 pin fuction is MCLR
;     MCLRE = EXTMCLR      If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR 
;
;   Power-up Timer Enable bit:
;     PWRTE = ON           Power up timer enabled
;     PWRTE = OFF          Power up timer disabled
;
;   :
;     LPBOREN = ON         ULPBOR enabled
;     LPBOREN = OFF        ULPBOR disabled
;
;   Brown-out Reset Enable bits:
;     BOREN = OFF          Brown-out Reset disabled
;     BOREN = ON           Brown-out Reset enabled according to SBOREN
;     BOREN = NOSLP        Brown-out Reset enabled while running, disabled in Sleep; SBOREN is ignored
;     BOREN = SBORDIS      Brown-out Reset enabled , SBOREN bit is ignored
;
;   Brown Out Reset Voltage selection bits:
;     BORV = VBOR_285      Brown-out Reset Voltage (VBOR) set to 2.85V
;     BORV = VBOR_270      Brown-out Reset Voltage (VBOR) set to 2.70V
;     BORV = VBOR_245      Brown-out Reset Voltage (VBOR) set to 2.45V
;     BORV = VBOR_190      Brown-out Reset Voltage (VBOR) set to 1.90V
;
;   ZCD Disable bit:
;     ZCD = ON             ZCD always enabled
;     ZCD = OFF            ZCD disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON
;
;   PPSLOCK bit One-Way Set Enable bit:
;     PPS1WAY = OFF        PPSLOCK bit can be set and cleared repeatedly (subject to the unlock sequence)
;     PPS1WAY = ON         PPSLOCK bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle
;
;   Stack Full/Underflow Reset Enable bit:
;     STVREN = OFF         Stack full/underflow will not cause Reset
;     STVREN = ON          Stack full/underflow will cause Reset
;
;   Debugger Enable bit:
;     DEBUG = ON           Background debugger enabled
;     DEBUG = OFF          Background debugger disabled
;
;   Extended Instruction Set Enable bit:
;     XINST = ON           Extended Instruction Set and Indexed Addressing Mode enabled
;     XINST = OFF          Extended Instruction Set and Indexed Addressing Mode disabled
;
;   :
;     WDTCPS = WDTCPS_0    Divider ratio 1:32
;     WDTCPS = WDTCPS_1    Divider ratio 1:64
;     WDTCPS = WDTCPS_2    Divider ratio 1:128
;     WDTCPS = WDTCPS_3    Divider ratio 1:256
;     WDTCPS = WDTCPS_4    Divider ratio 1:512
;     WDTCPS = WDTCPS_5    Divider ratio 1:1024
;     WDTCPS = WDTCPS_6    Divider ratio 1:2048
;     WDTCPS = WDTCPS_7    Divider ratio 1:4096
;     WDTCPS = WDTCPS_8    Divider ratio 1:8192
;     WDTCPS = WDTCPS_9    Divider ratio 1:16384
;     WDTCPS = WDTCPS_10   Divider ratio 1:32768
;     WDTCPS = WDTCPS_11   Divider ratio 1:65536
;     WDTCPS = WDTCPS_12   Divider ratio 1:131072
;     WDTCPS = WDTCPS_13   Divider ratio 1:262144
;     WDTCPS = WDTCPS_14   Divider ratio 1:524299
;     WDTCPS = WDTCPS_15   Divider ratio 1:1048576
;     WDTCPS = WDTCPS_16   Divider ratio 1:2097152
;     WDTCPS = WDTCPS_17   Divider ratio 1:4194304
;     WDTCPS = WDTCPS_18   Divider ratio 1:8388608
;     WDTCPS = WDTCPS_19   Divider ratio 1:32
;     WDTCPS = WDTCPS_20   Divider ratio 1:32
;     WDTCPS = WDTCPS_21   Divider ratio 1:32
;     WDTCPS = WDTCPS_22   Divider ratio 1:32
;     WDTCPS = WDTCPS_23   Divider ratio 1:32
;     WDTCPS = WDTCPS_24   Divider ratio 1:32
;     WDTCPS = WDTCPS_25   Divider ratio 1:32
;     WDTCPS = WDTCPS_26   Divider ratio 1:32
;     WDTCPS = WDTCPS_27   Divider ratio 1:32
;     WDTCPS = WDTCPS_28   Divider ratio 1:32
;     WDTCPS = WDTCPS_29   Divider ratio 1:32
;     WDTCPS = WDTCPS_30   Divider ratio 1:32
;     WDTCPS = WDTCPS_31   Divider ratio 1:65536; software control of WDTPS
;
;   WDT operating mode:
;     WDTE = OFF           WDT Disabled
;     WDTE = SWDTEN        WDT enabled/disabled by SWDTEN bit
;     WDTE = NSLEEP        WDT enabled while sleep=0, suspended when sleep=1
;     WDTE = ON            WDT enabled regardless of sleep
;
;   WDT Window Select bits:
;     WDTCWS = WDTCWS_0    window delay = 87.5; no software control; keyed access required
;     WDTCWS = WDTCWS_1    window delay = 75 percent of time; no software control; keyed access required
;     WDTCWS = WDTCWS_2    window delay = 62.5 percent of time; no software control; keyed access required
;     WDTCWS = WDTCWS_3    window delay = 50 percent of time; no software control; keyed access required
;     WDTCWS = WDTCWS_4    window delay = 37.5 percent of time; no software control; keyed access required
;     WDTCWS = WDTCWS_5    window delay = 25 percent of time; no software control; keyed access required
;     WDTCWS = WDTCWS_6    window always open (100%); no software control; keyed access required
;     WDTCWS = WDTCWS_7    window always open (100%); software control; keyed access not required
;
;   WDT input clock selector:
;     WDTCCS = LFINTOSC    WDT reference clock is the 31.0 kHz LFINTOSC
;     WDTCCS = HFINTOSC    WDT reference clock is the 31.2kHz HFINTOSC output
;     WDTCCS = SC          Software Control
;
;   Write Protection Block 0:
;     WRT0 = ON            Block 0 (000800-003FFFh) write-protected
;     WRT0 = OFF           Block 0 (000800-003FFFh) not write-protected
;
;   Write Protection Block 1:
;     WRT1 = ON            Block 1 (004000-007FFFh) write-protected
;     WRT1 = OFF           Block 1 (004000-007FFFh) not write-protected
;
;   Write Protection Block 2:
;     WRT2 = ON            Block 2 (008000-00BFFFh) write-protected
;     WRT2 = OFF           Block 2 (008000-00BFFFh) not write-protected
;
;   Write Protection Block 3:
;     WRT3 = ON            Block 3 (00C000-00FFFFh) write-protected
;     WRT3 = OFF           Block 3 (00C000-00FFFFh) not write-protected
;
;   Write Protection Block 3:
;     WRT4 = ON            Block 4 (010000-013FFFh) write-protected
;     WRT4 = OFF           Block 4 (010000-013FFFh) not write-protected
;
;   Write Protection Block 3:
;     WRT5 = ON            Block 5 (014000-017FFFh) write-protected
;     WRT5 = OFF           Block 5 (014000-017FFFh) not write-protected
;
;   Write Protection Block 3:
;     WRT6 = ON            Block 6 (018000-01BFFFh) write-protected
;     WRT6 = OFF           Block 6 (018000-01BFFFh) not write-protected
;
;   Write Protection Block 3:
;     WRT7 = ON            Block 7 (01C000-01FFFFh) write-protected
;     WRT7 = OFF           Block 7 (01C000-01FFFFh) not write-protected
;
;   Configuration Register Write Protection bit:
;     WRTC = ON            Configuration registers (300000-30000Bh) write-protected
;     WRTC = OFF           Configuration registers (300000-30000Bh) not write-protected
;
;   Boot Block Write Protection bit:
;     WRTB = ON            Boot Block (000000-0007FFh) write-protected
;     WRTB = OFF           Boot Block (000000-0007FFh) not write-protected
;
;   Data EEPROM Write Protection bit:
;     WRTD = ON            Data EEPROM write-protected
;     WRTD = OFF           Data EEPROM not write-protected
;
;   :
;     SCANE = OFF          Scanner module is NOT available for use, SCANMD bit is ignored
;     SCANE = ON           Scanner module is available for use, SCANMD bit can control the module
;
;   Low Voltage Programming Enable bit:
;     LVP = OFF            HV on MCLR/VPP must be used for programming
;     LVP = ON             Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored
;
;   UserNVM Program Memory Code Protection bit:
;     CP = ON              UserNVM code protection enabled
;     CP = OFF             UserNVM code protection disabled
;
;   DataNVM Memory Code Protection bit:
;     CPD = ON             DataNVM code protection enabled
;     CPD = OFF            DataNVM code protection disabled
;
;   Table Read Protection Block 0:
;     EBTR0 = ON           Block 0 (000800-003FFFh) protected from table reads executed in other blocks
;     EBTR0 = OFF          Block 0 (000800-003FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 1:
;     EBTR1 = ON           Block 1 (004000-007FFFh) protected from table reads executed in other blocks
;     EBTR1 = OFF          Block 1 (004000-007FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 2:
;     EBTR2 = ON           Block 2 (008000-00BFFFh) protected from table reads executed in other blocks
;     EBTR2 = OFF          Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 3:
;     EBTR3 = ON           Block 3 (00C000-00FFFFh) protected from table reads executed in other blocks
;     EBTR3 = OFF          Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 4:
;     EBTR4 = ON           Block 4 (010000-013FFFh) protected from table reads executed in other blocks
;     EBTR4 = OFF          Block 4 (010000-013FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 5:
;     EBTR5 = ON           Block 5 (014000-017FFFh) protected from table reads executed in other blocks
;     EBTR5 = OFF          Block 5 (014000-017FFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 6:
;     EBTR6 = ON           Block 6 (018000-01BFFFh) protected from table reads executed in other blocks
;     EBTR6 = OFF          Block 6 (018000-01BFFFh) not protected from table reads executed in other blocks
;
;   Table Read Protection Block 7:
;     EBTR7 = ON           Block 7 (01C000-01FFFFh) protected from table reads executed in other blocks
;     EBTR7 = OFF          Block 7 (01C000-01FFFFh) not protected from table reads executed in other blocks
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
;   CONFIG1L        300000h
;   CONFIG1H        300001h
;   CONFIG2L        300002h
;   CONFIG2H        300003h
;   CONFIG3L        300004h
;   CONFIG3H        300005h
;   CONFIG4L        300006h
;   CONFIG4H        300007h
;   CONFIG5L        300008h
;   CONFIG5H        300009h
;   CONFIG6L        30000Ah
;   CONFIG6H        30000Bh
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1L       EQU  H'300000'
_CONFIG1H       EQU  H'300001'
_CONFIG2L       EQU  H'300002'
_CONFIG2H       EQU  H'300003'
_CONFIG3L       EQU  H'300004'
_CONFIG3H       EQU  H'300005'
_CONFIG4L       EQU  H'300006'
_CONFIG4H       EQU  H'300007'
_CONFIG5L       EQU  H'300008'
_CONFIG5H       EQU  H'300009'
_CONFIG6L       EQU  H'30000A'
_CONFIG6H       EQU  H'30000B'

;----- CONFIG1L Options --------------------------------------------------
_FEXTOSC_LP_1L       EQU  H'F8'; LP (crystal oscillator) optimized for 32.768 kHz; PFM set to low power
_FEXTOSC_XT_1L       EQU  H'F9'; XT (crystal oscillator) above 100 kHz, below 8 MHz; PFM set to medium power
_FEXTOSC_HS_1L       EQU  H'FA'; HS (crystal oscillator) above 8 MHz; PFM set to high power
_FEXTOSC_RESERVED_1L EQU  H'FB'; Reserved (DO NOT USE)
_FEXTOSC_OFF_1L      EQU  H'FC'; Oscillator not enabled
_FEXTOSC_ECL_1L      EQU  H'FD'; EC (external clock) below 100 kHz; PFM set to low power
_FEXTOSC_ECM_1L      EQU  H'FE'; EC (external clock) for 500 kHz to 8 MHz; PFM set to medium power
_FEXTOSC_ECH_1L      EQU  H'FF'; EC (external clock) above 8 MHz; PFM set to high power

_RSTOSC_HFINTOSC_64MHZ_1L EQU  H'8F'; HFINTOSC with HFFRQ = 64 MHz and CDIV = 1:1
_RSTOSC_RESERVED_1_1L EQU  H'9F'; Reserved
_RSTOSC_EXTOSC_4PLL_1L EQU  H'AF'; EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
_RSTOSC_RESERVED_2_1L EQU  H'BF'; Reserved
_RSTOSC_SOSC_1L      EQU  H'CF'; Secondary Oscillator
_RSTOSC_LFINTOSC_1L  EQU  H'DF'; Low-Frequency Oscillator
_RSTOSC_HFINTOSC_1MHZ_1L EQU  H'EF'; HFINTOSC with HFFRQ = 4 MHz and CDIV = 4:1
_RSTOSC_EXTOSC_1L    EQU  H'FF'; EXTOSC operating per FEXTOSC bits (device manufacturing default)

;----- CONFIG1H Options --------------------------------------------------
_CLKOUTEN_ON_1H      EQU  H'FE'; CLKOUT function is enabled
_CLKOUTEN_OFF_1H     EQU  H'FF'; CLKOUT function is disabled

_CSWEN_OFF_1H        EQU  H'F7'; The NOSC and NDIV bits cannot be changed by user software
_CSWEN_ON_1H         EQU  H'FF'; Writing to NOSC and NDIV is allowed

_FCMEN_OFF_1H        EQU  H'DF'; Fail-Safe Clock Monitor disabled
_FCMEN_ON_1H         EQU  H'FF'; Fail-Safe Clock Monitor enabled

;----- CONFIG2L Options --------------------------------------------------
_MCLRE_INTMCLR_2L    EQU  H'FE'; If LVP = 0, MCLR pin function is port defined function; If LVP =1, RE3 pin fuction is MCLR
_MCLRE_EXTMCLR_2L    EQU  H'FF'; If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR 

_PWRTE_ON_2L         EQU  H'FD'; Power up timer enabled
_PWRTE_OFF_2L        EQU  H'FF'; Power up timer disabled

_LPBOREN_ON_2L       EQU  H'DF'; ULPBOR enabled
_LPBOREN_OFF_2L      EQU  H'FF'; ULPBOR disabled

_BOREN_OFF_2L        EQU  H'3F'; Brown-out Reset disabled
_BOREN_ON_2L         EQU  H'7F'; Brown-out Reset enabled according to SBOREN
_BOREN_NOSLP_2L      EQU  H'BF'; Brown-out Reset enabled while running, disabled in Sleep; SBOREN is ignored
_BOREN_SBORDIS_2L    EQU  H'FF'; Brown-out Reset enabled , SBOREN bit is ignored

;----- CONFIG2H Options --------------------------------------------------
_BORV_VBOR_285_2H    EQU  H'FC'; Brown-out Reset Voltage (VBOR) set to 2.85V
_BORV_VBOR_270_2H    EQU  H'FD'; Brown-out Reset Voltage (VBOR) set to 2.70V
_BORV_VBOR_245_2H    EQU  H'FE'; Brown-out Reset Voltage (VBOR) set to 2.45V
_BORV_VBOR_190_2H    EQU  H'FF'; Brown-out Reset Voltage (VBOR) set to 1.90V

_ZCD_ON_2H           EQU  H'FB'; ZCD always enabled
_ZCD_OFF_2H          EQU  H'FF'; ZCD disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON

_PPS1WAY_OFF_2H      EQU  H'F7'; PPSLOCK bit can be set and cleared repeatedly (subject to the unlock sequence)
_PPS1WAY_ON_2H       EQU  H'FF'; PPSLOCK bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle

_STVREN_OFF_2H       EQU  H'EF'; Stack full/underflow will not cause Reset
_STVREN_ON_2H        EQU  H'FF'; Stack full/underflow will cause Reset

_DEBUG_ON_2H         EQU  H'DF'; Background debugger enabled
_DEBUG_OFF_2H        EQU  H'FF'; Background debugger disabled

_XINST_ON_2H         EQU  H'7F'; Extended Instruction Set and Indexed Addressing Mode enabled
_XINST_OFF_2H        EQU  H'FF'; Extended Instruction Set and Indexed Addressing Mode disabled

;----- CONFIG3L Options --------------------------------------------------
_WDTCPS_WDTCPS_0_3L  EQU  H'E0'; Divider ratio 1:32
_WDTCPS_WDTCPS_1_3L  EQU  H'E1'; Divider ratio 1:64
_WDTCPS_WDTCPS_2_3L  EQU  H'E2'; Divider ratio 1:128
_WDTCPS_WDTCPS_3_3L  EQU  H'E3'; Divider ratio 1:256
_WDTCPS_WDTCPS_4_3L  EQU  H'E4'; Divider ratio 1:512
_WDTCPS_WDTCPS_5_3L  EQU  H'E5'; Divider ratio 1:1024
_WDTCPS_WDTCPS_6_3L  EQU  H'E6'; Divider ratio 1:2048
_WDTCPS_WDTCPS_7_3L  EQU  H'E7'; Divider ratio 1:4096
_WDTCPS_WDTCPS_8_3L  EQU  H'E8'; Divider ratio 1:8192
_WDTCPS_WDTCPS_9_3L  EQU  H'E9'; Divider ratio 1:16384
_WDTCPS_WDTCPS_10_3L EQU  H'EA'; Divider ratio 1:32768
_WDTCPS_WDTCPS_11_3L EQU  H'EB'; Divider ratio 1:65536
_WDTCPS_WDTCPS_12_3L EQU  H'EC'; Divider ratio 1:131072
_WDTCPS_WDTCPS_13_3L EQU  H'ED'; Divider ratio 1:262144
_WDTCPS_WDTCPS_14_3L EQU  H'EE'; Divider ratio 1:524299
_WDTCPS_WDTCPS_15_3L EQU  H'EF'; Divider ratio 1:1048576
_WDTCPS_WDTCPS_16_3L EQU  H'F0'; Divider ratio 1:2097152
_WDTCPS_WDTCPS_17_3L EQU  H'F1'; Divider ratio 1:4194304
_WDTCPS_WDTCPS_18_3L EQU  H'F2'; Divider ratio 1:8388608
_WDTCPS_WDTCPS_19_3L EQU  H'F3'; Divider ratio 1:32
_WDTCPS_WDTCPS_20_3L EQU  H'F4'; Divider ratio 1:32
_WDTCPS_WDTCPS_21_3L EQU  H'F5'; Divider ratio 1:32
_WDTCPS_WDTCPS_22_3L EQU  H'F6'; Divider ratio 1:32
_WDTCPS_WDTCPS_23_3L EQU  H'F7'; Divider ratio 1:32
_WDTCPS_WDTCPS_24_3L EQU  H'F8'; Divider ratio 1:32
_WDTCPS_WDTCPS_25_3L EQU  H'F9'; Divider ratio 1:32
_WDTCPS_WDTCPS_26_3L EQU  H'FA'; Divider ratio 1:32
_WDTCPS_WDTCPS_27_3L EQU  H'FB'; Divider ratio 1:32
_WDTCPS_WDTCPS_28_3L EQU  H'FC'; Divider ratio 1:32
_WDTCPS_WDTCPS_29_3L EQU  H'FD'; Divider ratio 1:32
_WDTCPS_WDTCPS_30_3L EQU  H'FE'; Divider ratio 1:32
_WDTCPS_WDTCPS_31_3L EQU  H'FF'; Divider ratio 1:65536; software control of WDTPS

_WDTE_OFF_3L         EQU  H'9F'; WDT Disabled
_WDTE_SWDTEN_3L      EQU  H'BF'; WDT enabled/disabled by SWDTEN bit
_WDTE_NSLEEP_3L      EQU  H'DF'; WDT enabled while sleep=0, suspended when sleep=1
_WDTE_ON_3L          EQU  H'FF'; WDT enabled regardless of sleep

;----- CONFIG3H Options --------------------------------------------------
_WDTCWS_WDTCWS_0_3H  EQU  H'F8'; window delay = 87.5; no software control; keyed access required
_WDTCWS_WDTCWS_1_3H  EQU  H'F9'; window delay = 75 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_2_3H  EQU  H'FA'; window delay = 62.5 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_3_3H  EQU  H'FB'; window delay = 50 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_4_3H  EQU  H'FC'; window delay = 37.5 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_5_3H  EQU  H'FD'; window delay = 25 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_6_3H  EQU  H'FE'; window always open (100%); no software control; keyed access required
_WDTCWS_WDTCWS_7_3H  EQU  H'FF'; window always open (100%); software control; keyed access not required

_WDTCCS_LFINTOSC_3H  EQU  H'C7'; WDT reference clock is the 31.0 kHz LFINTOSC
_WDTCCS_HFINTOSC_3H  EQU  H'CF'; WDT reference clock is the 31.2kHz HFINTOSC output
_WDTCCS_SC_3H        EQU  H'FF'; Software Control

;----- CONFIG4L Options --------------------------------------------------
_WRT0_ON_4L          EQU  H'FE'; Block 0 (000800-003FFFh) write-protected
_WRT0_OFF_4L         EQU  H'FF'; Block 0 (000800-003FFFh) not write-protected

_WRT1_ON_4L          EQU  H'FD'; Block 1 (004000-007FFFh) write-protected
_WRT1_OFF_4L         EQU  H'FF'; Block 1 (004000-007FFFh) not write-protected

_WRT2_ON_4L          EQU  H'FB'; Block 2 (008000-00BFFFh) write-protected
_WRT2_OFF_4L         EQU  H'FF'; Block 2 (008000-00BFFFh) not write-protected

_WRT3_ON_4L          EQU  H'F7'; Block 3 (00C000-00FFFFh) write-protected
_WRT3_OFF_4L         EQU  H'FF'; Block 3 (00C000-00FFFFh) not write-protected

_WRT4_ON_4L          EQU  H'EF'; Block 4 (010000-013FFFh) write-protected
_WRT4_OFF_4L         EQU  H'FF'; Block 4 (010000-013FFFh) not write-protected

_WRT5_ON_4L          EQU  H'DF'; Block 5 (014000-017FFFh) write-protected
_WRT5_OFF_4L         EQU  H'FF'; Block 5 (014000-017FFFh) not write-protected

_WRT6_ON_4L          EQU  H'BF'; Block 6 (018000-01BFFFh) write-protected
_WRT6_OFF_4L         EQU  H'FF'; Block 6 (018000-01BFFFh) not write-protected

_WRT7_ON_4L          EQU  H'7F'; Block 7 (01C000-01FFFFh) write-protected
_WRT7_OFF_4L         EQU  H'FF'; Block 7 (01C000-01FFFFh) not write-protected

;----- CONFIG4H Options --------------------------------------------------
_WRTC_ON_4H          EQU  H'FE'; Configuration registers (300000-30000Bh) write-protected
_WRTC_OFF_4H         EQU  H'FF'; Configuration registers (300000-30000Bh) not write-protected

_WRTB_ON_4H          EQU  H'FD'; Boot Block (000000-0007FFh) write-protected
_WRTB_OFF_4H         EQU  H'FF'; Boot Block (000000-0007FFh) not write-protected

_WRTD_ON_4H          EQU  H'FB'; Data EEPROM write-protected
_WRTD_OFF_4H         EQU  H'FF'; Data EEPROM not write-protected

_SCANE_OFF_4H        EQU  H'EF'; Scanner module is NOT available for use, SCANMD bit is ignored
_SCANE_ON_4H         EQU  H'FF'; Scanner module is available for use, SCANMD bit can control the module

_LVP_OFF_4H          EQU  H'DF'; HV on MCLR/VPP must be used for programming
_LVP_ON_4H           EQU  H'FF'; Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored

;----- CONFIG5L Options --------------------------------------------------
_CP_ON_5L            EQU  H'FE'; UserNVM code protection enabled
_CP_OFF_5L           EQU  H'FF'; UserNVM code protection disabled

_CPD_ON_5L           EQU  H'FD'; DataNVM code protection enabled
_CPD_OFF_5L          EQU  H'FF'; DataNVM code protection disabled

;----- CONFIG5H Options --------------------------------------------------
;----- CONFIG6L Options --------------------------------------------------
_EBTR0_ON_6L         EQU  H'FE'; Block 0 (000800-003FFFh) protected from table reads executed in other blocks
_EBTR0_OFF_6L        EQU  H'FF'; Block 0 (000800-003FFFh) not protected from table reads executed in other blocks

_EBTR1_ON_6L         EQU  H'FD'; Block 1 (004000-007FFFh) protected from table reads executed in other blocks
_EBTR1_OFF_6L        EQU  H'FF'; Block 1 (004000-007FFFh) not protected from table reads executed in other blocks

_EBTR2_ON_6L         EQU  H'FB'; Block 2 (008000-00BFFFh) protected from table reads executed in other blocks
_EBTR2_OFF_6L        EQU  H'FF'; Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks

_EBTR3_ON_6L         EQU  H'F7'; Block 3 (00C000-00FFFFh) protected from table reads executed in other blocks
_EBTR3_OFF_6L        EQU  H'FF'; Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks

_EBTR4_ON_6L         EQU  H'EF'; Block 4 (010000-013FFFh) protected from table reads executed in other blocks
_EBTR4_OFF_6L        EQU  H'FF'; Block 4 (010000-013FFFh) not protected from table reads executed in other blocks

_EBTR5_ON_6L         EQU  H'DF'; Block 5 (014000-017FFFh) protected from table reads executed in other blocks
_EBTR5_OFF_6L        EQU  H'FF'; Block 5 (014000-017FFFh) not protected from table reads executed in other blocks

_EBTR6_ON_6L         EQU  H'BF'; Block 6 (018000-01BFFFh) protected from table reads executed in other blocks
_EBTR6_OFF_6L        EQU  H'FF'; Block 6 (018000-01BFFFh) not protected from table reads executed in other blocks

_EBTR7_ON_6L         EQU  H'7F'; Block 7 (01C000-01FFFFh) protected from table reads executed in other blocks
_EBTR7_OFF_6L        EQU  H'FF'; Block 7 (01C000-01FFFFh) not protected from table reads executed in other blocks

;----- CONFIG6H Options --------------------------------------------------
_EBTRB_ON_6H         EQU  H'FD'; Boot Block (000000-0007FFh) protected from table reads executed in other blocks
_EBTRB_OFF_6H        EQU  H'FF'; Boot Block (000000-0007FFh) not protected from table reads executed in other blocks


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
_IDLOC8          EQU  H'200008'
_IDLOC9          EQU  H'200009'
_IDLOC10         EQU  H'20000A'
_IDLOC11         EQU  H'20000B'
_IDLOC12         EQU  H'20000C'
_IDLOC13         EQU  H'20000D'
_IDLOC14         EQU  H'20000E'
_IDLOC15         EQU  H'20000F'

        LIST
