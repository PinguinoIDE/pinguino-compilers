        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC16LF18856 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16LF18856 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16LF18856
;       2. LIST directive in the source file
;               LIST   P=PIC16LF18856
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16LF18856
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
PORTE            EQU  H'0010'
TRISA            EQU  H'0011'
TRISB            EQU  H'0012'
TRISC            EQU  H'0013'
LATA             EQU  H'0016'
LATB             EQU  H'0017'
LATC             EQU  H'0018'
TMR0             EQU  H'001C'
TMR0L            EQU  H'001C'
PR0              EQU  H'001D'
TMR0H            EQU  H'001D'
T0CON0           EQU  H'001E'
T0CON1           EQU  H'001F'

;-----Bank1------------------
ADRES            EQU  H'008C'
ADRESL           EQU  H'008C'
ADRESH           EQU  H'008D'
ADPREV           EQU  H'008E'
ADPREVL          EQU  H'008E'
ADPREVH          EQU  H'008F'
ADACC            EQU  H'0090'
ADACCL           EQU  H'0090'
ADACCH           EQU  H'0091'
ADCON0           EQU  H'0093'
ADCON1           EQU  H'0094'
ADCON2           EQU  H'0095'
ADCON3           EQU  H'0096'
ADSTAT           EQU  H'0097'
ADCLK            EQU  H'0098'
ADACT            EQU  H'0099'
ADREF            EQU  H'009A'
ADCAP            EQU  H'009B'
ADPRE            EQU  H'009C'
ADACQ            EQU  H'009D'
ADPCH            EQU  H'009E'

;-----Bank2------------------
ADCNT            EQU  H'010C'
ADRPT            EQU  H'010D'
ADLTH            EQU  H'010E'
ADLTHL           EQU  H'010E'
ADLTHH           EQU  H'010F'
ADUTH            EQU  H'0110'
ADUTHL           EQU  H'0110'
ADUTHH           EQU  H'0111'
ADSTPT           EQU  H'0112'
ADSTPTL          EQU  H'0112'
ADSTPTH          EQU  H'0113'
ADFLTR           EQU  H'0114'
ADFLTRL          EQU  H'0114'
ADFLTRH          EQU  H'0115'
ADERR            EQU  H'0116'
ADERRL           EQU  H'0116'
ADERRH           EQU  H'0117'
RC1REG           EQU  H'0119'
RCREG            EQU  H'0119'
RCREG1           EQU  H'0119'
TX1REG           EQU  H'011A'
TXREG            EQU  H'011A'
TXREG1           EQU  H'011A'
SP1BRG           EQU  H'011B'
SP1BRGL          EQU  H'011B'
SPBRG            EQU  H'011B'
SPBRG1           EQU  H'011B'
SPBRGL           EQU  H'011B'
SP1BRGH          EQU  H'011C'
SPBRGH           EQU  H'011C'
SPBRGH1          EQU  H'011C'
RC1STA           EQU  H'011D'
RCSTA            EQU  H'011D'
RCSTA1           EQU  H'011D'
TX1STA           EQU  H'011E'
TXSTA            EQU  H'011E'
TXSTA1           EQU  H'011E'
BAUD1CON         EQU  H'011F'
BAUDCON          EQU  H'011F'
BAUDCON1         EQU  H'011F'
BAUDCTL          EQU  H'011F'
BAUDCTL1         EQU  H'011F'

;-----Bank3------------------
SSP1BUF          EQU  H'018C'
SSP1ADD          EQU  H'018D'
SSP1MSK          EQU  H'018E'
SSP1STAT         EQU  H'018F'
SSP1CON1         EQU  H'0190'
SSP1CON2         EQU  H'0191'
SSP1CON3         EQU  H'0192'
SSP2BUF          EQU  H'0196'
SSP2ADD          EQU  H'0197'
SSP2MSK          EQU  H'0198'
SSP2STAT         EQU  H'0199'
SSP2CON1         EQU  H'019A'
SSP2CON2         EQU  H'019B'
SSP2CON3         EQU  H'019C'

;-----Bank4------------------
TMR1L            EQU  H'020C'
TMR1H            EQU  H'020D'
T1CON            EQU  H'020E'
PR1              EQU  H'020F'
T1GCON           EQU  H'020F'
T1GATE           EQU  H'0210'
TMR1GATE         EQU  H'0210'
T1CLK            EQU  H'0211'
TMR1CLK          EQU  H'0211'
TMR3L            EQU  H'0212'
TMR3H            EQU  H'0213'
T3CON            EQU  H'0214'
PR3              EQU  H'0215'
T3GCON           EQU  H'0215'
T3GATE           EQU  H'0216'
TMR3GATE         EQU  H'0216'
T3CLK            EQU  H'0217'
TMR3CLK          EQU  H'0217'
TMR5L            EQU  H'0218'
TMR5H            EQU  H'0219'
T5CON            EQU  H'021A'
PR5              EQU  H'021B'
T5GCON           EQU  H'021B'
T5GATE           EQU  H'021C'
TMR5GATE         EQU  H'021C'
T5CLK            EQU  H'021D'
TMR5CLK          EQU  H'021D'
CCPTMRS0         EQU  H'021E'
CCPTMRS1         EQU  H'021F'

;-----Bank5------------------
T2TMR            EQU  H'028C'
TMR2             EQU  H'028C'
PR2              EQU  H'028D'
T2PR             EQU  H'028D'
T2CON            EQU  H'028E'
T2HLT            EQU  H'028F'
T2CLKCON         EQU  H'0290'
T2RST            EQU  H'0291'
T4TMR            EQU  H'0292'
TMR4             EQU  H'0292'
PR4              EQU  H'0293'
T4PR             EQU  H'0293'
T4CON            EQU  H'0294'
T4HLT            EQU  H'0295'
T4CLKCON         EQU  H'0296'
T4RST            EQU  H'0297'
T6TMR            EQU  H'0298'
TMR6             EQU  H'0298'
PR6              EQU  H'0299'
T6PR             EQU  H'0299'
T6CON            EQU  H'029A'
T6HLT            EQU  H'029B'
T6CLKCON         EQU  H'029C'
T6RST            EQU  H'029D'

;-----Bank6------------------
CCPR1            EQU  H'030C'
CCPR1L           EQU  H'030C'
CCPR1H           EQU  H'030D'
CCP1CON          EQU  H'030E'
CCP1CAP          EQU  H'030F'
CCPR2            EQU  H'0310'
CCPR2L           EQU  H'0310'
CCPR2H           EQU  H'0311'
CCP2CON          EQU  H'0312'
CCP2CAP          EQU  H'0313'
CCPR3            EQU  H'0314'
CCPR3L           EQU  H'0314'
CCPR3H           EQU  H'0315'
CCP3CON          EQU  H'0316'
CCP3CAP          EQU  H'0317'
CCPR4            EQU  H'0318'
CCPR4L           EQU  H'0318'
CCPR4H           EQU  H'0319'
CCP4CON          EQU  H'031A'
CCP4CAP          EQU  H'031B'
CCPR5            EQU  H'031C'
CCPR5L           EQU  H'031C'
CCPR5H           EQU  H'031D'
CCP5CON          EQU  H'031E'
CCP5CAP          EQU  H'031F'

;-----Bank7------------------
PWM6DCL          EQU  H'038C'
PWM6DCH          EQU  H'038D'
PWM6CON          EQU  H'038E'
PWM7DCL          EQU  H'0390'
PWM7DCH          EQU  H'0391'
PWM7CON          EQU  H'0392'

;-----Bank8------------------
SCANLADRL        EQU  H'040C'
SCANLADRH        EQU  H'040D'
SCANHADRL        EQU  H'040E'
SCANHADRH        EQU  H'040F'
SCANCON0         EQU  H'0410'
SCANTRIG         EQU  H'0411'
CRCDATA          EQU  H'0416'
CRCDATL          EQU  H'0416'
CRCDATH          EQU  H'0417'
CRCACC           EQU  H'0418'
CRCACCL          EQU  H'0418'
CRCACCH          EQU  H'0419'
CRCSHFT          EQU  H'041A'
CRCSHIFTL        EQU  H'041A'
CRCSHIFTH        EQU  H'041B'
CRCXOR           EQU  H'041C'
CRCXORL          EQU  H'041C'
CRCXORH          EQU  H'041D'
CRCCON0          EQU  H'041E'
CRCCON1          EQU  H'041F'

;-----Bank9------------------
SMT1TMR          EQU  H'048C'
SMT1TMRL         EQU  H'048C'
SMT1TMRH         EQU  H'048D'
SMT1TMRU         EQU  H'048E'
SMT1CPR          EQU  H'048F'
SMT1CPRL         EQU  H'048F'
SMT1CPRH         EQU  H'0490'
SMT1CPRU         EQU  H'0491'
SMT1CPW          EQU  H'0492'
SMT1CPWL         EQU  H'0492'
SMT1CPWH         EQU  H'0493'
SMT1CPWU         EQU  H'0494'
SMT1PR           EQU  H'0495'
SMT1PRL          EQU  H'0495'
SMT1PRH          EQU  H'0496'
SMT1PRU          EQU  H'0497'
SMT1CON0         EQU  H'0498'
SMT1CON1         EQU  H'0499'
SMT1STAT         EQU  H'049A'
SMT1CLK          EQU  H'049B'
SMT1SIG          EQU  H'049C'
SMT1WIN          EQU  H'049D'

;-----Bank10------------------
SMT2TMR          EQU  H'050C'
SMT2TMRL         EQU  H'050C'
SMT2TMRH         EQU  H'050D'
SMT2TMRU         EQU  H'050E'
SMT2CPR          EQU  H'050F'
SMT2CPRL         EQU  H'050F'
SMT2CPRH         EQU  H'0510'
SMT2CPRU         EQU  H'0511'
SMT2CPW          EQU  H'0512'
SMT2CPWL         EQU  H'0512'
SMT2CPWH         EQU  H'0513'
SMT2CPWU         EQU  H'0514'
SMT2PR           EQU  H'0515'
SMT2PRL          EQU  H'0515'
SMT2PRH          EQU  H'0516'
SMT2PRU          EQU  H'0517'
SMT2CON0         EQU  H'0518'
SMT2CON1         EQU  H'0519'
SMT2STAT         EQU  H'051A'
SMT2CLK          EQU  H'051B'
SMT2SIG          EQU  H'051C'
SMT2WIN          EQU  H'051D'

;-----Bank11------------------
NCO1ACC          EQU  H'058C'
NCO1ACCL         EQU  H'058C'
NCO1ACCH         EQU  H'058D'
NCO1ACCU         EQU  H'058E'
NCO1INC          EQU  H'058F'
NCO1INCL         EQU  H'058F'
NCO1INCH         EQU  H'0590'
NCO1INCU         EQU  H'0591'
NCO1CON          EQU  H'0592'
NCO1CLK          EQU  H'0593'

;-----Bank12------------------
CWG1CLKCON       EQU  H'060C'
CWG1ISM          EQU  H'060D'
CWG1DBR          EQU  H'060E'
CWG1DBF          EQU  H'060F'
CWG1CON0         EQU  H'0610'
CWG1CON1         EQU  H'0611'
CWG1AS0          EQU  H'0612'
CWG1AS1          EQU  H'0613'
CWG1STR          EQU  H'0614'
CWG2CLKCON       EQU  H'0616'
CWG2ISM          EQU  H'0617'
CWG2DBR          EQU  H'0618'
CWG2DBF          EQU  H'0619'
CWG2CON0         EQU  H'061A'
CWG2CON1         EQU  H'061B'
CWG2AS0          EQU  H'061C'
CWG2AS1          EQU  H'061D'
CWG2STR          EQU  H'061E'

;-----Bank13------------------
CWG3CLKCON       EQU  H'068C'
CWG3ISM          EQU  H'068D'
CWG3DBR          EQU  H'068E'
CWG3DBF          EQU  H'068F'
CWG3CON0         EQU  H'0690'
CWG3CON1         EQU  H'0691'
CWG3AS0          EQU  H'0692'
CWG3AS1          EQU  H'0693'
CWG3STR          EQU  H'0694'

;-----Bank14------------------
PIR0             EQU  H'070C'
PIR1             EQU  H'070D'
PIR2             EQU  H'070E'
PIR3             EQU  H'070F'
PIR4             EQU  H'0710'
PIR5             EQU  H'0711'
PIR6             EQU  H'0712'
PIR7             EQU  H'0713'
PIR8             EQU  H'0714'
PIE0             EQU  H'0716'
PIE1             EQU  H'0717'
PIE2             EQU  H'0718'
PIE3             EQU  H'0719'
PIE4             EQU  H'071A'
PIE5             EQU  H'071B'
PIE6             EQU  H'071C'
PIE7             EQU  H'071D'
PIE8             EQU  H'071E'

;-----Bank15------------------
PMD0             EQU  H'0796'
PMD1             EQU  H'0797'
PMD2             EQU  H'0798'
PMD3             EQU  H'0799'
PMD4             EQU  H'079A'
PMD5             EQU  H'079B'

;-----Bank16------------------
WDTCON0          EQU  H'080C'
WDTCON1          EQU  H'080D'
WDTPSL           EQU  H'080E'
WDTPSH           EQU  H'080F'
WDTTMR           EQU  H'0810'
BORCON           EQU  H'0811'
VREGCON          EQU  H'0812'
PCON0            EQU  H'0813'
CCDCON           EQU  H'0814'
NVMADRL          EQU  H'081A'
NVMADRH          EQU  H'081B'
NVMDATL          EQU  H'081C'
NVMDATH          EQU  H'081D'
NVMCON1          EQU  H'081E'
NVMCON2          EQU  H'081F'

;-----Bank17------------------
CPUDOZE          EQU  H'088C'
OSCCON1          EQU  H'088D'
OSCCON2          EQU  H'088E'
OSCCON3          EQU  H'088F'
OSCSTAT          EQU  H'0890'
OSCEN            EQU  H'0891'
OSCTUNE          EQU  H'0892'
OSCFRQ           EQU  H'0893'
CLKRCON          EQU  H'0895'
CLKRCLK          EQU  H'0896'
MDCON0           EQU  H'0897'
MDCON1           EQU  H'0898'
MDSRC            EQU  H'0899'
MDCARL           EQU  H'089A'
MDCARH           EQU  H'089B'

;-----Bank18------------------
FVRCON           EQU  H'090C'
DAC1CON0         EQU  H'090E'
DAC1CON1         EQU  H'090F'
ZCDCON           EQU  H'091F'

;-----Bank19------------------
CMOUT            EQU  H'098F'
CMSTAT           EQU  H'098F'
CM1CON0          EQU  H'0990'
CM1CON1          EQU  H'0991'
CM1NSEL          EQU  H'0992'
CM1PSEL          EQU  H'0993'
CM2CON0          EQU  H'0994'
CM2CON1          EQU  H'0995'
CM2NSEL          EQU  H'0996'
CM2PSEL          EQU  H'0997'

;-----Bank28------------------
CLCDATA          EQU  H'0E0F'
CLC1CON          EQU  H'0E10'
CLC1POL          EQU  H'0E11'
CLC1SEL0         EQU  H'0E12'
CLC1SEL1         EQU  H'0E13'
CLC1SEL2         EQU  H'0E14'
CLC1SEL3         EQU  H'0E15'
CLC1GLS0         EQU  H'0E16'
CLC1GLS1         EQU  H'0E17'
CLC1GLS2         EQU  H'0E18'
CLC1GLS3         EQU  H'0E19'
CLC2CON          EQU  H'0E1A'
CLC2POL          EQU  H'0E1B'
CLC2SEL0         EQU  H'0E1C'
CLC2SEL1         EQU  H'0E1D'
CLC2SEL2         EQU  H'0E1E'
CLC2SEL3         EQU  H'0E1F'
CLC2GLS0         EQU  H'0E20'
CLC2GLS1         EQU  H'0E21'
CLC2GLS2         EQU  H'0E22'
CLC2GLS3         EQU  H'0E23'
CLC3CON          EQU  H'0E24'
CLC3POL          EQU  H'0E25'
CLC3SEL0         EQU  H'0E26'
CLC3SEL1         EQU  H'0E27'
CLC3SEL2         EQU  H'0E28'
CLC3SEL3         EQU  H'0E29'
CLC3GLS0         EQU  H'0E2A'
CLC3GLS1         EQU  H'0E2B'
CLC3GLS2         EQU  H'0E2C'
CLC3GLS3         EQU  H'0E2D'
CLC4CON          EQU  H'0E2E'
CLC4POL          EQU  H'0E2F'
CLC4SEL0         EQU  H'0E30'
CLC4SEL1         EQU  H'0E31'
CLC4SEL2         EQU  H'0E32'
CLC4SEL3         EQU  H'0E33'
CLC4GLS0         EQU  H'0E34'
CLC4GLS1         EQU  H'0E35'
CLC4GLS2         EQU  H'0E36'
CLC4GLS3         EQU  H'0E37'

;-----Bank29------------------
PPSLOCK          EQU  H'0E8F'
INTPPS           EQU  H'0E90'
T0CKIPPS         EQU  H'0E91'
T1CKIPPS         EQU  H'0E92'
T1GPPS           EQU  H'0E93'
T3CKIPPS         EQU  H'0E94'
T3GPPS           EQU  H'0E95'
T5CKIPPS         EQU  H'0E96'
T5GPPS           EQU  H'0E97'
T2AINPPS         EQU  H'0E9C'
T4AINPPS         EQU  H'0E9D'
T6AINPPS         EQU  H'0E9E'
CCP1PPS          EQU  H'0EA1'
CCP2PPS          EQU  H'0EA2'
CCP3PPS          EQU  H'0EA3'
CCP4PPS          EQU  H'0EA4'
CCP5PPS          EQU  H'0EA5'
SMT1WINPPS       EQU  H'0EA9'
SMT1SIGPPS       EQU  H'0EAA'
SMT2WINPPS       EQU  H'0EAB'
SMT2SIGPPS       EQU  H'0EAC'
CWG1PPS          EQU  H'0EB1'
CWG2PPS          EQU  H'0EB2'
CWG3PPS          EQU  H'0EB3'
MDCARLPPS        EQU  H'0EB8'
MDCARHPPS        EQU  H'0EB9'
MDSRCPPS         EQU  H'0EBA'
CLCIN0PPS        EQU  H'0EBB'
CLCIN1PPS        EQU  H'0EBC'
CLCIN2PPS        EQU  H'0EBD'
CLCIN3PPS        EQU  H'0EBE'
ADCACTPPS        EQU  H'0EC3'
SSP1CLKPPS       EQU  H'0EC5'
SSP1DATPPS       EQU  H'0EC6'
SSP1SSPPS        EQU  H'0EC7'
SSP2CLKPPS       EQU  H'0EC8'
SSP2DATPPS       EQU  H'0EC9'
SSP2SSPPS        EQU  H'0ECA'
RXPPS            EQU  H'0ECB'
TXPPS            EQU  H'0ECC'

;-----Bank30------------------
RA0PPS           EQU  H'0F10'
RA1PPS           EQU  H'0F11'
RA2PPS           EQU  H'0F12'
RA3PPS           EQU  H'0F13'
RA4PPS           EQU  H'0F14'
RA5PPS           EQU  H'0F15'
RA6PPS           EQU  H'0F16'
RA7PPS           EQU  H'0F17'
RB0PPS           EQU  H'0F18'
RB1PPS           EQU  H'0F19'
RB2PPS           EQU  H'0F1A'
RB3PPS           EQU  H'0F1B'
RB4PPS           EQU  H'0F1C'
RB5PPS           EQU  H'0F1D'
RB6PPS           EQU  H'0F1E'
RB7PPS           EQU  H'0F1F'
RC0PPS           EQU  H'0F20'
RC1PPS           EQU  H'0F21'
RC2PPS           EQU  H'0F22'
RC3PPS           EQU  H'0F23'
RC4PPS           EQU  H'0F24'
RC5PPS           EQU  H'0F25'
RC6PPS           EQU  H'0F26'
RC7PPS           EQU  H'0F27'
ANSELA           EQU  H'0F38'
WPUA             EQU  H'0F39'
ODCONA           EQU  H'0F3A'
SLRCONA          EQU  H'0F3B'
INLVLA           EQU  H'0F3C'
IOCAP            EQU  H'0F3D'
IOCAN            EQU  H'0F3E'
IOCAF            EQU  H'0F3F'
CCDNA            EQU  H'0F40'
CCDPA            EQU  H'0F41'
ANSELB           EQU  H'0F43'
WPUB             EQU  H'0F44'
ODCONB           EQU  H'0F45'
SLRCONB          EQU  H'0F46'
INLVLB           EQU  H'0F47'
IOCBP            EQU  H'0F48'
IOCBN            EQU  H'0F49'
IOCBF            EQU  H'0F4A'
CCDNB            EQU  H'0F4B'
CCDPB            EQU  H'0F4C'
ANSELC           EQU  H'0F4E'
WPUC             EQU  H'0F4F'
ODCONC           EQU  H'0F50'
SLRCONC          EQU  H'0F51'
INLVLC           EQU  H'0F52'
IOCCP            EQU  H'0F53'
IOCCN            EQU  H'0F54'
IOCCF            EQU  H'0F55'
CCDNC            EQU  H'0F56'
CCDPC            EQU  H'0F57'
WPUE             EQU  H'0F65'
INLVLE           EQU  H'0F68'
IOCEP            EQU  H'0F69'
IOCEN            EQU  H'0F6A'
IOCEF            EQU  H'0F6B'

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
INTEDG           EQU  H'0000'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


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


;----- PORTE Bits -----------------------------------------------------
RE3              EQU  H'0003'


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


;----- ADCON0 Bits -----------------------------------------------------
ADGO             EQU  H'0000'
ADCS             EQU  H'0004'
ADCONT           EQU  H'0006'
ADON             EQU  H'0007'

DONE             EQU  H'0000'

NOT_DONE         EQU  H'0000'

GO               EQU  H'0000'
ADFM0            EQU  H'0002'
ADFM1            EQU  H'0003'

GO_NOT_DONE      EQU  H'0000'


;----- ADCON1 Bits -----------------------------------------------------
ADDSEN           EQU  H'0000'
ADGPOL           EQU  H'0005'
ADIPEN           EQU  H'0006'
ADPPOL           EQU  H'0007'


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
ADTMD0           EQU  H'0000'
ADTMD1           EQU  H'0001'
ADTMD2           EQU  H'0002'
ADCALC0          EQU  H'0004'
ADCALC1          EQU  H'0005'
ADCALC2          EQU  H'0006'

ADSOI            EQU  H'0003'


;----- ADSTAT Bits -----------------------------------------------------
ADMACT           EQU  H'0003'
ADMATH           EQU  H'0004'
ADLTHR           EQU  H'0005'
ADUTHR           EQU  H'0006'
ADAOV            EQU  H'0007'

ADSTAT0          EQU  H'0000'
ADSTAT1          EQU  H'0001'
ADSTAT2          EQU  H'0002'


;----- ADCLK Bits -----------------------------------------------------
ADCCS0           EQU  H'0000'
ADCCS1           EQU  H'0001'
ADCCS2           EQU  H'0002'
ADCCS3           EQU  H'0003'
ADCCS4           EQU  H'0004'
ADCCS5           EQU  H'0005'


;----- ADACT Bits -----------------------------------------------------
ADACT0           EQU  H'0000'
ADACT1           EQU  H'0001'
ADACT2           EQU  H'0002'
ADACT3           EQU  H'0003'
ADACT4           EQU  H'0004'


;----- ADREF Bits -----------------------------------------------------
ADNREF           EQU  H'0004'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'


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


;----- ADACQ Bits -----------------------------------------------------
ADACQ0           EQU  H'0000'
ADACQ1           EQU  H'0001'
ADACQ2           EQU  H'0002'
ADACQ3           EQU  H'0003'
ADACQ4           EQU  H'0004'
ADACQ5           EQU  H'0005'
ADACQ6           EQU  H'0006'
ADACQ7           EQU  H'0007'


;----- ADPCH Bits -----------------------------------------------------
ADPCH0           EQU  H'0000'
ADPCH1           EQU  H'0001'
ADPCH2           EQU  H'0002'
ADPCH3           EQU  H'0003'
ADPCH4           EQU  H'0004'
ADPCH5           EQU  H'0005'


;----- ADCNT Bits -----------------------------------------------------
ADCNT0           EQU  H'0000'
ADCNT1           EQU  H'0001'
ADCNT2           EQU  H'0002'
ADCNT3           EQU  H'0003'
ADCNT4           EQU  H'0004'
ADCNT5           EQU  H'0005'
ADCNT6           EQU  H'0006'
ADCNT7           EQU  H'0007'


;----- ADRPT Bits -----------------------------------------------------
ADRPT0           EQU  H'0000'
ADRPT1           EQU  H'0001'
ADRPT2           EQU  H'0002'
ADRPT3           EQU  H'0003'
ADRPT4           EQU  H'0004'
ADRPT5           EQU  H'0005'
ADRPT6           EQU  H'0006'
ADRPT7           EQU  H'0007'


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
GSS4             EQU  H'0004'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GSS2           EQU  H'0002'
T1GSS3           EQU  H'0003'
T1GSS4           EQU  H'0004'


;----- TMR1GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'
GSS4             EQU  H'0004'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GSS2           EQU  H'0002'
T1GSS3           EQU  H'0003'
T1GSS4           EQU  H'0004'


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
GSS4             EQU  H'0004'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GSS2           EQU  H'0002'
T3GSS3           EQU  H'0003'
T3GSS4           EQU  H'0004'


;----- TMR3GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'
GSS4             EQU  H'0004'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'
T3GSS2           EQU  H'0002'
T3GSS3           EQU  H'0003'
T3GSS4           EQU  H'0004'


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
GSS4             EQU  H'0004'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GSS2           EQU  H'0002'
T5GSS3           EQU  H'0003'
T5GSS4           EQU  H'0004'


;----- TMR5GATE Bits -----------------------------------------------------
GSS0             EQU  H'0000'
GSS1             EQU  H'0001'
GSS2             EQU  H'0002'
GSS3             EQU  H'0003'
GSS4             EQU  H'0004'

T5GSS0           EQU  H'0000'
T5GSS1           EQU  H'0001'
T5GSS2           EQU  H'0002'
T5GSS3           EQU  H'0003'
T5GSS4           EQU  H'0004'


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


;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
C3TSEL0          EQU  H'0004'
C3TSEL1          EQU  H'0005'
C4TSEL0          EQU  H'0006'
C4TSEL1          EQU  H'0007'


;----- CCPTMRS1 Bits -----------------------------------------------------
C5TSEL0          EQU  H'0000'
C5TSEL1          EQU  H'0001'
P6TSEL0          EQU  H'0002'
P6TSEL1          EQU  H'0003'
P7TSEL0          EQU  H'0004'
P7TSEL1          EQU  H'0005'


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
RSEL4            EQU  H'0004'


T2RSEL0          EQU  H'0000'
T2RSEL1          EQU  H'0001'
T2RSEL2          EQU  H'0002'
T2RSEL3          EQU  H'0003'
T2RSEL4          EQU  H'0004'


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
RSEL4            EQU  H'0004'


T4RSEL0          EQU  H'0000'
T4RSEL1          EQU  H'0001'
T4RSEL2          EQU  H'0002'
T4RSEL3          EQU  H'0003'
T4RSEL4          EQU  H'0004'


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
RSEL4            EQU  H'0004'


T6RSEL0          EQU  H'0000'
T6RSEL1          EQU  H'0001'
T6RSEL2          EQU  H'0002'
T6RSEL3          EQU  H'0003'
T6RSEL4          EQU  H'0004'


;----- CCP1CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP1CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP1FMT          EQU  H'0004'
CCP1OUT          EQU  H'0005'
CCP1OE           EQU  H'0006'
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
OE               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP2FMT          EQU  H'0004'
CCP2OUT          EQU  H'0005'
CCP2OE           EQU  H'0006'
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


;----- CCP3CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP3CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP3FMT          EQU  H'0004'
CCP3OUT          EQU  H'0005'
CCP3OE           EQU  H'0006'
CCP3EN           EQU  H'0007'

CCP3MODE0        EQU  H'0000'
CCP3MODE1        EQU  H'0001'
CCP3MODE2        EQU  H'0002'
CCP3MODE3        EQU  H'0003'


;----- CCP3CAP Bits -----------------------------------------------------
CTS0             EQU  H'0000'
CTS1             EQU  H'0001'
CTS2             EQU  H'0002'


CCP3CTS0         EQU  H'0000'
CCP3CTS1         EQU  H'0001'
CCP3CTS2         EQU  H'0002'


;----- CCP4CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP4CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP4FMT          EQU  H'0004'
CCP4OUT          EQU  H'0005'
CCP4OE           EQU  H'0006'
CCP4EN           EQU  H'0007'

CCP4MODE0        EQU  H'0000'
CCP4MODE1        EQU  H'0001'
CCP4MODE2        EQU  H'0002'
CCP4MODE3        EQU  H'0003'


;----- CCP4CAP Bits -----------------------------------------------------
CTS0             EQU  H'0000'
CTS1             EQU  H'0001'
CTS2             EQU  H'0002'


CCP4CTS0         EQU  H'0000'
CCP4CTS1         EQU  H'0001'
CCP4CTS2         EQU  H'0002'


;----- CCP5CON Bits -----------------------------------------------------
FMT              EQU  H'0004'
OUT_CCP5CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'

CCP5FMT          EQU  H'0004'
CCP5OUT          EQU  H'0005'
CCP5OE           EQU  H'0006'
CCP5EN           EQU  H'0007'

CCP5MODE0        EQU  H'0000'
CCP5MODE1        EQU  H'0001'
CCP5MODE2        EQU  H'0002'
CCP5MODE3        EQU  H'0003'


;----- CCP5CAP Bits -----------------------------------------------------
CTS0             EQU  H'0000'
CTS1             EQU  H'0001'
CTS2             EQU  H'0002'


CCP5CTS0         EQU  H'0000'
CCP5CTS1         EQU  H'0001'
CCP5CTS2         EQU  H'0002'


;----- PWM6DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

PWM6DC0          EQU  H'0006'
PWM6DC1          EQU  H'0007'

PWMPW0           EQU  H'0006'
PWMPW1           EQU  H'0007'


;----- PWM6DCH Bits -----------------------------------------------------
DC2              EQU  H'0000'
DC3              EQU  H'0001'
DC4              EQU  H'0002'
DC5              EQU  H'0003'
DC6              EQU  H'0004'
DC7              EQU  H'0005'
DC8              EQU  H'0006'
DC9              EQU  H'0007'

PWM6DC2          EQU  H'0000'
PWM6DC3          EQU  H'0001'
PWM6DC4          EQU  H'0002'
PWM6DC5          EQU  H'0003'
PWM6DC6          EQU  H'0004'
PWM6DC7          EQU  H'0005'
PWM6DC8          EQU  H'0006'
PWM6DC9          EQU  H'0007'

PWMPW2           EQU  H'0000'
PWMPW3           EQU  H'0001'
PWMPW4           EQU  H'0002'
PWMPW5           EQU  H'0003'
PWMPW6           EQU  H'0004'
PWMPW7           EQU  H'0005'
PWMPW8           EQU  H'0006'
PWMPW9           EQU  H'0007'


;----- PWM6CON Bits -----------------------------------------------------
POL_PWM6CON      EQU  H'0004'
OUT_PWM6CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

PWM6POL          EQU  H'0004'
PWM6OUT          EQU  H'0005'
PWM6OE           EQU  H'0006'
PWM6EN           EQU  H'0007'


;----- PWM7DCL Bits -----------------------------------------------------
DC0              EQU  H'0006'
DC1              EQU  H'0007'

PWM7DC0          EQU  H'0006'
PWM7DC1          EQU  H'0007'

PWMPW0           EQU  H'0006'
PWMPW1           EQU  H'0007'


;----- PWM7DCH Bits -----------------------------------------------------
DC2              EQU  H'0000'
DC3              EQU  H'0001'
DC4              EQU  H'0002'
DC5              EQU  H'0003'
DC6              EQU  H'0004'
DC7              EQU  H'0005'
DC8              EQU  H'0006'
DC9              EQU  H'0007'

PWM7DC2          EQU  H'0000'
PWM7DC3          EQU  H'0001'
PWM7DC4          EQU  H'0002'
PWM7DC5          EQU  H'0003'
PWM7DC6          EQU  H'0004'
PWM7DC7          EQU  H'0005'
PWM7DC8          EQU  H'0006'
PWM7DC9          EQU  H'0007'

PWMPW2           EQU  H'0000'
PWMPW3           EQU  H'0001'
PWMPW4           EQU  H'0002'
PWMPW5           EQU  H'0003'
PWMPW6           EQU  H'0004'
PWMPW7           EQU  H'0005'
PWMPW8           EQU  H'0006'
PWMPW9           EQU  H'0007'


;----- PWM7CON Bits -----------------------------------------------------
POL_PWM7CON      EQU  H'0004'
OUT_PWM7CON      EQU  H'0005'
OE               EQU  H'0006'
EN               EQU  H'0007'

PWM7POL          EQU  H'0004'
PWM7OUT          EQU  H'0005'
PWM7OE           EQU  H'0006'
PWM7EN           EQU  H'0007'


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


;----- SCANCON0 Bits -----------------------------------------------------
INTM             EQU  H'0003'
INVALID          EQU  H'0004'
BUSY             EQU  H'0005'
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
CPR0             EQU  H'0000'
CPR1             EQU  H'0001'
CPR2             EQU  H'0002'
CPR3             EQU  H'0003'
CPR4             EQU  H'0004'
CPR5             EQU  H'0005'
CPR6             EQU  H'0006'
CPR7             EQU  H'0007'



;----- SMT1CPRH Bits -----------------------------------------------------
CPR8             EQU  H'0000'
CPR9             EQU  H'0001'
CPR10            EQU  H'0002'
CPR11            EQU  H'0003'
CPR12            EQU  H'0004'
CPR13            EQU  H'0005'
CPR14            EQU  H'0006'
CPR15            EQU  H'0007'

SMT1CPR8         EQU  H'0000'
SMT1CPR9         EQU  H'0001'
SMT1CPR10        EQU  H'0002'
SMT1CPR11        EQU  H'0003'
SMT1CPR12        EQU  H'0004'
SMT1CPR13        EQU  H'0005'
SMT1CPR14        EQU  H'0006'
SMT1CPR15        EQU  H'0007'



;----- SMT1CPRU Bits -----------------------------------------------------
CPR16            EQU  H'0000'
CPR17            EQU  H'0001'
CPR18            EQU  H'0002'
CPR19            EQU  H'0003'
CPR20            EQU  H'0004'
CPR21            EQU  H'0005'
CPR22            EQU  H'0006'
CPR23            EQU  H'0007'

SMT1CPR16        EQU  H'0000'
SMT1CPR17        EQU  H'0001'
SMT1CPR18        EQU  H'0002'
SMT1CPR19        EQU  H'0003'
SMT1CPR20        EQU  H'0004'
SMT1CPR21        EQU  H'0005'
SMT1CPR22        EQU  H'0006'
SMT1CPR23        EQU  H'0007'



;----- SMT1CPWL Bits -----------------------------------------------------
CPW0             EQU  H'0000'
CPW1             EQU  H'0001'
CPW2             EQU  H'0002'
CPW3             EQU  H'0003'
CPW4             EQU  H'0004'
CPW5             EQU  H'0005'
CPW6             EQU  H'0006'
CPW7             EQU  H'0007'


SMT1CPW0         EQU  H'0000'
SMT1CPW1         EQU  H'0001'
SMT1CPW2         EQU  H'0002'
SMT1CPW3         EQU  H'0003'
SMT1CPW4         EQU  H'0004'
SMT1CPW5         EQU  H'0005'
SMT1CPW6         EQU  H'0006'
SMT1CPW7         EQU  H'0007'


;----- SMT1CPWH Bits -----------------------------------------------------
CPW8             EQU  H'0000'
CPW9             EQU  H'0001'
CPW10            EQU  H'0002'
CPW11            EQU  H'0003'
CPW12            EQU  H'0004'
CPW13            EQU  H'0005'
CPW14            EQU  H'0006'
CPW15            EQU  H'0007'


SMT1CPW8         EQU  H'0000'
SMT1CPW9         EQU  H'0001'
SMT1CPW10        EQU  H'0002'
SMT1CPW11        EQU  H'0003'
SMT1CPW12        EQU  H'0004'
SMT1CPW13        EQU  H'0005'
SMT1CPW14        EQU  H'0006'
SMT1CPW15        EQU  H'0007'


;----- SMT1CPWU Bits -----------------------------------------------------
CPW16            EQU  H'0000'
CPW17            EQU  H'0001'
CPW18            EQU  H'0002'
CPW19            EQU  H'0003'
CPW20            EQU  H'0004'
CPW21            EQU  H'0005'
CPW22            EQU  H'0006'
CPW23            EQU  H'0007'


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
SMT1EN           EQU  H'0007'


;----- SMT1CON1 Bits -----------------------------------------------------
REPEAT           EQU  H'0006'
SMT1GO           EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'


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
CPR0             EQU  H'0000'
CPR1             EQU  H'0001'
CPR2             EQU  H'0002'
CPR3             EQU  H'0003'
CPR4             EQU  H'0004'
CPR5             EQU  H'0005'
CPR6             EQU  H'0006'
CPR7             EQU  H'0007'



;----- SMT2CPRH Bits -----------------------------------------------------
CPR8             EQU  H'0000'
CPR9             EQU  H'0001'
CPR10            EQU  H'0002'
CPR11            EQU  H'0003'
CPR12            EQU  H'0004'
CPR13            EQU  H'0005'
CPR14            EQU  H'0006'
CPR15            EQU  H'0007'

SMT2CPR8         EQU  H'0000'
SMT2CPR9         EQU  H'0001'
SMT2CPR10        EQU  H'0002'
SMT2CPR11        EQU  H'0003'
SMT2CPR12        EQU  H'0004'
SMT2CPR13        EQU  H'0005'
SMT2CPR14        EQU  H'0006'
SMT2CPR15        EQU  H'0007'



;----- SMT2CPRU Bits -----------------------------------------------------
CPR16            EQU  H'0000'
CPR17            EQU  H'0001'
CPR18            EQU  H'0002'
CPR19            EQU  H'0003'
CPR20            EQU  H'0004'
CPR21            EQU  H'0005'
CPR22            EQU  H'0006'
CPR23            EQU  H'0007'

SMT2CPR16        EQU  H'0000'
SMT2CPR17        EQU  H'0001'
SMT2CPR18        EQU  H'0002'
SMT2CPR19        EQU  H'0003'
SMT2CPR20        EQU  H'0004'
SMT2CPR21        EQU  H'0005'
SMT2CPR22        EQU  H'0006'
SMT2CPR23        EQU  H'0007'



;----- SMT2CPWL Bits -----------------------------------------------------
CPW0             EQU  H'0000'
CPW1             EQU  H'0001'
CPW2             EQU  H'0002'
CPW3             EQU  H'0003'
CPW4             EQU  H'0004'
CPW5             EQU  H'0005'
CPW6             EQU  H'0006'
CPW7             EQU  H'0007'


SMT2CPW0         EQU  H'0000'
SMT2CPW1         EQU  H'0001'
SMT2CPW2         EQU  H'0002'
SMT2CPW3         EQU  H'0003'
SMT2CPW4         EQU  H'0004'
SMT2CPW5         EQU  H'0005'
SMT2CPW6         EQU  H'0006'
SMT2CPW7         EQU  H'0007'


;----- SMT2CPWH Bits -----------------------------------------------------
CPW8             EQU  H'0000'
CPW9             EQU  H'0001'
CPW10            EQU  H'0002'
CPW11            EQU  H'0003'
CPW12            EQU  H'0004'
CPW13            EQU  H'0005'
CPW14            EQU  H'0006'
CPW15            EQU  H'0007'


SMT2CPW8         EQU  H'0000'
SMT2CPW9         EQU  H'0001'
SMT2CPW10        EQU  H'0002'
SMT2CPW11        EQU  H'0003'
SMT2CPW12        EQU  H'0004'
SMT2CPW13        EQU  H'0005'
SMT2CPW14        EQU  H'0006'
SMT2CPW15        EQU  H'0007'


;----- SMT2CPWU Bits -----------------------------------------------------
CPW16            EQU  H'0000'
CPW17            EQU  H'0001'
CPW18            EQU  H'0002'
CPW19            EQU  H'0003'
CPW20            EQU  H'0004'
CPW21            EQU  H'0005'
CPW22            EQU  H'0006'
CPW23            EQU  H'0007'


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
SMT2EN           EQU  H'0007'


;----- SMT2CON1 Bits -----------------------------------------------------
REPEAT           EQU  H'0006'
SMT2GO           EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
MODE3            EQU  H'0003'


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


;----- NCO1ACCL Bits -----------------------------------------------------
NCO1ACC0         EQU  H'0000'
NCO1ACC1         EQU  H'0001'
NCO1ACC2         EQU  H'0002'
NCO1ACC3         EQU  H'0003'
NCO1ACC4         EQU  H'0004'
NCO1ACC5         EQU  H'0005'
NCO1ACC6         EQU  H'0006'
NCO1ACC7         EQU  H'0007'



;----- NCO1ACCH Bits -----------------------------------------------------
NCO1ACC8         EQU  H'0000'
NCO1ACC9         EQU  H'0001'
NCO1ACC10        EQU  H'0002'
NCO1ACC11        EQU  H'0003'
NCO1ACC12        EQU  H'0004'
NCO1ACC13        EQU  H'0005'
NCO1ACC14        EQU  H'0006'
NCO1ACC15        EQU  H'0007'



;----- NCO1ACCU Bits -----------------------------------------------------
NCO1ACC16        EQU  H'0000'
NCO1ACC17        EQU  H'0001'
NCO1ACC18        EQU  H'0002'
NCO1ACC19        EQU  H'0003'



;----- NCO1INCL Bits -----------------------------------------------------
NCO1INC0         EQU  H'0000'
NCO1INC1         EQU  H'0001'
NCO1INC2         EQU  H'0002'
NCO1INC3         EQU  H'0003'
NCO1INC4         EQU  H'0004'
NCO1INC5         EQU  H'0005'
NCO1INC6         EQU  H'0006'
NCO1INC7         EQU  H'0007'



;----- NCO1INCH Bits -----------------------------------------------------
NCO1INC8         EQU  H'0000'
NCO1INC9         EQU  H'0001'
NCO1INC10        EQU  H'0002'
NCO1INC11        EQU  H'0003'
NCO1INC12        EQU  H'0004'
NCO1INC13        EQU  H'0005'
NCO1INC14        EQU  H'0006'
NCO1INC15        EQU  H'0007'



;----- NCO1INCU Bits -----------------------------------------------------
NCO1INC16        EQU  H'0000'
NCO1INC17        EQU  H'0001'
NCO1INC18        EQU  H'0002'
NCO1INC19        EQU  H'0003'



;----- NCO1CON Bits -----------------------------------------------------
N1PFM            EQU  H'0000'
N1POL            EQU  H'0004'
N1OUT            EQU  H'0005'
N1EN             EQU  H'0007'


;----- NCO1CLK Bits -----------------------------------------------------
N1CKS0           EQU  H'0000'
N1CKS1           EQU  H'0001'
N1CKS2           EQU  H'0002'
N1PWS0           EQU  H'0005'
N1PWS1           EQU  H'0006'
N1PWS2           EQU  H'0007'



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
AS6E             EQU  H'0006'


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


;----- CWG2CLKCON Bits -----------------------------------------------------
CS               EQU  H'0000'

CWG2CS           EQU  H'0000'


;----- CWG2ISM Bits -----------------------------------------------------
CWG2ISM0         EQU  H'0000'
CWG2ISM1         EQU  H'0001'
CWG2ISM2         EQU  H'0002'
CWG2ISM3         EQU  H'0003'


;----- CWG2DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'
DBR4             EQU  H'0004'
DBR5             EQU  H'0005'


CWG2DBR0         EQU  H'0000'
CWG2DBR1         EQU  H'0001'
CWG2DBR2         EQU  H'0002'
CWG2DBR3         EQU  H'0003'
CWG2DBR4         EQU  H'0004'
CWG2DBR5         EQU  H'0005'


;----- CWG2DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'
DBF4             EQU  H'0004'
DBF5             EQU  H'0005'


CWG2DBF0         EQU  H'0000'
CWG2DBF1         EQU  H'0001'
CWG2DBF2         EQU  H'0002'
CWG2DBF3         EQU  H'0003'
CWG2DBF4         EQU  H'0004'
CWG2DBF5         EQU  H'0005'


;----- CWG2CON0 Bits -----------------------------------------------------
LD               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
G2EN             EQU  H'0007'

CWG2LD           EQU  H'0006'
CWG2EN           EQU  H'0007'

CWG2MODE0        EQU  H'0000'
CWG2MODE1        EQU  H'0001'
CWG2MODE2        EQU  H'0002'


;----- CWG2CON1 Bits -----------------------------------------------------
POLA             EQU  H'0000'
POLB             EQU  H'0001'
POLC             EQU  H'0002'
POLD             EQU  H'0003'
IN               EQU  H'0005'

CWG2POLA         EQU  H'0000'
CWG2POLB         EQU  H'0001'
CWG2POLC         EQU  H'0002'
CWG2POLD         EQU  H'0003'
CWG2IN           EQU  H'0005'


;----- CWG2AS0 Bits -----------------------------------------------------
REN              EQU  H'0006'
SHUTDOWN         EQU  H'0007'

LSAC0            EQU  H'0002'
LSAC1            EQU  H'0003'
LSBD0            EQU  H'0004'
LSBD1            EQU  H'0005'

CWG2REN          EQU  H'0006'
CWG2SHUTDOWN     EQU  H'0007'

CWG2LSAC0        EQU  H'0002'
CWG2LSAC1        EQU  H'0003'
CWG2LSBD0        EQU  H'0004'
CWG2LSBD1        EQU  H'0005'


;----- CWG2AS1 Bits -----------------------------------------------------
AS0E             EQU  H'0000'
AS1E             EQU  H'0001'
AS2E             EQU  H'0002'
AS3E             EQU  H'0003'
AS4E             EQU  H'0004'
AS5E             EQU  H'0005'
AS6E             EQU  H'0006'


;----- CWG2STR Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
OVRA             EQU  H'0004'
OVRB             EQU  H'0005'
OVRC             EQU  H'0006'
OVRD             EQU  H'0007'

CWG2STRA         EQU  H'0000'
CWG2STRB         EQU  H'0001'
CWG2STRC         EQU  H'0002'
CWG2STRD         EQU  H'0003'
CWG2OVRA         EQU  H'0004'
CWG2OVRB         EQU  H'0005'
CWG2OVRC         EQU  H'0006'
CWG2OVRD         EQU  H'0007'


;----- CWG3CLKCON Bits -----------------------------------------------------
CS               EQU  H'0000'

CWG3CS           EQU  H'0000'


;----- CWG3ISM Bits -----------------------------------------------------
CWG3ISM0         EQU  H'0000'
CWG3ISM1         EQU  H'0001'
CWG3ISM2         EQU  H'0002'
CWG3ISM3         EQU  H'0003'


;----- CWG3DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'
DBR4             EQU  H'0004'
DBR5             EQU  H'0005'


CWG3DBR0         EQU  H'0000'
CWG3DBR1         EQU  H'0001'
CWG3DBR2         EQU  H'0002'
CWG3DBR3         EQU  H'0003'
CWG3DBR4         EQU  H'0004'
CWG3DBR5         EQU  H'0005'


;----- CWG3DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'
DBF4             EQU  H'0004'
DBF5             EQU  H'0005'


CWG3DBF0         EQU  H'0000'
CWG3DBF1         EQU  H'0001'
CWG3DBF2         EQU  H'0002'
CWG3DBF3         EQU  H'0003'
CWG3DBF4         EQU  H'0004'
CWG3DBF5         EQU  H'0005'


;----- CWG3CON0 Bits -----------------------------------------------------
LD               EQU  H'0006'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'
G3EN             EQU  H'0007'

CWG3LD           EQU  H'0006'
CWG3EN           EQU  H'0007'

CWG3MODE0        EQU  H'0000'
CWG3MODE1        EQU  H'0001'
CWG3MODE2        EQU  H'0002'


;----- CWG3CON1 Bits -----------------------------------------------------
POLA             EQU  H'0000'
POLB             EQU  H'0001'
POLC             EQU  H'0002'
POLD             EQU  H'0003'
IN               EQU  H'0005'

CWG3POLA         EQU  H'0000'
CWG3POLB         EQU  H'0001'
CWG3POLC         EQU  H'0002'
CWG3POLD         EQU  H'0003'
CWG3IN           EQU  H'0005'


;----- CWG3AS0 Bits -----------------------------------------------------
REN              EQU  H'0006'
SHUTDOWN         EQU  H'0007'

LSAC0            EQU  H'0002'
LSAC1            EQU  H'0003'
LSBD0            EQU  H'0004'
LSBD1            EQU  H'0005'

CWG3REN          EQU  H'0006'
CWG3SHUTDOWN     EQU  H'0007'

CWG3LSAC0        EQU  H'0002'
CWG3LSAC1        EQU  H'0003'
CWG3LSBD0        EQU  H'0004'
CWG3LSBD1        EQU  H'0005'


;----- CWG3AS1 Bits -----------------------------------------------------
AS0E             EQU  H'0000'
AS1E             EQU  H'0001'
AS2E             EQU  H'0002'
AS3E             EQU  H'0003'
AS4E             EQU  H'0004'
AS5E             EQU  H'0005'
AS6E             EQU  H'0006'


;----- CWG3STR Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
OVRA             EQU  H'0004'
OVRB             EQU  H'0005'
OVRC             EQU  H'0006'
OVRD             EQU  H'0007'

CWG3STRA         EQU  H'0000'
CWG3STRB         EQU  H'0001'
CWG3STRC         EQU  H'0002'
CWG3STRD         EQU  H'0003'
CWG3OVRA         EQU  H'0004'
CWG3OVRB         EQU  H'0005'
CWG3OVRC         EQU  H'0006'
CWG3OVRD         EQU  H'0007'


;----- PIR0 Bits -----------------------------------------------------
INTF             EQU  H'0000'
IOCIF            EQU  H'0004'
TMR0IF           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
ADIF             EQU  H'0000'
ADTIF            EQU  H'0001'
CSWIF            EQU  H'0006'
OSFIF            EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
C1IF             EQU  H'0000'
C2IF             EQU  H'0001'
ZCDIF            EQU  H'0006'


;----- PIR3 Bits -----------------------------------------------------
SSP1IF           EQU  H'0000'
BCL1IF           EQU  H'0001'
SSP2IF           EQU  H'0002'
BCL2IF           EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'


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
CLC1IF           EQU  H'0004'
CLC2IF           EQU  H'0005'
CLC3IF           EQU  H'0006'
CLC4IF           EQU  H'0007'


;----- PIR6 Bits -----------------------------------------------------
CCP1IF           EQU  H'0000'
CCP2IF           EQU  H'0001'
CCP3IF           EQU  H'0002'
CCP4IF           EQU  H'0003'
CCP5IF           EQU  H'0004'


;----- PIR7 Bits -----------------------------------------------------
CWG1IF           EQU  H'0000'
CWG2IF           EQU  H'0001'
CWG3IF           EQU  H'0002'
NCO1IF           EQU  H'0004'
NVMIF            EQU  H'0005'
CRCIF            EQU  H'0006'
SCANIF           EQU  H'0007'

NCOIF            EQU  H'0004'


;----- PIR8 Bits -----------------------------------------------------
SMT1IF           EQU  H'0000'
SMT1PRAIF        EQU  H'0001'
SMT1PWAIF        EQU  H'0002'
SMT2IF           EQU  H'0003'
SMT2PRAIF        EQU  H'0004'
SMT2PWAIF        EQU  H'0005'


;----- PIE0 Bits -----------------------------------------------------
INTE             EQU  H'0000'
IOCIE            EQU  H'0004'
TMR0IE           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
ADIE             EQU  H'0000'
ADTIE            EQU  H'0001'
CSWIE            EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
C1IE             EQU  H'0000'
C2IE             EQU  H'0001'
ZCDIE            EQU  H'0006'


;----- PIE3 Bits -----------------------------------------------------
SSP1IE           EQU  H'0000'
BCL1IE           EQU  H'0001'
SSP2IE           EQU  H'0002'
BCL2IE           EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'


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
CLC1IE           EQU  H'0004'
CLC2IE           EQU  H'0005'
CLC3IE           EQU  H'0006'
CLC4IE           EQU  H'0007'


;----- PIE6 Bits -----------------------------------------------------
CCP1IE           EQU  H'0000'
CCP2IE           EQU  H'0001'
CCP3IE           EQU  H'0002'
CCP4IE           EQU  H'0003'
CCP5IE           EQU  H'0004'


;----- PIE7 Bits -----------------------------------------------------
CWG1IE           EQU  H'0000'
CWG2IE           EQU  H'0001'
CWG3IE           EQU  H'0002'
NCO1IE           EQU  H'0004'
NVMIE            EQU  H'0005'
CRCIE            EQU  H'0006'
SCANIE           EQU  H'0007'

NCOIE            EQU  H'0004'


;----- PIE8 Bits -----------------------------------------------------
SMT1IE           EQU  H'0000'
SMT1PRAIE        EQU  H'0001'
SMT1PWAIE        EQU  H'0002'
SMT2IE           EQU  H'0003'
SMT2PRAIE        EQU  H'0004'
SMT2PWAIE        EQU  H'0005'


;----- PMD0 Bits -----------------------------------------------------
IOCMD            EQU  H'0000'
CLKRMD           EQU  H'0001'
NVMMD            EQU  H'0002'
SCANMD           EQU  H'0003'
CRCMD            EQU  H'0004'
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
NCOMD            EQU  H'0007'

NCO1MD           EQU  H'0007'


;----- PMD2 Bits -----------------------------------------------------
ZCDMD            EQU  H'0000'
CMP1MD           EQU  H'0001'
CMP2MD           EQU  H'0002'
ADCMD            EQU  H'0005'
DACMD            EQU  H'0006'


;----- PMD3 Bits -----------------------------------------------------
CCP1MD           EQU  H'0000'
CCP2MD           EQU  H'0001'
CCP3MD           EQU  H'0002'
CCP4MD           EQU  H'0003'
CCP5MD           EQU  H'0004'
PWM6MD           EQU  H'0005'
PWM7MD           EQU  H'0006'


;----- PMD4 Bits -----------------------------------------------------
CWG1MD           EQU  H'0000'
CWG2MD           EQU  H'0001'
CWG3MD           EQU  H'0002'
MSSP1MD          EQU  H'0004'
MSSP2MD          EQU  H'0005'
UART1MD          EQU  H'0006'


;----- PMD5 Bits -----------------------------------------------------
DSMMD            EQU  H'0000'
CLC1MD           EQU  H'0001'
CLC2MD           EQU  H'0002'
CLC3MD           EQU  H'0003'
CLC4MD           EQU  H'0004'
SMT1MD           EQU  H'0006'
SMT2MD           EQU  H'0007'


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


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
SBOREN           EQU  H'0007'


;----- VREGCON Bits -----------------------------------------------------
VREGPM0          EQU  H'0000'
VREGPM1          EQU  H'0001'


;----- PCON0 Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
NOT_RWDT         EQU  H'0004'
NOT_WDTWV        EQU  H'0005'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'


;----- CCDCON Bits -----------------------------------------------------
CCDS0            EQU  H'0000'
CCDS1            EQU  H'0001'
CCDEN            EQU  H'0007'


;----- NVMADRL Bits -----------------------------------------------------
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
NVMADR10         EQU  H'0002'
NVMADR11         EQU  H'0003'
NVMADR12         EQU  H'0004'
NVMADR13         EQU  H'0005'
NVMADR14         EQU  H'0006'


;----- NVMDATL Bits -----------------------------------------------------
NVMDAT0          EQU  H'0000'
NVMDAT1          EQU  H'0001'
NVMDAT2          EQU  H'0002'
NVMDAT3          EQU  H'0003'
NVMDAT4          EQU  H'0004'
NVMDAT5          EQU  H'0005'
NVMDAT6          EQU  H'0006'
NVMDAT7          EQU  H'0007'


;----- NVMDATH Bits -----------------------------------------------------
NVMDAT8          EQU  H'0000'
NVMDAT9          EQU  H'0001'
NVMDAT10         EQU  H'0002'
NVMDAT11         EQU  H'0003'
NVMDAT12         EQU  H'0004'
NVMDAT13         EQU  H'0005'


;----- NVMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
NVMREGS          EQU  H'0006'


;----- CPUDOZE Bits -----------------------------------------------------
DOZE0            EQU  H'0000'
DOZE1            EQU  H'0001'
DOZE2            EQU  H'0002'
DOE              EQU  H'0004'
ROI              EQU  H'0005'
DOZEN            EQU  H'0006'
IDLEN            EQU  H'0007'


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


;----- OSCEN Bits -----------------------------------------------------
ADOEN            EQU  H'0002'
SOSCEN           EQU  H'0003'
LFOEN            EQU  H'0004'
MFOEN            EQU  H'0005'
HFOEN            EQU  H'0006'
EXTOEN           EQU  H'0007'


;----- OSCTUNE Bits -----------------------------------------------------
HFTUN0           EQU  H'0000'
HFTUN1           EQU  H'0001'
HFTUN2           EQU  H'0002'
HFTUN3           EQU  H'0003'
HFTUN4           EQU  H'0004'
HFTUN5           EQU  H'0005'


;----- OSCFRQ Bits -----------------------------------------------------
HFFRQ0           EQU  H'0000'
HFFRQ1           EQU  H'0001'
HFFRQ2           EQU  H'0002'


;----- CLKRCON Bits -----------------------------------------------------
CLKREN           EQU  H'0007'

CLKRDIV0         EQU  H'0000'
CLKRDIV1         EQU  H'0001'
CLKRDIV2         EQU  H'0002'
CLKRDC0          EQU  H'0003'
CLKRDC1          EQU  H'0004'


;----- CLKRCLK Bits -----------------------------------------------------
CLKRCLK0         EQU  H'0000'
CLKRCLK1         EQU  H'0001'
CLKRCLK2         EQU  H'0002'
CLKRCLK3         EQU  H'0003'


;----- MDCON0 Bits -----------------------------------------------------
MDBIT            EQU  H'0000'
MDOPOL           EQU  H'0004'
MDOUT            EQU  H'0005'
MDEN             EQU  H'0007'


;----- MDCON1 Bits -----------------------------------------------------
MDCLSYNC         EQU  H'0000'
MDCLPOL          EQU  H'0001'
MDCHSYNC         EQU  H'0004'
MDCHPOL          EQU  H'0005'


;----- MDSRC Bits -----------------------------------------------------
MDMS0            EQU  H'0000'
MDMS1            EQU  H'0001'
MDMS2            EQU  H'0002'
MDMS3            EQU  H'0003'
MDMS4            EQU  H'0004'


;----- MDCARL Bits -----------------------------------------------------
MDCL0            EQU  H'0000'
MDCL1            EQU  H'0001'
MDCL2            EQU  H'0002'
MDCL3            EQU  H'0003'


;----- MDCARH Bits -----------------------------------------------------
MDCH0            EQU  H'0000'
MDCH1            EQU  H'0001'
MDCH2            EQU  H'0002'
MDCH3            EQU  H'0003'


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


;----- ZCDCON Bits -----------------------------------------------------
ZCDINTN          EQU  H'0000'
ZCDINTP          EQU  H'0001'
ZCDPOL           EQU  H'0004'
ZCDOUT           EQU  H'0005'
ZCDSEN           EQU  H'0007'


;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'

C1OUT_CMOUT      EQU  H'0000'
C2OUT_CMOUT      EQU  H'0001'


;----- CMSTAT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'

C1OUT_CMSTAT     EQU  H'0000'
C2OUT_CMSTAT     EQU  H'0001'


;----- CM1CON0 Bits -----------------------------------------------------
SYNC_CM1CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved         EQU  H'0002'
POL_CM1CON0      EQU  H'0004'
OUT_CM1CON0      EQU  H'0006'
ON_CM1CON0       EQU  H'0007'

C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1POL            EQU  H'0004'
C1OUT_CM1CON0    EQU  H'0006'
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


C1PCH0           EQU  H'0000'
C1PCH1           EQU  H'0001'
C1PCH2           EQU  H'0002'


;----- CM2CON0 Bits -----------------------------------------------------
SYNC_CM2CON0     EQU  H'0000'
HYS              EQU  H'0001'
Reserved         EQU  H'0002'
POL_CM2CON0      EQU  H'0004'
OUT_CM2CON0      EQU  H'0006'
ON_CM2CON0       EQU  H'0007'

C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2POL            EQU  H'0004'
C2OUT_CM2CON0    EQU  H'0006'
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


C2PCH0           EQU  H'0000'
C2PCH1           EQU  H'0001'
C2PCH2           EQU  H'0002'


;----- CLCDATA Bits -----------------------------------------------------
MLC1OUT          EQU  H'0000'
MLC2OUT          EQU  H'0001'
MLC3OUT          EQU  H'0002'
MLC4OUT          EQU  H'0003'


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
LC1D1S6          EQU  H'0006'
LC1D1S7          EQU  H'0007'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'
D1S6             EQU  H'0006'
D1S7             EQU  H'0007'


;----- CLC1SEL1 Bits -----------------------------------------------------
LC1D2S0          EQU  H'0000'
LC1D2S1          EQU  H'0001'
LC1D2S2          EQU  H'0002'
LC1D2S3          EQU  H'0003'
LC1D2S4          EQU  H'0004'
LC1D2S5          EQU  H'0005'
LC1D2S6          EQU  H'0006'
LC1D2S7          EQU  H'0007'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'
D2S6             EQU  H'0006'
D2S7             EQU  H'0007'


;----- CLC1SEL2 Bits -----------------------------------------------------
LC1D3S0          EQU  H'0000'
LC1D3S1          EQU  H'0001'
LC1D3S2          EQU  H'0002'
LC1D3S3          EQU  H'0003'
LC1D3S4          EQU  H'0004'
LC1D3S5          EQU  H'0005'
LC1D3S6          EQU  H'0006'
LC1D3S7          EQU  H'0007'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'
D3S6             EQU  H'0006'
D3S7             EQU  H'0007'


;----- CLC1SEL3 Bits -----------------------------------------------------
LC1D4S0          EQU  H'0000'
LC1D4S1          EQU  H'0001'
LC1D4S2          EQU  H'0002'
LC1D4S3          EQU  H'0003'
LC1D4S4          EQU  H'0004'
LC1D4S5          EQU  H'0005'
LC1D4S6          EQU  H'0006'
LC1D4S7          EQU  H'0007'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'
D4S6             EQU  H'0006'
D4S7             EQU  H'0007'


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
LC2D1S6          EQU  H'0006'
LC2D1S7          EQU  H'0007'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'
D1S6             EQU  H'0006'
D1S7             EQU  H'0007'


;----- CLC2SEL1 Bits -----------------------------------------------------
LC2D2S0          EQU  H'0000'
LC2D2S1          EQU  H'0001'
LC2D2S2          EQU  H'0002'
LC2D2S3          EQU  H'0003'
LC2D2S4          EQU  H'0004'
LC2D2S5          EQU  H'0005'
LC2D2S6          EQU  H'0006'
LC2D2S7          EQU  H'0007'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'
D2S6             EQU  H'0006'
D2S7             EQU  H'0007'


;----- CLC2SEL2 Bits -----------------------------------------------------
LC2D3S0          EQU  H'0000'
LC2D3S1          EQU  H'0001'
LC2D3S2          EQU  H'0002'
LC2D3S3          EQU  H'0003'
LC2D3S4          EQU  H'0004'
LC2D3S5          EQU  H'0005'
LC2D3S6          EQU  H'0006'
LC2D3S7          EQU  H'0007'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'
D3S6             EQU  H'0006'
D3S7             EQU  H'0007'


;----- CLC2SEL3 Bits -----------------------------------------------------
LC2D4S0          EQU  H'0000'
LC2D4S1          EQU  H'0001'
LC2D4S2          EQU  H'0002'
LC2D4S3          EQU  H'0003'
LC2D4S4          EQU  H'0004'
LC2D4S5          EQU  H'0005'
LC2D4S6          EQU  H'0006'
LC2D4S7          EQU  H'0007'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'
D4S6             EQU  H'0006'
D4S7             EQU  H'0007'


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

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
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
LC3D1S5          EQU  H'0005'
LC3D1S6          EQU  H'0006'
LC3D1S7          EQU  H'0007'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'
D1S6             EQU  H'0006'
D1S7             EQU  H'0007'


;----- CLC3SEL1 Bits -----------------------------------------------------
LC3D2S0          EQU  H'0000'
LC3D2S1          EQU  H'0001'
LC3D2S2          EQU  H'0002'
LC3D2S3          EQU  H'0003'
LC3D2S4          EQU  H'0004'
LC3D2S5          EQU  H'0005'
LC3D2S6          EQU  H'0006'
LC3D2S7          EQU  H'0007'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'
D2S6             EQU  H'0006'
D2S7             EQU  H'0007'


;----- CLC3SEL2 Bits -----------------------------------------------------
LC3D3S0          EQU  H'0000'
LC3D3S1          EQU  H'0001'
LC3D3S2          EQU  H'0002'
LC3D3S3          EQU  H'0003'
LC3D3S4          EQU  H'0004'
LC3D3S5          EQU  H'0005'
LC3D3S6          EQU  H'0006'
LC3D3S7          EQU  H'0007'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'
D3S6             EQU  H'0006'
D3S7             EQU  H'0007'


;----- CLC3SEL3 Bits -----------------------------------------------------
LC3D4S0          EQU  H'0000'
LC3D4S1          EQU  H'0001'
LC3D4S2          EQU  H'0002'
LC3D4S3          EQU  H'0003'
LC3D4S4          EQU  H'0004'
LC3D4S5          EQU  H'0005'
LC3D4S6          EQU  H'0006'
LC3D4S7          EQU  H'0007'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'
D4S6             EQU  H'0006'
D4S7             EQU  H'0007'


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


;----- CLC4CON Bits -----------------------------------------------------
LC4INTN          EQU  H'0003'
LC4INTP          EQU  H'0004'
LC4OUT           EQU  H'0005'
LC4EN            EQU  H'0007'

LC4MODE0         EQU  H'0000'
LC4MODE1         EQU  H'0001'
LC4MODE2         EQU  H'0002'

INTN_CLC4CON     EQU  H'0003'
INTP_CLC4CON     EQU  H'0004'
OUT_CLC4CON      EQU  H'0005'
EN               EQU  H'0007'

MODE0            EQU  H'0000'
MODE1            EQU  H'0001'
MODE2            EQU  H'0002'


;----- CLC4POL Bits -----------------------------------------------------
LC4G1POL         EQU  H'0000'
LC4G2POL         EQU  H'0001'
LC4G3POL         EQU  H'0002'
LC4G4POL         EQU  H'0003'
LC4POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL_CLC4POL      EQU  H'0007'


;----- CLC4SEL0 Bits -----------------------------------------------------
LC4D1S0          EQU  H'0000'
LC4D1S1          EQU  H'0001'
LC4D1S2          EQU  H'0002'
LC4D1S3          EQU  H'0003'
LC4D1S4          EQU  H'0004'
LC4D1S5          EQU  H'0005'
LC4D1S6          EQU  H'0006'
LC4D1S7          EQU  H'0007'



D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D1S3             EQU  H'0003'
D1S4             EQU  H'0004'
D1S5             EQU  H'0005'
D1S6             EQU  H'0006'
D1S7             EQU  H'0007'


;----- CLC4SEL1 Bits -----------------------------------------------------
LC4D2S0          EQU  H'0000'
LC4D2S1          EQU  H'0001'
LC4D2S2          EQU  H'0002'
LC4D2S3          EQU  H'0003'
LC4D2S4          EQU  H'0004'
LC4D2S5          EQU  H'0005'
LC4D2S6          EQU  H'0006'
LC4D2S7          EQU  H'0007'



D2S0             EQU  H'0000'
D2S1             EQU  H'0001'
D2S2             EQU  H'0002'
D2S3             EQU  H'0003'
D2S4             EQU  H'0004'
D2S5             EQU  H'0005'
D2S6             EQU  H'0006'
D2S7             EQU  H'0007'


;----- CLC4SEL2 Bits -----------------------------------------------------
LC4D3S0          EQU  H'0000'
LC4D3S1          EQU  H'0001'
LC4D3S2          EQU  H'0002'
LC4D3S3          EQU  H'0003'
LC4D3S4          EQU  H'0004'
LC4D3S5          EQU  H'0005'
LC4D3S6          EQU  H'0006'
LC4D3S7          EQU  H'0007'



D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D3S3             EQU  H'0003'
D3S4             EQU  H'0004'
D3S5             EQU  H'0005'
D3S6             EQU  H'0006'
D3S7             EQU  H'0007'


;----- CLC4SEL3 Bits -----------------------------------------------------
LC4D4S0          EQU  H'0000'
LC4D4S1          EQU  H'0001'
LC4D4S2          EQU  H'0002'
LC4D4S3          EQU  H'0003'
LC4D4S4          EQU  H'0004'
LC4D4S5          EQU  H'0005'
LC4D4S6          EQU  H'0006'
LC4D4S7          EQU  H'0007'



D4S0             EQU  H'0000'
D4S1             EQU  H'0001'
D4S2             EQU  H'0002'
D4S3             EQU  H'0003'
D4S4             EQU  H'0004'
D4S5             EQU  H'0005'
D4S6             EQU  H'0006'
D4S7             EQU  H'0007'


;----- CLC4GLS0 Bits -----------------------------------------------------
LC4G1D1N         EQU  H'0000'
LC4G1D1T         EQU  H'0001'
LC4G1D2N         EQU  H'0002'
LC4G1D2T         EQU  H'0003'
LC4G1D3N         EQU  H'0004'
LC4G1D3T         EQU  H'0005'
LC4G1D4N         EQU  H'0006'
LC4G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC4GLS1 Bits -----------------------------------------------------
LC4G2D1N         EQU  H'0000'
LC4G2D1T         EQU  H'0001'
LC4G2D2N         EQU  H'0002'
LC4G2D2T         EQU  H'0003'
LC4G2D3N         EQU  H'0004'
LC4G2D3T         EQU  H'0005'
LC4G2D4N         EQU  H'0006'
LC4G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC4GLS2 Bits -----------------------------------------------------
LC4G3D1N         EQU  H'0000'
LC4G3D1T         EQU  H'0001'
LC4G3D2N         EQU  H'0002'
LC4G3D2T         EQU  H'0003'
LC4G3D3N         EQU  H'0004'
LC4G3D3T         EQU  H'0005'
LC4G3D4N         EQU  H'0006'
LC4G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC4GLS3 Bits -----------------------------------------------------
LC4G4D1N         EQU  H'0000'
LC4G4D1T         EQU  H'0001'
LC4G4D2N         EQU  H'0002'
LC4G4D2T         EQU  H'0003'
LC4G4D3N         EQU  H'0004'
LC4G4D3T         EQU  H'0005'
LC4G4D4N         EQU  H'0006'
LC4G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


;----- PPSLOCK Bits -----------------------------------------------------
PPSLOCKED        EQU  H'0000'


;----- INTPPS Bits -----------------------------------------------------
INTPPS0          EQU  H'0000'
INTPPS1          EQU  H'0001'
INTPPS2          EQU  H'0002'
INTPPS3          EQU  H'0003'


;----- T0CKIPPS Bits -----------------------------------------------------
T0CKIPPS0        EQU  H'0000'
T0CKIPPS1        EQU  H'0001'
T0CKIPPS2        EQU  H'0002'
T0CKIPPS3        EQU  H'0003'


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


;----- T2AINPPS Bits -----------------------------------------------------
T2AINPPS0        EQU  H'0000'
T2AINPPS1        EQU  H'0001'
T2AINPPS2        EQU  H'0002'
T2AINPPS3        EQU  H'0003'
T2AINPPS4        EQU  H'0004'


;----- T4AINPPS Bits -----------------------------------------------------
T4AINPPS0        EQU  H'0000'
T4AINPPS1        EQU  H'0001'
T4AINPPS2        EQU  H'0002'
T4AINPPS3        EQU  H'0003'
T4AINPPS4        EQU  H'0004'


;----- T6AINPPS Bits -----------------------------------------------------
T6AINPPS0        EQU  H'0000'
T6AINPPS1        EQU  H'0001'
T6AINPPS2        EQU  H'0002'
T6AINPPS3        EQU  H'0003'
T6AINPPS4        EQU  H'0004'


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


;----- CCP3PPS Bits -----------------------------------------------------
CCP3PPS0         EQU  H'0000'
CCP3PPS1         EQU  H'0001'
CCP3PPS2         EQU  H'0002'
CCP3PPS3         EQU  H'0003'
CCP3PPS4         EQU  H'0004'


;----- CCP4PPS Bits -----------------------------------------------------
CCP4PPS0         EQU  H'0000'
CCP4PPS1         EQU  H'0001'
CCP4PPS2         EQU  H'0002'
CCP4PPS3         EQU  H'0003'
CCP4PPS4         EQU  H'0004'


;----- CCP5PPS Bits -----------------------------------------------------
CCP5PPS0         EQU  H'0000'
CCP5PPS1         EQU  H'0001'
CCP5PPS2         EQU  H'0002'
CCP5PPS3         EQU  H'0003'
CCP5PPS4         EQU  H'0004'
CCP6PPS          EQU  H'0005'


;----- SMT1WINPPS Bits -----------------------------------------------------
SMU1WINPPS0      EQU  H'0000'
SMU1WINPPS1      EQU  H'0001'
SMU1WINPPS2      EQU  H'0002'
SMU1WINPPS3      EQU  H'0003'
SMU1WINPPS4      EQU  H'0004'


;----- SMT1SIGPPS Bits -----------------------------------------------------
SMU1SIGPPS0      EQU  H'0000'
SMU1SIGPPS1      EQU  H'0001'
SMU1SIGPPS2      EQU  H'0002'
SMU1SIGPPS3      EQU  H'0003'
SMU1SIGPPS4      EQU  H'0004'


;----- SMT2WINPPS Bits -----------------------------------------------------
SMU2WINPPS0      EQU  H'0000'
SMU2WINPPS1      EQU  H'0001'
SMU2WINPPS2      EQU  H'0002'
SMU2WINPPS3      EQU  H'0003'
SMU2WINPPS4      EQU  H'0004'


;----- SMT2SIGPPS Bits -----------------------------------------------------
SMU2SIGPPS0      EQU  H'0000'
SMU2SIGPPS1      EQU  H'0001'
SMU2SIGPPS2      EQU  H'0002'
SMU2SIGPPS3      EQU  H'0003'
SMU2SIGPPS4      EQU  H'0004'


;----- CWG1PPS Bits -----------------------------------------------------
CWG1PPS0         EQU  H'0000'
CWG1PPS1         EQU  H'0001'
CWG1PPS2         EQU  H'0002'
CWG1PPS3         EQU  H'0003'
CWG1PPS4         EQU  H'0004'


;----- CWG2PPS Bits -----------------------------------------------------
CWG2PPS0         EQU  H'0000'
CWG2PPS1         EQU  H'0001'
CWG2PPS2         EQU  H'0002'
CWG2PPS3         EQU  H'0003'
CWG2PPS4         EQU  H'0004'


;----- CWG3PPS Bits -----------------------------------------------------
CWG3PPS0         EQU  H'0000'
CWG3PPS1         EQU  H'0001'
CWG3PPS2         EQU  H'0002'
CWG3PPS3         EQU  H'0003'
CWG3PPS4         EQU  H'0004'


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


;----- ADCACTPPS Bits -----------------------------------------------------
ADCACTPPS0       EQU  H'0000'
ADCACTPPS1       EQU  H'0001'
ADCACTPPS2       EQU  H'0002'
ADCACTPPS3       EQU  H'0003'
ADCACTPPS4       EQU  H'0004'


;----- SSP1CLKPPS Bits -----------------------------------------------------
SSP1CLKPPS0      EQU  H'0000'
SSP1CLKPPS1      EQU  H'0001'
SSP1CLKPPS2      EQU  H'0002'
SSP1CLKPPS3      EQU  H'0003'
SSP1CLKPPS4      EQU  H'0004'



;----- SSP1DATPPS Bits -----------------------------------------------------
SSP1DATPPS0      EQU  H'0000'
SSP1DATPPS1      EQU  H'0001'
SSP1DATPPS2      EQU  H'0002'
SSP1DATPPS3      EQU  H'0003'
SSP1DATPPS4      EQU  H'0004'



;----- SSP1SSPPS Bits -----------------------------------------------------
SSP1SSPPS0       EQU  H'0000'
SSP1SSPPS1       EQU  H'0001'
SSP1SSPPS2       EQU  H'0002'
SSP1SSPPS3       EQU  H'0003'
SSP1SSPPS4       EQU  H'0004'



;----- SSP2CLKPPS Bits -----------------------------------------------------
SSP2CLKPPS0      EQU  H'0000'
SSP2CLKPPS1      EQU  H'0001'
SSP2CLKPPS2      EQU  H'0002'
SSP2CLKPPS3      EQU  H'0003'
SSP2CLKPPS4      EQU  H'0004'



;----- SSP2DATPPS Bits -----------------------------------------------------
SSP2DATPPS0      EQU  H'0000'
SSP2DATPPS1      EQU  H'0001'
SSP2DATPPS2      EQU  H'0002'
SSP2DATPPS3      EQU  H'0003'
SSP2DATPPS4      EQU  H'0004'



;----- SSP2SSPPS Bits -----------------------------------------------------
SSP2SSPPS0       EQU  H'0000'
SSP2SSPPS1       EQU  H'0001'
SSP2SSPPS2       EQU  H'0002'
SSP2SSPPS3       EQU  H'0003'
SSP2SSPPS4       EQU  H'0004'



;----- RXPPS Bits -----------------------------------------------------
RXPPS0           EQU  H'0000'
RXPPS1           EQU  H'0001'
RXPPS2           EQU  H'0002'
RXPPS3           EQU  H'0003'
RXPPS4           EQU  H'0004'



;----- TXPPS Bits -----------------------------------------------------
TXPPS0           EQU  H'0000'
TXPPS1           EQU  H'0001'
TXPPS2           EQU  H'0002'
TXPPS3           EQU  H'0003'
TXPPS4           EQU  H'0004'



;----- RA0PPS Bits -----------------------------------------------------
RA0PPS0          EQU  H'0000'
RA0PPS1          EQU  H'0001'
RA0PPS2          EQU  H'0002'
RA0PPS3          EQU  H'0003'
RA0PPS4          EQU  H'0004'
RA0PPS5          EQU  H'0005'


;----- RA1PPS Bits -----------------------------------------------------
RA1PPS0          EQU  H'0000'
RA1PPS1          EQU  H'0001'
RA1PPS2          EQU  H'0002'
RA1PPS3          EQU  H'0003'
RA1PPS4          EQU  H'0004'
RA1PPS5          EQU  H'0005'


;----- RA2PPS Bits -----------------------------------------------------
RA2PPS0          EQU  H'0000'
RA2PPS1          EQU  H'0001'
RA2PPS2          EQU  H'0002'
RA2PPS3          EQU  H'0003'
RA2PPS4          EQU  H'0004'
RA2PPS5          EQU  H'0005'


;----- RA3PPS Bits -----------------------------------------------------
RA3PPS0          EQU  H'0000'
RA3PPS1          EQU  H'0001'
RA3PPS2          EQU  H'0002'
RA3PPS3          EQU  H'0003'
RA3PPS4          EQU  H'0004'
RA3PPS5          EQU  H'0005'


;----- RA4PPS Bits -----------------------------------------------------
RA4PPS0          EQU  H'0000'
RA4PPS1          EQU  H'0001'
RA4PPS2          EQU  H'0002'
RA4PPS3          EQU  H'0003'
RA4PPS4          EQU  H'0004'
RA4PPS5          EQU  H'0005'


;----- RA5PPS Bits -----------------------------------------------------
RA5PPS0          EQU  H'0000'
RA5PPS1          EQU  H'0001'
RA5PPS2          EQU  H'0002'
RA5PPS3          EQU  H'0003'
RA5PPS4          EQU  H'0004'
RA5PPS5          EQU  H'0005'


;----- RA6PPS Bits -----------------------------------------------------
RA6PPS0          EQU  H'0000'
RA6PPS1          EQU  H'0001'
RA6PPS2          EQU  H'0002'
RA6PPS3          EQU  H'0003'
RA6PPS4          EQU  H'0004'
RA6PPS5          EQU  H'0005'


;----- RA7PPS Bits -----------------------------------------------------
RA7PPS0          EQU  H'0000'
RA7PPS1          EQU  H'0001'
RA7PPS2          EQU  H'0002'
RA7PPS3          EQU  H'0003'
RA7PPS4          EQU  H'0004'
RA7PPS5          EQU  H'0005'


;----- RB0PPS Bits -----------------------------------------------------
RB0PPS0          EQU  H'0000'
RB0PPS1          EQU  H'0001'
RB0PPS2          EQU  H'0002'
RB0PPS3          EQU  H'0003'
RB0PPS4          EQU  H'0004'
RB0PPS5          EQU  H'0005'


;----- RB1PPS Bits -----------------------------------------------------
RB1PPS0          EQU  H'0000'
RB1PPS1          EQU  H'0001'
RB1PPS2          EQU  H'0002'
RB1PPS3          EQU  H'0003'
RB1PPS4          EQU  H'0004'
RB1PPS5          EQU  H'0005'


;----- RB2PPS Bits -----------------------------------------------------
RB2PPS0          EQU  H'0000'
RB2PPS1          EQU  H'0001'
RB2PPS2          EQU  H'0002'
RB2PPS3          EQU  H'0003'
RB2PPS4          EQU  H'0004'
RB2PPS5          EQU  H'0005'


;----- RB3PPS Bits -----------------------------------------------------
RB3PPS0          EQU  H'0000'
RB3PPS1          EQU  H'0001'
RB3PPS2          EQU  H'0002'
RB3PPS3          EQU  H'0003'
RB3PPS4          EQU  H'0004'
RB3PPS5          EQU  H'0005'


;----- RB4PPS Bits -----------------------------------------------------
RB4PPS0          EQU  H'0000'
RB4PPS1          EQU  H'0001'
RB4PPS2          EQU  H'0002'
RB4PPS3          EQU  H'0003'
RB4PPS4          EQU  H'0004'
RB4PPS5          EQU  H'0005'


;----- RB5PPS Bits -----------------------------------------------------
RB5PPS0          EQU  H'0000'
RB5PPS1          EQU  H'0001'
RB5PPS2          EQU  H'0002'
RB5PPS3          EQU  H'0003'
RB5PPS4          EQU  H'0004'
RB5PPS5          EQU  H'0005'


;----- RB6PPS Bits -----------------------------------------------------
RB6PPS0          EQU  H'0000'
RB6PPS1          EQU  H'0001'
RB6PPS2          EQU  H'0002'
RB6PPS3          EQU  H'0003'
RB6PPS4          EQU  H'0004'
RB6PPS5          EQU  H'0005'


;----- RB7PPS Bits -----------------------------------------------------
RB7PPS0          EQU  H'0000'
RB7PPS1          EQU  H'0001'
RB7PPS2          EQU  H'0002'
RB7PPS3          EQU  H'0003'
RB7PPS4          EQU  H'0004'
RB7PPS5          EQU  H'0005'


;----- RC0PPS Bits -----------------------------------------------------
RC0PPS0          EQU  H'0000'
RC0PPS1          EQU  H'0001'
RC0PPS2          EQU  H'0002'
RC0PPS3          EQU  H'0003'
RC0PPS4          EQU  H'0004'
RC0PPS5          EQU  H'0005'


;----- RC1PPS Bits -----------------------------------------------------
RC1PPS0          EQU  H'0000'
RC1PPS1          EQU  H'0001'
RC1PPS2          EQU  H'0002'
RC1PPS3          EQU  H'0003'
RC1PPS4          EQU  H'0004'
RC1PPS5          EQU  H'0005'


;----- RC2PPS Bits -----------------------------------------------------
RC2PPS0          EQU  H'0000'
RC2PPS1          EQU  H'0001'
RC2PPS2          EQU  H'0002'
RC2PPS3          EQU  H'0003'
RC2PPS4          EQU  H'0004'
RC2PPS5          EQU  H'0005'


;----- RC3PPS Bits -----------------------------------------------------
RC3PPS0          EQU  H'0000'
RC3PPS1          EQU  H'0001'
RC3PPS2          EQU  H'0002'
RC3PPS3          EQU  H'0003'
RC3PPS4          EQU  H'0004'
RC3PPS5          EQU  H'0005'


;----- RC4PPS Bits -----------------------------------------------------
RC4PPS0          EQU  H'0000'
RC4PPS1          EQU  H'0001'
RC4PPS2          EQU  H'0002'
RC4PPS3          EQU  H'0003'
RC4PPS4          EQU  H'0004'
RC4PPS5          EQU  H'0005'


;----- RC5PPS Bits -----------------------------------------------------
RC5PPS0          EQU  H'0000'
RC5PPS1          EQU  H'0001'
RC5PPS2          EQU  H'0002'
RC5PPS3          EQU  H'0003'
RC5PPS4          EQU  H'0004'
RC5PPS5          EQU  H'0005'


;----- RC6PPS Bits -----------------------------------------------------
RC6PPS0          EQU  H'0000'
RC6PPS1          EQU  H'0001'
RC6PPS2          EQU  H'0002'
RC6PPS3          EQU  H'0003'
RC6PPS4          EQU  H'0004'
RC6PPS5          EQU  H'0005'


;----- RC7PPS Bits -----------------------------------------------------
RC7PPS0          EQU  H'0000'
RC7PPS1          EQU  H'0001'
RC7PPS2          EQU  H'0002'
RC7PPS3          EQU  H'0003'
RC7PPS4          EQU  H'0004'
RC7PPS5          EQU  H'0005'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA4            EQU  H'0004'
ANSA5            EQU  H'0005'
ANSA6            EQU  H'0006'
ANSA7            EQU  H'0007'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'
WPUA6            EQU  H'0006'
WPUA7            EQU  H'0007'


;----- ODCONA Bits -----------------------------------------------------
ODCA0            EQU  H'0000'
ODCA1            EQU  H'0001'
ODCA2            EQU  H'0002'
ODCA3            EQU  H'0003'
ODCA4            EQU  H'0004'
ODCA5            EQU  H'0005'
ODCA6            EQU  H'0006'
ODCA7            EQU  H'0007'


;----- SLRCONA Bits -----------------------------------------------------
SLRA0            EQU  H'0000'
SLRA1            EQU  H'0001'
SLRA2            EQU  H'0002'
SLRA3            EQU  H'0003'
SLRA4            EQU  H'0004'
SLRA5            EQU  H'0005'
SLRA6            EQU  H'0006'
SLRA7            EQU  H'0007'


;----- INLVLA Bits -----------------------------------------------------
INLVLA0          EQU  H'0000'
INLVLA1          EQU  H'0001'
INLVLA2          EQU  H'0002'
INLVLA3          EQU  H'0003'
INLVLA4          EQU  H'0004'
INLVLA5          EQU  H'0005'
INLVLA6          EQU  H'0006'
INLVLA7          EQU  H'0007'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'
IOCAP6           EQU  H'0006'
IOCAP7           EQU  H'0007'


;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'
IOCAN6           EQU  H'0006'
IOCAN7           EQU  H'0007'


;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'
IOCAF6           EQU  H'0006'
IOCAF7           EQU  H'0007'


;----- CCDNA Bits -----------------------------------------------------
CCDNA0           EQU  H'0000'
CCDNA1           EQU  H'0001'
CCDNA2           EQU  H'0002'
CCDNA3           EQU  H'0003'
CCDNA4           EQU  H'0004'
CCDNA5           EQU  H'0005'
CCDNA6           EQU  H'0006'
CCDNA7           EQU  H'0007'


;----- CCDPA Bits -----------------------------------------------------
CCDPA0           EQU  H'0000'
CCDPA1           EQU  H'0001'
CCDPA2           EQU  H'0002'
CCDPA3           EQU  H'0003'
CCDPA4           EQU  H'0004'
CCDPA5           EQU  H'0005'
CCDPA6           EQU  H'0006'
CCDPA7           EQU  H'0007'


;----- ANSELB Bits -----------------------------------------------------
ANSB0            EQU  H'0000'
ANSB1            EQU  H'0001'
ANSB2            EQU  H'0002'
ANSB3            EQU  H'0003'
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'
ANSB6            EQU  H'0006'
ANSB7            EQU  H'0007'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- ODCONB Bits -----------------------------------------------------
ODCB0            EQU  H'0000'
ODCB1            EQU  H'0001'
ODCB2            EQU  H'0002'
ODCB3            EQU  H'0003'
ODCB4            EQU  H'0004'
ODCB5            EQU  H'0005'
ODCB6            EQU  H'0006'
ODCB7            EQU  H'0007'


;----- SLRCONB Bits -----------------------------------------------------
SLRB0            EQU  H'0000'
SLRB1            EQU  H'0001'
SLRB2            EQU  H'0002'
SLRB3            EQU  H'0003'
SLRB4            EQU  H'0004'
SLRB5            EQU  H'0005'
SLRB6            EQU  H'0006'
SLRB7            EQU  H'0007'


;----- INLVLB Bits -----------------------------------------------------
INLVLB0          EQU  H'0000'
INLVLB1          EQU  H'0001'
INLVLB2          EQU  H'0002'
INLVLB3          EQU  H'0003'
INLVLB4          EQU  H'0004'
INLVLB5          EQU  H'0005'
INLVLB6          EQU  H'0006'
INLVLB7          EQU  H'0007'


;----- IOCBP Bits -----------------------------------------------------
IOCBP0           EQU  H'0000'
IOCBP1           EQU  H'0001'
IOCBP2           EQU  H'0002'
IOCBP3           EQU  H'0003'
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'


;----- IOCBN Bits -----------------------------------------------------
IOCBN0           EQU  H'0000'
IOCBN1           EQU  H'0001'
IOCBN2           EQU  H'0002'
IOCBN3           EQU  H'0003'
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'


;----- IOCBF Bits -----------------------------------------------------
IOCBF0           EQU  H'0000'
IOCBF1           EQU  H'0001'
IOCBF2           EQU  H'0002'
IOCBF3           EQU  H'0003'
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'


;----- CCDNB Bits -----------------------------------------------------
CCDNB0           EQU  H'0000'
CCDNB1           EQU  H'0001'
CCDNB2           EQU  H'0002'
CCDNB3           EQU  H'0003'
CCDNB4           EQU  H'0004'
CCDNB5           EQU  H'0005'
CCDNB6           EQU  H'0006'
CCDNB7           EQU  H'0007'


;----- CCDPB Bits -----------------------------------------------------
CCDPB0           EQU  H'0000'
CCDPB1           EQU  H'0001'
CCDPB2           EQU  H'0002'
CCDPB3           EQU  H'0003'
CCDPB4           EQU  H'0004'
CCDPB5           EQU  H'0005'
CCDPB6           EQU  H'0006'
CCDPB7           EQU  H'0007'


;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'
ANSC4            EQU  H'0004'
ANSC5            EQU  H'0005'
ANSC6            EQU  H'0006'
ANSC7            EQU  H'0007'


;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'
WPUC6            EQU  H'0006'
WPUC7            EQU  H'0007'


;----- ODCONC Bits -----------------------------------------------------
ODCC0            EQU  H'0000'
ODCC1            EQU  H'0001'
ODCC2            EQU  H'0002'
ODCC3            EQU  H'0003'
ODCC4            EQU  H'0004'
ODCC5            EQU  H'0005'
ODCC6            EQU  H'0006'
ODCC7            EQU  H'0007'


;----- SLRCONC Bits -----------------------------------------------------
SLRC0            EQU  H'0000'
SLRC1            EQU  H'0001'
SLRC2            EQU  H'0002'
SLRC3            EQU  H'0003'
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'
SLRC6            EQU  H'0006'
SLRC7            EQU  H'0007'


;----- INLVLC Bits -----------------------------------------------------
INLVLC0          EQU  H'0000'
INLVLC1          EQU  H'0001'
INLVLC2          EQU  H'0002'
INLVLC3          EQU  H'0003'
INLVLC4          EQU  H'0004'
INLVLC5          EQU  H'0005'
INLVLC6          EQU  H'0006'
INLVLC7          EQU  H'0007'


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


;----- CCDNC Bits -----------------------------------------------------
CCDNC0           EQU  H'0000'
CCDNC1           EQU  H'0001'
CCDNC2           EQU  H'0002'
CCDNC3           EQU  H'0003'
CCDNC4           EQU  H'0004'
CCDNC5           EQU  H'0005'
CCDNC6           EQU  H'0006'
CCDNC7           EQU  H'0007'


;----- CCDPC Bits -----------------------------------------------------
CCDPC0           EQU  H'0000'
CCDPC1           EQU  H'0001'
CCDPC2           EQU  H'0002'
CCDPC3           EQU  H'0003'
CCDPC4           EQU  H'0004'
CCDPC5           EQU  H'0005'
CCDPC6           EQU  H'0006'
CCDPC7           EQU  H'0007'


;----- WPUE Bits -----------------------------------------------------
WPUE3            EQU  H'0003'


;----- INLVLE Bits -----------------------------------------------------
INLVLE3          EQU  H'0003'


;----- IOCEP Bits -----------------------------------------------------
IOCEP3           EQU  H'0003'


;----- IOCEN Bits -----------------------------------------------------
IOCEN3           EQU  H'0003'


;----- IOCEF Bits -----------------------------------------------------
IOCEF3           EQU  H'0003'


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
       __BADRAM  H'0014'
       __BADRAM  H'0015'
       __BADRAM  H'0019'
       __BADRAM  H'001A'
       __BADRAM  H'001B'
       __BADRAM  H'0092'
       __BADRAM  H'009F'
       __BADRAM  H'0118'
       __BADRAM  H'0193'
       __BADRAM  H'0194'
       __BADRAM  H'0195'
       __BADRAM  H'019D'
       __BADRAM  H'019E'
       __BADRAM  H'019F'
       __BADRAM  H'029E'
       __BADRAM  H'029F'
       __BADRAM  H'038F'
       __BADRAM  H'0393'
       __BADRAM  H'0394'
       __BADRAM  H'0395'
       __BADRAM  H'0396'
       __BADRAM  H'0397'
       __BADRAM  H'0398'
       __BADRAM  H'0399'
       __BADRAM  H'039A'
       __BADRAM  H'039B'
       __BADRAM  H'039C'
       __BADRAM  H'039D'
       __BADRAM  H'039E'
       __BADRAM  H'039F'
       __BADRAM  H'0412'
       __BADRAM  H'0413'
       __BADRAM  H'0414'
       __BADRAM  H'0415'
       __BADRAM  H'049E'
       __BADRAM  H'049F'
       __BADRAM  H'051E'
       __BADRAM  H'051F'
       __BADRAM  H'0594'
       __BADRAM  H'0595'
       __BADRAM  H'0596'
       __BADRAM  H'0597'
       __BADRAM  H'0598'
       __BADRAM  H'0599'
       __BADRAM  H'059A'
       __BADRAM  H'059B'
       __BADRAM  H'059C'
       __BADRAM  H'059D'
       __BADRAM  H'059E'
       __BADRAM  H'059F'
       __BADRAM  H'0615'
       __BADRAM  H'061F'
       __BADRAM  H'0695'
       __BADRAM  H'0696'
       __BADRAM  H'0697'
       __BADRAM  H'0698'
       __BADRAM  H'0699'
       __BADRAM  H'069A'
       __BADRAM  H'069B'
       __BADRAM  H'069C'
       __BADRAM  H'069D'
       __BADRAM  H'069E'
       __BADRAM  H'069F'
       __BADRAM  H'0715'
       __BADRAM  H'071F'
       __BADRAM  H'078C'-H'0795'
       __BADRAM  H'079C'
       __BADRAM  H'079D'
       __BADRAM  H'079E'
       __BADRAM  H'079F'
       __BADRAM  H'0815'-H'0819'
       __BADRAM  H'0894'
       __BADRAM  H'089C'-H'089F'
       __BADRAM  H'090D'
       __BADRAM  H'0910'-H'0913'
       __BADRAM  H'0914'-H'091E'
       __BADRAM  H'098C'-H'098E'
       __BADRAM  H'0998'-H'099F'
       __BADRAM  H'0A0C'-H'0A1F'
       __BADRAM  H'0A8C'-H'0A9F'
       __BADRAM  H'0B0C'-H'0B1F'
       __BADRAM  H'0B8C'-H'0B9F'
       __BADRAM  H'0C0C'-H'0C1F'
       __BADRAM  H'0C8C'-H'0C9F'
       __BADRAM  H'0CC0'-H'0CEF'
       __BADRAM  H'0D0C'-H'0D1F'
       __BADRAM  H'0D20'-H'0D6F'
       __BADRAM  H'0D8C'-H'0D9F'
       __BADRAM  H'0DA0'-H'0DEF'
       __BADRAM  H'0E0C'-H'0E0E'
       __BADRAM  H'0E38'-H'0E6F'
       __BADRAM  H'0E8C'-H'0E8E'
       __BADRAM  H'0E98'-H'0E9B'
       __BADRAM  H'0E9F'-H'0EA0'
       __BADRAM  H'0EA6'-H'0EA8'
       __BADRAM  H'0EAD'-H'0EB0'
       __BADRAM  H'0EB4'-H'0EB7'
       __BADRAM  H'0EBF'-H'0EC2'
       __BADRAM  H'0EC4'
       __BADRAM  H'0ECD'-H'0ECF'
       __BADRAM  H'0ED0'-H'0EDF'
       __BADRAM  H'0EE0'-H'0EEF'
       __BADRAM  H'0F0C'-H'0F0F'
       __BADRAM  H'0F28'-H'0F37'
       __BADRAM  H'0F42'
       __BADRAM  H'0F4D'
       __BADRAM  H'0F58'-H'0F64'
       __BADRAM  H'0F66'-H'0F67'
       __BADRAM  H'0F6C'-H'0F6F'
       __BADRAM  H'0F8C'-H'0F98'
       __BADRAM  H'0F99'-H'0F9C'
       __BADRAM  H'0F9D'-H'0F9F'
       __BADRAM  H'0FA0'-H'0FBF'
       __BADRAM  H'0FC0'-H'0FDF'
       __BADRAM  H'0FE0'-H'0FE2'
       __BADRAM  H'0FE3'
       __BADRAM  H'0FEC'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           8007h
;   CONFIG2           8008h
;   CONFIG3           8009h
;   CONFIG4           800Ah
;   CONFIG5           800Bh
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1        EQU  H'8007'
_CONFIG2        EQU  H'8008'
_CONFIG3        EQU  H'8009'
_CONFIG4        EQU  H'800A'
_CONFIG5        EQU  H'800B'

;----- CONFIG1 Options --------------------------------------------------
_FEXTOSC_LP          EQU  H'3FF8'; LP (crystal oscillator) optimized for 32.768kHz; PFM set to low power
_FEXTOSC_XT          EQU  H'3FF9'; XT (crystal oscillator) above 500kHz, below 4MHz; PFM set to medium power
_FEXTOSC_HS          EQU  H'3FFA'; HS (crystal oscillator) above 4MHz; PFM set to high power
_FEXTOSC_Reserved    EQU  H'3FFB'; Reserved
_FEXTOSC_OFF         EQU  H'3FFC'; Oscillator not enabled
_FEXTOSC_ECL         EQU  H'3FFD'; EC below 500kHz; PFM set to low power
_FEXTOSC_ECM         EQU  H'3FFE'; EC for 500kHz to 8MHz; PFM set to medium power
_FEXTOSC_ECH         EQU  H'3FFF'; EC above 8MHz; PFM set to high power

_RSTOSC_HFINT32      EQU  H'3F8F'; HFINTOSC with OSCFRQ = 32MHz and CDIV = 1:1
_RSTOSC_HFINTPLL     EQU  H'3F9F'; HFINTOSC with 2x PLL, with OSCFRQ = 16 MHz and CDIV = 1:1 (FOSC = 32 MHz)
_RSTOSC_EXT4X        EQU  H'3FAF'; EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
_RSTOSC_Reserved     EQU  H'3FBF'; Reserved
_RSTOSC_SOSC         EQU  H'3FCF'; SOSC
_RSTOSC_LFINT        EQU  H'3FDF'; LFINTOSC
_RSTOSC_HFINT1       EQU  H'3FEF'; HFINTOSC (1MHz)
_RSTOSC_EXT1X        EQU  H'3FFF'; EXTOSC operating per FEXTOSC bits

_CLKOUTEN_ON         EQU  H'3EFF'; CLKOUT function is enabled; FOSC/4 clock appears at OSC2
_CLKOUTEN_OFF        EQU  H'3FFF'; CLKOUT function is disabled; i/o or oscillator function on OSC2

_CSWEN_OFF           EQU  H'37FF'; The NOSC and NDIV bits cannot be changed by user software
_CSWEN_ON            EQU  H'3FFF'; Writing to NOSC and NDIV is allowed

_FCMEN_OFF           EQU  H'1FFF'; FSCM timer disabled
_FCMEN_ON            EQU  H'3FFF'; FSCM timer enabled

;----- CONFIG2 Options --------------------------------------------------
_MCLRE_OFF           EQU  H'3FFE'; MCLR pin function is port defined function
_MCLRE_ON            EQU  H'3FFF'; MCLR pin is Master Clear function

_PWRTE_ON            EQU  H'3FFD'; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'; PWRT disabled

_LPBOREN_ON          EQU  H'3FDF'; ULPBOR enabled
_LPBOREN_OFF         EQU  H'3FFF'; ULPBOR disabled

_BOREN_OFF           EQU  H'3F3F'; Brown-out reset disabled
_BOREN_SBOREN        EQU  H'3F7F'; Brown-out reset enabled according to SBOREN bit
_BOREN_NSLEEP        EQU  H'3FBF'; Brown-out Reset enabled while running, disabled in sleep; SBOREN is ignored
_BOREN_ON            EQU  H'3FFF'; Brown-out Reset Enabled, SBOREN bit is ignored

_BORV_HI             EQU  H'3DFF'; Brown-out Reset Voltage (VBOR) is set to 2.7V
_BORV_LO             EQU  H'3FFF'; Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices

_ZCD_ON              EQU  H'3BFF'; Zero-cross detect circuit is always enabled
_ZCD_OFF             EQU  H'3FFF'; Zero-cross detect circuit is disabled at POR.

_PPS1WAY_OFF         EQU  H'37FF'; The PPSLOCK bit can be set and cleared repeatedly by software
_PPS1WAY_ON          EQU  H'3FFF'; The PPSLOCK bit can be cleared and set only once in software

_STVREN_OFF          EQU  H'2FFF'; Stack Overflow or Underflow will not cause a reset
_STVREN_ON           EQU  H'3FFF'; Stack Overflow or Underflow will cause a reset

;----- CONFIG3 Options --------------------------------------------------
_WDTCPS_WDTCPS_0     EQU  H'3FE0'; Divider ratio 1:32
_WDTCPS_WDTCPS_1     EQU  H'3FE1'; Divider ratio 1:64
_WDTCPS_WDTCPS_2     EQU  H'3FE2'; Divider ratio 1:128
_WDTCPS_WDTCPS_3     EQU  H'3FE3'; Divider ratio 1:256
_WDTCPS_WDTCPS_4     EQU  H'3FE4'; Divider ratio 1:512
_WDTCPS_WDTCPS_5     EQU  H'3FE5'; Divider ratio 1:1024
_WDTCPS_WDTCPS_6     EQU  H'3FE6'; Divider ratio 1:2048
_WDTCPS_WDTCPS_7     EQU  H'3FE7'; Divider ratio 1:4096
_WDTCPS_WDTCPS_8     EQU  H'3FE8'; Divider ratio 1:8192
_WDTCPS_WDTCPS_9     EQU  H'3FE9'; Divider ratio 1:16384
_WDTCPS_WDTCPS_10    EQU  H'3FEA'; Divider ratio 1:32768
_WDTCPS_WDTCPS_11    EQU  H'3FEB'; Divider ratio 1:65536
_WDTCPS_WDTCPS_12    EQU  H'3FEC'; Divider ratio 1:131072
_WDTCPS_WDTCPS_13    EQU  H'3FED'; Divider ratio 1:262144
_WDTCPS_WDTCPS_14    EQU  H'3FEE'; Divider ratio 1:524299
_WDTCPS_WDTCPS_15    EQU  H'3FEF'; Divider ratio 1:1048576
_WDTCPS_WDTCPS_16    EQU  H'3FF0'; Divider ratio 1:2097152
_WDTCPS_WDTCPS_17    EQU  H'3FF1'; Divider ratio 1:4194304
_WDTCPS_WDTCPS_18    EQU  H'3FF2'; Divider ratio 1:8388608
_WDTCPS_WDTCPS_19    EQU  H'3FF3'; Divider ratio 1:32
_WDTCPS_WDTCPS_20    EQU  H'3FF4'; Divider ratio 1:32
_WDTCPS_WDTCPS_21    EQU  H'3FF5'; Divider ratio 1:32
_WDTCPS_WDTCPS_22    EQU  H'3FF6'; Divider ratio 1:32
_WDTCPS_WDTCPS_23    EQU  H'3FF7'; Divider ratio 1:32
_WDTCPS_WDTCPS_24    EQU  H'3FF8'; Divider ratio 1:32
_WDTCPS_WDTCPS_25    EQU  H'3FF9'; Divider ratio 1:32
_WDTCPS_WDTCPS_26    EQU  H'3FFA'; Divider ratio 1:32
_WDTCPS_WDTCPS_27    EQU  H'3FFB'; Divider ratio 1:32
_WDTCPS_WDTCPS_28    EQU  H'3FFC'; Divider ratio 1:32
_WDTCPS_WDTCPS_29    EQU  H'3FFD'; Divider ratio 1:32
_WDTCPS_WDTCPS_30    EQU  H'3FFE'; Divider ratio 1:32
_WDTCPS_WDTCPS_31    EQU  H'3FFF'; Divider ratio 1:65536; software control of WDTPS

_WDTE_OFF            EQU  H'3F9F'; WDT Disabled, SWDTEN is ignored
_WDTE_SWDTEN         EQU  H'3FBF'; WDT enabled/disabled by SWDTEN bit in WDTCON0
_WDTE_NSLEEP         EQU  H'3FDF'; WDT enabled while sleep=0, suspended when sleep=1; SWDTEN ignored
_WDTE_ON             EQU  H'3FFF'; WDT enabled regardless of sleep; SWDTEN ignored

_WDTCWS_WDTCWS_0     EQU  H'38FF'; window delay = 87.5 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_1     EQU  H'39FF'; window delay = 75 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_2     EQU  H'3AFF'; window delay = 62.5 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_3     EQU  H'3BFF'; window delay = 50 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_4     EQU  H'3CFF'; window delay = 37.5 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_5     EQU  H'3DFF'; window delay = 25 percent of time; no software control; keyed access required
_WDTCWS_WDTCWS_6     EQU  H'3EFF'; window always open (100%); no software control; keyed access required
_WDTCWS_WDTCWS_7     EQU  H'3FFF'; window always open (100%); software control; keyed access not required

_WDTCCS_LFINTOSC     EQU  H'07FF'; WDT reference clock is the 31.0kHz LFINTOSC output
_WDTCCS_HFINTOSC     EQU  H'0FFF'; WDT reference clock is the 31.25 kHz HFINTOSC
_WDTCCS_SC           EQU  H'3FFF'; Software Control

;----- CONFIG4 Options --------------------------------------------------
_WRT_ON              EQU  H'3FFC'; 0x0000 to 0x1FFF write protected
_WRT_WRT_lower       EQU  H'3FFD'; 0x0000 to x0FFF write protected
_WRT_WRT_upper       EQU  H'3FFE'; 0x0000 to 0x01FF write protected
_WRT_OFF             EQU  H'3FFF'; Write protection off

_SCANE_not_available EQU  H'2FFF'; Scanner module is not available for use
_SCANE_available     EQU  H'3FFF'; Scanner module is available for use

_LVP_OFF             EQU  H'1FFF'; High Voltage on MCLR/Vpp must be used for programming
_LVP_ON              EQU  H'3FFF'; Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.

;----- CONFIG5 Options --------------------------------------------------
_CP_ON               EQU  H'3FFE'; UserNVM code protection enabled
_CP_OFF              EQU  H'3FFF'; UserNVM code protection disabled

_CPD_ON              EQU  H'3FFD'; DataNVM code protection enabled
_CPD_OFF             EQU  H'3FFF'; DataNVM code protection disabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'8006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'8000'
_IDLOC1          EQU  H'8001'
_IDLOC2          EQU  H'8002'
_IDLOC3          EQU  H'8003'

        LIST
