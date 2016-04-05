        LIST

;==========================================================================
; Build date : Aug 13 2015
;  MPASM PIC16F1769 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F1769 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F1769
;       2. LIST directive in the source file
;               LIST   P=PIC16F1769
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================
;;;; Begin: Added in gputils

;==========================================================================
;
;       Gputils Specific Revision History
;
;==========================================================================

;       11 Nov 2014  Added the _DEBUG_ON and _DEBUG_OFF config options.
;;;; End: Added in gputils

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F1769
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
PIR1             EQU  H'0011'
PIR2             EQU  H'0012'
PIR3             EQU  H'0013'
PIR4             EQU  H'0014'
TMR0             EQU  H'0015'
TMR1             EQU  H'0016'
TMR1L            EQU  H'0016'
TMR1H            EQU  H'0017'
T1CON            EQU  H'0018'
T1GCON           EQU  H'0019'
T2TMR            EQU  H'001A'
TMR2             EQU  H'001A'
PR2              EQU  H'001B'
T2PR             EQU  H'001B'
T2CON            EQU  H'001C'
T2HLT            EQU  H'001D'
T2CLKCON         EQU  H'001E'
T2RST            EQU  H'001F'

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISB            EQU  H'008D'
TRISC            EQU  H'008E'
PIE1             EQU  H'0091'
PIE2             EQU  H'0092'
PIE3             EQU  H'0093'
PIE4             EQU  H'0094'
OPTION_REG       EQU  H'0095'
PCON             EQU  H'0096'
WDTCON           EQU  H'0097'
OSCTUNE          EQU  H'0098'
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
LATB             EQU  H'010D'
LATC             EQU  H'010E'
CMOUT            EQU  H'010F'
CM1CON0          EQU  H'0110'
CM1CON1          EQU  H'0111'
CM1NSEL          EQU  H'0112'
CM1PSEL          EQU  H'0113'
CM2CON0          EQU  H'0114'
CM2CON1          EQU  H'0115'
CM2NSEL          EQU  H'0116'
CM2PSEL          EQU  H'0117'
CM3CON0          EQU  H'0118'
CM3CON1          EQU  H'0119'
CM3NSEL          EQU  H'011A'
CM3PSEL          EQU  H'011B'
CM4CON0          EQU  H'011C'
CM4CON1          EQU  H'011D'
CM4NSEL          EQU  H'011E'
CM4PSEL          EQU  H'011F'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELB           EQU  H'018D'
ANSELC           EQU  H'018E'
PMADR            EQU  H'0191'
PMADRL           EQU  H'0191'
PMADRH           EQU  H'0192'
PMDAT            EQU  H'0193'
PMDATL           EQU  H'0193'
PMDATH           EQU  H'0194'
PMCON1           EQU  H'0195'
PMCON2           EQU  H'0196'
VREGCON          EQU  H'0197'
RC1REG           EQU  H'0199'
RCREG            EQU  H'0199'
RCREG1           EQU  H'0199'
TX1REG           EQU  H'019A'
TXREG            EQU  H'019A'
TXREG1           EQU  H'019A'
SP1BRG           EQU  H'019B'
SP1BRGL          EQU  H'019B'
SPBRG            EQU  H'019B'
SPBRG1           EQU  H'019B'
SPBRGL           EQU  H'019B'
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
BAUDCTL          EQU  H'019F'
BAUDCTL1         EQU  H'019F'

;-----Bank4------------------
WPUA             EQU  H'020C'
WPUB             EQU  H'020D'
WPUC             EQU  H'020E'
SSP1BUF          EQU  H'0211'
SSPBUF           EQU  H'0211'
SSP1ADD          EQU  H'0212'
SSPADD           EQU  H'0212'
SSP1MSK          EQU  H'0213'
SSPMSK           EQU  H'0213'
SSP1STAT         EQU  H'0214'
SSPSTAT          EQU  H'0214'
SSP1CON          EQU  H'0215'
SSP1CON1         EQU  H'0215'
SSPCON           EQU  H'0215'
SSPCON1          EQU  H'0215'
SSP1CON2         EQU  H'0216'
SSPCON2          EQU  H'0216'
SSP1CON3         EQU  H'0217'
SSPCON3          EQU  H'0217'
BORCON           EQU  H'021D'
FVRCON           EQU  H'021E'
ZCD1CON          EQU  H'021F'

;-----Bank5------------------
ODCONA           EQU  H'028C'
ODCONB           EQU  H'028D'
ODCONC           EQU  H'028E'
CCPR1            EQU  H'0291'
CCPR1L           EQU  H'0291'
CCPR1H           EQU  H'0292'
CCP1CON          EQU  H'0293'
CCP1CAP          EQU  H'0294'
CCPR2            EQU  H'0298'
CCPR2L           EQU  H'0298'
CCPR2H           EQU  H'0299'
CCP2CON          EQU  H'029A'
CCP2CAP          EQU  H'029B'
CCPTMRS          EQU  H'029E'

;-----Bank6------------------
SLRCONA          EQU  H'030C'
SLRCONB          EQU  H'030D'
SLRCONC          EQU  H'030E'
MD2CON0          EQU  H'031B'
MD2CON1          EQU  H'031C'
MD2SRC           EQU  H'031D'
MD2CARL          EQU  H'031E'
MD2CARH          EQU  H'031F'

;-----Bank7------------------
INLVLA           EQU  H'038C'
INLVLB           EQU  H'038D'
INLVLC           EQU  H'038E'
IOCAP            EQU  H'0391'
IOCAN            EQU  H'0392'
IOCAF            EQU  H'0393'
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'
IOCCP            EQU  H'0397'
IOCCN            EQU  H'0398'
IOCCF            EQU  H'0399'
MD1CON0          EQU  H'039B'
MD1CON1          EQU  H'039C'
MD1SRC           EQU  H'039D'
MD1CARL          EQU  H'039E'
MD1CARH          EQU  H'039F'

;-----Bank8------------------
HIDRVC           EQU  H'040E'
T4TMR            EQU  H'0413'
TMR4             EQU  H'0413'
PR4              EQU  H'0414'
T4PR             EQU  H'0414'
T4CON            EQU  H'0415'
T4HLT            EQU  H'0416'
T4CLKCON         EQU  H'0417'
T4RST            EQU  H'0418'
T6TMR            EQU  H'041A'
TMR6             EQU  H'041A'
PR6              EQU  H'041B'
T6PR             EQU  H'041B'
T6CON            EQU  H'041C'
T6HLT            EQU  H'041D'
T6CLKCON         EQU  H'041E'
T6RST            EQU  H'041F'

;-----Bank9------------------
TMR3             EQU  H'0493'
TMR3L            EQU  H'0493'
TMR3H            EQU  H'0494'
T3CON            EQU  H'0495'
T3GCON           EQU  H'0496'
TMR5             EQU  H'049A'
TMR5L            EQU  H'049A'
TMR5H            EQU  H'049B'
T5CON            EQU  H'049C'
T5GCON           EQU  H'049D'

;-----Bank10------------------
OPA1NCHS         EQU  H'050F'
OPA1PCHS         EQU  H'0510'
OPA1CON          EQU  H'0511'
OPA1ORS          EQU  H'0512'
OPA2NCHS         EQU  H'0513'
OPA2PCHS         EQU  H'0514'
OPA2CON          EQU  H'0515'
OPA2ORS          EQU  H'0516'

;-----Bank11------------------
DACLD            EQU  H'0590'
DAC1CON0         EQU  H'0591'
DAC1CON1         EQU  H'0592'
DAC1REF          EQU  H'0592'
DAC1REFL         EQU  H'0592'
DAC1CON2         EQU  H'0593'
DAC1REFH         EQU  H'0593'
DAC2CON0         EQU  H'0594'
DAC2CON1         EQU  H'0595'
DAC2REF          EQU  H'0595'
DAC2REFL         EQU  H'0595'
DAC2CON2         EQU  H'0596'
DAC2REFH         EQU  H'0596'
DAC3CON0         EQU  H'0597'
DAC3CON1         EQU  H'0598'
DAC3REF          EQU  H'0598'
DAC4CON0         EQU  H'0599'
DAC4CON1         EQU  H'059A'
DAC4REF          EQU  H'059A'

;-----Bank12------------------
PWM3DCL          EQU  H'0617'
PWM3DCH          EQU  H'0618'
PWM3CON          EQU  H'0619'
PWM4DCL          EQU  H'061A'
PWM4DCH          EQU  H'061B'
PWM4CON          EQU  H'061C'

;-----Bank13------------------
COG1PHR          EQU  H'068D'
COG1PHF          EQU  H'068E'
COG1BLKR         EQU  H'068F'
COG1BLKF         EQU  H'0690'
COG1DBR          EQU  H'0691'
COG1DBF          EQU  H'0692'
COG1CON0         EQU  H'0693'
COG1CON1         EQU  H'0694'
COG1RIS0         EQU  H'0695'
COG1RIS1         EQU  H'0696'
COG1RSIM0        EQU  H'0697'
COG1RSIM1        EQU  H'0698'
COG1FIS0         EQU  H'0699'
COG1FIS1         EQU  H'069A'
COG1FSIM0        EQU  H'069B'
COG1FSIM1        EQU  H'069C'
COG1ASD0         EQU  H'069D'
COG1ASD1         EQU  H'069E'
COG1STR          EQU  H'069F'

;-----Bank14------------------
COG2PHR          EQU  H'070D'
COG2PHF          EQU  H'070E'
COG2BLKR         EQU  H'070F'
COG2BLKF         EQU  H'0710'
COG2DBR          EQU  H'0711'
COG2DBF          EQU  H'0712'
COG2CON0         EQU  H'0713'
COG2CON1         EQU  H'0714'
COG2RIS0         EQU  H'0715'
COG2RIS1         EQU  H'0716'
COG2RSIM0        EQU  H'0717'
COG2RSIM1        EQU  H'0718'
COG2FIS0         EQU  H'0719'
COG2FIS1         EQU  H'071A'
COG2FSIM0        EQU  H'071B'
COG2FSIM1        EQU  H'071C'
COG2ASD0         EQU  H'071D'
COG2ASD1         EQU  H'071E'
COG2STR          EQU  H'071F'

;-----Bank15------------------
PRG1RTSS         EQU  H'0794'
PRG1FTSS         EQU  H'0795'
PRG1INS          EQU  H'0796'
PRG1CON0         EQU  H'0797'
PRG1CON1         EQU  H'0798'
PRG1CON2         EQU  H'0799'
PRG2RTSS         EQU  H'079A'
PRG2FTSS         EQU  H'079B'
PRG2INS          EQU  H'079C'
PRG2CON0         EQU  H'079D'
PRG2CON1         EQU  H'079E'
PRG2CON2         EQU  H'079F'

;-----Bank27------------------
PWMEN            EQU  H'0D8E'
PWMLD            EQU  H'0D8F'
PWMOUT           EQU  H'0D90'
PWM5PH           EQU  H'0D91'
PWM5PHL          EQU  H'0D91'
PWM5PHH          EQU  H'0D92'
PWM5DC           EQU  H'0D93'
PWM5DCL          EQU  H'0D93'
PWM5DCH          EQU  H'0D94'
PWM5PR           EQU  H'0D95'
PWM5PRL          EQU  H'0D95'
PWM5PRH          EQU  H'0D96'
PWM5OF           EQU  H'0D97'
PWM5OFL          EQU  H'0D97'
PWM5OFH          EQU  H'0D98'
PWM5TMR          EQU  H'0D99'
PWM5TMRL         EQU  H'0D99'
PWM5TMRH         EQU  H'0D9A'
PWM5CON          EQU  H'0D9B'
PWM5INTCON       EQU  H'0D9C'
PWM5INTE         EQU  H'0D9C'
PWM5INTF         EQU  H'0D9D'
PWM5INTFLG       EQU  H'0D9D'
PWM5CLKCON       EQU  H'0D9E'
PWM5LDCON        EQU  H'0D9F'
PWM5OFCON        EQU  H'0DA0'
PWM6PH           EQU  H'0DA1'
PWM6PHL          EQU  H'0DA1'
PWM6PHH          EQU  H'0DA2'
PWM6DC           EQU  H'0DA3'
PWM6DCL          EQU  H'0DA3'
PWM6DCH          EQU  H'0DA4'
PWM6PR           EQU  H'0DA5'
PWM6PRL          EQU  H'0DA5'
PWM6PRH          EQU  H'0DA6'
PWM6OF           EQU  H'0DA7'
PWM6OFL          EQU  H'0DA7'
PWM6OFH          EQU  H'0DA8'
PWM6TMR          EQU  H'0DA9'
PWM6TMRL         EQU  H'0DA9'
PWM6TMRH         EQU  H'0DAA'
PWM6CON          EQU  H'0DAB'
PWM6INTCON       EQU  H'0DAC'
PWM6INTE         EQU  H'0DAC'
PWM6INTF         EQU  H'0DAD'
PWM6INTFLG       EQU  H'0DAD'
PWM6CLKCON       EQU  H'0DAE'
PWM6LDCON        EQU  H'0DAF'
PWM6OFCON        EQU  H'0DB0'

;-----Bank28------------------
PPSLOCK          EQU  H'0E0F'
INTPPS           EQU  H'0E10'
T0CKIPPS         EQU  H'0E11'
T1CKIPPS         EQU  H'0E12'
T1GPPS           EQU  H'0E13'
CCP1PPS          EQU  H'0E14'
CCP2PPS          EQU  H'0E15'
COG1INPPS        EQU  H'0E16'
COG2INPPS        EQU  H'0E17'
T2CKIPPS         EQU  H'0E19'
T3CKIPPS         EQU  H'0E1A'
T3GPPS           EQU  H'0E1B'
T4CKIPPS         EQU  H'0E1C'
T5CKIPPS         EQU  H'0E1D'
T5GPPS           EQU  H'0E1E'
T6CKIPPS         EQU  H'0E1F'
SSPCLKPPS        EQU  H'0E20'
SSPDATPPS        EQU  H'0E21'
SSPSSPPS         EQU  H'0E22'
RXPPS            EQU  H'0E24'
CKPPS            EQU  H'0E25'
CLCIN0PPS        EQU  H'0E28'
CLCIN1PPS        EQU  H'0E29'
CLCIN2PPS        EQU  H'0E2A'
CLCIN3PPS        EQU  H'0E2B'
PRG1RPPS         EQU  H'0E2C'
PRG1FPPS         EQU  H'0E2D'
PRG2RPPS         EQU  H'0E2E'
PRG2FPPS         EQU  H'0E2F'
MD1CHPPS         EQU  H'0E30'
MD1CLPPS         EQU  H'0E31'
MD1MODPPS        EQU  H'0E32'
MD2CHPPS         EQU  H'0E33'
MD2CLPPS         EQU  H'0E34'
MD2MODPPS        EQU  H'0E35'

;-----Bank29------------------
RA0PPS           EQU  H'0E90'
RA1PPS           EQU  H'0E91'
RA2PPS           EQU  H'0E92'
RA4PPS           EQU  H'0E94'
RA5PPS           EQU  H'0E95'
RB4PPS           EQU  H'0E9C'
RB5PPS           EQU  H'0E9D'
RB6PPS           EQU  H'0E9E'
RB7PPS           EQU  H'0E9F'
RC0PPS           EQU  H'0EA0'
RC1PPS           EQU  H'0EA1'
RC2PPS           EQU  H'0EA2'
RC3PPS           EQU  H'0EA3'
RC4PPS           EQU  H'0EA4'
RC5PPS           EQU  H'0EA5'
RC6PPS           EQU  H'0EA6'
RC7PPS           EQU  H'0EA7'

;-----Bank30------------------
CLCDATA          EQU  H'0F0F'
CLC1CON          EQU  H'0F10'
CLC1POL          EQU  H'0F11'
CLC1SEL0         EQU  H'0F12'
CLC1SEL1         EQU  H'0F13'
CLC1SEL2         EQU  H'0F14'
CLC1SEL3         EQU  H'0F15'
CLC1GLS0         EQU  H'0F16'
CLC1GLS1         EQU  H'0F17'
CLC1GLS2         EQU  H'0F18'
CLC1GLS3         EQU  H'0F19'
CLC2CON          EQU  H'0F1A'
CLC2POL          EQU  H'0F1B'
CLC2SEL0         EQU  H'0F1C'
CLC2SEL1         EQU  H'0F1D'
CLC2SEL2         EQU  H'0F1E'
CLC2SEL3         EQU  H'0F1F'
CLC2GLS0         EQU  H'0F20'
CLC2GLS1         EQU  H'0F21'
CLC2GLS2         EQU  H'0F22'
CLC2GLS3         EQU  H'0F23'
CLC3CON          EQU  H'0F24'
CLC3POL          EQU  H'0F25'
CLC3SEL0         EQU  H'0F26'
CLC3SEL1         EQU  H'0F27'
CLC3SEL2         EQU  H'0F28'
CLC3SEL3         EQU  H'0F29'
CLC3GLS0         EQU  H'0F2A'
CLC3GLS1         EQU  H'0F2B'
CLC3GLS2         EQU  H'0F2C'
CLC3GLS3         EQU  H'0F2D'

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


;----- PORTB Bits -----------------------------------------------------
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


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'

CCPIF            EQU  H'0002'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
C3IF             EQU  H'0001'
C4IF             EQU  H'0002'
BCL1IF           EQU  H'0003'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'
OSFIF            EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
CLC1IF           EQU  H'0000'
CLC2IF           EQU  H'0001'
CLC3IF           EQU  H'0002'
COG2IF           EQU  H'0003'
ZCDIF            EQU  H'0004'
COG1IF           EQU  H'0005'
PWM5IF           EQU  H'0006'
PWM6IF           EQU  H'0007'


;----- PIR4 Bits -----------------------------------------------------
TMR4IF           EQU  H'0000'
TMR6IF           EQU  H'0001'
TMR3IF           EQU  H'0002'
TMR3GIF          EQU  H'0003'
TMR5IF           EQU  H'0004'
TMR5GIF          EQU  H'0005'


;----- T1CON Bits -----------------------------------------------------
ON_T1CON         EQU  H'0000'
NOT_SYNC         EQU  H'0002'
OSCEN            EQU  H'0003'

TMRON            EQU  H'0000'
SYNC_T1CON       EQU  H'0002'
SOSCEN           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CS0_T1CON        EQU  H'0006'
CS1_T1CON        EQU  H'0007'

TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
T1CS0            EQU  H'0006'
T1CS1            EQU  H'0007'

T1ON             EQU  H'0000'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- T1GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
T1GE             EQU  H'0007'

T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'


;----- T2CON Bits -----------------------------------------------------
ON_T2CON         EQU  H'0007'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'

T2ON             EQU  H'0007'

T2OUTPS0         EQU  H'0000'
T2OUTPS1         EQU  H'0001'
T2OUTPS2         EQU  H'0002'
T2OUTPS3         EQU  H'0003'
T2CKPS0          EQU  H'0004'
T2CKPS1          EQU  H'0005'
T2CKPS2          EQU  H'0006'
TMR2ON           EQU  H'0007'


;----- T2HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0_T2HLT      EQU  H'0000'
MODE1_T2HLT      EQU  H'0001'
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
CS0_T2CLKCON     EQU  H'0000'
CS1_T2CLKCON     EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


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


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'


;----- TRISB Bits -----------------------------------------------------
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


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSP1IE           EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'

CCPIE            EQU  H'0002'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
C3IE             EQU  H'0001'
C4IE             EQU  H'0002'
BCL1IE           EQU  H'0003'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
CLC1IE           EQU  H'0000'
CLC2IE           EQU  H'0001'
CLC3IE           EQU  H'0002'
COG2IE           EQU  H'0003'
ZCDIE            EQU  H'0004'
COGIE            EQU  H'0005'
PWM5IE           EQU  H'0006'
PWM6IE           EQU  H'0007'


;----- PIE4 Bits -----------------------------------------------------
TMR4IE           EQU  H'0000'
TMR6IE           EQU  H'0001'
TMR3IE           EQU  H'0002'
TMR3GIE          EQU  H'0003'
TMR5IE           EQU  H'0004'
TMR5GIE          EQU  H'0005'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

PS0_OPTION_REG   EQU  H'0000'
PS1_OPTION_REG   EQU  H'0001'
PS2_OPTION_REG   EQU  H'0002'
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


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


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
MFIOFR           EQU  H'0002'
HFIOFL           EQU  H'0003'
HFIOFR           EQU  H'0004'
OSTS             EQU  H'0005'
PLLR             EQU  H'0006'
SOSCR            EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

ADGO             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO_ADCON0        EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADNREF           EQU  H'0002'
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'


;----- ADCON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0003'
TRIGSEL1         EQU  H'0004'
TRIGSEL2         EQU  H'0005'
TRIGSEL3         EQU  H'0006'
TRIGSEL4         EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATB Bits -----------------------------------------------------
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


;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'
MC3OUT           EQU  H'0002'
MC4OUT           EQU  H'0003'


;----- CM1CON0 Bits -----------------------------------------------------
SYNC_CM1CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved_CM1CON0 EQU  H'0002'
ZLF              EQU  H'0003'
POL_CM1CON0      EQU  H'0004'
OUT_CM1CON0      EQU  H'0006'
ON_CM1CON0       EQU  H'0007'

C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON1 Bits -----------------------------------------------------
INTN_CM1CON1     EQU  H'0000'
INTP_CM1CON1     EQU  H'0001'

C1INTN           EQU  H'0000'
C1INTP           EQU  H'0001'


;----- CM1NSEL Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'


C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'


;----- CM1PSEL Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'
PCH3             EQU  H'0003'


C1PCH0           EQU  H'0000'
C1PCH1           EQU  H'0001'
C1PCH2           EQU  H'0002'
C1PCH3           EQU  H'0003'


;----- CM2CON0 Bits -----------------------------------------------------
SYNC_CM2CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved_CM2CON0 EQU  H'0002'
ZLF              EQU  H'0003'
POL_CM2CON0      EQU  H'0004'
OUT_CM2CON0      EQU  H'0006'
ON_CM2CON0       EQU  H'0007'

C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
INTN_CM2CON1     EQU  H'0000'
INTP_CM2CON1     EQU  H'0001'

C2INTN           EQU  H'0000'
C2INTP           EQU  H'0001'


;----- CM2NSEL Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'


C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'


;----- CM2PSEL Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'
PCH3             EQU  H'0003'


C2PCH0           EQU  H'0000'
C2PCH1           EQU  H'0001'
C2PCH2           EQU  H'0002'
C2PCH3           EQU  H'0003'


;----- CM3CON0 Bits -----------------------------------------------------
SYNC_CM3CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved_CM3CON0 EQU  H'0002'
ZLF              EQU  H'0003'
POL_CM3CON0      EQU  H'0004'
OUT_CM3CON0      EQU  H'0006'
ON_CM3CON0       EQU  H'0007'

C3SYNC           EQU  H'0000'
C3HYS            EQU  H'0001'
C3SP             EQU  H'0002'
C3ZLF            EQU  H'0003'
C3POL            EQU  H'0004'
C3OUT            EQU  H'0006'
C3ON             EQU  H'0007'


;----- CM3CON1 Bits -----------------------------------------------------
INTN_CM3CON1     EQU  H'0000'
INTP_CM3CON1     EQU  H'0001'

C3INTN           EQU  H'0000'
C3INTP           EQU  H'0001'


;----- CM3NSEL Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'


C3NCH0           EQU  H'0000'
C3NCH1           EQU  H'0001'
C3NCH2           EQU  H'0002'


;----- CM3PSEL Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'
PCH3             EQU  H'0003'


C3PCH0           EQU  H'0000'
C3PCH1           EQU  H'0001'
C3PCH2           EQU  H'0002'
C3PCH3           EQU  H'0003'


;----- CM4CON0 Bits -----------------------------------------------------
SYNC_CM4CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved_CM4CON0 EQU  H'0002'
ZLF              EQU  H'0003'
POL_CM4CON0      EQU  H'0004'
OUT_CM4CON0      EQU  H'0006'
ON_CM4CON0       EQU  H'0007'

C4SYNC           EQU  H'0000'
C4HYS            EQU  H'0001'
C4SP             EQU  H'0002'
C4ZLF            EQU  H'0003'
C4POL            EQU  H'0004'
C4OUT            EQU  H'0006'
C4ON             EQU  H'0007'


;----- CM4CON1 Bits -----------------------------------------------------
INTN_CM4CON1     EQU  H'0000'
INTP_CM4CON1     EQU  H'0001'

C4INTN           EQU  H'0000'
C4INTP           EQU  H'0001'


;----- CM4NSEL Bits -----------------------------------------------------
NCH0             EQU  H'0000'
NCH1             EQU  H'0001'
NCH2             EQU  H'0002'


C4NCH0           EQU  H'0000'
C4NCH1           EQU  H'0001'
C4NCH2           EQU  H'0002'


;----- CM4PSEL Bits -----------------------------------------------------
PCH0             EQU  H'0000'
PCH1             EQU  H'0001'
PCH2             EQU  H'0002'
PCH3             EQU  H'0003'


C4PCH0           EQU  H'0000'
C4PCH1           EQU  H'0001'
C4PCH2           EQU  H'0002'
C4PCH3           EQU  H'0003'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'


;----- ANSELB Bits -----------------------------------------------------
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'
ANSB6            EQU  H'0006'
ANSB7            EQU  H'0007'


;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'
ANSC6            EQU  H'0006'
ANSC7            EQU  H'0007'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'


;----- VREGCON Bits -----------------------------------------------------
Reserved_VREGCON EQU  H'0000'
VREGPM           EQU  H'0001'


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
SYNC_TX1STA      EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC_TXSTA       EQU  H'0004'
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


;----- BAUDCTL Bits -----------------------------------------------------
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


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- WPUB Bits -----------------------------------------------------
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'
WPUC6            EQU  H'0006'
WPUC7            EQU  H'0007'


;----- SSP1BUF Bits -----------------------------------------------------
SSP1BUF0         EQU  H'0000'
SSP1BUF1         EQU  H'0001'
SSP1BUF2         EQU  H'0002'
SSP1BUF3         EQU  H'0003'
SSP1BUF4         EQU  H'0004'
SSP1BUF5         EQU  H'0005'
SSP1BUF6         EQU  H'0006'
SSP1BUF7         EQU  H'0007'


BUF0             EQU  H'0000'
BUF1             EQU  H'0001'
BUF2             EQU  H'0002'
BUF3             EQU  H'0003'
BUF4             EQU  H'0004'
BUF5             EQU  H'0005'
BUF6             EQU  H'0006'
BUF7             EQU  H'0007'



;----- SSPBUF Bits -----------------------------------------------------
SSP1BUF0         EQU  H'0000'
SSP1BUF1         EQU  H'0001'
SSP1BUF2         EQU  H'0002'
SSP1BUF3         EQU  H'0003'
SSP1BUF4         EQU  H'0004'
SSP1BUF5         EQU  H'0005'
SSP1BUF6         EQU  H'0006'
SSP1BUF7         EQU  H'0007'


BUF0             EQU  H'0000'
BUF1             EQU  H'0001'
BUF2             EQU  H'0002'
BUF3             EQU  H'0003'
BUF4             EQU  H'0004'
BUF5             EQU  H'0005'
BUF6             EQU  H'0006'
BUF7             EQU  H'0007'



;----- SSP1ADD Bits -----------------------------------------------------
SSP1ADD0         EQU  H'0000'
SSP1ADD1         EQU  H'0001'
SSP1ADD2         EQU  H'0002'
SSP1ADD3         EQU  H'0003'
SSP1ADD4         EQU  H'0004'
SSP1ADD5         EQU  H'0005'
SSP1ADD6         EQU  H'0006'
SSP1ADD7         EQU  H'0007'


ADD0             EQU  H'0000'
ADD1             EQU  H'0001'
ADD2             EQU  H'0002'
ADD3             EQU  H'0003'
ADD4             EQU  H'0004'
ADD5             EQU  H'0005'
ADD6             EQU  H'0006'
ADD7             EQU  H'0007'



;----- SSPADD Bits -----------------------------------------------------
SSP1ADD0         EQU  H'0000'
SSP1ADD1         EQU  H'0001'
SSP1ADD2         EQU  H'0002'
SSP1ADD3         EQU  H'0003'
SSP1ADD4         EQU  H'0004'
SSP1ADD5         EQU  H'0005'
SSP1ADD6         EQU  H'0006'
SSP1ADD7         EQU  H'0007'


ADD0             EQU  H'0000'
ADD1             EQU  H'0001'
ADD2             EQU  H'0002'
ADD3             EQU  H'0003'
ADD4             EQU  H'0004'
ADD5             EQU  H'0005'
ADD6             EQU  H'0006'
ADD7             EQU  H'0007'



;----- SSP1MSK Bits -----------------------------------------------------
SSP1MSK0         EQU  H'0000'
SSP1MSK1         EQU  H'0001'
SSP1MSK2         EQU  H'0002'
SSP1MSK3         EQU  H'0003'
SSP1MSK4         EQU  H'0004'
SSP1MSK5         EQU  H'0005'
SSP1MSK6         EQU  H'0006'
SSP1MSK7         EQU  H'0007'


MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'



;----- SSPMSK Bits -----------------------------------------------------
SSP1MSK0         EQU  H'0000'
SSP1MSK1         EQU  H'0001'
SSP1MSK2         EQU  H'0002'
SSP1MSK3         EQU  H'0003'
SSP1MSK4         EQU  H'0004'
SSP1MSK5         EQU  H'0005'
SSP1MSK6         EQU  H'0006'
SSP1MSK7         EQU  H'0007'


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


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSP1CON Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSP1CON1 Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSPCON Bits -----------------------------------------------------
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


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'


;----- ZCD1CON Bits -----------------------------------------------------
ZCD1INTN         EQU  H'0000'
ZCD1INTP         EQU  H'0001'
ZCD1POL          EQU  H'0004'
ZCD1OUT          EQU  H'0005'
ZCD1EN           EQU  H'0007'


;----- ODCONA Bits -----------------------------------------------------
ODA0             EQU  H'0000'
ODA1             EQU  H'0001'
ODA2             EQU  H'0002'
ODA4             EQU  H'0004'
ODA5             EQU  H'0005'


;----- ODCONB Bits -----------------------------------------------------
ODB4             EQU  H'0004'
ODB5             EQU  H'0005'
ODB6             EQU  H'0006'
ODB7             EQU  H'0007'


;----- ODCONC Bits -----------------------------------------------------
ODC0             EQU  H'0000'
ODC1             EQU  H'0001'
ODC2             EQU  H'0002'
ODC3             EQU  H'0003'
ODC4             EQU  H'0004'
ODC5             EQU  H'0005'
ODC6             EQU  H'0006'
ODC7             EQU  H'0007'


;----- CCP1CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP1CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0_CCP1CON    EQU  H'0000'
MODE1_CCP1CON    EQU  H'0001'
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
CTS2             EQU  H'0002'


CCP1CTS0         EQU  H'0000'
CCP1CTS1         EQU  H'0001'
CCP1CTS2         EQU  H'0002'


;----- CCP2CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP2CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0_CCP2CON    EQU  H'0000'
MODE1_CCP2CON    EQU  H'0001'
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
CTS2             EQU  H'0002'


CCP2CTS0         EQU  H'0000'
CCP2CTS1         EQU  H'0001'
CCP2CTS2         EQU  H'0002'


;----- CCPTMRS Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
P3TSEL0          EQU  H'0004'
P3TSEL1          EQU  H'0005'
P4TSEL0          EQU  H'0006'
P4TSEL1          EQU  H'0007'


;----- SLRCONA Bits -----------------------------------------------------
SLRA0            EQU  H'0000'
SLRA1            EQU  H'0001'
SLRA2            EQU  H'0002'
SLRA4            EQU  H'0004'
SLRA5            EQU  H'0005'


;----- SLRCONB Bits -----------------------------------------------------
SLRB4            EQU  H'0004'
SLRB5            EQU  H'0005'
SLRB6            EQU  H'0006'
SLRB7            EQU  H'0007'


;----- SLRCONC Bits -----------------------------------------------------
SLRC0            EQU  H'0000'
SLRC1            EQU  H'0001'
SLRC2            EQU  H'0002'
SLRC3            EQU  H'0003'
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'
SLRC6            EQU  H'0006'
SLRC7            EQU  H'0007'


;----- MD2CON0 Bits -----------------------------------------------------
BIT              EQU  H'0000'
OPOL             EQU  H'0004'
OUT_MD2CON0      EQU  H'0005'
EN               EQU  H'0007'

MD2BIT           EQU  H'0000'
MD2OPOL          EQU  H'0004'
MD2OUT           EQU  H'0005'
MD2EN            EQU  H'0007'


;----- MD2CON1 Bits -----------------------------------------------------
CLSYNC           EQU  H'0000'
CLPOL            EQU  H'0001'
CHSYNC           EQU  H'0004'
CHPOL            EQU  H'0005'

MD2CLSYNC        EQU  H'0000'
MD2CLPOL         EQU  H'0001'
MD2CHSYNC        EQU  H'0004'
MD2CHPOL         EQU  H'0005'


;----- MD2SRC Bits -----------------------------------------------------
MS0              EQU  H'0000'
MS1              EQU  H'0001'
MS2              EQU  H'0002'
MS3              EQU  H'0003'
MS4              EQU  H'0004'


MD2MS0           EQU  H'0000'
MD2MS1           EQU  H'0001'
MD2MS2           EQU  H'0002'
MD2MS3           EQU  H'0003'
MD2MS4           EQU  H'0004'


;----- MD2CARL Bits -----------------------------------------------------
CL0              EQU  H'0000'
CL1              EQU  H'0001'
CL2              EQU  H'0002'
CL3              EQU  H'0003'


MD2CL0           EQU  H'0000'
MD2CL1           EQU  H'0001'
MD2CL2           EQU  H'0002'
MD2CL3           EQU  H'0003'


;----- MD2CARH Bits -----------------------------------------------------
CH0              EQU  H'0000'
CH1              EQU  H'0001'
CH2              EQU  H'0002'
CH3              EQU  H'0003'


MD2CH0           EQU  H'0000'
MD2CH1           EQU  H'0001'
MD2CH2           EQU  H'0002'
MD2CH3           EQU  H'0003'


;----- INLVLA Bits -----------------------------------------------------
INLVLA0          EQU  H'0000'
INLVLA1          EQU  H'0001'
INLVLA2          EQU  H'0002'
INLVLA3          EQU  H'0003'
INLVLA4          EQU  H'0004'
INLVLA5          EQU  H'0005'


;----- INLVLB Bits -----------------------------------------------------
INLVLB4          EQU  H'0004'
INLVLB5          EQU  H'0005'
INLVLB6          EQU  H'0006'
INLVLB7          EQU  H'0007'


;----- INLVLC Bits -----------------------------------------------------
INLVLC0          EQU  H'0000'
INLVLC1          EQU  H'0001'
INLVLC2          EQU  H'0002'
INLVLC3          EQU  H'0003'
INLVLC4          EQU  H'0004'
INLVLC5          EQU  H'0005'
INLVLC6          EQU  H'0006'
INLVLC7          EQU  H'0007'


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


;----- IOCBP Bits -----------------------------------------------------
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'


;----- IOCBN Bits -----------------------------------------------------
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'


;----- IOCBF Bits -----------------------------------------------------
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'


;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'
IOCCP6           EQU  H'0006'
IOCCP7           EQU  H'0007'


;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'
IOCCN6           EQU  H'0006'
IOCCN7           EQU  H'0007'


;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'
IOCCF6           EQU  H'0006'
IOCCF7           EQU  H'0007'


;----- MD1CON0 Bits -----------------------------------------------------
BIT              EQU  H'0000'
OPOL             EQU  H'0004'
OUT_MD1CON0      EQU  H'0005'
EN               EQU  H'0007'

MD1BIT           EQU  H'0000'
MD1OPOL          EQU  H'0004'
MD1OUT           EQU  H'0005'
MD1EN            EQU  H'0007'


;----- MD1CON1 Bits -----------------------------------------------------
CLSYNC           EQU  H'0000'
CLPOL            EQU  H'0001'
CHSYNC           EQU  H'0004'
CHPOL            EQU  H'0005'

MD1CLSYNC        EQU  H'0000'
MD1CLPOL         EQU  H'0001'
MD1CHSYNC        EQU  H'0004'
MD1CHPOL         EQU  H'0005'


;----- MD1SRC Bits -----------------------------------------------------
MS0              EQU  H'0000'
MS1              EQU  H'0001'
MS2              EQU  H'0002'
MS3              EQU  H'0003'
MS4              EQU  H'0004'


MD1MS0           EQU  H'0000'
MD1MS1           EQU  H'0001'
MD1MS2           EQU  H'0002'
MD1MS3           EQU  H'0003'
MD1MS4           EQU  H'0004'


;----- MD1CARL Bits -----------------------------------------------------
CL0              EQU  H'0000'
CL1              EQU  H'0001'
CL2              EQU  H'0002'
CL3              EQU  H'0003'


MD1CL0           EQU  H'0000'
MD1CL1           EQU  H'0001'
MD1CL2           EQU  H'0002'
MD1CL3           EQU  H'0003'


;----- MD1CARH Bits -----------------------------------------------------
CH0              EQU  H'0000'
CH1              EQU  H'0001'
CH2              EQU  H'0002'
CH3              EQU  H'0003'


MD1CH0           EQU  H'0000'
MD1CH1           EQU  H'0001'
MD1CH2           EQU  H'0002'
MD1CH3           EQU  H'0003'


;----- HIDRVC Bits -----------------------------------------------------
HIDC4            EQU  H'0004'
HIDC5            EQU  H'0005'


;----- T4CON Bits -----------------------------------------------------
ON_T4CON         EQU  H'0007'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'

T4ON             EQU  H'0007'

T4OUTPS0         EQU  H'0000'
T4OUTPS1         EQU  H'0001'
T4OUTPS2         EQU  H'0002'
T4OUTPS3         EQU  H'0003'
T4CKPS0          EQU  H'0004'
T4CKPS1          EQU  H'0005'
T4CKPS2          EQU  H'0006'
TMR4ON           EQU  H'0007'


;----- T4HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0_T4HLT      EQU  H'0000'
MODE1_T4HLT      EQU  H'0001'
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
CS0_T4CLKCON     EQU  H'0000'
CS1_T4CLKCON     EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


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


;----- T6CON Bits -----------------------------------------------------
ON_T6CON         EQU  H'0007'

OUTPS0           EQU  H'0000'
OUTPS1           EQU  H'0001'
OUTPS2           EQU  H'0002'
OUTPS3           EQU  H'0003'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CKPS2            EQU  H'0006'

T6ON             EQU  H'0007'

T6OUTPS0         EQU  H'0000'
T6OUTPS1         EQU  H'0001'
T6OUTPS2         EQU  H'0002'
T6OUTPS3         EQU  H'0003'
T6CKPS0          EQU  H'0004'
T6CKPS1          EQU  H'0005'
T6CKPS2          EQU  H'0006'
TMR6ON           EQU  H'0007'


;----- T6HLT Bits -----------------------------------------------------
CKSYNC           EQU  H'0005'
CKPOL            EQU  H'0006'
PSYNC            EQU  H'0007'

MODE0_T6HLT      EQU  H'0000'
MODE1_T6HLT      EQU  H'0001'
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
CS0_T6CLKCON     EQU  H'0000'
CS1_T6CLKCON     EQU  H'0001'
CS2              EQU  H'0002'
CS3              EQU  H'0003'


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


;----- T3CON Bits -----------------------------------------------------
ON_T3CON         EQU  H'0000'
NOT_SYNC         EQU  H'0002'

TMRON            EQU  H'0000'
SYNC_T3CON       EQU  H'0002'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CS0_T3CON        EQU  H'0006'
CS1_T3CON        EQU  H'0007'

TMR3ON           EQU  H'0000'
NOT_T3SYNC       EQU  H'0002'
T3CS0            EQU  H'0006'
T3CS1            EQU  H'0007'

T3ON             EQU  H'0000'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'


;----- T3GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
T3GE             EQU  H'0007'

T3GVAL           EQU  H'0002'
T3GGO_NOT_DONE   EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'


;----- T5CON Bits -----------------------------------------------------
ON_T5CON         EQU  H'0000'
NOT_SYNC         EQU  H'0002'

TMRON            EQU  H'0000'
SYNC_T5CON       EQU  H'0002'
CKPS0            EQU  H'0004'
CKPS1            EQU  H'0005'
CS0_T5CON        EQU  H'0006'
CS1_T5CON        EQU  H'0007'

TMR5ON           EQU  H'0000'
NOT_T5SYNC       EQU  H'0002'
T5CS0            EQU  H'0006'
T5CS1            EQU  H'0007'

T5ON             EQU  H'0000'
T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- T5GCON Bits -----------------------------------------------------
GVAL             EQU  H'0002'
GGO_NOT_DONE     EQU  H'0003'
GSPM             EQU  H'0004'
GTM              EQU  H'0005'
GPOL             EQU  H'0006'
GE               EQU  H'0007'

GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
T5GE             EQU  H'0007'

T5GVAL           EQU  H'0002'
T5GGO_NOT_DONE   EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
TMR5GE           EQU  H'0007'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'


;----- OPA1CON Bits -----------------------------------------------------
ORPOL            EQU  H'0002'
UG               EQU  H'0004'
EN               EQU  H'0007'

ORM0             EQU  H'0000'
ORM1             EQU  H'0001'

OPA1ORPOL        EQU  H'0002'
OPA1UG           EQU  H'0004'
OPA1EN           EQU  H'0007'

OPA1ORM0         EQU  H'0000'
OPA1ORM1         EQU  H'0001'


;----- OPA2CON Bits -----------------------------------------------------
ORPOL            EQU  H'0002'
UG               EQU  H'0004'
EN               EQU  H'0007'

ORM0             EQU  H'0000'
ORM1             EQU  H'0001'

OPA2ORPOL        EQU  H'0002'
OPA2UG           EQU  H'0004'
OPA2EN           EQU  H'0007'

OPA2ORM0         EQU  H'0000'
OPA2ORM1         EQU  H'0001'


;----- DACLD Bits -----------------------------------------------------
DAC1LD           EQU  H'0000'
DAC2LD           EQU  H'0001'


;----- DAC1CON0 Bits -----------------------------------------------------
OE1              EQU  H'0005'
FM               EQU  H'0006'
EN               EQU  H'0007'

NSS0             EQU  H'0000'
PSS0             EQU  H'0002'
PSS1             EQU  H'0003'
OE               EQU  H'0005'

DACOE1           EQU  H'0005'
DACFM            EQU  H'0006'
DACEN            EQU  H'0007'

DACNSS0          EQU  H'0000'
DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'
DACOE            EQU  H'0005'

DAC1OE1          EQU  H'0005'
DAC1FM           EQU  H'0006'
DAC1EN           EQU  H'0007'

DAC1NSS0         EQU  H'0000'
DAC1PSS0         EQU  H'0002'
DAC1PSS1         EQU  H'0003'


;----- DAC1CON1 Bits -----------------------------------------------------
REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'
REF6             EQU  H'0006'
REF7             EQU  H'0007'

DAC1REF0         EQU  H'0000'
DAC1REF1         EQU  H'0001'
DAC1REF2         EQU  H'0002'
DAC1REF3         EQU  H'0003'
DAC1REF4         EQU  H'0004'
DAC1REF5         EQU  H'0005'
DAC1REF6         EQU  H'0006'
DAC1REF7         EQU  H'0007'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'
R5               EQU  H'0005'
R6               EQU  H'0006'
R7               EQU  H'0007'

DAC1R0           EQU  H'0000'
DAC1R1           EQU  H'0001'
DAC1R2           EQU  H'0002'
DAC1R3           EQU  H'0003'
DAC1R4           EQU  H'0004'
DAC1R5           EQU  H'0005'
DAC1R6           EQU  H'0006'
DAC1R7           EQU  H'0007'


;----- DAC1REFL Bits -----------------------------------------------------
REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'
REF6             EQU  H'0006'
REF7             EQU  H'0007'

DAC1REF0         EQU  H'0000'
DAC1REF1         EQU  H'0001'
DAC1REF2         EQU  H'0002'
DAC1REF3         EQU  H'0003'
DAC1REF4         EQU  H'0004'
DAC1REF5         EQU  H'0005'
DAC1REF6         EQU  H'0006'
DAC1REF7         EQU  H'0007'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'
R5               EQU  H'0005'
R6               EQU  H'0006'
R7               EQU  H'0007'

DAC1R0           EQU  H'0000'
DAC1R1           EQU  H'0001'
DAC1R2           EQU  H'0002'
DAC1R3           EQU  H'0003'
DAC1R4           EQU  H'0004'
DAC1R5           EQU  H'0005'
DAC1R6           EQU  H'0006'
DAC1R7           EQU  H'0007'


;----- DAC1CON2 Bits -----------------------------------------------------
REF8             EQU  H'0000'
REF9             EQU  H'0001'
REF10            EQU  H'0002'
REF11            EQU  H'0003'
REF12            EQU  H'0004'
REF13            EQU  H'0005'
REF14            EQU  H'0006'
REF15            EQU  H'0007'

DAC1REF8         EQU  H'0000'
DAC1REF9         EQU  H'0001'
DAC1REF10        EQU  H'0002'
DAC1REF11        EQU  H'0003'
DAC1REF12        EQU  H'0004'
DAC1REF13        EQU  H'0005'
DAC1REF14        EQU  H'0006'
DAC1REF15        EQU  H'0007'

R8               EQU  H'0000'
R9               EQU  H'0001'
R10              EQU  H'0002'
R11              EQU  H'0003'
R12              EQU  H'0004'
R13              EQU  H'0005'
R14              EQU  H'0006'
R15              EQU  H'0007'

DAC1R8           EQU  H'0000'
DAC1R9           EQU  H'0001'
DAC1R10          EQU  H'0002'
DAC1R11          EQU  H'0003'
DAC1R12          EQU  H'0004'
DAC1R13          EQU  H'0005'
DAC1R14          EQU  H'0006'
DAC1R15          EQU  H'0007'


;----- DAC1REFH Bits -----------------------------------------------------
REF8             EQU  H'0000'
REF9             EQU  H'0001'
REF10            EQU  H'0002'
REF11            EQU  H'0003'
REF12            EQU  H'0004'
REF13            EQU  H'0005'
REF14            EQU  H'0006'
REF15            EQU  H'0007'

DAC1REF8         EQU  H'0000'
DAC1REF9         EQU  H'0001'
DAC1REF10        EQU  H'0002'
DAC1REF11        EQU  H'0003'
DAC1REF12        EQU  H'0004'
DAC1REF13        EQU  H'0005'
DAC1REF14        EQU  H'0006'
DAC1REF15        EQU  H'0007'

R8               EQU  H'0000'
R9               EQU  H'0001'
R10              EQU  H'0002'
R11              EQU  H'0003'
R12              EQU  H'0004'
R13              EQU  H'0005'
R14              EQU  H'0006'
R15              EQU  H'0007'

DAC1R8           EQU  H'0000'
DAC1R9           EQU  H'0001'
DAC1R10          EQU  H'0002'
DAC1R11          EQU  H'0003'
DAC1R12          EQU  H'0004'
DAC1R13          EQU  H'0005'
DAC1R14          EQU  H'0006'
DAC1R15          EQU  H'0007'


;----- DAC2CON0 Bits -----------------------------------------------------
OE1              EQU  H'0005'
FM               EQU  H'0006'
EN               EQU  H'0007'

NSS0             EQU  H'0000'
PSS0             EQU  H'0002'
PSS1             EQU  H'0003'
OE               EQU  H'0005'

DACOE1           EQU  H'0005'
DACFM            EQU  H'0006'
DACEN            EQU  H'0007'

DACNSS0          EQU  H'0000'
DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'
DACOE            EQU  H'0005'

DAC2OE1          EQU  H'0005'
DAC2FM           EQU  H'0006'
DAC2EN           EQU  H'0007'

DAC2NSS0         EQU  H'0000'
DAC2PSS0         EQU  H'0002'
DAC2PSS1         EQU  H'0003'


;----- DAC2CON1 Bits -----------------------------------------------------
REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'
REF6             EQU  H'0006'
REF7             EQU  H'0007'

DAC2REF0         EQU  H'0000'
DAC2REF1         EQU  H'0001'
DAC2REF2         EQU  H'0002'
DAC2REF3         EQU  H'0003'
DAC2REF4         EQU  H'0004'
DAC2REF5         EQU  H'0005'
DAC2REF6         EQU  H'0006'
DAC2REF7         EQU  H'0007'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'
R5               EQU  H'0005'
R6               EQU  H'0006'
R7               EQU  H'0007'

DAC2R0           EQU  H'0000'
DAC2R1           EQU  H'0001'
DAC2R2           EQU  H'0002'
DAC2R3           EQU  H'0003'
DAC2R4           EQU  H'0004'
DAC2R5           EQU  H'0005'
DAC2R6           EQU  H'0006'
DAC2R7           EQU  H'0007'


;----- DAC2REFL Bits -----------------------------------------------------
REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'
REF6             EQU  H'0006'
REF7             EQU  H'0007'

DAC2REF0         EQU  H'0000'
DAC2REF1         EQU  H'0001'
DAC2REF2         EQU  H'0002'
DAC2REF3         EQU  H'0003'
DAC2REF4         EQU  H'0004'
DAC2REF5         EQU  H'0005'
DAC2REF6         EQU  H'0006'
DAC2REF7         EQU  H'0007'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'
R5               EQU  H'0005'
R6               EQU  H'0006'
R7               EQU  H'0007'

DAC2R0           EQU  H'0000'
DAC2R1           EQU  H'0001'
DAC2R2           EQU  H'0002'
DAC2R3           EQU  H'0003'
DAC2R4           EQU  H'0004'
DAC2R5           EQU  H'0005'
DAC2R6           EQU  H'0006'
DAC2R7           EQU  H'0007'


;----- DAC2CON2 Bits -----------------------------------------------------
REF8             EQU  H'0000'
REF9             EQU  H'0001'
REF10            EQU  H'0002'
REF11            EQU  H'0003'
REF12            EQU  H'0004'
REF13            EQU  H'0005'
REF14            EQU  H'0006'
REF15            EQU  H'0007'

DAC2REF8         EQU  H'0000'
DAC2REF9         EQU  H'0001'
DAC2REF10        EQU  H'0002'
DAC2REF11        EQU  H'0003'
DAC2REF12        EQU  H'0004'
DAC2REF13        EQU  H'0005'
DAC2REF14        EQU  H'0006'
DAC2REF15        EQU  H'0007'

R8               EQU  H'0000'
R9               EQU  H'0001'
R10              EQU  H'0002'
R11              EQU  H'0003'
R12              EQU  H'0004'
R13              EQU  H'0005'
R14              EQU  H'0006'
R15              EQU  H'0007'

DAC2R8           EQU  H'0000'
DAC2R9           EQU  H'0001'
DAC2R10          EQU  H'0002'
DAC2R11          EQU  H'0003'
DAC2R12          EQU  H'0004'
DAC2R13          EQU  H'0005'
DAC2R14          EQU  H'0006'
DAC2R15          EQU  H'0007'


;----- DAC2REFH Bits -----------------------------------------------------
REF8             EQU  H'0000'
REF9             EQU  H'0001'
REF10            EQU  H'0002'
REF11            EQU  H'0003'
REF12            EQU  H'0004'
REF13            EQU  H'0005'
REF14            EQU  H'0006'
REF15            EQU  H'0007'

DAC2REF8         EQU  H'0000'
DAC2REF9         EQU  H'0001'
DAC2REF10        EQU  H'0002'
DAC2REF11        EQU  H'0003'
DAC2REF12        EQU  H'0004'
DAC2REF13        EQU  H'0005'
DAC2REF14        EQU  H'0006'
DAC2REF15        EQU  H'0007'

R8               EQU  H'0000'
R9               EQU  H'0001'
R10              EQU  H'0002'
R11              EQU  H'0003'
R12              EQU  H'0004'
R13              EQU  H'0005'
R14              EQU  H'0006'
R15              EQU  H'0007'

DAC2R8           EQU  H'0000'
DAC2R9           EQU  H'0001'
DAC2R10          EQU  H'0002'
DAC2R11          EQU  H'0003'
DAC2R12          EQU  H'0004'
DAC2R13          EQU  H'0005'
DAC2R14          EQU  H'0006'
DAC2R15          EQU  H'0007'


;----- DAC3CON0 Bits -----------------------------------------------------
NSS              EQU  H'0000'
OE1              EQU  H'0005'
EN               EQU  H'0007'

PSS0             EQU  H'0002'
PSS1             EQU  H'0003'

DACNSS           EQU  H'0000'
DACOE1           EQU  H'0005'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'

DAC3NSS          EQU  H'0000'
DAC3OE1          EQU  H'0005'
DAC3EN           EQU  H'0007'

DAC3PSS0         EQU  H'0002'
DAC3PSS1         EQU  H'0003'


;----- DAC3CON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'


DAC3R0           EQU  H'0000'
DAC3R1           EQU  H'0001'
DAC3R2           EQU  H'0002'
DAC3R3           EQU  H'0003'
DAC3R4           EQU  H'0004'

REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'

DAC3REF0         EQU  H'0000'
DAC3REF1         EQU  H'0001'
DAC3REF2         EQU  H'0002'
DAC3REF3         EQU  H'0003'
DAC3REF4         EQU  H'0004'
DAC3REF5         EQU  H'0005'


;----- DAC3REF Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'


DAC3R0           EQU  H'0000'
DAC3R1           EQU  H'0001'
DAC3R2           EQU  H'0002'
DAC3R3           EQU  H'0003'
DAC3R4           EQU  H'0004'

REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'

DAC3REF0         EQU  H'0000'
DAC3REF1         EQU  H'0001'
DAC3REF2         EQU  H'0002'
DAC3REF3         EQU  H'0003'
DAC3REF4         EQU  H'0004'
DAC3REF5         EQU  H'0005'


;----- DAC4CON0 Bits -----------------------------------------------------
NSS              EQU  H'0000'
OE1              EQU  H'0005'
EN               EQU  H'0007'

PSS0             EQU  H'0002'
PSS1             EQU  H'0003'

DACNSS           EQU  H'0000'
DACOE1           EQU  H'0005'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'

DAC4NSS          EQU  H'0000'
DAC4OE1          EQU  H'0005'
DAC4EN           EQU  H'0007'

DAC4PSS0         EQU  H'0002'
DAC4PSS1         EQU  H'0003'


;----- DAC4CON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'


DAC4R0           EQU  H'0000'
DAC4R1           EQU  H'0001'
DAC4R2           EQU  H'0002'
DAC4R3           EQU  H'0003'
DAC4R4           EQU  H'0004'

REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'

DAC4REF0         EQU  H'0000'
DAC4REF1         EQU  H'0001'
DAC4REF2         EQU  H'0002'
DAC4REF3         EQU  H'0003'
DAC4REF4         EQU  H'0004'
DAC4REF5         EQU  H'0005'


;----- DAC4REF Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'

R0               EQU  H'0000'
R1               EQU  H'0001'
R2               EQU  H'0002'
R3               EQU  H'0003'
R4               EQU  H'0004'


DAC4R0           EQU  H'0000'
DAC4R1           EQU  H'0001'
DAC4R2           EQU  H'0002'
DAC4R3           EQU  H'0003'
DAC4R4           EQU  H'0004'

REF0             EQU  H'0000'
REF1             EQU  H'0001'
REF2             EQU  H'0002'
REF3             EQU  H'0003'
REF4             EQU  H'0004'
REF5             EQU  H'0005'

DAC4REF0         EQU  H'0000'
DAC4REF1         EQU  H'0001'
DAC4REF2         EQU  H'0002'
DAC4REF3         EQU  H'0003'
DAC4REF4         EQU  H'0004'
DAC4REF5         EQU  H'0005'


;----- PWM3DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

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
POL_PWM3CON      EQU  H'0004'
OUT_PWM3CON      EQU  H'0005'
EN               EQU  H'0007'

PWM3POL          EQU  H'0004'
PWM3OUT          EQU  H'0005'
PWM3EN           EQU  H'0007'


;----- PWM4DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

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
POL_PWM4CON      EQU  H'0004'
OUT_PWM4CON      EQU  H'0005'
EN               EQU  H'0007'

PWM4POL          EQU  H'0004'
PWM4OUT          EQU  H'0005'
PWM4EN           EQU  H'0007'


;----- COG1PHR Bits -----------------------------------------------------
PHR0             EQU  H'0000'
PHR1             EQU  H'0001'
PHR2             EQU  H'0002'
PHR3             EQU  H'0003'
PHR4             EQU  H'0004'
PHR5             EQU  H'0005'

G1PHR0           EQU  H'0000'
G1PHR1           EQU  H'0001'
G1PHR2           EQU  H'0002'
G1PHR3           EQU  H'0003'
G1PHR4           EQU  H'0004'
G1PHR5           EQU  H'0005'


;----- COG1PHF Bits -----------------------------------------------------
PHF0             EQU  H'0000'
PHF1             EQU  H'0001'
PHF2             EQU  H'0002'
PHF3             EQU  H'0003'
PHF4             EQU  H'0004'
PHF5             EQU  H'0005'

G1PHF0           EQU  H'0000'
G1PHF1           EQU  H'0001'
G1PHF2           EQU  H'0002'
G1PHF3           EQU  H'0003'
G1PHF4           EQU  H'0004'
G1PHF5           EQU  H'0005'


;----- COG1BLKR Bits -----------------------------------------------------
BLKR0            EQU  H'0000'
BLKR1            EQU  H'0001'
BLKR2            EQU  H'0002'
BLKR3            EQU  H'0003'
BLKR4            EQU  H'0004'
BLKR5            EQU  H'0005'

G1BLKR0          EQU  H'0000'
G1BLKR1          EQU  H'0001'
G1BLKR2          EQU  H'0002'
G1BLKR3          EQU  H'0003'
G1BLKR4          EQU  H'0004'
G1BLKR5          EQU  H'0005'


;----- COG1BLKF Bits -----------------------------------------------------
BLKF0            EQU  H'0000'
BLKF1            EQU  H'0001'
BLKF2            EQU  H'0002'
BLKF3            EQU  H'0003'
BLKF4            EQU  H'0004'
BLKF5            EQU  H'0005'

G1BLKF0          EQU  H'0000'
G1BLKF1          EQU  H'0001'
G1BLKF2          EQU  H'0002'
G1BLKF3          EQU  H'0003'
G1BLKF4          EQU  H'0004'
G1BLKF5          EQU  H'0005'


;----- COG1DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'
DBR4             EQU  H'0004'
DBR5             EQU  H'0005'

G1DBR0           EQU  H'0000'
G1DBR1           EQU  H'0001'
G1DBR2           EQU  H'0002'
G1DBR3           EQU  H'0003'
G1DBR4           EQU  H'0004'
G1DBR5           EQU  H'0005'


;----- COG1DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'
DBF4             EQU  H'0004'
DBF5             EQU  H'0005'

G1DBF0           EQU  H'0000'
G1DBF1           EQU  H'0001'
G1DBF2           EQU  H'0002'
G1DBF3           EQU  H'0003'
G1DBF4           EQU  H'0004'
G1DBF5           EQU  H'0005'



;----- COG1CON0 Bits -----------------------------------------------------
LD               EQU  H'0006'
EN               EQU  H'0007'

MD0              EQU  H'0000'
MD1              EQU  H'0001'
MD2              EQU  H'0002'
CS0_COG1CON0     EQU  H'0003'
CS1_COG1CON0     EQU  H'0004'

G1LD             EQU  H'0006'
G1EN             EQU  H'0007'

G1MD0            EQU  H'0000'
G1MD1            EQU  H'0001'
G1MD2            EQU  H'0002'
G1CS0            EQU  H'0003'
G1CS1            EQU  H'0004'


;----- COG1CON1 Bits -----------------------------------------------------
POLA             EQU  H'0000'
POLB             EQU  H'0001'
POLC             EQU  H'0002'
POLD             EQU  H'0003'
FDBS             EQU  H'0006'
RDBS             EQU  H'0007'

G1POLA           EQU  H'0000'
G1POLB           EQU  H'0001'
G1POLC           EQU  H'0002'
G1POLD           EQU  H'0003'
G1FDBS           EQU  H'0006'
G1RDBS           EQU  H'0007'


;----- COG1RIS0 Bits -----------------------------------------------------
RIS0             EQU  H'0000'
RIS1             EQU  H'0001'
RIS2             EQU  H'0002'
RIS3             EQU  H'0003'
RIS4             EQU  H'0004'
RIS5             EQU  H'0005'
RIS6             EQU  H'0006'
RIS7             EQU  H'0007'

G1RIS0           EQU  H'0000'
G1RIS1           EQU  H'0001'
G1RIS2           EQU  H'0002'
G1RIS3           EQU  H'0003'
G1RIS4           EQU  H'0004'
G1RIS5           EQU  H'0005'
G1RIS6           EQU  H'0006'
G1RIS7           EQU  H'0007'


;----- COG1RIS1 Bits -----------------------------------------------------
RIS8             EQU  H'0000'
RIS9             EQU  H'0001'
RIS10            EQU  H'0002'
RIS11            EQU  H'0003'
RIS12            EQU  H'0004'
RIS13            EQU  H'0005'
RIS14            EQU  H'0006'
RIS15            EQU  H'0007'

G1RIS8           EQU  H'0000'
G1RIS9           EQU  H'0001'
G1RIS10          EQU  H'0002'
G1RIS11          EQU  H'0003'
G1RIS12          EQU  H'0004'
G1RIS13          EQU  H'0005'
G1RIS14          EQU  H'0006'
G1RIS15          EQU  H'0007'


;----- COG1RSIM0 Bits -----------------------------------------------------
RSIM0            EQU  H'0000'
RSIM1            EQU  H'0001'
RSIM2            EQU  H'0002'
RSIM3            EQU  H'0003'
RSIM4            EQU  H'0004'
RSIM5            EQU  H'0005'
RSIM6            EQU  H'0006'
RSIM7            EQU  H'0007'

G1RSIM0          EQU  H'0000'
G1RSIM1          EQU  H'0001'
G1RSIM2          EQU  H'0002'
G1RSIM3          EQU  H'0003'
G1RSIM4          EQU  H'0004'
G1RSIM5          EQU  H'0005'
G1RSIM6          EQU  H'0006'
G1RSIM7          EQU  H'0007'


;----- COG1RSIM1 Bits -----------------------------------------------------
RSIM8            EQU  H'0000'
RSIM9            EQU  H'0001'
RSIM10           EQU  H'0002'
RSIM11           EQU  H'0003'
RSIM12           EQU  H'0004'
RSIM13           EQU  H'0005'
RSIM14           EQU  H'0006'
RSIM15           EQU  H'0007'

G1RSIM8          EQU  H'0000'
G1RSIM9          EQU  H'0001'
G1RSIM10         EQU  H'0002'
G1RSIM11         EQU  H'0003'
G1RSIM12         EQU  H'0004'
G1RSIM13         EQU  H'0005'
G1RSIM14         EQU  H'0006'
G1RSIM15         EQU  H'0007'


;----- COG1FIS0 Bits -----------------------------------------------------
FIS0             EQU  H'0000'
FIS1             EQU  H'0001'
FIS2             EQU  H'0002'
FIS3             EQU  H'0003'
FIS4             EQU  H'0004'
FIS5             EQU  H'0005'
FIS6             EQU  H'0006'
FIS7             EQU  H'0007'

G1FIS0           EQU  H'0000'
G1FIS1           EQU  H'0001'
G1FIS2           EQU  H'0002'
G1FIS3           EQU  H'0003'
G1FIS4           EQU  H'0004'
G1FIS5           EQU  H'0005'
G1FIS6           EQU  H'0006'
G1FIS7           EQU  H'0007'


;----- COG1FIS1 Bits -----------------------------------------------------
FIS8             EQU  H'0000'
FIS9             EQU  H'0001'
FIS10            EQU  H'0002'
FIS11            EQU  H'0003'
FIS12            EQU  H'0004'
FIS13            EQU  H'0005'
FIS14            EQU  H'0006'
FIS15            EQU  H'0007'

G1FIS8           EQU  H'0000'
G1FIS9           EQU  H'0001'
G1FIS10          EQU  H'0002'
G1FIS11          EQU  H'0003'
G1FIS12          EQU  H'0004'
G1FIS13          EQU  H'0005'
G1FIS14          EQU  H'0006'
G1FIS15          EQU  H'0007'


;----- COG1FSIM0 Bits -----------------------------------------------------
FSIM0            EQU  H'0000'
FSIM1            EQU  H'0001'
FSIM2            EQU  H'0002'
FSIM3            EQU  H'0003'
FSIM4            EQU  H'0004'
FSIM5            EQU  H'0005'
FSIM6            EQU  H'0006'
FSIM7            EQU  H'0007'

G1FSIM0          EQU  H'0000'
G1FSIM1          EQU  H'0001'
G1FSIM2          EQU  H'0002'
G1FSIM3          EQU  H'0003'
G1FSIM4          EQU  H'0004'
G1FSIM5          EQU  H'0005'
G1FSIM6          EQU  H'0006'
G1FSIM7          EQU  H'0007'


;----- COG1FSIM1 Bits -----------------------------------------------------
FSIM8            EQU  H'0000'
FSIM9            EQU  H'0001'
FSIM10           EQU  H'0002'
FSIM11           EQU  H'0003'
FSIM12           EQU  H'0004'
FSIM13           EQU  H'0005'
FSIM14           EQU  H'0006'
FSIM15           EQU  H'0007'

G1FSIM8          EQU  H'0000'
G1FSIM9          EQU  H'0001'
G1FSIM10         EQU  H'0002'
G1FSIM11         EQU  H'0003'
G1FSIM12         EQU  H'0004'
G1FSIM13         EQU  H'0005'
G1FSIM14         EQU  H'0006'
G1FSIM15         EQU  H'0007'


;----- COG1ASD0 Bits -----------------------------------------------------
ASREN            EQU  H'0006'
ASE              EQU  H'0007'

ASDAC0           EQU  H'0002'
ASDAC1           EQU  H'0003'
ASDBD0           EQU  H'0004'
ASDBD1           EQU  H'0005'
ARSEN            EQU  H'0006'

G1ARSEN          EQU  H'0006'
G1ASE            EQU  H'0007'

G1ASDAC0         EQU  H'0002'
G1ASDAC1         EQU  H'0003'
G1ASDBD0         EQU  H'0004'
G1ASDBD1         EQU  H'0005'
G1ASREN          EQU  H'0006'


;----- COG1ASD1 Bits -----------------------------------------------------
AS0E             EQU  H'0000'
AS1E             EQU  H'0001'
AS2E             EQU  H'0002'
AS3E             EQU  H'0003'
AS4E             EQU  H'0004'
AS5E             EQU  H'0005'
AS6E             EQU  H'0006'
AS7E             EQU  H'0007'

G1AS0E           EQU  H'0000'
G1AS1E           EQU  H'0001'
G1AS2E           EQU  H'0002'
G1AS3E           EQU  H'0003'
G1AS4E           EQU  H'0004'
G1AS5E           EQU  H'0005'
G1AS6E           EQU  H'0006'
G1AS7E           EQU  H'0007'


;----- COG1STR Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
SDATA            EQU  H'0004'
SDATB            EQU  H'0005'
SDATC            EQU  H'0006'
SDATD            EQU  H'0007'

G1STRA           EQU  H'0000'
G1STRB           EQU  H'0001'
G1STRC           EQU  H'0002'
G1STRD           EQU  H'0003'
G1SDATA          EQU  H'0004'
G1SDATB          EQU  H'0005'
G1SDATC          EQU  H'0006'
G1SDATD          EQU  H'0007'


;----- COG2PHR Bits -----------------------------------------------------
PHR0             EQU  H'0000'
PHR1             EQU  H'0001'
PHR2             EQU  H'0002'
PHR3             EQU  H'0003'
PHR4             EQU  H'0004'
PHR5             EQU  H'0005'

G2PHR0           EQU  H'0000'
G2PHR1           EQU  H'0001'
G2PHR2           EQU  H'0002'
G2PHR3           EQU  H'0003'
G2PHR4           EQU  H'0004'
G2PHR5           EQU  H'0005'


;----- COG2PHF Bits -----------------------------------------------------
PHF0             EQU  H'0000'
PHF1             EQU  H'0001'
PHF2             EQU  H'0002'
PHF3             EQU  H'0003'
PHF4             EQU  H'0004'
PHF5             EQU  H'0005'

G2PHF0           EQU  H'0000'
G2PHF1           EQU  H'0001'
G2PHF2           EQU  H'0002'
G2PHF3           EQU  H'0003'
G2PHF4           EQU  H'0004'
G2PHF5           EQU  H'0005'


;----- COG2BLKR Bits -----------------------------------------------------
BLKR0            EQU  H'0000'
BLKR1            EQU  H'0001'
BLKR2            EQU  H'0002'
BLKR3            EQU  H'0003'
BLKR4            EQU  H'0004'
BLKR5            EQU  H'0005'

G2BLKR0          EQU  H'0000'
G2BLKR1          EQU  H'0001'
G2BLKR2          EQU  H'0002'
G2BLKR3          EQU  H'0003'
G2BLKR4          EQU  H'0004'
G2BLKR5          EQU  H'0005'


;----- COG2BLKF Bits -----------------------------------------------------
BLKF0            EQU  H'0000'
BLKF1            EQU  H'0001'
BLKF2            EQU  H'0002'
BLKF3            EQU  H'0003'
BLKF4            EQU  H'0004'
BLKF5            EQU  H'0005'

G2BLKF0          EQU  H'0000'
G2BLKF1          EQU  H'0001'
G2BLKF2          EQU  H'0002'
G2BLKF3          EQU  H'0003'
G2BLKF4          EQU  H'0004'
G2BLKF5          EQU  H'0005'


;----- COG2DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'
DBR4             EQU  H'0004'
DBR5             EQU  H'0005'

G2DBR0           EQU  H'0000'
G2DBR1           EQU  H'0001'
G2DBR2           EQU  H'0002'
G2DBR3           EQU  H'0003'
G2DBR4           EQU  H'0004'
G2DBR5           EQU  H'0005'


;----- COG2DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'
DBF4             EQU  H'0004'
DBF5             EQU  H'0005'

G2DBF0           EQU  H'0000'
G2DBF1           EQU  H'0001'
G2DBF2           EQU  H'0002'
G2DBF3           EQU  H'0003'
G2DBF4           EQU  H'0004'
G2DBF5           EQU  H'0005'



;----- COG2CON0 Bits -----------------------------------------------------
LD               EQU  H'0006'
EN               EQU  H'0007'

MD0              EQU  H'0000'
MD1              EQU  H'0001'
MD2              EQU  H'0002'
CS0_COG2CON0     EQU  H'0003'
CS1_COG2CON0     EQU  H'0004'

G2LD             EQU  H'0006'
G2EN             EQU  H'0007'

G2MD0            EQU  H'0000'
G2MD1            EQU  H'0001'
G2MD2            EQU  H'0002'
G2CS0            EQU  H'0003'
G2CS1            EQU  H'0004'


;----- COG2CON1 Bits -----------------------------------------------------
POLA             EQU  H'0000'
POLB             EQU  H'0001'
POLC             EQU  H'0002'
POLD             EQU  H'0003'
FDBS             EQU  H'0006'
RDBS             EQU  H'0007'

G2POLA           EQU  H'0000'
G2POLB           EQU  H'0001'
G2POLC           EQU  H'0002'
G2POLD           EQU  H'0003'
G2FDBS           EQU  H'0006'
G2RDBS           EQU  H'0007'


;----- COG2RIS0 Bits -----------------------------------------------------
RIS0             EQU  H'0000'
RIS1             EQU  H'0001'
RIS2             EQU  H'0002'
RIS3             EQU  H'0003'
RIS4             EQU  H'0004'
RIS5             EQU  H'0005'
RIS6             EQU  H'0006'
RIS7             EQU  H'0007'

G2RIS0           EQU  H'0000'
G2RIS1           EQU  H'0001'
G2RIS2           EQU  H'0002'
G2RIS3           EQU  H'0003'
G2RIS4           EQU  H'0004'
G2RIS5           EQU  H'0005'
G2RIS6           EQU  H'0006'
G2RIS7           EQU  H'0007'


;----- COG2RIS1 Bits -----------------------------------------------------
RIS8             EQU  H'0000'
RIS9             EQU  H'0001'
RIS10            EQU  H'0002'
RIS11            EQU  H'0003'
RIS12            EQU  H'0004'
RIS13            EQU  H'0005'

G2RIS8           EQU  H'0000'
G2RIS9           EQU  H'0001'
G2RIS10          EQU  H'0002'
G2RIS11          EQU  H'0003'
G2RIS12          EQU  H'0004'
G2RIS13          EQU  H'0005'


;----- COG2RSIM0 Bits -----------------------------------------------------
RSIM0            EQU  H'0000'
RSIM1            EQU  H'0001'
RSIM2            EQU  H'0002'
RSIM3            EQU  H'0003'
RSIM4            EQU  H'0004'
RSIM5            EQU  H'0005'
RSIM6            EQU  H'0006'
RSIM7            EQU  H'0007'

G2RSIM0          EQU  H'0000'
G2RSIM1          EQU  H'0001'
G2RSIM2          EQU  H'0002'
G2RSIM3          EQU  H'0003'
G2RSIM4          EQU  H'0004'
G2RSIM5          EQU  H'0005'
G2RSIM6          EQU  H'0006'
G2RSIM7          EQU  H'0007'


;----- COG2RSIM1 Bits -----------------------------------------------------
RSIM8            EQU  H'0000'
RSIM9            EQU  H'0001'
RSIM10           EQU  H'0002'
RSIM11           EQU  H'0003'
RSIM12           EQU  H'0004'
RSIM13           EQU  H'0005'

G2RSIM8          EQU  H'0000'
G2RSIM9          EQU  H'0001'
G2RSIM10         EQU  H'0002'
G2RSIM11         EQU  H'0003'
G2RSIM12         EQU  H'0004'
G2RSIM13         EQU  H'0005'


;----- COG2FIS0 Bits -----------------------------------------------------
FIS0             EQU  H'0000'
FIS1             EQU  H'0001'
FIS2             EQU  H'0002'
FIS3             EQU  H'0003'
FIS4             EQU  H'0004'
FIS5             EQU  H'0005'
FIS6             EQU  H'0006'
FIS7             EQU  H'0007'

G2FIS0           EQU  H'0000'
G2FIS1           EQU  H'0001'
G2FIS2           EQU  H'0002'
G2FIS3           EQU  H'0003'
G2FIS4           EQU  H'0004'
G2FIS5           EQU  H'0005'
G2FIS6           EQU  H'0006'
G2FIS7           EQU  H'0007'


;----- COG2FIS1 Bits -----------------------------------------------------
FIS8             EQU  H'0000'
FIS9             EQU  H'0001'
FIS10            EQU  H'0002'
FIS11            EQU  H'0003'
FIS12            EQU  H'0004'
FIS13            EQU  H'0005'

G2FIS8           EQU  H'0000'
G2FIS9           EQU  H'0001'
G2FIS10          EQU  H'0002'
G2FIS11          EQU  H'0003'
G2FIS12          EQU  H'0004'
G2FIS13          EQU  H'0005'


;----- COG2FSIM0 Bits -----------------------------------------------------
FSIM0            EQU  H'0000'
FSIM1            EQU  H'0001'
FSIM2            EQU  H'0002'
FSIM3            EQU  H'0003'
FSIM4            EQU  H'0004'
FSIM5            EQU  H'0005'
FSIM6            EQU  H'0006'
FSIM7            EQU  H'0007'

G2FSIM0          EQU  H'0000'
G2FSIM1          EQU  H'0001'
G2FSIM2          EQU  H'0002'
G2FSIM3          EQU  H'0003'
G2FSIM4          EQU  H'0004'
G2FSIM5          EQU  H'0005'
G2FSIM6          EQU  H'0006'
G2FSIM7          EQU  H'0007'


;----- COG2FSIM1 Bits -----------------------------------------------------
FSIM8            EQU  H'0000'
FSIM9            EQU  H'0001'
FSIM10           EQU  H'0002'
FSIM11           EQU  H'0003'
FSIM12           EQU  H'0004'
FSIM13           EQU  H'0005'

G2FSIM8          EQU  H'0000'
G2FSIM9          EQU  H'0001'
G2FSIM10         EQU  H'0002'
G2FSIM11         EQU  H'0003'
G2FSIM12         EQU  H'0004'
G2FSIM13         EQU  H'0005'


;----- COG2ASD0 Bits -----------------------------------------------------
ASREN            EQU  H'0006'
ASE              EQU  H'0007'

ASDAC0           EQU  H'0002'
ASDAC1           EQU  H'0003'
ASDBD0           EQU  H'0004'
ASDBD1           EQU  H'0005'
ARSEN            EQU  H'0006'

G2ARSEN          EQU  H'0006'
G2ASE            EQU  H'0007'

G2ASDAC0         EQU  H'0002'
G2ASDAC1         EQU  H'0003'
G2ASDBD0         EQU  H'0004'
G2ASDBD1         EQU  H'0005'
G2ASREN          EQU  H'0006'


;----- COG2ASD1 Bits -----------------------------------------------------
AS0E             EQU  H'0000'
AS1E             EQU  H'0001'
AS2E             EQU  H'0002'
AS3E             EQU  H'0003'
AS4E             EQU  H'0004'
AS5E             EQU  H'0005'
AS6E             EQU  H'0006'
AS7E             EQU  H'0007'

G2AS0E           EQU  H'0000'
G2AS1E           EQU  H'0001'
G2AS2E           EQU  H'0002'
G2AS3E           EQU  H'0003'
G2AS4E           EQU  H'0004'
G2AS5E           EQU  H'0005'
G2AS6E           EQU  H'0006'
G2AS7E           EQU  H'0007'


;----- COG2STR Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
SDATA            EQU  H'0004'
SDATB            EQU  H'0005'
SDATC            EQU  H'0006'
SDATD            EQU  H'0007'

G2STRA           EQU  H'0000'
G2STRB           EQU  H'0001'
G2STRC           EQU  H'0002'
G2STRD           EQU  H'0003'
G2SDATA          EQU  H'0004'
G2SDATB          EQU  H'0005'
G2SDATC          EQU  H'0006'
G2SDATD          EQU  H'0007'


;----- PRG1RTSS Bits -----------------------------------------------------
RTSS0            EQU  H'0000'
RTSS1            EQU  H'0001'
RTSS2            EQU  H'0002'
RTSS3            EQU  H'0003'

RG1RTSS0         EQU  H'0000'
RG1RTSS1         EQU  H'0001'
RG1RTSS2         EQU  H'0002'
RG1RTSS3         EQU  H'0003'


;----- PRG1FTSS Bits -----------------------------------------------------
FTSS0            EQU  H'0000'
FTSS1            EQU  H'0001'
FTSS2            EQU  H'0002'
FTSS3            EQU  H'0003'

RG1FTSS0         EQU  H'0000'
RG1FTSS1         EQU  H'0001'
RG1FTSS2         EQU  H'0002'
RG1FTSS3         EQU  H'0003'


;----- PRG1INS Bits -----------------------------------------------------
INS0             EQU  H'0000'
INS1             EQU  H'0001'
INS2             EQU  H'0002'
INS3             EQU  H'0003'

RG1INS0          EQU  H'0000'
RG1INS1          EQU  H'0001'
RG1INS2          EQU  H'0002'
RG1INS3          EQU  H'0003'


;----- PRG1CON0 Bits -----------------------------------------------------
GO_PRG1CON0      EQU  H'0000'
OS               EQU  H'0001'
REDG             EQU  H'0004'
FEDG             EQU  H'0005'
EN               EQU  H'0007'

MODE0_PRG1CON0   EQU  H'0002'
MODE1_PRG1CON0   EQU  H'0003'

RG1GO            EQU  H'0000'
RG1OS            EQU  H'0001'
RG1REDG          EQU  H'0004'
RG1FEDG          EQU  H'0005'
RG1EN            EQU  H'0007'

RG1MODE0         EQU  H'0002'
RG1MODE1         EQU  H'0003'


;----- PRG1CON1 Bits -----------------------------------------------------
RPOL             EQU  H'0000'
FPOL             EQU  H'0001'
RDY              EQU  H'0002'

RG1RPOL          EQU  H'0000'
RG1FPOL          EQU  H'0001'
RG1RDY           EQU  H'0002'


;----- PRG1CON2 Bits -----------------------------------------------------
ISET0            EQU  H'0000'
ISET1            EQU  H'0001'
ISET2            EQU  H'0002'
ISET3            EQU  H'0003'
ISET4            EQU  H'0004'


RG1ISET0         EQU  H'0000'
RG1ISET1         EQU  H'0001'
RG1ISET2         EQU  H'0002'
RG1ISET3         EQU  H'0003'
RG1ISET4         EQU  H'0004'


;----- PRG2RTSS Bits -----------------------------------------------------
RTSS0            EQU  H'0000'
RTSS1            EQU  H'0001'
RTSS2            EQU  H'0002'
RTSS3            EQU  H'0003'

RG2RTSS0         EQU  H'0000'
RG2RTSS1         EQU  H'0001'
RG2RTSS2         EQU  H'0002'
RG2RTSS3         EQU  H'0003'


;----- PRG2FTSS Bits -----------------------------------------------------
FTSS0            EQU  H'0000'
FTSS1            EQU  H'0001'
FTSS2            EQU  H'0002'
FTSS3            EQU  H'0003'

RG2FTSS0         EQU  H'0000'
RG2FTSS1         EQU  H'0001'
RG2FTSS2         EQU  H'0002'
RG2FTSS3         EQU  H'0003'


;----- PRG2INS Bits -----------------------------------------------------
INS0             EQU  H'0000'
INS1             EQU  H'0001'
INS2             EQU  H'0002'
INS3             EQU  H'0003'

RG2INS0          EQU  H'0000'
RG2INS1          EQU  H'0001'
RG2INS2          EQU  H'0002'
RG2INS3          EQU  H'0003'


;----- PRG2CON0 Bits -----------------------------------------------------
GO_PRG2CON0      EQU  H'0000'
OS               EQU  H'0001'
REDG             EQU  H'0004'
FEDG             EQU  H'0005'
EN               EQU  H'0007'

MODE0_PRG2CON0   EQU  H'0002'
MODE1_PRG2CON0   EQU  H'0003'

RG2GO            EQU  H'0000'
RG2OS            EQU  H'0001'
RG2REDG          EQU  H'0004'
RG2FEDG          EQU  H'0005'
RG2EN            EQU  H'0007'

RG2MODE0         EQU  H'0002'
RG2MODE1         EQU  H'0003'


;----- PRG2CON1 Bits -----------------------------------------------------
RPOL             EQU  H'0000'
FPOL             EQU  H'0001'
RDY              EQU  H'0002'

RG2RPOL          EQU  H'0000'
RG2FPOL          EQU  H'0001'
RG2RDY           EQU  H'0002'


;----- PRG2CON2 Bits -----------------------------------------------------
ISET0            EQU  H'0000'
ISET1            EQU  H'0001'
ISET2            EQU  H'0002'
ISET3            EQU  H'0003'
ISET4            EQU  H'0004'


RG2ISET0         EQU  H'0000'
RG2ISET1         EQU  H'0001'
RG2ISET2         EQU  H'0002'
RG2ISET3         EQU  H'0003'
RG2ISET4         EQU  H'0004'


;----- PWMEN Bits -----------------------------------------------------
MPWM5EN          EQU  H'0004'
MPWM6EN          EQU  H'0005'


;----- PWMLD Bits -----------------------------------------------------
MPWM5LD          EQU  H'0004'
MPWM6LD          EQU  H'0005'


;----- PWMOUT Bits -----------------------------------------------------
MPWM5OUT         EQU  H'0004'
MPWM6OUT         EQU  H'0005'


;----- PWM5PHL Bits -----------------------------------------------------
PWM5PHL0         EQU  H'0000'
PWM5PHL1         EQU  H'0001'
PWM5PHL2         EQU  H'0002'
PWM5PHL3         EQU  H'0003'
PWM5PHL4         EQU  H'0004'
PWM5PHL5         EQU  H'0005'
PWM5PHL6         EQU  H'0006'
PWM5PHL7         EQU  H'0007'



;----- PWM5PHH Bits -----------------------------------------------------
PWM5PHH0         EQU  H'0000'
PWM5PHH1         EQU  H'0001'
PWM5PHH2         EQU  H'0002'
PWM5PHH3         EQU  H'0003'
PWM5PHH4         EQU  H'0004'
PWM5PHH5         EQU  H'0005'
PWM5PHH6         EQU  H'0006'
PWM5PHH7         EQU  H'0007'



;----- PWM5DCL Bits -----------------------------------------------------
PWM5DCL0         EQU  H'0000'
PWM5DCL1         EQU  H'0001'
PWM5DCL2         EQU  H'0002'
PWM5DCL3         EQU  H'0003'
PWM5DCL4         EQU  H'0004'
PWM5DCL5         EQU  H'0005'
PWM5DCL6         EQU  H'0006'
PWM5DCL7         EQU  H'0007'



;----- PWM5DCH Bits -----------------------------------------------------
PWM5DCH0         EQU  H'0000'
PWM5DCH1         EQU  H'0001'
PWM5DCH2         EQU  H'0002'
PWM5DCH3         EQU  H'0003'
PWM5DCH4         EQU  H'0004'
PWM5DCH5         EQU  H'0005'
PWM5DCH6         EQU  H'0006'
PWM5DCH7         EQU  H'0007'



;----- PWM5PRL Bits -----------------------------------------------------
PWM5PRL0         EQU  H'0000'
PWM5PRL1         EQU  H'0001'
PWM5PRL2         EQU  H'0002'
PWM5PRL3         EQU  H'0003'
PWM5PRL4         EQU  H'0004'
PWM5PRL5         EQU  H'0005'
PWM5PRL6         EQU  H'0006'
PWM5PRL7         EQU  H'0007'



;----- PWM5PRH Bits -----------------------------------------------------
PWM5PRH0         EQU  H'0000'
PWM5PRH1         EQU  H'0001'
PWM5PRH2         EQU  H'0002'
PWM5PRH3         EQU  H'0003'
PWM5PRH4         EQU  H'0004'
PWM5PRH5         EQU  H'0005'
PWM5PRH6         EQU  H'0006'
PWM5PRH7         EQU  H'0007'



;----- PWM5OFL Bits -----------------------------------------------------
PWM5OFL0         EQU  H'0000'
PWM5OFL1         EQU  H'0001'
PWM5OFL2         EQU  H'0002'
PWM5OFL3         EQU  H'0003'
PWM5OFL4         EQU  H'0004'
PWM5OFL5         EQU  H'0005'
PWM5OFL6         EQU  H'0006'
PWM5OFL7         EQU  H'0007'



;----- PWM5OFH Bits -----------------------------------------------------
PWM5OFH0         EQU  H'0000'
PWM5OFH1         EQU  H'0001'
PWM5OFH2         EQU  H'0002'
PWM5OFH3         EQU  H'0003'
PWM5OFH4         EQU  H'0004'
PWM5OFH5         EQU  H'0005'
PWM5OFH6         EQU  H'0006'
PWM5OFH7         EQU  H'0007'



;----- PWM5TMRL Bits -----------------------------------------------------
PWM5TMRL0        EQU  H'0000'
PWM5TMRL1        EQU  H'0001'
PWM5TMRL2        EQU  H'0002'
PWM5TMRL3        EQU  H'0003'
PWM5TMRL4        EQU  H'0004'
PWM5TMRL5        EQU  H'0005'
PWM5TMRL6        EQU  H'0006'
PWM5TMRL7        EQU  H'0007'



;----- PWM5TMRH Bits -----------------------------------------------------
PWM5TMRH0        EQU  H'0000'
PWM5TMRH1        EQU  H'0001'
PWM5TMRH2        EQU  H'0002'
PWM5TMRH3        EQU  H'0003'
PWM5TMRH4        EQU  H'0004'
PWM5TMRH5        EQU  H'0005'
PWM5TMRH6        EQU  H'0006'
PWM5TMRH7        EQU  H'0007'



;----- PWM5CON Bits -----------------------------------------------------
POL_PWM5CON      EQU  H'0004'
OUT_PWM5CON      EQU  H'0005'
EN               EQU  H'0007'

PWM5MODE0        EQU  H'0002'
PWM5MODE1        EQU  H'0003'

PWM5POL          EQU  H'0004'
PWM5OUT          EQU  H'0005'
PWM5EN           EQU  H'0007'

MODE0_PWM5CON    EQU  H'0002'
MODE1_PWM5CON    EQU  H'0003'


;----- PWM5INTCON Bits -----------------------------------------------------
PRIE             EQU  H'0000'
DCIE             EQU  H'0001'
PHIE             EQU  H'0002'
OFIE             EQU  H'0003'

PWM5PRIE         EQU  H'0000'
PWM5DCIE         EQU  H'0001'
PWM5PHIE         EQU  H'0002'
PWM5OFIE         EQU  H'0003'


;----- PWM5INTE Bits -----------------------------------------------------
PRIE             EQU  H'0000'
DCIE             EQU  H'0001'
PHIE             EQU  H'0002'
OFIE             EQU  H'0003'

PWM5PRIE         EQU  H'0000'
PWM5DCIE         EQU  H'0001'
PWM5PHIE         EQU  H'0002'
PWM5OFIE         EQU  H'0003'


;----- PWM5INTF Bits -----------------------------------------------------
PRIF             EQU  H'0000'
DCIF             EQU  H'0001'
PHIF             EQU  H'0002'
OFIF             EQU  H'0003'

PWM5PRIF         EQU  H'0000'
PWM5DCIF         EQU  H'0001'
PWM5PHIF         EQU  H'0002'
PWM5OFIF         EQU  H'0003'


;----- PWM5INTFLG Bits -----------------------------------------------------
PRIF             EQU  H'0000'
DCIF             EQU  H'0001'
PHIF             EQU  H'0002'
OFIF             EQU  H'0003'

PWM5PRIF         EQU  H'0000'
PWM5DCIF         EQU  H'0001'
PWM5PHIF         EQU  H'0002'
PWM5OFIF         EQU  H'0003'


;----- PWM5CLKCON Bits -----------------------------------------------------
PWM5CS0          EQU  H'0000'
PWM5CS1          EQU  H'0001'
PWM5CS2          EQU  H'0002'
PWM5PS0          EQU  H'0004'
PWM5PS1          EQU  H'0005'
PWM5PS2          EQU  H'0006'


CS0_PWM5CLKCON   EQU  H'0000'
CS1_PWM5CLKCON   EQU  H'0001'
CS2              EQU  H'0002'
PS0_PWM5CLKCON   EQU  H'0004'
PS1_PWM5CLKCON   EQU  H'0005'
PS2_PWM5CLKCON   EQU  H'0006'


;----- PWM5LDCON Bits -----------------------------------------------------
LDT              EQU  H'0006'
LDA              EQU  H'0007'

PWM5LDS0         EQU  H'0000'

PWM5LDM          EQU  H'0006'
PWM5LD           EQU  H'0007'

LDS0             EQU  H'0000'


;----- PWM5OFCON Bits -----------------------------------------------------
OFO              EQU  H'0004'

PWM5OFS0         EQU  H'0000'
PWM5OFM0         EQU  H'0005'
PWM5OFM1         EQU  H'0006'

PWM5OFMC         EQU  H'0004'

OFS0             EQU  H'0000'
OFM0             EQU  H'0005'
OFM1             EQU  H'0006'


;----- PWM6PHL Bits -----------------------------------------------------
PWM6PHL0         EQU  H'0000'
PWM6PHL1         EQU  H'0001'
PWM6PHL2         EQU  H'0002'
PWM6PHL3         EQU  H'0003'
PWM6PHL4         EQU  H'0004'
PWM6PHL5         EQU  H'0005'
PWM6PHL6         EQU  H'0006'
PWM6PHL7         EQU  H'0007'



;----- PWM6PHH Bits -----------------------------------------------------
PWM6PHH0         EQU  H'0000'
PWM6PHH1         EQU  H'0001'
PWM6PHH2         EQU  H'0002'
PWM6PHH3         EQU  H'0003'
PWM6PHH4         EQU  H'0004'
PWM6PHH5         EQU  H'0005'
PWM6PHH6         EQU  H'0006'
PWM6PHH7         EQU  H'0007'



;----- PWM6DCL Bits -----------------------------------------------------
PWM6DCL0         EQU  H'0000'
PWM6DCL1         EQU  H'0001'
PWM6DCL2         EQU  H'0002'
PWM6DCL3         EQU  H'0003'
PWM6DCL4         EQU  H'0004'
PWM6DCL5         EQU  H'0005'
PWM6DCL6         EQU  H'0006'
PWM6DCL7         EQU  H'0007'



;----- PWM6DCH Bits -----------------------------------------------------
PWM6DCH0         EQU  H'0000'
PWM6DCH1         EQU  H'0001'
PWM6DCH2         EQU  H'0002'
PWM6DCH3         EQU  H'0003'
PWM6DCH4         EQU  H'0004'
PWM6DCH5         EQU  H'0005'
PWM6DCH6         EQU  H'0006'
PWM6DCH7         EQU  H'0007'



;----- PWM6PRL Bits -----------------------------------------------------
PWM6PRL0         EQU  H'0000'
PWM6PRL1         EQU  H'0001'
PWM6PRL2         EQU  H'0002'
PWM6PRL3         EQU  H'0003'
PWM6PRL4         EQU  H'0004'
PWM6PRL5         EQU  H'0005'
PWM6PRL6         EQU  H'0006'
PWM6PRL7         EQU  H'0007'



;----- PWM6PRH Bits -----------------------------------------------------
PWM6PRH0         EQU  H'0000'
PWM6PRH1         EQU  H'0001'
PWM6PRH2         EQU  H'0002'
PWM6PRH3         EQU  H'0003'
PWM6PRH4         EQU  H'0004'
PWM6PRH5         EQU  H'0005'
PWM6PRH6         EQU  H'0006'
PWM6PRH7         EQU  H'0007'



;----- PWM6OFL Bits -----------------------------------------------------
PWM6OFL0         EQU  H'0000'
PWM6OFL1         EQU  H'0001'
PWM6OFL2         EQU  H'0002'
PWM6OFL3         EQU  H'0003'
PWM6OFL4         EQU  H'0004'
PWM6OFL5         EQU  H'0005'
PWM6OFL6         EQU  H'0006'
PWM6OFL7         EQU  H'0007'



;----- PWM6OFH Bits -----------------------------------------------------
PWM6OFH0         EQU  H'0000'
PWM6OFH1         EQU  H'0001'
PWM6OFH2         EQU  H'0002'
PWM6OFH3         EQU  H'0003'
PWM6OFH4         EQU  H'0004'
PWM6OFH5         EQU  H'0005'
PWM6OFH6         EQU  H'0006'
PWM6OFH7         EQU  H'0007'



;----- PWM6TMRL Bits -----------------------------------------------------
PWM6TMRL0        EQU  H'0000'
PWM6TMRL1        EQU  H'0001'
PWM6TMRL2        EQU  H'0002'
PWM6TMRL3        EQU  H'0003'
PWM6TMRL4        EQU  H'0004'
PWM6TMRL5        EQU  H'0005'
PWM6TMRL6        EQU  H'0006'
PWM6TMRL7        EQU  H'0007'



;----- PWM6TMRH Bits -----------------------------------------------------
PWM6TMRH0        EQU  H'0000'
PWM6TMRH1        EQU  H'0001'
PWM6TMRH2        EQU  H'0002'
PWM6TMRH3        EQU  H'0003'
PWM6TMRH4        EQU  H'0004'
PWM6TMRH5        EQU  H'0005'
PWM6TMRH6        EQU  H'0006'
PWM6TMRH7        EQU  H'0007'



;----- PWM6CON Bits -----------------------------------------------------
POL_PWM6CON      EQU  H'0004'
OUT_PWM6CON      EQU  H'0005'
EN               EQU  H'0007'

PWM6MODE0        EQU  H'0002'
PWM6MODE1        EQU  H'0003'

PWM6POL          EQU  H'0004'
PWM6OUT          EQU  H'0005'
PWM6EN           EQU  H'0007'

MODE0_PWM6CON    EQU  H'0002'
MODE1_PWM6CON    EQU  H'0003'


;----- PWM6INTCON Bits -----------------------------------------------------
PRIE             EQU  H'0000'
DCIE             EQU  H'0001'
PHIE             EQU  H'0002'
OFIE             EQU  H'0003'

PWM6PRIE         EQU  H'0000'
PWM6DCIE         EQU  H'0001'
PWM6PHIE         EQU  H'0002'
PWM6OFIE         EQU  H'0003'


;----- PWM6INTE Bits -----------------------------------------------------
PRIE             EQU  H'0000'
DCIE             EQU  H'0001'
PHIE             EQU  H'0002'
OFIE             EQU  H'0003'

PWM6PRIE         EQU  H'0000'
PWM6DCIE         EQU  H'0001'
PWM6PHIE         EQU  H'0002'
PWM6OFIE         EQU  H'0003'


;----- PWM6INTF Bits -----------------------------------------------------
PRIF             EQU  H'0000'
DCIF             EQU  H'0001'
PHIF             EQU  H'0002'
OFIF             EQU  H'0003'

PWM6PRIF         EQU  H'0000'
PWM6DCIF         EQU  H'0001'
PWM6PHIF         EQU  H'0002'
PWM6OFIF         EQU  H'0003'


;----- PWM6INTFLG Bits -----------------------------------------------------
PRIF             EQU  H'0000'
DCIF             EQU  H'0001'
PHIF             EQU  H'0002'
OFIF             EQU  H'0003'

PWM6PRIF         EQU  H'0000'
PWM6DCIF         EQU  H'0001'
PWM6PHIF         EQU  H'0002'
PWM6OFIF         EQU  H'0003'


;----- PWM6CLKCON Bits -----------------------------------------------------
PWM6CS0          EQU  H'0000'
PWM6CS1          EQU  H'0001'
PWM6CS2          EQU  H'0002'
PWM6PS0          EQU  H'0004'
PWM6PS1          EQU  H'0005'
PWM6PS2          EQU  H'0006'


CS0_PWM6CLKCON   EQU  H'0000'
CS1_PWM6CLKCON   EQU  H'0001'
CS2              EQU  H'0002'
PS0_PWM6CLKCON   EQU  H'0004'
PS1_PWM6CLKCON   EQU  H'0005'
PS2_PWM6CLKCON   EQU  H'0006'


;----- PWM6LDCON Bits -----------------------------------------------------
LDT              EQU  H'0006'
LDA              EQU  H'0007'

PWM6LDS0         EQU  H'0000'

PWM6LDM          EQU  H'0006'
PWM6LD           EQU  H'0007'

LDS0             EQU  H'0000'


;----- PWM6OFCON Bits -----------------------------------------------------
OFO              EQU  H'0004'

PWM6OFS0         EQU  H'0000'
PWM6OFM0         EQU  H'0005'
PWM6OFM1         EQU  H'0006'

PWM6OFMC         EQU  H'0004'

OFS0             EQU  H'0000'
OFM0             EQU  H'0005'
OFM1             EQU  H'0006'


;----- PPSLOCK Bits -----------------------------------------------------
PPSLOCKED        EQU  H'0000'


;----- CLCDATA Bits -----------------------------------------------------
MCLC1OUT         EQU  H'0000'
MCLC2OUT         EQU  H'0001'
MCLC3OUT         EQU  H'0002'


;----- CLC1CON Bits -----------------------------------------------------
LC1INTN          EQU  H'0003'
LC1INTP          EQU  H'0004'
LC1OUT           EQU  H'0005'
LC1EN            EQU  H'0007'

LC1MODE0         EQU  H'0000'
LC1MODE1         EQU  H'0001'
LC1MODE2         EQU  H'0002'

INTN_CLC1CON     EQU  H'0003'
INTP_CLC1CON     EQU  H'0004'
OUT_CLC1CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0_CLC1CON    EQU  H'0000'
MODE1_CLC1CON    EQU  H'0001'
MODE2            EQU  H'0002'


;----- CLC1POL Bits -----------------------------------------------------
LC1G1POL         EQU  H'0000'
LC1G2POL         EQU  H'0001'
LC1G3POL         EQU  H'0002'
LC1G4POL         EQU  H'0003'
LC1POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL_CLC1POL      EQU  H'0007'


;----- CLC1SEL0 Bits -----------------------------------------------------
LC1D1S0          EQU  H'0000'
LC1D1S1          EQU  H'0001'
LC1D1S2          EQU  H'0002'
LC1D1S3          EQU  H'0003'
LC1D1S4          EQU  H'0004'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'


;----- CLC1SEL1 Bits -----------------------------------------------------
LC1D2S0          EQU  H'0000'
LC1D2S1          EQU  H'0001'
LC1D2S2          EQU  H'0002'
LC1D2S3          EQU  H'0003'
LC1D2S4          EQU  H'0004'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'


;----- CLC1SEL2 Bits -----------------------------------------------------
LC1D3S0          EQU  H'0000'
LC1D3S1          EQU  H'0001'
LC1D3S2          EQU  H'0002'
LC1D3S3          EQU  H'0003'
LC1D3S4          EQU  H'0004'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'


;----- CLC1SEL3 Bits -----------------------------------------------------
LC1D4S0          EQU  H'0000'
LC1D4S1          EQU  H'0001'
LC1D4S2          EQU  H'0002'
LC1D4S3          EQU  H'0003'
LC1D4S4          EQU  H'0004'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'


;----- CLC1GLS0 Bits -----------------------------------------------------
LC1G1D1N         EQU  H'0000'
LC1G1D1T         EQU  H'0001'
LC1G1D2N         EQU  H'0002'
LC1G1D2T         EQU  H'0003'
LC1G1D3N         EQU  H'0004'
LC1G1D3T         EQU  H'0005'
LC1G1D4N         EQU  H'0006'
LC1G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS1 Bits -----------------------------------------------------
LC1G2D1N         EQU  H'0000'
LC1G2D1T         EQU  H'0001'
LC1G2D2N         EQU  H'0002'
LC1G2D2T         EQU  H'0003'
LC1G2D3N         EQU  H'0004'
LC1G2D3T         EQU  H'0005'
LC1G2D4N         EQU  H'0006'
LC1G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS2 Bits -----------------------------------------------------
LC1G3D1N         EQU  H'0000'
LC1G3D1T         EQU  H'0001'
LC1G3D2N         EQU  H'0002'
LC1G3D2T         EQU  H'0003'
LC1G3D3N         EQU  H'0004'
LC1G3D3T         EQU  H'0005'
LC1G3D4N         EQU  H'0006'
LC1G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS3 Bits -----------------------------------------------------
LC1G4D1N         EQU  H'0000'
LC1G4D1T         EQU  H'0001'
LC1G4D2N         EQU  H'0002'
LC1G4D2T         EQU  H'0003'
LC1G4D3N         EQU  H'0004'
LC1G4D3T         EQU  H'0005'
LC1G4D4N         EQU  H'0006'
LC1G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


;----- CLC2CON Bits -----------------------------------------------------
LC2INTN          EQU  H'0003'
LC2INTP          EQU  H'0004'
LC2OUT           EQU  H'0005'
LC2EN            EQU  H'0007'

LC2MODE0         EQU  H'0000'
LC2MODE1         EQU  H'0001'
LC2MODE2         EQU  H'0002'

INTN_CLC2CON     EQU  H'0003'
INTP_CLC2CON     EQU  H'0004'
OUT_CLC2CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0_CLC2CON    EQU  H'0000'
MODE1_CLC2CON    EQU  H'0001'
MODE2            EQU  H'0002'


;----- CLC2POL Bits -----------------------------------------------------
LC2G1POL         EQU  H'0000'
LC2G2POL         EQU  H'0001'
LC2G3POL         EQU  H'0002'
LC2G4POL         EQU  H'0003'
LC2POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL_CLC2POL      EQU  H'0007'


;----- CLC2SEL0 Bits -----------------------------------------------------
LC2D1S0          EQU  H'0000'
LC2D1S1          EQU  H'0001'
LC2D1S2          EQU  H'0002'
LC2D1S3          EQU  H'0003'
LC2D1S4          EQU  H'0004'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'


;----- CLC2SEL1 Bits -----------------------------------------------------
LC2D2S0          EQU  H'0000'
LC2D2S1          EQU  H'0001'
LC2D2S2          EQU  H'0002'
LC2D2S3          EQU  H'0003'
LC2D2S4          EQU  H'0004'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'


;----- CLC2SEL2 Bits -----------------------------------------------------
LC2D3S0          EQU  H'0000'
LC2D3S1          EQU  H'0001'
LC2D3S2          EQU  H'0002'
LC2D3S3          EQU  H'0003'
LC2D3S4          EQU  H'0004'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'


;----- CLC2SEL3 Bits -----------------------------------------------------
LC2D4S0          EQU  H'0000'
LC2D4S1          EQU  H'0001'
LC2D4S2          EQU  H'0002'
LC2D4S3          EQU  H'0003'
LC2D4S4          EQU  H'0004'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'


;----- CLC2GLS0 Bits -----------------------------------------------------
LC2G1D1N         EQU  H'0000'
LC2G1D1T         EQU  H'0001'
LC2G1D2N         EQU  H'0002'
LC2G1D2T         EQU  H'0003'
LC2G1D3N         EQU  H'0004'
LC2G1D3T         EQU  H'0005'
LC2G1D4N         EQU  H'0006'
LC2G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS1 Bits -----------------------------------------------------
LC2G2D1N         EQU  H'0000'
LC2G2D1T         EQU  H'0001'
LC2G2D2N         EQU  H'0002'
LC2G2D2T         EQU  H'0003'
LC2G2D3N         EQU  H'0004'
LC2G2D3T         EQU  H'0005'
LC2G2D4N         EQU  H'0006'
LC2G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS2 Bits -----------------------------------------------------
LC2G3D1N         EQU  H'0000'
LC2G3D1T         EQU  H'0001'
LC2G3D2N         EQU  H'0002'
LC2G3D2T         EQU  H'0003'
LC2G3D3N         EQU  H'0004'
LC2G3D3T         EQU  H'0005'
LC2G3D4N         EQU  H'0006'
LC2G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS3 Bits -----------------------------------------------------
LC2G4D1N         EQU  H'0000'
LC2G4D1T         EQU  H'0001'
LC2G4D2N         EQU  H'0002'
LC2G4D2T         EQU  H'0003'
LC2G4D3N         EQU  H'0004'
LC2G4D3T         EQU  H'0005'
LC2G4D4N         EQU  H'0006'
LC2G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


;----- CLC3CON Bits -----------------------------------------------------
LC3INTN          EQU  H'0003'
LC3INTP          EQU  H'0004'
LC3OUT           EQU  H'0005'
LC3EN            EQU  H'0007'

LC3MODE0         EQU  H'0000'
LC3MODE1         EQU  H'0001'
LC3MODE2         EQU  H'0002'

INTN_CLC3CON     EQU  H'0003'
INTP_CLC3CON     EQU  H'0004'
OUT_CLC3CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0_CLC3CON    EQU  H'0000'
MODE1_CLC3CON    EQU  H'0001'
MODE2            EQU  H'0002'


;----- CLC3POL Bits -----------------------------------------------------
LC3G1POL         EQU  H'0000'
LC3G2POL         EQU  H'0001'
LC3G3POL         EQU  H'0002'
LC3G4POL         EQU  H'0003'
LC3POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL_CLC3POL      EQU  H'0007'


;----- CLC3SEL0 Bits -----------------------------------------------------
LC3D1S0          EQU  H'0000'
LC3D1S1          EQU  H'0001'
LC3D1S2          EQU  H'0002'
LC3D1S3          EQU  H'0003'
LC3D1S4          EQU  H'0004'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'


;----- CLC3SEL1 Bits -----------------------------------------------------
LC3D2S0          EQU  H'0000'
LC3D2S1          EQU  H'0001'
LC3D2S2          EQU  H'0002'
LC3D2S3          EQU  H'0003'
LC3D2S4          EQU  H'0004'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'


;----- CLC3SEL2 Bits -----------------------------------------------------
LC3D3S0          EQU  H'0000'
LC3D3S1          EQU  H'0001'
LC3D3S2          EQU  H'0002'
LC3D3S3          EQU  H'0003'
LC3D3S4          EQU  H'0004'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'


;----- CLC3SEL3 Bits -----------------------------------------------------
LC3D4S0          EQU  H'0000'
LC3D4S1          EQU  H'0001'
LC3D4S2          EQU  H'0002'
LC3D4S3          EQU  H'0003'
LC3D4S4          EQU  H'0004'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'


;----- CLC3GLS0 Bits -----------------------------------------------------
LC3G1D1N         EQU  H'0000'
LC3G1D1T         EQU  H'0001'
LC3G1D2N         EQU  H'0002'
LC3G1D2T         EQU  H'0003'
LC3G1D3N         EQU  H'0004'
LC3G1D3T         EQU  H'0005'
LC3G1D4N         EQU  H'0006'
LC3G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC3GLS1 Bits -----------------------------------------------------
LC3G2D1N         EQU  H'0000'
LC3G2D1T         EQU  H'0001'
LC3G2D2N         EQU  H'0002'
LC3G2D2T         EQU  H'0003'
LC3G2D3N         EQU  H'0004'
LC3G2D3T         EQU  H'0005'
LC3G2D4N         EQU  H'0006'
LC3G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC3GLS2 Bits -----------------------------------------------------
LC3G3D1N         EQU  H'0000'
LC3G3D1T         EQU  H'0001'
LC3G3D2N         EQU  H'0002'
LC3G3D2T         EQU  H'0003'
LC3G3D3N         EQU  H'0004'
LC3G3D3T         EQU  H'0005'
LC3G3D4N         EQU  H'0006'
LC3G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC3GLS3 Bits -----------------------------------------------------
LC3G4D1N         EQU  H'0000'
LC3G4D1T         EQU  H'0001'
LC3G4D2N         EQU  H'0002'
LC3G4D2T         EQU  H'0003'
LC3G4D3N         EQU  H'0004'
LC3G4D3T         EQU  H'0005'
LC3G4D4N         EQU  H'0006'
LC3G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


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
       __BADRAM  H'000F'
       __BADRAM  H'0010'
       __BADRAM  H'008F'
       __BADRAM  H'0090'
       __BADRAM  H'018F'-H'0190'
       __BADRAM  H'0198'
       __BADRAM  H'020F'-H'0210'
       __BADRAM  H'0218'-H'021C'
       __BADRAM  H'028F'-H'0290'
       __BADRAM  H'0295'-H'0297'
       __BADRAM  H'029C'-H'029D'
       __BADRAM  H'029F'
       __BADRAM  H'030F'-H'031A'
       __BADRAM  H'038F'-H'0390'
       __BADRAM  H'039A'
       __BADRAM  H'040C'-H'040D'
       __BADRAM  H'040F'-H'0412'
       __BADRAM  H'0419'
       __BADRAM  H'048C'-H'0492'
       __BADRAM  H'0497'-H'0499'
       __BADRAM  H'049E'-H'049F'
       __BADRAM  H'050C'-H'050E'
       __BADRAM  H'0517'-H'051F'
       __BADRAM  H'058C'-H'058F'
       __BADRAM  H'059B'-H'059F'
       __BADRAM  H'060C'-H'0616'
       __BADRAM  H'061D'-H'061F'
       __BADRAM  H'0650'-H'066F'
       __BADRAM  H'068C'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'0793'
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
       __BADRAM  H'0D8C'-H'0D8D'
       __BADRAM  H'0DB1'-H'0DEF'
       __BADRAM  H'0E0C'-H'0E0E'
       __BADRAM  H'0E18'
       __BADRAM  H'0E23'
       __BADRAM  H'0E26'-H'0E27'
       __BADRAM  H'0E36'-H'0E6F'
       __BADRAM  H'0E8C'-H'0E8F'
       __BADRAM  H'0E93'
       __BADRAM  H'0E96'-H'0E9B'
       __BADRAM  H'0EA8'-H'0EEF'
       __BADRAM  H'0F0C'-H'0F0E'
       __BADRAM  H'0F2E'-H'0F6F'
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
_FOSC_LP         EQU  H'3FF8'    ; LP Oscillator, Low-power crystal connected between OSC1 and OSC2 pins
_FOSC_XT         EQU  H'3FF9'    ; XT Oscillator, Crystal/resonator connected between OSC1 and OSC2 pins
_FOSC_HS         EQU  H'3FFA'    ; HS Oscillator, High-speed crystal/resonator connected between OSC1 and OSC2 pins
_FOSC_EXTRC      EQU  H'3FFB'    ; EXTRC oscillator: External RC circuit connected to CLKIN pin
_FOSC_INTOSC     EQU  H'3FFC'    ; INTOSC oscillator: I/O function on CLKIN pin
_FOSC_ECL        EQU  H'3FFD'    ; ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
_FOSC_ECM        EQU  H'3FFE'    ; ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
_FOSC_ECH        EQU  H'3FFF'    ; ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins

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

_IESO_OFF        EQU  H'2FFF'    ; Internal/External Switchover Mode is disabled
_IESO_ON         EQU  H'3FFF'    ; Internal/External Switchover Mode is enabled

_FCMEN_OFF       EQU  H'1FFF'    ; Fail-Safe Clock Monitor is disabled
_FCMEN_ON        EQU  H'3FFF'    ; Fail-Safe Clock Monitor is enabled

;----- CONFIG2 Options --------------------------------------------------
_WRT_ALL         EQU  H'3FFC'    ; 000h to 1FFFh write protected, no addresses may be modified by EECON control
_WRT_HALF        EQU  H'3FFD'    ; 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
_WRT_BOOT        EQU  H'3FFE'    ; 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
_WRT_OFF         EQU  H'3FFF'    ; Write protection off

_PPS1WAY_OFF     EQU  H'3FFB'    ; The PPSLOCK bit can be set and cleared repeatedly by software
_PPS1WAY_ON      EQU  H'3FFF'    ; The PPSLOCK bit cannot be cleared once it is set by software

_ZCD_ON          EQU  H'3F7F'    ; Zero-cross detect circuit is enabled at POR
_ZCD_OFF         EQU  H'3FFF'    ; Zero-cross detect circuit is disabled at POR

_PLLEN_OFF       EQU  H'3EFF'    ; 4x PLL is enabled when software sets the SPLLEN bit
_PLLEN_ON        EQU  H'3FFF'    ; 4x PLL is always enabled

_STVREN_OFF      EQU  H'3DFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'3FFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'3BFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO         EQU  H'3FFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.

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
