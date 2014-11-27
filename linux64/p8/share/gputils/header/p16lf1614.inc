        LIST

;==========================================================================
; Build date : Oct 14 2014
;  MPASM PIC16LF1614 processor include
; 
;  (c) Copyright 1999-2014 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16LF1614 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16LF1614
;       2. LIST directive in the source file
;               LIST   P=PIC16LF1614
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
        IFNDEF __16LF1614
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
PIR1             EQU  H'0010'
PIR2             EQU  H'0011'
PIR3             EQU  H'0012'
PIR4             EQU  H'0013'
PIR5             EQU  H'0014'
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
TRISC            EQU  H'008E'
PIE1             EQU  H'0090'
PIE2             EQU  H'0091'
PIE3             EQU  H'0092'
PIE4             EQU  H'0093'
PIE5             EQU  H'0094'
OPTION_REG       EQU  H'0095'
PCON             EQU  H'0096'
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
LATC             EQU  H'010E'
CM1CON0          EQU  H'0111'
CM1CON1          EQU  H'0112'
CM2CON0          EQU  H'0113'
CM2CON1          EQU  H'0114'
CMOUT            EQU  H'0115'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'
DAC1CON0         EQU  H'0118'
DAC1CON1         EQU  H'0119'
ZCD1CON          EQU  H'011C'

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

;-----Bank5------------------
ODCONA           EQU  H'028C'
ODCONC           EQU  H'028E'
CCPR1L           EQU  H'0291'
CCPR1H           EQU  H'0292'
CCP1CON          EQU  H'0293'
CCP1CAP          EQU  H'0294'
CCPR2L           EQU  H'0298'
CCPR2H           EQU  H'0299'
CCP2CON          EQU  H'029A'
CCP2CAP          EQU  H'029B'
CCPTMRS          EQU  H'029E'

;-----Bank6------------------
SLRCONA          EQU  H'030C'
SLRCONC          EQU  H'030E'

;-----Bank7------------------
INLVLA           EQU  H'038C'
INLVLC           EQU  H'038E'
IOCAP            EQU  H'0391'
IOCAN            EQU  H'0392'
IOCAF            EQU  H'0393'
IOCCP            EQU  H'0397'
IOCCN            EQU  H'0398'
IOCCF            EQU  H'0399'

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
TMR3L            EQU  H'0493'
TMR3H            EQU  H'0494'
T3CON            EQU  H'0495'
T3GCON           EQU  H'0496'
TMR5L            EQU  H'049A'
TMR5H            EQU  H'049B'
T5CON            EQU  H'049C'
T5GCON           EQU  H'049D'

;-----Bank11------------------
PID1SET          EQU  H'058C'
PID1SETL         EQU  H'058C'
PID1SETH         EQU  H'058D'
PID1IN           EQU  H'058E'
PID1INL          EQU  H'058E'
PID1INH          EQU  H'058F'
PID1K1           EQU  H'0590'
PID1K1L          EQU  H'0590'
PID1K1H          EQU  H'0591'
PID1K2           EQU  H'0592'
PID1K2L          EQU  H'0592'
PID1K2H          EQU  H'0593'
PID1K3           EQU  H'0594'
PID1K3L          EQU  H'0594'
PID1K3H          EQU  H'0595'
PID1OUT          EQU  H'0596'
PID1OUTLL        EQU  H'0596'
PID1OUTLH        EQU  H'0597'
PID1OUTHL        EQU  H'0598'
PID1OUTHH        EQU  H'0599'
PID1OUTU         EQU  H'059A'
PID1Z1           EQU  H'059B'
PID1Z1L          EQU  H'059B'
PID1Z1H          EQU  H'059C'
PID1Z1U          EQU  H'059D'

;-----Bank12------------------
PID1Z2           EQU  H'060C'
PID1Z2L          EQU  H'060C'
PID1Z2H          EQU  H'060D'
PID1Z2U          EQU  H'060E'
PID1ACC          EQU  H'060F'
PID1ACCLL        EQU  H'060F'
PID1ACCLH        EQU  H'0610'
PID1ACCHL        EQU  H'0611'
PID1ACCHH        EQU  H'0612'
PID1ACCU         EQU  H'0613'
PID1CON          EQU  H'0614'
PWM3DCL          EQU  H'0617'
PWM3DCH          EQU  H'0618'
PWM3CON          EQU  H'0619'
PWM4DCL          EQU  H'061A'
PWM4DCH          EQU  H'061B'
PWM4CON          EQU  H'061C'

;-----Bank13------------------
CWG1DBR          EQU  H'0691'
CWG1DBF          EQU  H'0692'
CWG1AS0          EQU  H'0693'
CWG1AS1          EQU  H'0694'
CWG1OCON0        EQU  H'0695'
CWG1CON0         EQU  H'0696'
CWG1CON1         EQU  H'0697'
CWG1CLKCON       EQU  H'0699'
CWG1ISM          EQU  H'069A'

;-----Bank14------------------
WDTCON0          EQU  H'0711'
WDTCON1          EQU  H'0712'
WDTPSL           EQU  H'0713'
WDTPSH           EQU  H'0714'
WDTTMR           EQU  H'0715'
SCANLADR         EQU  H'0718'
SCANLADRL        EQU  H'0718'
SCANLADRH        EQU  H'0719'
SCANHADR         EQU  H'071A'
SCANHADRL        EQU  H'071A'
SCANHADRH        EQU  H'071B'
SCANCON0         EQU  H'071C'
SCANTRIG         EQU  H'071D'

;-----Bank15------------------
CRCDAT           EQU  H'0791'
CRCDATL          EQU  H'0791'
CRCDATH          EQU  H'0792'
CRCACC           EQU  H'0793'
CRCACCL          EQU  H'0793'
CRCACCH          EQU  H'0794'
CRCSHIFT         EQU  H'0795'
CRCSHIFTL        EQU  H'0795'
CRCSHIFTH        EQU  H'0796'
CRCXOR           EQU  H'0797'
CRCXORL          EQU  H'0797'
CRCXORH          EQU  H'0798'
CRCCON0          EQU  H'0799'
CRCCON1          EQU  H'079A'

;-----Bank16------------------
AT1RES           EQU  H'080C'
AT1RESL          EQU  H'080C'
AT1RESH          EQU  H'080D'
AT1MISS          EQU  H'080E'
AT1MISSL         EQU  H'080E'
AT1MISSH         EQU  H'080F'
AT1PER           EQU  H'0810'
AT1PERL          EQU  H'0810'
AT1PERH          EQU  H'0811'
AT1PHS           EQU  H'0812'
AT1PHSL          EQU  H'0812'
AT1PHSH          EQU  H'0813'
AT1CON0          EQU  H'0814'
AT1CON1          EQU  H'0815'
AT1IR0           EQU  H'0816'
AT1IE0           EQU  H'0817'
AT1IR1           EQU  H'0818'
AT1IE1           EQU  H'0819'
AT1STPT          EQU  H'081A'
AT1STPTL         EQU  H'081A'
AT1STPTH         EQU  H'081B'
AT1ERR           EQU  H'081C'
AT1ERRL          EQU  H'081C'
AT1ERRH          EQU  H'081D'

;-----Bank17------------------
AT1CLK           EQU  H'088C'
AT1SIG           EQU  H'088D'
AT1CSEL1         EQU  H'088E'
AT1CC1           EQU  H'088F'
AT1CC1L          EQU  H'088F'
AT1CC1H          EQU  H'0890'
AT1CCON1         EQU  H'0891'
AT1CSEL2         EQU  H'0892'
AT1CC2           EQU  H'0893'
AT1CC2L          EQU  H'0893'
AT1CC2H          EQU  H'0894'
AT1CCON2         EQU  H'0895'
AT1CSEL3         EQU  H'0896'
AT1CC3           EQU  H'0897'
AT1CC3L          EQU  H'0897'
AT1CC3H          EQU  H'0898'
AT1CCON3         EQU  H'0899'

;-----Bank27------------------
SMT1TMR          EQU  H'0D8C'
SMT1TMRL         EQU  H'0D8C'
SMT1TMRH         EQU  H'0D8D'
SMT1TMRU         EQU  H'0D8E'
SMT1CPR          EQU  H'0D8F'
SMT1CPRL         EQU  H'0D8F'
SMT1CPRH         EQU  H'0D90'
SMT1CPRU         EQU  H'0D91'
SMT1CPW          EQU  H'0D92'
SMT1CPWL         EQU  H'0D92'
SMT1CPWH         EQU  H'0D93'
SMT1CPWU         EQU  H'0D94'
SMT1PR           EQU  H'0D95'
SMT1PRL          EQU  H'0D95'
SMT1PRH          EQU  H'0D96'
SMT1PRU          EQU  H'0D97'
SMT1CON0         EQU  H'0D98'
SMT1CON1         EQU  H'0D99'
SMT1STAT         EQU  H'0D9A'
SMT1CLK          EQU  H'0D9B'
SMT1SIG          EQU  H'0D9C'
SMT1WIN          EQU  H'0D9D'
SMT2TMR          EQU  H'0D9E'
SMT2TMRL         EQU  H'0D9E'
SMT2TMRH         EQU  H'0D9F'
SMT2TMRU         EQU  H'0DA0'
SMT2CPR          EQU  H'0DA1'
SMT2CPRL         EQU  H'0DA1'
SMT2CPRH         EQU  H'0DA2'
SMT2CPRU         EQU  H'0DA3'
SMT2CPW          EQU  H'0DA4'
SMT2CPWL         EQU  H'0DA4'
SMT2CPWH         EQU  H'0DA5'
SMT2CPWU         EQU  H'0DA6'
SMT2PR           EQU  H'0DA7'
SMT2PRL          EQU  H'0DA7'
SMT2PRH          EQU  H'0DA8'
SMT2PRU          EQU  H'0DA9'
SMT2CON0         EQU  H'0DAA'
SMT2CON1         EQU  H'0DAB'
SMT2STAT         EQU  H'0DAC'
SMT2CLK          EQU  H'0DAD'
SMT2SIG          EQU  H'0DAE'
SMT2WIN          EQU  H'0DAF'

;-----Bank28------------------
PPSLOCK          EQU  H'0E0F'
INTPPS           EQU  H'0E10'
T0CKIPPS         EQU  H'0E11'
T1CKIPPS         EQU  H'0E12'
T1GPPS           EQU  H'0E13'
CCP1PPS          EQU  H'0E14'
CCP2PPS          EQU  H'0E15'
ATINPPS          EQU  H'0E16'
CWGINPPS         EQU  H'0E17'
T2PPS            EQU  H'0E18'
T3CKIPPS         EQU  H'0E19'
T3GPPS           EQU  H'0E1A'
T4PPS            EQU  H'0E1B'
T5CKIPPS         EQU  H'0E1C'
T5GPPS           EQU  H'0E1D'
T6PPS            EQU  H'0E1E'
ATCC1PPS         EQU  H'0E1F'
SSPCLKPPS        EQU  H'0E20'
SSPDATPPS        EQU  H'0E21'
SSPSSPPS         EQU  H'0E22'
ATCC2PPS         EQU  H'0E23'
RXPPS            EQU  H'0E24'
CKPPS            EQU  H'0E25'
SMT1SIGPPS       EQU  H'0E26'
SMT1WINPPS       EQU  H'0E27'
CLCIN0PPS        EQU  H'0E28'
CLCIN1PPS        EQU  H'0E29'
CLCIN2PPS        EQU  H'0E2A'
CLCIN3PPS        EQU  H'0E2B'
SMT2SIGPPS       EQU  H'0E2C'
SMT2WINPPS       EQU  H'0E2D'
ATCC3PPS         EQU  H'0E2E'

;-----Bank29------------------
RA0PPS           EQU  H'0E90'
RA1PPS           EQU  H'0E91'
RA2PPS           EQU  H'0E92'
RA4PPS           EQU  H'0E94'
RA5PPS           EQU  H'0E95'
RC0PPS           EQU  H'0EA0'
RC1PPS           EQU  H'0EA1'
RC2PPS           EQU  H'0EA2'
RC3PPS           EQU  H'0EA3'
RC4PPS           EQU  H'0EA4'
RC5PPS           EQU  H'0EA5'

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
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR4IF           EQU  H'0001'
TMR6IF           EQU  H'0002'
BCL1IF           EQU  H'0003'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'


;----- PIR3 Bits -----------------------------------------------------
CLC1IF           EQU  H'0000'
CLC2IF           EQU  H'0001'
ZCDIF            EQU  H'0004'
CWGIF            EQU  H'0005'


;----- PIR4 Bits -----------------------------------------------------
SMT1IF           EQU  H'0000'
SMT1PRAIF        EQU  H'0001'
SMT1PWAIF        EQU  H'0002'
SMT2IF           EQU  H'0003'
SMT2PRAIF        EQU  H'0004'
SMT2PWAIF        EQU  H'0005'
CRCIF            EQU  H'0006'
SCANIF           EQU  H'0007'


;----- PIR5 Bits -----------------------------------------------------
PID1DIF          EQU  H'0000'
PID1EIF          EQU  H'0001'
AT1IF            EQU  H'0002'
TMR5IF           EQU  H'0004'
TMR5GIF          EQU  H'0005'
TMR3IF           EQU  H'0006'
TMR3GIF          EQU  H'0007'


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


;----- T2CON Bits -----------------------------------------------------
ON               EQU  H'0007'

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
CS0              EQU  H'0000'
CS1              EQU  H'0001'
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
CCP1IE           EQU  H'0002'
SSP1IE           EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMR4IE           EQU  H'0001'
TMR6IE           EQU  H'0002'
BCL1IE           EQU  H'0003'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'


;----- PIE3 Bits -----------------------------------------------------
CLC1IE           EQU  H'0000'
CLC2IE           EQU  H'0001'
ZCDIE            EQU  H'0004'
CWGIE            EQU  H'0005'


;----- PIE4 Bits -----------------------------------------------------
SMT1IE           EQU  H'0000'
SMT1PRAIE        EQU  H'0001'
SMT1PWAIE        EQU  H'0002'
SMT2IE           EQU  H'0003'
SMT2PRAIE        EQU  H'0004'
SMT2PWAIE        EQU  H'0005'
CRCIE            EQU  H'0006'
SCANIE           EQU  H'0007'


;----- PIE5 Bits -----------------------------------------------------
PID1DIE          EQU  H'0000'
PID1EIE          EQU  H'0001'
AT1IE            EQU  H'0002'
TMR5IE           EQU  H'0004'
TMR5GIE          EQU  H'0005'
TMR3IE           EQU  H'0006'
TMR3GIE          EQU  H'0007'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

PS0_OPTION_REG   EQU  H'0000'
PS1_OPTION_REG   EQU  H'0001'
PS2              EQU  H'0002'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
NOT_RWDT         EQU  H'0004'
NOT_WDTWV        EQU  H'0005'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'


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
PLLR             EQU  H'0006'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

ADGO             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO               EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- ADCON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'
TRIGSEL3         EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'


;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1POL            EQU  H'0004'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON1 Bits -----------------------------------------------------
C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0004'
C1PCH1           EQU  H'0005'
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'



;----- CM2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2POL            EQU  H'0004'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0004'
C2PCH1           EQU  H'0005'
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'



;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'


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


;----- DAC1CON0 Bits -----------------------------------------------------
DAC1OE           EQU  H'0005'
DAC1EN           EQU  H'0007'

D1PSS0           EQU  H'0002'
D1PSS1           EQU  H'0003'


;----- DAC1CON1 Bits -----------------------------------------------------
DAC1R0           EQU  H'0000'
DAC1R1           EQU  H'0001'
DAC1R2           EQU  H'0002'
DAC1R3           EQU  H'0003'
DAC1R4           EQU  H'0004'
DAC1R5           EQU  H'0005'
DAC1R6           EQU  H'0006'
DAC1R7           EQU  H'0007'


;----- ZCD1CON Bits -----------------------------------------------------
ZCD1INTN         EQU  H'0000'
ZCD1INTP         EQU  H'0001'
ZCD1POL          EQU  H'0004'
ZCD1OUT          EQU  H'0005'
ZCD1EN           EQU  H'0007'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'



;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'



;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'


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



;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'



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


;----- ODCONA Bits -----------------------------------------------------
ODA0             EQU  H'0000'
ODA1             EQU  H'0001'
ODA2             EQU  H'0002'
ODA4             EQU  H'0004'
ODA5             EQU  H'0005'


;----- ODCONC Bits -----------------------------------------------------
ODC0             EQU  H'0000'
ODC1             EQU  H'0001'
ODC2             EQU  H'0002'
ODC3             EQU  H'0003'
ODC4             EQU  H'0004'
ODC5             EQU  H'0005'


;----- CCPR1L Bits -----------------------------------------------------
CCPR0            EQU  H'0000'
CCPR1            EQU  H'0001'
CCPR2            EQU  H'0002'
CCPR3            EQU  H'0003'
CCPR4            EQU  H'0004'
CCPR5            EQU  H'0005'
CCPR6            EQU  H'0006'
CCPR7            EQU  H'0007'


;----- CCPR1H Bits -----------------------------------------------------
CCPR8            EQU  H'0000'
CCPR9            EQU  H'0001'
CCPR10           EQU  H'0002'
CCPR11           EQU  H'0003'
CCPR12           EQU  H'0004'
CCPR13           EQU  H'0005'
CCPR14           EQU  H'0006'
CCPR15           EQU  H'0007'


;----- CCP1CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT              EQU  H'0005'
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
CTS2             EQU  H'0002'


CCP1CTS0         EQU  H'0000'
CCP1CTS1         EQU  H'0001'
CCP1CTS2         EQU  H'0002'


;----- CCPR2L Bits -----------------------------------------------------
CCPR0            EQU  H'0000'
CCPR1            EQU  H'0001'
CCPR2            EQU  H'0002'
CCPR3            EQU  H'0003'
CCPR4            EQU  H'0004'
CCPR5            EQU  H'0005'
CCPR6            EQU  H'0006'
CCPR7            EQU  H'0007'


;----- CCPR2H Bits -----------------------------------------------------
CCPR8            EQU  H'0000'
CCPR9            EQU  H'0001'
CCPR10           EQU  H'0002'
CCPR11           EQU  H'0003'
CCPR12           EQU  H'0004'
CCPR13           EQU  H'0005'
CCPR14           EQU  H'0006'
CCPR15           EQU  H'0007'


;----- CCP2CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT              EQU  H'0005'
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
CTS2             EQU  H'0002'


CCP2CTS0         EQU  H'0000'
CCP2CTS1         EQU  H'0001'
CCP2CTS2         EQU  H'0002'


;----- CCPTMRS Bits -----------------------------------------------------
CCP1TSEL0        EQU  H'0000'
CCP1TSEL1        EQU  H'0001'
CCP2TSEL0        EQU  H'0002'
CCP2TSEL1        EQU  H'0003'
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


;----- SLRCONC Bits -----------------------------------------------------
SLRC0            EQU  H'0000'
SLRC1            EQU  H'0001'
SLRC2            EQU  H'0002'
SLRC3            EQU  H'0003'
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'


;----- INLVLA Bits -----------------------------------------------------
INLVLA0          EQU  H'0000'
INLVLA1          EQU  H'0001'
INLVLA2          EQU  H'0002'
INLVLA3          EQU  H'0003'
INLVLA4          EQU  H'0004'
INLVLA5          EQU  H'0005'


;----- INLVLC Bits -----------------------------------------------------
INLVLC0          EQU  H'0000'
INLVLC1          EQU  H'0001'
INLVLC2          EQU  H'0002'
INLVLC3          EQU  H'0003'
INLVLC4          EQU  H'0004'
INLVLC5          EQU  H'0005'


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



;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'


;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'


;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'


;----- HIDRVC Bits -----------------------------------------------------
HIDC4            EQU  H'0004'
HIDC5            EQU  H'0005'


;----- T4CON Bits -----------------------------------------------------
ON               EQU  H'0007'

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
CS0              EQU  H'0000'
CS1              EQU  H'0001'
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
ON               EQU  H'0007'

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
CS0              EQU  H'0000'
CS1              EQU  H'0001'
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
TMR3ON           EQU  H'0000'
T3SYNC           EQU  H'0002'

T3CKSP0          EQU  H'0004'
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


;----- T5CON Bits -----------------------------------------------------
TMR5ON           EQU  H'0000'
T5SYNC           EQU  H'0002'

T5CKPS0          EQU  H'0004'
T5CKPS1          EQU  H'0005'
TMR5CS0          EQU  H'0006'
TMR5CS1          EQU  H'0007'


;----- T5GCON Bits -----------------------------------------------------
T5GVAL           EQU  H'0002'
T5GGO_NOT_DONE   EQU  H'0003'
T5GSPM           EQU  H'0004'
T5GTM            EQU  H'0005'
T5GPOL           EQU  H'0006'
TMR5GE           EQU  H'0007'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'


;----- PID1SETL Bits -----------------------------------------------------
PID1SET0         EQU  H'0000'
PID1SET1         EQU  H'0001'
PID1SET2         EQU  H'0002'
PID1SET3         EQU  H'0003'
PID1SET4         EQU  H'0004'
PID1SET5         EQU  H'0005'
PID1SET6         EQU  H'0006'
PID1SET7         EQU  H'0007'

SET0             EQU  H'0000'
SET1             EQU  H'0001'
SET2             EQU  H'0002'
SET3             EQU  H'0003'
SET4             EQU  H'0004'
SET5             EQU  H'0005'
SET6             EQU  H'0006'
SET7             EQU  H'0007'


;----- PID1SETH Bits -----------------------------------------------------
PID1SET8         EQU  H'0000'
PID1SET9         EQU  H'0001'
PID1SET10        EQU  H'0002'
PID1SET11        EQU  H'0003'
PID1SET12        EQU  H'0004'
PID1SET13        EQU  H'0005'
PID1SET14        EQU  H'0006'
PID1SET15        EQU  H'0007'

SET8             EQU  H'0000'
SET9             EQU  H'0001'
SET10            EQU  H'0002'
SET11            EQU  H'0003'
SET12            EQU  H'0004'
SET13            EQU  H'0005'
SET14            EQU  H'0006'
SET15            EQU  H'0007'


;----- PID1INL Bits -----------------------------------------------------
PID1IN0          EQU  H'0000'
PID1IN1          EQU  H'0001'
PID1IN2          EQU  H'0002'
PID1IN3          EQU  H'0003'
PID1IN4          EQU  H'0004'
PID1IN5          EQU  H'0005'
PID1IN6          EQU  H'0006'
PID1IN7          EQU  H'0007'

IN0              EQU  H'0000'
IN1              EQU  H'0001'
IN2              EQU  H'0002'
IN3              EQU  H'0003'
IN4              EQU  H'0004'
IN5              EQU  H'0005'
IN6              EQU  H'0006'
IN7              EQU  H'0007'


;----- PID1INH Bits -----------------------------------------------------
PID1IN8          EQU  H'0000'
PID1IN9          EQU  H'0001'
PID1IN10         EQU  H'0002'
PID1IN11         EQU  H'0003'
PID1IN12         EQU  H'0004'
PID1IN13         EQU  H'0005'
PID1IN14         EQU  H'0006'
PID1IN15         EQU  H'0007'

IN8              EQU  H'0000'
IN9              EQU  H'0001'
IN10             EQU  H'0002'
IN11             EQU  H'0003'
IN12             EQU  H'0004'
IN13             EQU  H'0005'
IN14             EQU  H'0006'
IN15             EQU  H'0007'


;----- PID1K1L Bits -----------------------------------------------------
PID1K10          EQU  H'0000'
PID1K11          EQU  H'0001'
PID1K12          EQU  H'0002'
PID1K13          EQU  H'0003'
PID1K14          EQU  H'0004'
PID1K15          EQU  H'0005'
PID1K16          EQU  H'0006'
PID1K17          EQU  H'0007'

K10              EQU  H'0000'
K11              EQU  H'0001'
K12              EQU  H'0002'
K13              EQU  H'0003'
K14              EQU  H'0004'
K15              EQU  H'0005'
K16              EQU  H'0006'
K17              EQU  H'0007'


;----- PID1K1H Bits -----------------------------------------------------
PID1K18          EQU  H'0000'
PID1K19          EQU  H'0001'
PID1K110         EQU  H'0002'
PID1K111         EQU  H'0003'
PID1K112         EQU  H'0004'
PID1K113         EQU  H'0005'
PID1K114         EQU  H'0006'
PID1K115         EQU  H'0007'

K18              EQU  H'0000'
K19              EQU  H'0001'
K110             EQU  H'0002'
K111             EQU  H'0003'
K112             EQU  H'0004'
K113             EQU  H'0005'
K114             EQU  H'0006'
K115             EQU  H'0007'


;----- PID1K2L Bits -----------------------------------------------------
PID1K20          EQU  H'0000'
PID1K21          EQU  H'0001'
PID1K22          EQU  H'0002'
PID1K23          EQU  H'0003'
PID1K24          EQU  H'0004'
PID1K25          EQU  H'0005'
PID1K26          EQU  H'0006'
PID1K27          EQU  H'0007'

K20              EQU  H'0000'
K21              EQU  H'0001'
K22              EQU  H'0002'
K23              EQU  H'0003'
K24              EQU  H'0004'
K25              EQU  H'0005'
K26              EQU  H'0006'
K27              EQU  H'0007'


;----- PID1K2H Bits -----------------------------------------------------
PID1K28          EQU  H'0000'
PID1K29          EQU  H'0001'
PID1K210         EQU  H'0002'
PID1K211         EQU  H'0003'
PID1K212         EQU  H'0004'
PID1K213         EQU  H'0005'
PID1K214         EQU  H'0006'
PID1K215         EQU  H'0007'

K28              EQU  H'0000'
K29              EQU  H'0001'
K210             EQU  H'0002'
K211             EQU  H'0003'
K212             EQU  H'0004'
K213             EQU  H'0005'
K214             EQU  H'0006'
K215             EQU  H'0007'


;----- PID1K3L Bits -----------------------------------------------------
PID1K30          EQU  H'0000'
PID1K31          EQU  H'0001'
PID1K32          EQU  H'0002'
PID1K33          EQU  H'0003'
PID1K34          EQU  H'0004'
PID1K35          EQU  H'0005'
PID1K36          EQU  H'0006'
PID1K37          EQU  H'0007'

K30              EQU  H'0000'
K31              EQU  H'0001'
K32              EQU  H'0002'
K33              EQU  H'0003'
K34              EQU  H'0004'
K35              EQU  H'0005'
K36              EQU  H'0006'
K37              EQU  H'0007'


;----- PID1K3H Bits -----------------------------------------------------
PID1K38          EQU  H'0000'
PID1K39          EQU  H'0001'
PID1K310         EQU  H'0002'
PID1K311         EQU  H'0003'
PID1K312         EQU  H'0004'
PID1K313         EQU  H'0005'
PID1K314         EQU  H'0006'
PID1K315         EQU  H'0007'

K38              EQU  H'0000'
K39              EQU  H'0001'
K310             EQU  H'0002'
K311             EQU  H'0003'
K312             EQU  H'0004'
K313             EQU  H'0005'
K314             EQU  H'0006'
K315             EQU  H'0007'


;----- PID1OUTLL Bits -----------------------------------------------------
PID1OUT0         EQU  H'0000'
PID1OUT1         EQU  H'0001'
PID1OUT2         EQU  H'0002'
PID1OUT3         EQU  H'0003'
PID1OUT4         EQU  H'0004'
PID1OUT5         EQU  H'0005'
PID1OUT6         EQU  H'0006'
PID1OUT7         EQU  H'0007'

OUT0             EQU  H'0000'
OUT1             EQU  H'0001'
OUT2             EQU  H'0002'
OUT3             EQU  H'0003'
OUT4             EQU  H'0004'
OUT5             EQU  H'0005'
OUT6             EQU  H'0006'
OUT7             EQU  H'0007'


;----- PID1OUTLH Bits -----------------------------------------------------
PID1OUT8         EQU  H'0000'
PID1OUT9         EQU  H'0001'
PID1OUT10        EQU  H'0002'
PID1OUT11        EQU  H'0003'
PID1OUT12        EQU  H'0004'
PID1OUT13        EQU  H'0005'
PID1OUT14        EQU  H'0006'
PID1OUT15        EQU  H'0007'

OUT8             EQU  H'0000'
OUT9             EQU  H'0001'
OUT10            EQU  H'0002'
OUT11            EQU  H'0003'
OUT12            EQU  H'0004'
OUT13            EQU  H'0005'
OUT14            EQU  H'0006'
OUT15            EQU  H'0007'


;----- PID1OUTHL Bits -----------------------------------------------------
PID1OUT16        EQU  H'0000'
PID1OUT17        EQU  H'0001'
PID1OUT18        EQU  H'0002'
PID1OUT19        EQU  H'0003'
PID1OUT20        EQU  H'0004'
PID1OUT21        EQU  H'0005'
PID1OUT22        EQU  H'0006'
PID1OUT23        EQU  H'0007'

OUT16            EQU  H'0000'
OUT17            EQU  H'0001'
OUT18            EQU  H'0002'
OUT19            EQU  H'0003'
OUT20            EQU  H'0004'
OUT21            EQU  H'0005'
OUT22            EQU  H'0006'
OUT23            EQU  H'0007'


;----- PID1OUTHH Bits -----------------------------------------------------
PID1OUT24        EQU  H'0000'
PID1OUT25        EQU  H'0001'
PID1OUT26        EQU  H'0002'
PID1OUT27        EQU  H'0003'
PID1OUT28        EQU  H'0004'
PID1OUT29        EQU  H'0005'
PID1OUT30        EQU  H'0006'
PID1OUT31        EQU  H'0007'

OUT24            EQU  H'0000'
OUT25            EQU  H'0001'
OUT26            EQU  H'0002'
OUT27            EQU  H'0003'
OUT28            EQU  H'0004'
OUT29            EQU  H'0005'
OUT30            EQU  H'0006'
OUT31            EQU  H'0007'


;----- PID1OUTU Bits -----------------------------------------------------
PID1OUT32        EQU  H'0000'
PID1OUT33        EQU  H'0001'
PID1OUT34        EQU  H'0002'
PID1OUT35        EQU  H'0003'

OUT32            EQU  H'0000'
OUT33            EQU  H'0001'
OUT34            EQU  H'0002'
OUT35            EQU  H'0003'


;----- PID1Z1L Bits -----------------------------------------------------
PID1Z10          EQU  H'0000'
PID1Z11          EQU  H'0001'
PID1Z12          EQU  H'0002'
PID1Z13          EQU  H'0003'
PID1Z14          EQU  H'0004'
PID1Z15          EQU  H'0005'
PID1Z16          EQU  H'0006'
PID1Z17          EQU  H'0007'

Z10              EQU  H'0000'
Z11              EQU  H'0001'
Z12              EQU  H'0002'
Z13              EQU  H'0003'
Z14              EQU  H'0004'
Z15              EQU  H'0005'
Z16              EQU  H'0006'
Z17              EQU  H'0007'


;----- PID1Z1H Bits -----------------------------------------------------
PID1Z18          EQU  H'0000'
PID1Z19          EQU  H'0001'
PID1Z110         EQU  H'0002'
PID1Z111         EQU  H'0003'
PID1Z112         EQU  H'0004'
PID1Z113         EQU  H'0005'
PID1Z114         EQU  H'0006'
PID1Z115         EQU  H'0007'

Z18              EQU  H'0000'
Z19              EQU  H'0001'
Z110             EQU  H'0002'
Z111             EQU  H'0003'
Z112             EQU  H'0004'
Z113             EQU  H'0005'
Z114             EQU  H'0006'
Z115             EQU  H'0007'


;----- PID1Z1U Bits -----------------------------------------------------
PID1Z116         EQU  H'0000'

Z116             EQU  H'0000'


;----- PID1Z2L Bits -----------------------------------------------------
PID1Z20          EQU  H'0000'
PID1Z21          EQU  H'0001'
PID1Z22          EQU  H'0002'
PID1Z23          EQU  H'0003'
PID1Z24          EQU  H'0004'
PID1Z25          EQU  H'0005'
PID1Z26          EQU  H'0006'
PID1Z27          EQU  H'0007'

Z20              EQU  H'0000'
Z21              EQU  H'0001'
Z22              EQU  H'0002'
Z23              EQU  H'0003'
Z24              EQU  H'0004'
Z25              EQU  H'0005'
Z26              EQU  H'0006'
Z27              EQU  H'0007'


;----- PID1Z2H Bits -----------------------------------------------------
PID1Z28          EQU  H'0000'
PID1Z29          EQU  H'0001'
PID1Z210         EQU  H'0002'
PID1Z211         EQU  H'0003'
PID1Z212         EQU  H'0004'
PID1Z213         EQU  H'0005'
PID1Z214         EQU  H'0006'
PID1Z215         EQU  H'0007'

Z28              EQU  H'0000'
Z29              EQU  H'0001'
Z210             EQU  H'0002'
Z211             EQU  H'0003'
Z212             EQU  H'0004'
Z213             EQU  H'0005'
Z214             EQU  H'0006'
Z215             EQU  H'0007'


;----- PID1Z2U Bits -----------------------------------------------------
PID1Z216         EQU  H'0000'

Z216             EQU  H'0000'


;----- PID1ACCLL Bits -----------------------------------------------------
PID1ACC0         EQU  H'0000'
PID1ACC1         EQU  H'0001'
PID1ACC2         EQU  H'0002'
PID1ACC3         EQU  H'0003'
PID1ACC4         EQU  H'0004'
PID1ACC5         EQU  H'0005'
PID1ACC6         EQU  H'0006'
PID1ACC7         EQU  H'0007'

ACC0             EQU  H'0000'
ACC1             EQU  H'0001'
ACC2             EQU  H'0002'
ACC3             EQU  H'0003'
ACC4             EQU  H'0004'
ACC5             EQU  H'0005'
ACC6             EQU  H'0006'
ACC7             EQU  H'0007'


;----- PID1ACCLH Bits -----------------------------------------------------
PID1ACC8         EQU  H'0000'
PID1ACC9         EQU  H'0001'
PID1ACC10        EQU  H'0002'
PID1ACC11        EQU  H'0003'
PID1ACC12        EQU  H'0004'
PID1ACC13        EQU  H'0005'
PID1ACC14        EQU  H'0006'
PID1ACC15        EQU  H'0007'

ACC8             EQU  H'0000'
ACC9             EQU  H'0001'
ACC10            EQU  H'0002'
ACC11            EQU  H'0003'
ACC12            EQU  H'0004'
ACC13            EQU  H'0005'
ACC14            EQU  H'0006'
ACC15            EQU  H'0007'


;----- PID1ACCHL Bits -----------------------------------------------------
PID1ACC16        EQU  H'0000'
PID1ACC17        EQU  H'0001'
PID1ACC18        EQU  H'0002'
PID1ACC19        EQU  H'0003'
PID1ACC20        EQU  H'0004'
PID1ACC21        EQU  H'0005'
PID1ACC22        EQU  H'0006'
PID1ACC23        EQU  H'0007'

ACC16            EQU  H'0000'
ACC17            EQU  H'0001'
ACC18            EQU  H'0002'
ACC19            EQU  H'0003'
ACC20            EQU  H'0004'
ACC21            EQU  H'0005'
ACC22            EQU  H'0006'
ACC23            EQU  H'0007'


;----- PID1ACCHH Bits -----------------------------------------------------
PID1ACC24        EQU  H'0000'
PID1ACC25        EQU  H'0001'
PID1ACC26        EQU  H'0002'
PID1ACC27        EQU  H'0003'
PID1ACC28        EQU  H'0004'
PID1ACC29        EQU  H'0005'
PID1ACC30        EQU  H'0006'
PID1ACC31        EQU  H'0007'

ACC24            EQU  H'0000'
ACC25            EQU  H'0001'
ACC26            EQU  H'0002'
ACC27            EQU  H'0003'
ACC28            EQU  H'0004'
ACC29            EQU  H'0005'
ACC30            EQU  H'0006'
ACC31            EQU  H'0007'


;----- PID1ACCU Bits -----------------------------------------------------
PID1ACC32        EQU  H'0000'
PID1ACC33        EQU  H'0001'
PID1ACC34        EQU  H'0002'

ACC32            EQU  H'0000'
ACC33            EQU  H'0001'
ACC34            EQU  H'0002'


;----- PID1CON Bits -----------------------------------------------------
PID1BUSY         EQU  H'0006'
PID1EN           EQU  H'0007'

BUSY_PID1CON     EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'

PID1MODE0        EQU  H'0000'
PID1MODE1        EQU  H'0001'
PID1MODE2        EQU  H'0002'


;----- PWM3DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

PWM3DC0          EQU  H'0006'
PWM3DC1          EQU  H'0007'


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


;----- PWM3CON Bits -----------------------------------------------------
POL_PWM3CON      EQU  H'0004'
OUT              EQU  H'0005'
EN               EQU  H'0007'

PWM3POL          EQU  H'0004'
PWM3OUT          EQU  H'0005'
PWM3EN           EQU  H'0007'


;----- PWM4DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

PWM4DC0          EQU  H'0006'
PWM4DC1          EQU  H'0007'


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


;----- PWM4CON Bits -----------------------------------------------------
POL_PWM4CON      EQU  H'0004'
OUT              EQU  H'0005'
EN               EQU  H'0007'

PWM4POL          EQU  H'0004'
PWM4OUT          EQU  H'0005'
PWM4EN           EQU  H'0007'


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
INAS             EQU  H'0000'
C1AS             EQU  H'0001'
C2AS             EQU  H'0002'
TMR2AS           EQU  H'0004'
TMR4AS           EQU  H'0005'
TMR6AS           EQU  H'0006'

CWG1INAS         EQU  H'0000'
CWG1C1AS         EQU  H'0001'
CWG1C2AS         EQU  H'0002'
CWG1TMR2AS       EQU  H'0004'
CWG1TMR4AS       EQU  H'0005'
CWG1TMR6AS       EQU  H'0006'


;----- CWG1OCON0 Bits -----------------------------------------------------
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


;----- CWG1CLKCON Bits -----------------------------------------------------
CS               EQU  H'0000'

CWG1CS           EQU  H'0000'


;----- CWG1ISM Bits -----------------------------------------------------
IS0              EQU  H'0000'
IS1              EQU  H'0001'
IS2              EQU  H'0002'
IS3              EQU  H'0003'


CWG1IS0          EQU  H'0000'
CWG1IS1          EQU  H'0001'
CWG1IS2          EQU  H'0002'
CWG1IS3          EQU  H'0003'


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


;----- SCANLADRL Bits -----------------------------------------------------
LDAR0            EQU  H'0000'
LDAR1            EQU  H'0001'
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


;----- SCANHADRL Bits -----------------------------------------------------
HADR0            EQU  H'0000'
HADR1            EQU  H'0001'
HARD2            EQU  H'0002'
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


;----- SCANCON0 Bits -----------------------------------------------------
INTM             EQU  H'0003'
INVALID          EQU  H'0004'
BUSY_SCANCON0    EQU  H'0005'
SCANGO           EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'

SCANINTM         EQU  H'0003'
SCANINVALID      EQU  H'0004'
SCANBUSY         EQU  H'0005'
SCANEN           EQU  H'0007'

SCANMODE0        EQU  H'0000'
SCANMODE1        EQU  H'0001'


;----- SCANTRIG Bits -----------------------------------------------------
TSEL0            EQU  H'0000'
TSEL1            EQU  H'0001'
TSEL2            EQU  H'0002'
TSEL3            EQU  H'0003'


SCANTSEL0        EQU  H'0000'
SCANTSEL1        EQU  H'0001'
SCANTSEL2        EQU  H'0002'
SCANTSEL3        EQU  H'0003'


;----- CRCDATL Bits -----------------------------------------------------
DAT0             EQU  H'0000'
DAT1             EQU  H'0001'
DAT2             EQU  H'0002'
DAT3             EQU  H'0003'
DAT4             EQU  H'0004'
DAT5             EQU  H'0005'
DAT6             EQU  H'0006'
DAT7             EQU  H'0007'


CRCDAT0          EQU  H'0000'
CRCDAT1          EQU  H'0001'
CRCDAT2          EQU  H'0002'
CRCDAT3          EQU  H'0003'
CRCDAT4          EQU  H'0004'
CRCDAT5          EQU  H'0005'
CRCDAT6          EQU  H'0006'
CRDCDAT7         EQU  H'0007'


;----- CRCDATH Bits -----------------------------------------------------
DAT8             EQU  H'0000'
DAT9             EQU  H'0001'
DAT10            EQU  H'0002'
DAT11            EQU  H'0003'
DAT12            EQU  H'0004'
DAT13            EQU  H'0005'
DAT14            EQU  H'0006'
DAT15            EQU  H'0007'


CRCDAT8          EQU  H'0000'
CRCDAT9          EQU  H'0001'
CRCDAT10         EQU  H'0002'
CRCDAT11         EQU  H'0003'
CRCDAT12         EQU  H'0004'
CRCDAT13         EQU  H'0005'
CRCDAT14         EQU  H'0006'
CRCDAT15         EQU  H'0007'


;----- CRCACCL Bits -----------------------------------------------------
ACC0             EQU  H'0000'
ACC1             EQU  H'0001'
ACC2             EQU  H'0002'
ACC3             EQU  H'0003'
ACC4             EQU  H'0004'
ACC5             EQU  H'0005'
ACC6             EQU  H'0006'
ACC7             EQU  H'0007'


CRCACC0          EQU  H'0000'
CRCACC1          EQU  H'0001'
CRCACC2          EQU  H'0002'
CRCACC3          EQU  H'0003'
CRCACC4          EQU  H'0004'
CRCACC5          EQU  H'0005'
CRCACC6          EQU  H'0006'
CRCACC7          EQU  H'0007'


;----- CRCACCH Bits -----------------------------------------------------
ACC8             EQU  H'0000'
ACC9             EQU  H'0001'
ACC10            EQU  H'0002'
ACC11            EQU  H'0003'
ACC12            EQU  H'0004'
ACC13            EQU  H'0005'
ACC14            EQU  H'0006'
ACC15            EQU  H'0007'


CRCACC8          EQU  H'0000'
CRCACC9          EQU  H'0001'
CRCACC10         EQU  H'0002'
CRCACC11         EQU  H'0003'
CRCACC12         EQU  H'0004'
CRCACC13         EQU  H'0005'
CRCACC14         EQU  H'0006'
CRCACC15         EQU  H'0007'


;----- CRCSHIFTL Bits -----------------------------------------------------
SHIFT0           EQU  H'0000'
SHIFT1           EQU  H'0001'
SHIFT2           EQU  H'0002'
SHIFT3           EQU  H'0003'
SHIFT4           EQU  H'0004'
SHIFT5           EQU  H'0005'
SHIFT6           EQU  H'0006'
SHIFT7           EQU  H'0007'


CRCSHIFT0        EQU  H'0000'
CRCSHIFT1        EQU  H'0001'
CRCSHIFT2        EQU  H'0002'
CRCSHIFT3        EQU  H'0003'
CRCSHIFT4        EQU  H'0004'
CRCSHIFT5        EQU  H'0005'
CRCSHIFT6        EQU  H'0006'
CRCSHIFT7        EQU  H'0007'


;----- CRCSHIFTH Bits -----------------------------------------------------
SHIFT8           EQU  H'0000'
SHIFT9           EQU  H'0001'
SHIFT10          EQU  H'0002'
SHIFT11          EQU  H'0003'
SHIFT12          EQU  H'0004'
SHIFT13          EQU  H'0005'
SHIFT14          EQU  H'0006'
SHIFT15          EQU  H'0007'


CRCSHIFT8        EQU  H'0000'
CRCSHIFT9        EQU  H'0001'
CRCSHIFT10       EQU  H'0002'
CRCSHIFT11       EQU  H'0003'
CRCSHIFT12       EQU  H'0004'
CRCSHIFT13       EQU  H'0005'
CRCSHIFT14       EQU  H'0006'
CRCSHIFT15       EQU  H'0007'


;----- CRCXORL Bits -----------------------------------------------------
XOR1             EQU  H'0001'
XOR2             EQU  H'0002'
XOR3             EQU  H'0003'
XOR4             EQU  H'0004'
XOR5             EQU  H'0005'
XOR6             EQU  H'0006'
XOR7             EQU  H'0007'

CRCXOR1          EQU  H'0001'
CRCXOR2          EQU  H'0002'
CRCXOR3          EQU  H'0003'
CRCXOR4          EQU  H'0004'
CRCXOR5          EQU  H'0005'
CRCXOR6          EQU  H'0006'
CRCXOR7          EQU  H'0007'


;----- CRCXORH Bits -----------------------------------------------------
XOR8             EQU  H'0000'
XOR9             EQU  H'0001'
XOR10            EQU  H'0002'
XOR11            EQU  H'0003'
XOR12            EQU  H'0004'
XOR13            EQU  H'0005'
XOR14            EQU  H'0006'
XOR15            EQU  H'0007'

CRCXOR8          EQU  H'0000'
CRCXOR9          EQU  H'0001'
CRCXOR10         EQU  H'0002'
CRCXOR11         EQU  H'0003'
CRCXOR12         EQU  H'0004'
CRCXOR13         EQU  H'0005'
CRCXOR14         EQU  H'0006'
CRCXOR15         EQU  H'0007'


;----- CRCCON0 Bits -----------------------------------------------------
FULL             EQU  H'0000'
SHIFTM           EQU  H'0001'
ACCM             EQU  H'0004'
BUSY_CRCCON0     EQU  H'0005'
CRCGO            EQU  H'0006'
EN               EQU  H'0007'

CRCFULL          EQU  H'0000'
CRCSHIFTM        EQU  H'0001'
CRCACCM          EQU  H'0004'
CRCBUSY          EQU  H'0005'
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


CRCPLEN0         EQU  H'0000'
CRCPLEN1         EQU  H'0001'
CRCPLEN2         EQU  H'0002'
CRCPLEN3         EQU  H'0003'
CRCDLEN0         EQU  H'0004'
CRCDLEN1         EQU  H'0005'
CRCDLEN2         EQU  H'0006'
CRCDLEN3         EQU  H'0007'


;----- AT1RESL Bits -----------------------------------------------------
AT1RES0          EQU  H'0000'
AT1RES1          EQU  H'0001'
AT1RES2          EQU  H'0002'
AT1RES3          EQU  H'0003'
AT1RES4          EQU  H'0004'
AT1RES5          EQU  H'0005'
AT1RES6          EQU  H'0006'
AT1RES7          EQU  H'0007'

RES0             EQU  H'0000'
RES1             EQU  H'0001'
RES2             EQU  H'0002'
RES3             EQU  H'0003'
RES4             EQU  H'0004'
RES5             EQU  H'0005'
RES6             EQU  H'0006'
RES7             EQU  H'0007'


;----- AT1RESH Bits -----------------------------------------------------
AT1RES8          EQU  H'0000'
AT1RES9          EQU  H'0001'

RES8             EQU  H'0000'
RES9             EQU  H'0001'


;----- AT1MISSL Bits -----------------------------------------------------
AT1MISS0         EQU  H'0000'
AT1MISS1         EQU  H'0001'
AT1MISS2         EQU  H'0002'
AT1MISS3         EQU  H'0003'
AT1MISS4         EQU  H'0004'
AT1MISS5         EQU  H'0005'
AT1MISS6         EQU  H'0006'
AT1MISS7         EQU  H'0007'

MISS0            EQU  H'0000'
MISS1            EQU  H'0001'
MISS2            EQU  H'0002'
MISS3            EQU  H'0003'
MISS4            EQU  H'0004'
MISS5            EQU  H'0005'
MISS6            EQU  H'0006'
MISS7            EQU  H'0007'


;----- AT1MISSH Bits -----------------------------------------------------
AT1MISS8         EQU  H'0000'
AT1MISS9         EQU  H'0001'
AT1MISS10        EQU  H'0002'
AT1MISS11        EQU  H'0003'
AT1MISS12        EQU  H'0004'
AT1MISS13        EQU  H'0005'
AT1MISS14        EQU  H'0006'
AT1MISS15        EQU  H'0007'

MISS8            EQU  H'0000'
MISS9            EQU  H'0001'
MISS10           EQU  H'0002'
MISS11           EQU  H'0003'
MISS12           EQU  H'0004'
MISS13           EQU  H'0005'
MISS14           EQU  H'0006'
MISS15           EQU  H'0007'


;----- AT1PERL Bits -----------------------------------------------------
AT1PER0          EQU  H'0000'
AT1PER1          EQU  H'0001'
AT1PER2          EQU  H'0002'
AT1PER3          EQU  H'0003'
AT1PER4          EQU  H'0004'
AT1PER5          EQU  H'0005'
AT1PER6          EQU  H'0006'
AT1PER7          EQU  H'0007'

PER0             EQU  H'0000'
PER1             EQU  H'0001'
PER2             EQU  H'0002'
PER3             EQU  H'0003'
PER4             EQU  H'0004'
PER5             EQU  H'0005'
PER6             EQU  H'0006'
PER7             EQU  H'0007'


;----- AT1PERH Bits -----------------------------------------------------
AT1PER8          EQU  H'0000'
AT1PER9          EQU  H'0001'
AT1PER10         EQU  H'0002'
AT1PER11         EQU  H'0003'
AT1PER12         EQU  H'0004'
AT1PER13         EQU  H'0005'
AT1PER14         EQU  H'0006'
AT1POV           EQU  H'0007'

PER8             EQU  H'0000'
PER9             EQU  H'0001'
PER10            EQU  H'0002'
PER11            EQU  H'0003'
PER12            EQU  H'0004'
PER13            EQU  H'0005'
PER14            EQU  H'0006'
PER15            EQU  H'0007'


;----- AT1PHSL Bits -----------------------------------------------------
AT1PHS0          EQU  H'0000'
AT1PHS1          EQU  H'0001'
AT1PHS2          EQU  H'0002'
AT1PHS3          EQU  H'0003'
AT1PHS4          EQU  H'0004'
AT1PHS5          EQU  H'0005'
AT1PHS6          EQU  H'0006'
AT1PHS7          EQU  H'0007'

PHS0             EQU  H'0000'
PHS1             EQU  H'0001'
PHS2             EQU  H'0002'
PHS3             EQU  H'0003'
PHS4             EQU  H'0004'
PHS5             EQU  H'0005'
PHS6             EQU  H'0006'
PHS7             EQU  H'0007'


;----- AT1PHSH Bits -----------------------------------------------------
AT1PHS8          EQU  H'0000'
AT1PHS9          EQU  H'0001'

PHS8             EQU  H'0000'
PHS9             EQU  H'0001'


;----- AT1CON0 Bits -----------------------------------------------------
MODE             EQU  H'0000'
APMOD            EQU  H'0001'
POL_AT1CON0      EQU  H'0003'
PREC             EQU  H'0006'
EN               EQU  H'0007'

PS0_AT1CON0      EQU  H'0004'
PS1_AT1CON0      EQU  H'0005'

AT1MODE          EQU  H'0000'
AT1APMOD         EQU  H'0001'
AT1POL           EQU  H'0003'
AT1PREC          EQU  H'0006'
AT1EN            EQU  H'0007'

AT1PS0           EQU  H'0004'
AT1PS1           EQU  H'0005'


;----- AT1CON1 Bits -----------------------------------------------------
VALID            EQU  H'0000'
ACCS             EQU  H'0001'
MPP              EQU  H'0002'
PRP              EQU  H'0004'
PHP              EQU  H'0006'

AT1VALID         EQU  H'0000'
AT1ACCS          EQU  H'0001'
AT1MPP           EQU  H'0002'
AT1PRP           EQU  H'0004'
AT1PHP           EQU  H'0006'


;----- AT1IR0 Bits -----------------------------------------------------
AT1PERIF         EQU  H'0000'
AT1MISSIF        EQU  H'0001'
AT1PHSIF         EQU  H'0002'


;----- AT1IE0 Bits -----------------------------------------------------
AT1PERIE         EQU  H'0000'
AT1MISSIE        EQU  H'0001'
AT1PHSIE         EQU  H'0002'


;----- AT1IR1 Bits -----------------------------------------------------
AT1CC1IF         EQU  H'0000'
AT1CC2IF         EQU  H'0001'
AT1CC3IF         EQU  H'0002'


;----- AT1IE1 Bits -----------------------------------------------------
AT1CC1IE         EQU  H'0000'
AT1CC2IE         EQU  H'0001'
AT1CC3IE         EQU  H'0002'


;----- AT1STPTL Bits -----------------------------------------------------
AT1STPT0         EQU  H'0000'
AT1STPT1         EQU  H'0001'
AT1STPT2         EQU  H'0002'
AT1STPT3         EQU  H'0003'
AT1STPT4         EQU  H'0004'
AT1STPT5         EQU  H'0005'
AT1STPT6         EQU  H'0006'
AT1STPT7         EQU  H'0007'

STPT0            EQU  H'0000'
STPT1            EQU  H'0001'
STPT2            EQU  H'0002'
STPT3            EQU  H'0003'
STPT4            EQU  H'0004'
STPT5            EQU  H'0005'
STPT6            EQU  H'0006'
STPT7            EQU  H'0007'


;----- AT1STPTH Bits -----------------------------------------------------
AT1STPT8         EQU  H'0000'
AT1STPT9         EQU  H'0001'
AT1STPT10        EQU  H'0002'
AT1STPT11        EQU  H'0003'
AT1STPT12        EQU  H'0004'
AT1STPT13        EQU  H'0005'
AT1STPT14        EQU  H'0006'

STPT8            EQU  H'0000'
STPT9            EQU  H'0001'
STPT10           EQU  H'0002'
STPT11           EQU  H'0003'
STPT12           EQU  H'0004'
STPT13           EQU  H'0005'
STPT14           EQU  H'0006'


;----- AT1ERRL Bits -----------------------------------------------------
AT1ERR0          EQU  H'0000'
AT1ERR1          EQU  H'0001'
AT1ERR2          EQU  H'0002'
AT1ERR3          EQU  H'0003'
AT1ERR4          EQU  H'0004'
AT1ERR5          EQU  H'0005'
AT1ERR6          EQU  H'0006'
AT1ERR7          EQU  H'0007'

ERR0             EQU  H'0000'
ERR1             EQU  H'0001'
ERR2             EQU  H'0002'
ERR3             EQU  H'0003'
ERR4             EQU  H'0004'
ERR5             EQU  H'0005'
ERR6             EQU  H'0006'
ERR7             EQU  H'0007'


;----- AT1ERRH Bits -----------------------------------------------------
AT1ERR8          EQU  H'0000'
AT1ERR9          EQU  H'0001'
AT1ERR10         EQU  H'0002'
AT1ERR11         EQU  H'0003'
AT1ERR12         EQU  H'0004'
AT1ERR13         EQU  H'0005'
AT1ERR14         EQU  H'0006'
AT1ERR15         EQU  H'0007'

ERR8             EQU  H'0000'
ERR9             EQU  H'0001'
ERR10            EQU  H'0002'
ERR11            EQU  H'0003'
ERR12            EQU  H'0004'
ERR13            EQU  H'0005'
ERR14            EQU  H'0006'
ERR15            EQU  H'0007'


;----- AT1CLK Bits -----------------------------------------------------
CS               EQU  H'0000'

AT1CS            EQU  H'0000'

CS0              EQU  H'0000'

AT1CS0           EQU  H'0000'


;----- AT1SIG Bits -----------------------------------------------------
AT1SSEL0         EQU  H'0000'
AT1SSEL1         EQU  H'0001'
AT1SSEL2         EQU  H'0002'

SSEL0            EQU  H'0000'
SSEL1            EQU  H'0001'
SSEL2            EQU  H'0002'



;----- AT1CSEL1 Bits -----------------------------------------------------
AT1CP1S0         EQU  H'0000'
AT1CP1S1         EQU  H'0001'
AT1CP1S2         EQU  H'0002'

CP1S0            EQU  H'0000'
CP1S1            EQU  H'0001'
CP1S2            EQU  H'0002'



;----- AT1CC1L Bits -----------------------------------------------------
AT1CC10          EQU  H'0000'
AT1CC11          EQU  H'0001'
AT1CC12          EQU  H'0002'
AT1CC13          EQU  H'0003'
AT1CC14          EQU  H'0004'
AT1CC15          EQU  H'0005'
AT1CC16          EQU  H'0006'
AT1CC17          EQU  H'0007'

CC10             EQU  H'0000'
CC11             EQU  H'0001'
CC12             EQU  H'0002'
CC13             EQU  H'0003'
CC14             EQU  H'0004'
CC15             EQU  H'0005'
CC16             EQU  H'0006'
CC17             EQU  H'0007'


;----- AT1CC1H Bits -----------------------------------------------------
AT1CC18          EQU  H'0000'
AT1CC19          EQU  H'0001'

CC18             EQU  H'0000'
CC19             EQU  H'0001'


;----- AT1CCON1 Bits -----------------------------------------------------
AT1CC1MODE       EQU  H'0000'
AT1CAP1P         EQU  H'0003'
AT1CC1POL        EQU  H'0004'
AT1CC1EN         EQU  H'0007'

CC1MODE          EQU  H'0000'
CAP1P            EQU  H'0003'
CC1POL           EQU  H'0004'
CC1EN            EQU  H'0007'


;----- AT1CSEL2 Bits -----------------------------------------------------
AT1CP2S0         EQU  H'0000'
AT1CP2S1         EQU  H'0001'
AT1CP2S2         EQU  H'0002'


CP2S0            EQU  H'0000'
CP2S1            EQU  H'0001'
CP2S2            EQU  H'0002'


;----- AT1CC2L Bits -----------------------------------------------------
AT1CC20          EQU  H'0000'
AT1CC21          EQU  H'0001'
AT1CC22          EQU  H'0002'
AT1CC23          EQU  H'0003'
AT1CC24          EQU  H'0004'
AT1CC25          EQU  H'0005'
AT1CC26          EQU  H'0006'
AT1CC27          EQU  H'0007'

CC20             EQU  H'0000'
CC21             EQU  H'0001'
CC22             EQU  H'0002'
CC13             EQU  H'0003'
CC24             EQU  H'0004'
CCW5             EQU  H'0005'
CC26             EQU  H'0006'
CC27             EQU  H'0007'


;----- AT1CC2H Bits -----------------------------------------------------
AT1CC28          EQU  H'0000'
AT1CC29          EQU  H'0001'

CC28             EQU  H'0000'
CC29             EQU  H'0001'


;----- AT1CCON2 Bits -----------------------------------------------------
AT1CC2MODE       EQU  H'0000'
AT1CAP2P         EQU  H'0003'
AT1CC2POL        EQU  H'0004'
AT1CC2EN         EQU  H'0007'

CC2MODE          EQU  H'0000'
CAP2P            EQU  H'0003'
CC2POL           EQU  H'0004'
CC2EN            EQU  H'0007'


;----- AT1CSEL3 Bits -----------------------------------------------------
AT1CP3S0         EQU  H'0000'
AT1CP3S1         EQU  H'0001'
AT1CP3S2         EQU  H'0002'


CP3S0            EQU  H'0000'
CP3S1            EQU  H'0001'
CP3S2            EQU  H'0002'


;----- AT1CC3L Bits -----------------------------------------------------
AT1CC30          EQU  H'0000'
AT1CC31          EQU  H'0001'
AT1CC32          EQU  H'0002'
AT1CC33          EQU  H'0003'
AT1CC34          EQU  H'0004'
AT1CC35          EQU  H'0005'
AT1CC36          EQU  H'0006'
AT1CC37          EQU  H'0007'

CC30             EQU  H'0000'
CC31             EQU  H'0001'
CC32             EQU  H'0002'
CC33             EQU  H'0003'
CC34             EQU  H'0004'
CC35             EQU  H'0005'
CC36             EQU  H'0006'
CC37             EQU  H'0007'


;----- AT1CC3H Bits -----------------------------------------------------
AT1CC38          EQU  H'0000'
AT1CC39          EQU  H'0001'

CC38             EQU  H'0000'
CC39             EQU  H'0001'


;----- AT1CCON3 Bits -----------------------------------------------------
AT1CC3MODE       EQU  H'0000'
AT1CAP3P         EQU  H'0003'
AT1CC3POL        EQU  H'0004'
AT1CC3EN         EQU  H'0007'

CC3MODE          EQU  H'0000'
CAP3P            EQU  H'0003'
CC3POL           EQU  H'0004'
CC3EN            EQU  H'0007'


;----- SMT1TMRL Bits -----------------------------------------------------
SMT1TMR0         EQU  H'0000'
SMT1TMR1         EQU  H'0001'
SMT1TMR2         EQU  H'0002'
SMT1TMR3         EQU  H'0003'
SMT1TMR4         EQU  H'0004'
SMT1TMR5         EQU  H'0005'
SMT1TMR6         EQU  H'0006'
SMT1TMR7         EQU  H'0007'


;----- SMT1TMRH Bits -----------------------------------------------------
SMT1TMR8         EQU  H'0000'
SMT1TMR9         EQU  H'0001'
SMT1TMR10        EQU  H'0002'
SMT1TMR11        EQU  H'0003'
SMT1TMR12        EQU  H'0004'
SMT1TMR13        EQU  H'0005'
SMT1TMR14        EQU  H'0006'
SMT1TMR15        EQU  H'0007'


;----- SMT1TMRU Bits -----------------------------------------------------
SMT1TMR16        EQU  H'0000'
SMT1TMR17        EQU  H'0001'
SMT1TMR18        EQU  H'0002'
SMT1TMR19        EQU  H'0003'
SMT1TMR20        EQU  H'0004'
SMT1TMR21        EQU  H'0005'
SMT1TMR22        EQU  H'0006'
SMT1TMR23        EQU  H'0007'


;----- SMT1CPRL Bits -----------------------------------------------------
SMT1CPR0         EQU  H'0000'
SMT1CPR1         EQU  H'0001'
SMT1CPR2         EQU  H'0002'
SMT1CPR3         EQU  H'0003'
SMT1CPR4         EQU  H'0004'
SMT1CPR5         EQU  H'0005'
SMT1CPR6         EQU  H'0006'
SMT1CPR7         EQU  H'0007'


;----- SMT1CPRH Bits -----------------------------------------------------
SMT1CPR8         EQU  H'0000'
SMT1CPR9         EQU  H'0001'
SMT1CPR10        EQU  H'0002'
SMT1CPR11        EQU  H'0003'
SMT1CPR12        EQU  H'0004'
SMT1CPR13        EQU  H'0005'
SMT1CPR14        EQU  H'0006'
SMT1CPR15        EQU  H'0007'


;----- SMT1CPRU Bits -----------------------------------------------------
SMT1CPR16        EQU  H'0000'
SMT1CPR17        EQU  H'0001'
SMT1CPR18        EQU  H'0002'
SMT1CPR19        EQU  H'0003'
SMT1CPR20        EQU  H'0004'
SMT1CPR21        EQU  H'0005'
SMT1CPR22        EQU  H'0006'
SMT1CPR23        EQU  H'0007'


;----- SMT1CPWL Bits -----------------------------------------------------
SMT1CPW0         EQU  H'0000'
SMT1CPW1         EQU  H'0001'
SMT1CPW2         EQU  H'0002'
SMT1CPW3         EQU  H'0003'
SMT1CPW4         EQU  H'0004'
SMT1CPW5         EQU  H'0005'
SMT1CPW6         EQU  H'0006'
SMT1CPW7         EQU  H'0007'


;----- SMT1CPWH Bits -----------------------------------------------------
SMT1CPW8         EQU  H'0000'
SMT1CPW9         EQU  H'0001'
SMT1CPW10        EQU  H'0002'
SMT1CPW11        EQU  H'0003'
SMT1CPW12        EQU  H'0004'
SMT1CPW13        EQU  H'0005'
SMT1CPW14        EQU  H'0006'
SMT1CPW15        EQU  H'0007'


;----- SMT1CPWU Bits -----------------------------------------------------
SMT1CPW16        EQU  H'0000'
SMT1CPW17        EQU  H'0001'
SMT1CPW18        EQU  H'0002'
SMT1CPW19        EQU  H'0003'
SMT1CPW20        EQU  H'0004'
SMT1CPW21        EQU  H'0005'
SMT1CPW22        EQU  H'0006'
SMT1CPW23        EQU  H'0007'


;----- SMT1PRL Bits -----------------------------------------------------
SMT1PR0          EQU  H'0000'
SMT1PR1          EQU  H'0001'
SMT1PR2          EQU  H'0002'
SMT1PR3          EQU  H'0003'
SMT1PR4          EQU  H'0004'
SMT1PR5          EQU  H'0005'
SMT1PR6          EQU  H'0006'
SMT1PR7          EQU  H'0007'


;----- SMT1PRH Bits -----------------------------------------------------
SMT1PR8          EQU  H'0000'
SMT1PR9          EQU  H'0001'
SMT1PR10         EQU  H'0002'
SMT1PR11         EQU  H'0003'
SMT1PR12         EQU  H'0004'
SMT1PR13         EQU  H'0005'
SMT1PR14         EQU  H'0006'
SMT1PR15         EQU  H'0007'


;----- SMT1PRU Bits -----------------------------------------------------
SMT1PR16         EQU  H'0000'
SMT1PR17         EQU  H'0001'
SMT1PR18         EQU  H'0002'
SMT1PR19         EQU  H'0003'
SMT1PR20         EQU  H'0004'
SMT1PR21         EQU  H'0005'
SMT1PR22         EQU  H'0006'
SMT1PR23         EQU  H'0007'


;----- SMT1CON0 Bits -----------------------------------------------------
CPOL             EQU  H'0002'
SPOL             EQU  H'0003'
WPOL             EQU  H'0004'
STP              EQU  H'0005'
EN               EQU  H'0007'

SMT1PS0          EQU  H'0000'
SMT1PS1          EQU  H'0001'


;----- SMT1CON1 Bits -----------------------------------------------------
REPEAT           EQU  H'0006'
SMT1GO           EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

SMT1REPEAT       EQU  H'0006'

SMT1MODE0        EQU  H'0000'
SMT1MODE1        EQU  H'0001'
SMT1MODE2        EQU  H'0002'
SMT1MODE3        EQU  H'0003'


;----- SMT1STAT Bits -----------------------------------------------------
AS               EQU  H'0000'
WS               EQU  H'0001'
TS               EQU  H'0002'
RST              EQU  H'0005'
CPWUP            EQU  H'0006'
CPRUP            EQU  H'0007'

SMT1AS           EQU  H'0000'
SMT1WS           EQU  H'0001'
SMT1TS           EQU  H'0002'
SMT1RESET        EQU  H'0005'
SMT1CPWUP        EQU  H'0006'
SMT1CPRUP        EQU  H'0007'


;----- SMT1CLK Bits -----------------------------------------------------
CSEL0            EQU  H'0000'
CSEL1            EQU  H'0001'
CSEL2            EQU  H'0002'


SMT1CSEL0        EQU  H'0000'
SMT1CSEL1        EQU  H'0001'
SMT1CSEL2        EQU  H'0002'


;----- SMT1SIG Bits -----------------------------------------------------
SSEL0            EQU  H'0000'
SSEL1            EQU  H'0001'
SSEL2            EQU  H'0002'
SSEL3            EQU  H'0003'
SSEL4            EQU  H'0004'


SMT1SSEL0        EQU  H'0000'
SMT1SSEL1        EQU  H'0001'
SMT1SSEL2        EQU  H'0002'
SMT1SSEL3        EQU  H'0003'
SMT1SSEL4        EQU  H'0004'


;----- SMT1WIN Bits -----------------------------------------------------
WSEL0            EQU  H'0000'
WSEL1            EQU  H'0001'
WSEL2            EQU  H'0002'
WSEL3            EQU  H'0003'
WSEL4            EQU  H'0004'


SMT1WSEL0        EQU  H'0000'
SMT1WSEL1        EQU  H'0001'
SMT1WSEL2        EQU  H'0002'
SMT1WSEL3        EQU  H'0003'
SMT1WSEL4        EQU  H'0004'


;----- SMT2TMRL Bits -----------------------------------------------------
SMT2TMR0         EQU  H'0000'
SMT2TMR1         EQU  H'0001'
SMT2TMR2         EQU  H'0002'
SMT2TMR3         EQU  H'0003'
SMT2TMR4         EQU  H'0004'
SMT2TMR5         EQU  H'0005'
SMT2TMR6         EQU  H'0006'
SMT2TMR7         EQU  H'0007'


;----- SMT2TMRH Bits -----------------------------------------------------
SMT2TMR8         EQU  H'0000'
SMT2TMR9         EQU  H'0001'
SMT2TMR10        EQU  H'0002'
SMT2TMR11        EQU  H'0003'
SMT2TMR12        EQU  H'0004'
SMT2TMR13        EQU  H'0005'
SMT2TMR14        EQU  H'0006'
SMT2TMR15        EQU  H'0007'


;----- SMT2TMRU Bits -----------------------------------------------------
SMT2TMR16        EQU  H'0000'
SMT2TMR17        EQU  H'0001'
SMT2TMR18        EQU  H'0002'
SMT2TMR19        EQU  H'0003'
SMT2TMR20        EQU  H'0004'
SMT2TMR21        EQU  H'0005'
SMT2TMR22        EQU  H'0006'
SMT2TMR23        EQU  H'0007'


;----- SMT2CPRL Bits -----------------------------------------------------
SMT2CPR0         EQU  H'0000'
SMT2CPR1         EQU  H'0001'
SMT2CPR2         EQU  H'0002'
SMT2CPR3         EQU  H'0003'
SMT2CPR4         EQU  H'0004'
SMT2CPR5         EQU  H'0005'
SMT2CPR6         EQU  H'0006'
SMT2CPR7         EQU  H'0007'


;----- SMT2CPRH Bits -----------------------------------------------------
SMT2CPR8         EQU  H'0000'
SMT2CPR9         EQU  H'0001'
SMT2CPR10        EQU  H'0002'
SMT2CPR11        EQU  H'0003'
SMT2CPR12        EQU  H'0004'
SMT2CPR13        EQU  H'0005'
SMT2CPR14        EQU  H'0006'
SMT2CPR15        EQU  H'0007'


;----- SMT2CPRU Bits -----------------------------------------------------
SMT2CPR16        EQU  H'0000'
SMT2CPR17        EQU  H'0001'
SMT2CPR18        EQU  H'0002'
SMT2CPR19        EQU  H'0003'
SMT2CPR20        EQU  H'0004'
SMT2CPR21        EQU  H'0005'
SMT2CPR22        EQU  H'0006'
SMT2CPR23        EQU  H'0007'


;----- SMT2CPWL Bits -----------------------------------------------------
SMT2CPW0         EQU  H'0000'
SMT2CPW1         EQU  H'0001'
SMT2CPW2         EQU  H'0002'
SMT2CPW3         EQU  H'0003'
SMT2CPW4         EQU  H'0004'
SMT2CPW5         EQU  H'0005'
SMT2CPW6         EQU  H'0006'
SMT2CPW7         EQU  H'0007'


;----- SMT2CPWH Bits -----------------------------------------------------
SMT2CPW8         EQU  H'0000'
SMT2CPW9         EQU  H'0001'
SMT2CPW10        EQU  H'0002'
SMT2CPW11        EQU  H'0003'
SMT2CPW12        EQU  H'0004'
SMT2CPW13        EQU  H'0005'
SMT2CPW14        EQU  H'0006'
SMT2CPW15        EQU  H'0007'


;----- SMT2CPWU Bits -----------------------------------------------------
SMT2CPW16        EQU  H'0000'
SMT2CPW17        EQU  H'0001'
SMT2CPW18        EQU  H'0002'
SMT2CPW19        EQU  H'0003'
SMT2CPW20        EQU  H'0004'
SMT2CPW21        EQU  H'0005'
SMT2CPW22        EQU  H'0006'
SMT2CPW23        EQU  H'0007'


;----- SMT2PRL Bits -----------------------------------------------------
SMT2PR0          EQU  H'0000'
SMT2PR1          EQU  H'0001'
SMT2PR2          EQU  H'0002'
SMT2PR3          EQU  H'0003'
SMT2PR4          EQU  H'0004'
SMT2PR5          EQU  H'0005'
SMT2PR6          EQU  H'0006'
SMT2PR7          EQU  H'0007'


;----- SMT2PRH Bits -----------------------------------------------------
SMT2PR8          EQU  H'0000'
SMT2PR9          EQU  H'0001'
SMT2PR10         EQU  H'0002'
SMT2PR11         EQU  H'0003'
SMT2PR12         EQU  H'0004'
SMT2PR13         EQU  H'0005'
SMT2PR14         EQU  H'0006'
SMT2PR15         EQU  H'0007'


;----- SMT2PRU Bits -----------------------------------------------------
SMT2PR16         EQU  H'0000'
SMT2PR17         EQU  H'0001'
SMT2PR18         EQU  H'0002'
SMT2PR19         EQU  H'0003'
SMT2PR20         EQU  H'0004'
SMT2PR21         EQU  H'0005'
SMT2PR22         EQU  H'0006'
SMT2PR23         EQU  H'0007'


;----- SMT2CON0 Bits -----------------------------------------------------
CPOL             EQU  H'0002'
SPOL             EQU  H'0003'
WPOL             EQU  H'0004'
STP              EQU  H'0005'
EN               EQU  H'0007'

SMT2PS0          EQU  H'0000'
SMT2PS1          EQU  H'0001'


;----- SMT2CON1 Bits -----------------------------------------------------
REPEAT           EQU  H'0006'
SMT2GO           EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

SMT2REPEAT       EQU  H'0006'

SMT2MODE0        EQU  H'0000'
SMT2MODE1        EQU  H'0001'
SMT2MODE2        EQU  H'0002'
SMT2MODE3        EQU  H'0003'


;----- SMT2STAT Bits -----------------------------------------------------
AS               EQU  H'0000'
WS               EQU  H'0001'
TS               EQU  H'0002'
RST              EQU  H'0005'
CPWUP            EQU  H'0006'
CPRUP            EQU  H'0007'

SMT2AS           EQU  H'0000'
SMT2WS           EQU  H'0001'
SMT2TS           EQU  H'0002'
SMT2RESET        EQU  H'0005'
SMT2CPWUP        EQU  H'0006'
SMT2CPRUP        EQU  H'0007'


;----- SMT2CLK Bits -----------------------------------------------------
CSEL0            EQU  H'0000'
CSEL1            EQU  H'0001'
CSEL2            EQU  H'0002'


SMT2CSEL0        EQU  H'0000'
SMT2CSEL1        EQU  H'0001'
SMT2CSEL2        EQU  H'0002'


;----- SMT2SIG Bits -----------------------------------------------------
SSEL0            EQU  H'0000'
SSEL1            EQU  H'0001'
SSEL2            EQU  H'0002'
SSEL3            EQU  H'0003'
SSEL4            EQU  H'0004'


SMT2SSEL0        EQU  H'0000'
SMT2SSEL1        EQU  H'0001'
SMT2SSEL2        EQU  H'0002'
SMT2SSEL3        EQU  H'0003'
SMT2SSEL4        EQU  H'0004'


;----- SMT2WIN Bits -----------------------------------------------------
WSEL0            EQU  H'0000'
WSEL1            EQU  H'0001'
WSEL2            EQU  H'0002'
WSEL3            EQU  H'0003'
WSEL4            EQU  H'0004'


SMT2WSEL0        EQU  H'0000'
SMT2WSEL1        EQU  H'0001'
SMT2WSEL2        EQU  H'0002'
SMT2WSEL3        EQU  H'0003'
SMT2WSEL4        EQU  H'0004'


;----- PPSLOCK Bits -----------------------------------------------------
PPSLOCKED        EQU  H'0000'


;----- INTPPS Bits -----------------------------------------------------
INTPPS0          EQU  H'0000'
INTPPS1          EQU  H'0001'
INTPPS2          EQU  H'0002'
INTPPS3          EQU  H'0003'
INTPPS4          EQU  H'0004'


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


;----- ATINPPS Bits -----------------------------------------------------
ATINPPS0         EQU  H'0000'
ATINPPS1         EQU  H'0001'
ATINPPS2         EQU  H'0002'
ATINPPS3         EQU  H'0003'
ATINPPS4         EQU  H'0004'


;----- CWGINPPS Bits -----------------------------------------------------
CWGINPPS0        EQU  H'0000'
CWGINPPS1        EQU  H'0001'
CWGINPPS2        EQU  H'0002'
CWGINPPS3        EQU  H'0003'
CWGINPPS4        EQU  H'0004'


;----- T2PPS Bits -----------------------------------------------------
T2PPS0           EQU  H'0000'
T2PPS1           EQU  H'0001'
T2PPS2           EQU  H'0002'
T2PPS3           EQU  H'0003'
T2PPS4           EQU  H'0004'


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


;----- T4PPS Bits -----------------------------------------------------
T4PPS0           EQU  H'0000'
T4PPS1           EQU  H'0001'
T4PPS2           EQU  H'0002'
T4PPS3           EQU  H'0003'
T4PPS4           EQU  H'0004'


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


;----- T6PPS Bits -----------------------------------------------------
T6PPS0           EQU  H'0000'
T6PPS1           EQU  H'0001'
T6PPS2           EQU  H'0002'
T6PPS3           EQU  H'0003'
T6PPS4           EQU  H'0004'


;----- ATCC1PPS Bits -----------------------------------------------------
ATCC1PPS0        EQU  H'0000'
ATCC1PPS1        EQU  H'0001'
ATCC1PPS2        EQU  H'0002'
ATCC1PPS3        EQU  H'0003'
ATCC1PPS4        EQU  H'0004'


;----- SSPCLKPPS Bits -----------------------------------------------------
SSPCLKPPS0       EQU  H'0000'
SSPCLKPPS1       EQU  H'0001'
SSPCLKPPS2       EQU  H'0002'
SSPCLKPPS3       EQU  H'0003'
SSPCLKPPS4       EQU  H'0004'


;----- SSPDATPPS Bits -----------------------------------------------------
SSPDATPPS0       EQU  H'0000'
SSPDATPPS1       EQU  H'0001'
SSPDATPPS2       EQU  H'0002'
SSPDATPPS3       EQU  H'0003'
SSPDATPPS4       EQU  H'0004'


;----- SSPSSPPS Bits -----------------------------------------------------
SSPSSPPS0        EQU  H'0000'
SSPSSPPS1        EQU  H'0001'
SSPSSPPS2        EQU  H'0002'
SSPSSPPS3        EQU  H'0003'
SSPSSPPS4        EQU  H'0004'


;----- ATCC2PPS Bits -----------------------------------------------------
ATCC2PPS0        EQU  H'0000'
ATCC2PPS1        EQU  H'0001'
ATCC2PPS2        EQU  H'0002'
ATCC2PPS3        EQU  H'0003'
ATCC2PPS4        EQU  H'0004'


;----- RXPPS Bits -----------------------------------------------------
RXPPS0           EQU  H'0000'
RXPPS1           EQU  H'0001'
RXPPS2           EQU  H'0002'
RXPPS3           EQU  H'0003'
RXPPS4           EQU  H'0004'


;----- CKPPS Bits -----------------------------------------------------
CKPPS0           EQU  H'0000'
CKPPS1           EQU  H'0001'
CKPPS2           EQU  H'0002'
CKPPS3           EQU  H'0003'
CKPPS4           EQU  H'0004'


;----- SMT1SIGPPS Bits -----------------------------------------------------
SMT1SIGPPS0      EQU  H'0000'
SMT1SIGPPS1      EQU  H'0001'
SMT1SIGPPS2      EQU  H'0002'
SMT1SIGPPS3      EQU  H'0003'
SMT1SIGPPS4      EQU  H'0004'


;----- SMT1WINPPS Bits -----------------------------------------------------
SMTWINPPS0       EQU  H'0000'
SMTWINPPS1       EQU  H'0001'
SMTWINPPS2       EQU  H'0002'
SMTWINPPS3       EQU  H'0003'
SMTWINPPS4       EQU  H'0004'


;----- CLCIN0PPS Bits -----------------------------------------------------
CLCIN0PPS0       EQU  H'0000'
CLCIN0PPS1       EQU  H'0001'
CLCIN0PPS2       EQU  H'0002'
CLCIN0PPS3       EQU  H'0003'
CLCIN0PPS4       EQU  H'0004'


;----- CLCIN1PPS Bits -----------------------------------------------------
CLCIN1PPS0       EQU  H'0000'
CLCIN1PPS1       EQU  H'0001'
CLCIN1PPS2       EQU  H'0002'
CLCIN1PPS3       EQU  H'0003'
CLCIN1PPS4       EQU  H'0004'


;----- CLCIN2PPS Bits -----------------------------------------------------
CLCIN2PPS0       EQU  H'0000'
CLCIN2PPS1       EQU  H'0001'
CLCIN2PPS2       EQU  H'0002'
CLCIN2PPS3       EQU  H'0003'
CLCIN2PPS4       EQU  H'0004'


;----- CLCIN3PPS Bits -----------------------------------------------------
CLCIN3PPS0       EQU  H'0000'
CLCIN3PPS1       EQU  H'0001'
CLCIN3PPS2       EQU  H'0002'
CLCIN3PPS3       EQU  H'0003'
CLCIN3PPS4       EQU  H'0004'


;----- SMT2SIGPPS Bits -----------------------------------------------------
SMT2SIGPPS0      EQU  H'0000'
SMT2SIGPPS1      EQU  H'0001'
SMT2SIGPPS2      EQU  H'0002'
SMT2SIGPPS3      EQU  H'0003'
SMT2SIGPPS4      EQU  H'0004'


;----- SMT2WINPPS Bits -----------------------------------------------------
SMT2WINPPS0      EQU  H'0000'
SMT2WINPPS1      EQU  H'0001'
SMT2WINPPS2      EQU  H'0002'
SMT2WINPPS3      EQU  H'0003'
SMT2WINPPS4      EQU  H'0004'


;----- ATCC3PPS Bits -----------------------------------------------------
ATCC3PPS0        EQU  H'0000'
ATCC3PPS1        EQU  H'0001'
ATCC3PPS2        EQU  H'0002'
ATCC3PPS3        EQU  H'0003'
ATCC3PPS4        EQU  H'0004'


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


;----- CLCDATA Bits -----------------------------------------------------
MLC1OUT          EQU  H'0000'
MLC2OUT          EQU  H'0001'


;----- CLC1CON Bits -----------------------------------------------------
LC1INTN          EQU  H'0003'
LC1INTP          EQU  H'0004'
LC1OUT           EQU  H'0005'
LC1EN            EQU  H'0007'

LC1MODE0         EQU  H'0000'
LC1MODE1         EQU  H'0001'
LC1MODE2         EQU  H'0002'

INTN             EQU  H'0003'
INTP             EQU  H'0004'
OUT              EQU  H'0005'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
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
LC1D1S5          EQU  H'0005'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'


;----- CLC1SEL1 Bits -----------------------------------------------------
LC1D2S0          EQU  H'0000'
LC1D2S1          EQU  H'0001'
LC1D2S2          EQU  H'0002'
LC1D2S3          EQU  H'0003'
LC1D2S4          EQU  H'0004'
LC1D2S5          EQU  H'0005'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'


;----- CLC1SEL2 Bits -----------------------------------------------------
LC1D3S0          EQU  H'0000'
LC1D3S1          EQU  H'0001'
LC1D3S2          EQU  H'0002'
LC1D3S3          EQU  H'0003'
LC1D3S4          EQU  H'0004'
LC1D3S5          EQU  H'0005'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'


;----- CLC1SEL3 Bits -----------------------------------------------------
LC1D4S0          EQU  H'0000'
LC1D4S1          EQU  H'0001'
LC1D4S2          EQU  H'0002'
LC1D4S3          EQU  H'0003'
LC1D4S4          EQU  H'0004'
LC1D4S5          EQU  H'0005'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'


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

INTN             EQU  H'0003'
INTP             EQU  H'0004'
OUT              EQU  H'0005'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
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
LC2D1S5          EQU  H'0005'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'


;----- CLC2SEL1 Bits -----------------------------------------------------
LC2D2S0          EQU  H'0000'
LC2D2S1          EQU  H'0001'
LC2D2S2          EQU  H'0002'
LC2D2S3          EQU  H'0003'
LC2D2S4          EQU  H'0004'
LC2D2S5          EQU  H'0005'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'


;----- CLC2SEL2 Bits -----------------------------------------------------
LC2D3S0          EQU  H'0000'
LC2D3S1          EQU  H'0001'
LC2D3S2          EQU  H'0002'
LC2D3S3          EQU  H'0003'
LC2D3S4          EQU  H'0004'
LC2D3S5          EQU  H'0005'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'


;----- CLC2SEL3 Bits -----------------------------------------------------
LC2D4S0          EQU  H'0000'
LC2D4S1          EQU  H'0001'
LC2D4S2          EQU  H'0002'
LC2D4S3          EQU  H'0003'
LC2D4S4          EQU  H'0004'
LC2D4S5          EQU  H'0005'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'


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
       __BADRAM  H'008D'
       __BADRAM  H'008F'
       __BADRAM  H'0097'
       __BADRAM  H'010D'
       __BADRAM  H'010F'-H'0110'
       __BADRAM  H'011A'-H'011B'
       __BADRAM  H'011D'-H'011F'
       __BADRAM  H'018D'
       __BADRAM  H'018F'-H'0190'
       __BADRAM  H'0197'-H'0198'
       __BADRAM  H'020D'
       __BADRAM  H'020F'-H'0210'
       __BADRAM  H'0218'-H'021F'
       __BADRAM  H'028D'
       __BADRAM  H'028F'-H'0290'
       __BADRAM  H'0295'-H'0297'
       __BADRAM  H'029C'-H'029D'
       __BADRAM  H'029F'
       __BADRAM  H'030D'
       __BADRAM  H'030F'-H'031F'
       __BADRAM  H'0330'-H'036F'
       __BADRAM  H'038D'
       __BADRAM  H'038F'-H'0390'
       __BADRAM  H'0394'-H'0396'
       __BADRAM  H'039A'-H'039F'
       __BADRAM  H'03A0'-H'03EF'
       __BADRAM  H'040C'-H'040D'
       __BADRAM  H'040F'-H'0412'
       __BADRAM  H'0419'
       __BADRAM  H'0420'-H'046F'
       __BADRAM  H'048C'-H'0492'
       __BADRAM  H'0497'-H'0499'
       __BADRAM  H'049E'-H'049F'
       __BADRAM  H'04A0'-H'04EF'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'0520'-H'056F'
       __BADRAM  H'059E'-H'059F'
       __BADRAM  H'05A0'-H'05EF'
       __BADRAM  H'0615'-H'0616'
       __BADRAM  H'061D'-H'061F'
       __BADRAM  H'0620'-H'066F'
       __BADRAM  H'068C'-H'0690'
       __BADRAM  H'0698'
       __BADRAM  H'069B'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'0710'
       __BADRAM  H'0716'-H'0717'
       __BADRAM  H'071E'-H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'0790'
       __BADRAM  H'079B'-H'079F'
       __BADRAM  H'07A0'-H'07EF'
       __BADRAM  H'081E'-H'081F'
       __BADRAM  H'0820'-H'086F'
       __BADRAM  H'089A'-H'089F'
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
       __BADRAM  H'0D0C'-H'0D10'
       __BADRAM  H'0D11'-H'0D1F'
       __BADRAM  H'0D20'-H'0D6F'
       __BADRAM  H'0DB0'-H'0DEF'
       __BADRAM  H'0E0C'-H'0E0E'
       __BADRAM  H'0E2F'-H'0E6F'
       __BADRAM  H'0E8C'-H'0E8F'
       __BADRAM  H'0E93'
       __BADRAM  H'0E96'-H'0E9F'
       __BADRAM  H'0EA6'-H'0EEF'
       __BADRAM  H'0F0C'-H'0F0E'
       __BADRAM  H'0F24'-H'0F6F'
       __BADRAM  H'0F8C'-H'0FE3'
       __BADRAM  H'0FEC'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           8007h
;   CONFIG2           8008h
;   CONFIG3           8009h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1         EQU  H'8007'
_CONFIG2         EQU  H'8008'
_CONFIG3         EQU  H'8009'

;----- CONFIG1 Options --------------------------------------------------
_FOSC_INTOSC     EQU  H'3FFC'    ; INTOSC oscillator: I/O function on CLKIN pin
_FOSC_ECL        EQU  H'3FFD'    ; ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
_FOSC_ECM        EQU  H'3FFE'    ; ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
_FOSC_ECH        EQU  H'3FFF'    ; ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins

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
_WRT_ALL         EQU  H'3FFC'    ; 000h to 1FFFh write protected, no addresses may be modified by PMCON control
_WRT_HALF        EQU  H'3FFD'    ; 000h to FFFh write protected, 1000h to 1FFFh may be modified by PMCON control
_WRT_BOOT        EQU  H'3FFE'    ; 000h to 1FFh write protected, 200h to 1FFFh may be modified by PMCON control
_WRT_OFF         EQU  H'3FFF'    ; Write protection off

_PPS1WAY_OFF     EQU  H'3FFB'    ; The PPSLOCK bit can be set and cleared repeatedly by software
_PPS1WAY_ON      EQU  H'3FFF'    ; The PPSLOCK bit cannot be cleared once it is set by software

_ZCD_ON          EQU  H'3F7F'    ; ZCD always enabled
_ZCD_OFF         EQU  H'3FFF'    ; ZCD disable.  ZCD can be enabled by setting the ZCDSEN bit of ZCDCON

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

;----- CONFIG3 Options --------------------------------------------------
_WDTCPS_WDTCPS0  EQU  H'3FE0'    ; 1:32 (1 ms period)
_WDTCPS_WDTCPS1  EQU  H'3FE1'    ; 1:64 (2 ms period)
_WDTCPS_WDTCPS2  EQU  H'3FE2'    ; 1:128 (4 ms period)
_WDTCPS_WDTCPS3  EQU  H'3FE3'    ; 1:256 (8 ms period)
_WDTCPS_WDTCPS4  EQU  H'3FE4'    ; 1:512 (16 ms period)
_WDTCPS_WDTCPS5  EQU  H'3FE5'    ; 1:1024 (32 ms period)
_WDTCPS_WDTCPS6  EQU  H'3FE6'    ; 1:2048 (64 ms period)
_WDTCPS_WDTCPS7  EQU  H'3FE7'    ; 1:4096 (128 ms period)
_WDTCPS_WDTCPS8  EQU  H'3FE8'    ; 1:8192 (256 ms period)
_WDTCPS_WDTCPS9  EQU  H'3FE9'    ; 1:16384 (512 ms period)
_WDTCPS_WDTCPSA  EQU  H'3FEA'    ; 1:32768 (1 s period)
_WDTCPS_WDTCPSB  EQU  H'3FEB'    ; 1:65536 (2 s period)
_WDTCPS_WDTCPSC  EQU  H'3FEC'    ; 1:131072 (4 s period)
_WDTCPS_WDTCPSD  EQU  H'3FED'    ; 1:262144 (8 s period)
_WDTCPS_WDTCPSE  EQU  H'3FEE'    ; 1:524299 (16 s period)
_WDTCPS_WDTCPSF  EQU  H'3FEF'    ; 1:1048576 (32 s period)
_WDTCPS_WDTCPS10 EQU  H'3FF0'    ; 1:2097152 (64 s period)
_WDTCPS_WDTCPS11 EQU  H'3FF1'    ; 1:4194304 (128 s period)
_WDTCPS_WDTCPS12 EQU  H'3FF2'    ; 1:8388608 (256 s period)
_WDTCPS_WDTCPS1F EQU  H'3FFF'    ; Software Control (WDTPS)

_WDTE_OFF        EQU  H'3F9F'    ; WDT disabled
_WDTE_SWDTEN     EQU  H'3FBF'    ; WDT controlled by the SWDTEN bit in the WDTCON register
_WDTE_NSLEEP     EQU  H'3FDF'    ; WDT enabled while running and disabled in Sleep
_WDTE_ON         EQU  H'3FFF'    ; WDT enabled

_WDTCWS_WDTCWS125 EQU  H'38FF'    ; 12.5 percent window open time
_WDTCWS_WDTCWS25 EQU  H'39FF'    ; 25 percent window open time
_WDTCWS_WDTCWS375 EQU  H'3AFF'    ; 37.5 percent window open time
_WDTCWS_WDTCWS50 EQU  H'3BFF'    ; 50 percent window open time
_WDTCWS_WDTCWS625 EQU  H'3CFF'    ; 62.5 percent window open time
_WDTCWS_WDTCWS75 EQU  H'3DFF'    ; 75 percent window open time
_WDTCWS_WDTCWS100 EQU  H'3EFF'    ; 100 percent window open time (Legacy WDT) 
_WDTCWS_WDTCWSSW EQU  H'3FFF'    ; Software WDT window size control (WDTWS bits)

_WDTCCS_LFINTOSC EQU  H'7FF'    ; 31.0kHz LFINTOSC
_WDTCCS_MFINTOSC EQU  H'FFF'    ; 31.25 kHz HFINTOSC (MFINTOSC)
_WDTCCS_SWC      EQU  H'3FFF'    ; Software control, controlled by WDTCS bits

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'8006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'8000'
_IDLOC1          EQU  H'8001'
_IDLOC2          EQU  H'8002'
_IDLOC3          EQU  H'8003'

        LIST
