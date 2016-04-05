        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18C658 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18C658 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18C658
;       2. LIST directive in the source file
;               LIST   P=PIC18C658
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18C658
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
RXF0SIDH         EQU  H'0F00'
RXF0SIDL         EQU  H'0F01'
RXF0EIDH         EQU  H'0F02'
RXF0EIDL         EQU  H'0F03'
RXF1SIDH         EQU  H'0F04'
RXF1SIDL         EQU  H'0F05'
RXF1EID8         EQU  H'0F06'
RXF1EIDH         EQU  H'0F06'
RXF1EID0         EQU  H'0F07'
RXF1EIDL         EQU  H'0F07'
RXF2SIDH         EQU  H'0F08'
RXF2SIDL         EQU  H'0F09'
RXF2EID8         EQU  H'0F0A'
RXF2EIDH         EQU  H'0F0A'
RXF2EID0         EQU  H'0F0B'
RXF2EIDL         EQU  H'0F0B'
RXF3SIDH         EQU  H'0F0C'
RXF3SIDL         EQU  H'0F0D'
RXF3EID8         EQU  H'0F0E'
RXF3EIDH         EQU  H'0F0E'
RXF3EID0         EQU  H'0F0F'
RXF3EIDL         EQU  H'0F0F'
RXF4SIDH         EQU  H'0F10'
RXF4SIDL         EQU  H'0F11'
RXF4EID8         EQU  H'0F12'
RXF4EIDH         EQU  H'0F12'
RXF4EID0         EQU  H'0F13'
RXF4EIDL         EQU  H'0F13'
RXF5SIDH         EQU  H'0F14'
RXF5SIDL         EQU  H'0F15'
RXF5EID8         EQU  H'0F16'
RXF5EIDH         EQU  H'0F16'
RXF5EID0         EQU  H'0F17'
RXF5EIDL         EQU  H'0F17'
RXM0SIDH         EQU  H'0F18'
RXM0SIDL         EQU  H'0F19'
RXM0EID8         EQU  H'0F1A'
RXM0EIDH         EQU  H'0F1A'
RXM0EID0         EQU  H'0F1B'
RXM0EIDL         EQU  H'0F1B'
RXM1SIDH         EQU  H'0F1C'
RXM1SIDL         EQU  H'0F1D'
RXM1EID8         EQU  H'0F1E'
RXM1EIDH         EQU  H'0F1E'
RXM1EID0         EQU  H'0F1F'
RXM1EIDL         EQU  H'0F1F'
TXB2CON          EQU  H'0F20'
TXB2SIDH         EQU  H'0F21'
TXB2SIDL         EQU  H'0F22'
TXB2EIDH         EQU  H'0F23'
TXB2EIDL         EQU  H'0F24'
TXB2DLC          EQU  H'0F25'
TXB2D0           EQU  H'0F26'
TXB2D1           EQU  H'0F27'
TXB2D2           EQU  H'0F28'
TXB2D3           EQU  H'0F29'
TXB2D4           EQU  H'0F2A'
TXB2D5           EQU  H'0F2B'
TXB2D6           EQU  H'0F2C'
TXB2D7           EQU  H'0F2D'
CANSTATRO3       EQU  H'0F2E'
CANSTAT_R04      EQU  H'0F2E'
CANSTAT_RO4      EQU  H'0F2E'
TXB1CON          EQU  H'0F30'
TXB1SIDH         EQU  H'0F31'
TXB1SIDL         EQU  H'0F32'
TXB1EIDH         EQU  H'0F33'
TXB1EIDL         EQU  H'0F34'
TXB1DLC          EQU  H'0F35'
TXB1D0           EQU  H'0F36'
TXB1D1           EQU  H'0F37'
TXB1D2           EQU  H'0F38'
TXB1D3           EQU  H'0F39'
TXB1D4           EQU  H'0F3A'
TXB1D5           EQU  H'0F3B'
TXB1D6           EQU  H'0F3C'
TXB1D7           EQU  H'0F3D'
CANSTATRO2       EQU  H'0F3E'
CANSTAT_R03      EQU  H'0F3E'
CANSTAT_RO3      EQU  H'0F3E'
TXB0CON          EQU  H'0F40'
TXB0SIDH         EQU  H'0F41'
TXB0SIDL         EQU  H'0F42'
TXB0EIDH         EQU  H'0F43'
TXB0EIDL         EQU  H'0F44'
TXB0DLC          EQU  H'0F45'
TXB0D0           EQU  H'0F46'
TXB0D1           EQU  H'0F47'
TXB0D2           EQU  H'0F48'
TXB0D3           EQU  H'0F49'
TXB0D4           EQU  H'0F4A'
TXB0D5           EQU  H'0F4B'
TXB0D6           EQU  H'0F4C'
TXB0D7           EQU  H'0F4D'
CANSTATRO1       EQU  H'0F4E'
CANSTAT_R02      EQU  H'0F4E'
CANSTAT_RO2      EQU  H'0F4E'
RXB1CON          EQU  H'0F50'
RXB1SIDH         EQU  H'0F51'
RXB1SIDL         EQU  H'0F52'
RXB1EIDH         EQU  H'0F53'
RXB1EIDL         EQU  H'0F54'
RXB1DLC          EQU  H'0F55'
RXB1D0           EQU  H'0F56'
RXB1D1           EQU  H'0F57'
RXB1D2           EQU  H'0F58'
RXB1D3           EQU  H'0F59'
RXB1D4           EQU  H'0F5A'
RXB1D5           EQU  H'0F5B'
RXB1D6           EQU  H'0F5C'
RXB1D7           EQU  H'0F5D'
CANSTATRO0       EQU  H'0F5E'
CANSTAT_R01      EQU  H'0F5E'
CANSTAT_RO1      EQU  H'0F5E'
RXB0CON          EQU  H'0F60'
RXB0SIDH         EQU  H'0F61'
RXB0SIDL         EQU  H'0F62'
RXB0EIDH         EQU  H'0F63'
RXB0EIDL         EQU  H'0F64'
RXB0DLC          EQU  H'0F65'
RXB0D0           EQU  H'0F66'
RXB0D1           EQU  H'0F67'
RXB0D2           EQU  H'0F68'
RXB0D3           EQU  H'0F69'
RXB0D4           EQU  H'0F6A'
RXB0D5           EQU  H'0F6B'
RXB0D6           EQU  H'0F6C'
RXB0D7           EQU  H'0F6D'
CANSTAT          EQU  H'0F6E'
CANCON           EQU  H'0F6F'
BRGCON1          EQU  H'0F70'
BRGCON2          EQU  H'0F71'
BRGCON3          EQU  H'0F72'
CIOCON           EQU  H'0F73'
COMSTAT          EQU  H'0F74'
RXERRCNT         EQU  H'0F75'
TXERRCNT         EQU  H'0F76'
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
PIE1             EQU  H'0F9D'
PIR1             EQU  H'0F9E'
IPR1             EQU  H'0F9F'
PIE2             EQU  H'0FA0'
PIR2             EQU  H'0FA1'
IPR2             EQU  H'0FA2'
PIE3             EQU  H'0FA3'
PIR3             EQU  H'0FA4'
IPR3             EQU  H'0FA5'
COM1CON          EQU  H'0FAB'
RCSTA            EQU  H'0FAB'
COM1STA          EQU  H'0FAC'
TXSTA            EQU  H'0FAC'
COM1TX           EQU  H'0FAD'
TXREG            EQU  H'0FAD'
COM1REC          EQU  H'0FAE'
RCREG            EQU  H'0FAE'
COM1BRG          EQU  H'0FAF'
SPBRG            EQU  H'0FAF'
PSPCON           EQU  H'0FB0'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
CMCON            EQU  H'0FB4'
CVRCON           EQU  H'0FB5'
VRCON            EQU  H'0FB5'
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

;----- RXF0SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF0SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF0EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF0EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF1SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF1SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF1EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF1EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF1EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF2SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF2SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF2EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF2EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF2EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF2EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF3SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF3SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF3EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF3EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF3EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF3EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF4SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF4SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF4EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF4EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF4EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF4EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF5SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXF5SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXIDE            EQU  H'0003'


;----- RXF5EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF5EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXF5EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXF5EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXM0SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXM0SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'


;----- RXM0EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXM0EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXM0EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXM0EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXM1SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXM1SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'


;----- RXM1EID8 Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXM1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXM1EID0 Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXM1EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- TXB2CON Bits -----------------------------------------------------
TXPRI0           EQU  H'0000'
TXPRI1           EQU  H'0001'
TXREQ            EQU  H'0003'
TXERR            EQU  H'0004'
TXLARB           EQU  H'0005'
TXABT            EQU  H'0006'


;----- TXB2SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- TXB2SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDE            EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXID             EQU  H'0003'


;----- TXB2EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- TXB2EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- TXB2DLC Bits -----------------------------------------------------
DLC0             EQU  H'0000'
DLC1             EQU  H'0001'
DLC2             EQU  H'0002'
DLC3             EQU  H'0003'
TXRTR            EQU  H'0006'

DCL0             EQU  H'0000'
RTR              EQU  H'0006'


;----- TXB2D0 Bits -----------------------------------------------------
TXB2D00          EQU  H'0000'
TXB2D01          EQU  H'0001'
TXB2D02          EQU  H'0002'
TXB2D03          EQU  H'0003'
TXB2D04          EQU  H'0004'
TXB2D05          EQU  H'0005'
TXB2D06          EQU  H'0006'
TXB2D07          EQU  H'0007'


;----- TXB2D1 Bits -----------------------------------------------------
TXB2D10          EQU  H'0000'
TXB2D11          EQU  H'0001'
TXB2D12          EQU  H'0002'
TXB2D13          EQU  H'0003'
TXB2D14          EQU  H'0004'
TXB2D15          EQU  H'0005'
TXB2D16          EQU  H'0006'
TXB2D17          EQU  H'0007'


;----- TXB2D2 Bits -----------------------------------------------------
TXB2D20          EQU  H'0000'
TXB2D21          EQU  H'0001'
TXB2D22          EQU  H'0002'
TXB2D23          EQU  H'0003'
TXB2D24          EQU  H'0004'
TXB2D25          EQU  H'0005'
TXB2D26          EQU  H'0006'
TXB2D27          EQU  H'0007'


;----- TXB2D3 Bits -----------------------------------------------------
TXB2D30          EQU  H'0000'
TXB2D31          EQU  H'0001'
TXB2D32          EQU  H'0002'
TXB2D33          EQU  H'0003'
TXB2D34          EQU  H'0004'
TXB2D35          EQU  H'0005'
TXB2D36          EQU  H'0006'
TXB2D37          EQU  H'0007'


;----- TXB2D4 Bits -----------------------------------------------------
TXB2D40          EQU  H'0000'
TXB2D41          EQU  H'0001'
TXB2D42          EQU  H'0002'
TXB2D43          EQU  H'0003'
TXB2D44          EQU  H'0004'
TXB2D45          EQU  H'0005'
TXB2D46          EQU  H'0006'
TXB2D47          EQU  H'0007'


;----- TXB2D5 Bits -----------------------------------------------------
TXB2D50          EQU  H'0000'
TXB2D51          EQU  H'0001'
TXB2D52          EQU  H'0002'
TXB2D53          EQU  H'0003'
TXB2D54          EQU  H'0004'
TXB2D55          EQU  H'0005'
TXB2D56          EQU  H'0006'
TXB2D57          EQU  H'0007'


;----- TXB2D6 Bits -----------------------------------------------------
TXB2D60          EQU  H'0000'
TXB2D61          EQU  H'0001'
TXB2D62          EQU  H'0002'
TXB2D63          EQU  H'0003'
TXB2D64          EQU  H'0004'
TXB2D65          EQU  H'0005'
TXB2D66          EQU  H'0006'
TXB2D67          EQU  H'0007'


;----- TXB2D7 Bits -----------------------------------------------------
TXB2D70          EQU  H'0000'
TXB2D71          EQU  H'0001'
TXB2D72          EQU  H'0002'
TXB2D73          EQU  H'0003'
TXB2D74          EQU  H'0004'
TXB2D75          EQU  H'0005'
TXB2D76          EQU  H'0006'
TXB2D77          EQU  H'0007'


;----- CANSTATRO3 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_R04 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_RO4 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- TXB1CON Bits -----------------------------------------------------
TXPRI0           EQU  H'0000'
TXPRI1           EQU  H'0001'
TXREQ            EQU  H'0003'
TXERR            EQU  H'0004'
TXLARB           EQU  H'0005'
TXABT            EQU  H'0006'


;----- TXB1SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- TXB1SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDE            EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXID             EQU  H'0003'


;----- TXB1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- TXB1EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- TXB1DLC Bits -----------------------------------------------------
DLC0             EQU  H'0000'
DLC1             EQU  H'0001'
DLC2             EQU  H'0002'
DLC3             EQU  H'0003'
TXRTR            EQU  H'0006'

RTR              EQU  H'0006'


;----- TXB1D0 Bits -----------------------------------------------------
TXB1D00          EQU  H'0000'
TXB1D01          EQU  H'0001'
TXB1D02          EQU  H'0002'
TXB1D03          EQU  H'0003'
TXB1D04          EQU  H'0004'
TXB1D05          EQU  H'0005'
TXB1D06          EQU  H'0006'
TXB1D07          EQU  H'0007'


;----- TXB1D1 Bits -----------------------------------------------------
TXB1D10          EQU  H'0000'
TXB1D11          EQU  H'0001'
TXB1D12          EQU  H'0002'
TXB1D13          EQU  H'0003'
TXB1D14          EQU  H'0004'
TXB1D15          EQU  H'0005'
TXB1D16          EQU  H'0006'
TXB1D17          EQU  H'0007'


;----- TXB1D2 Bits -----------------------------------------------------
TXB1D20          EQU  H'0000'
TXB1D21          EQU  H'0001'
TXB1D22          EQU  H'0002'
TXB1D23          EQU  H'0003'
TXB1D24          EQU  H'0004'
TXB1D25          EQU  H'0005'
TXB1D26          EQU  H'0006'
TXB1D27          EQU  H'0007'

TBB1D23          EQU  H'0003'


;----- TXB1D3 Bits -----------------------------------------------------
TXB1D30          EQU  H'0000'
TXB1D31          EQU  H'0001'
TXB1D32          EQU  H'0002'
TXB1D33          EQU  H'0003'
TXB1D34          EQU  H'0004'
TXB1D35          EQU  H'0005'
TXB1D36          EQU  H'0006'
TXB1D37          EQU  H'0007'


;----- TXB1D4 Bits -----------------------------------------------------
TXB1D40          EQU  H'0000'
TXB1D41          EQU  H'0001'
TXB1D42          EQU  H'0002'
TXB1D43          EQU  H'0003'
TXB1D44          EQU  H'0004'
TXB1D45          EQU  H'0005'
TXB1D46          EQU  H'0006'
TXB1D47          EQU  H'0007'


;----- TXB1D5 Bits -----------------------------------------------------
TXB1D50          EQU  H'0000'
TXB1D51          EQU  H'0001'
TXB1D52          EQU  H'0002'
TXB1D53          EQU  H'0003'
TXB1D54          EQU  H'0004'
TXB1D55          EQU  H'0005'
TXB1D56          EQU  H'0006'
TXB1D57          EQU  H'0007'


;----- TXB1D6 Bits -----------------------------------------------------
TXB1D60          EQU  H'0000'
TXB1D61          EQU  H'0001'
TXB1D62          EQU  H'0002'
TXB1D63          EQU  H'0003'
TXB1D64          EQU  H'0004'
TXB1D65          EQU  H'0005'
TXB1D66          EQU  H'0006'
TXB1D67          EQU  H'0007'


;----- TXB1D7 Bits -----------------------------------------------------
TXB1D70          EQU  H'0000'
TXB1D71          EQU  H'0001'
TXB1D72          EQU  H'0002'
TXB1D73          EQU  H'0003'
TXB1D74          EQU  H'0004'
TXB1D75          EQU  H'0005'
TXB1D76          EQU  H'0006'
TXB1D77          EQU  H'0007'


;----- CANSTATRO2 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_R03 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_RO3 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- TXB0CON Bits -----------------------------------------------------
TXPRI0           EQU  H'0000'
TXPRI1           EQU  H'0001'
TXREQ            EQU  H'0003'
TXERR            EQU  H'0004'
TXLARB           EQU  H'0005'
TXABT            EQU  H'0006'


;----- TXB0SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- TXB0SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXIDEN           EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'

EXID             EQU  H'0003'


;----- TXB0EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- TXB0EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- TXB0DLC Bits -----------------------------------------------------
DLC0             EQU  H'0000'
DLC1             EQU  H'0001'
DLC2             EQU  H'0002'
DLC3             EQU  H'0003'
TXRTR            EQU  H'0006'

RTR              EQU  H'0006'


;----- TXB0D0 Bits -----------------------------------------------------
TXB0D00          EQU  H'0000'
TXB0D01          EQU  H'0001'
TXB0D02          EQU  H'0002'
TXB0D03          EQU  H'0003'
TXB0D04          EQU  H'0004'
TXB0D05          EQU  H'0005'
TXB0D06          EQU  H'0006'
TXB0D07          EQU  H'0007'


;----- TXB0D1 Bits -----------------------------------------------------
TXB0D10          EQU  H'0000'
TXB0D11          EQU  H'0001'
TXB0D12          EQU  H'0002'
TXB0D13          EQU  H'0003'
TXB0D14          EQU  H'0004'
TXB0D15          EQU  H'0005'
TXB0D16          EQU  H'0006'
TXB0D17          EQU  H'0007'


;----- TXB0D2 Bits -----------------------------------------------------
TXB0D20          EQU  H'0000'
TXB0D21          EQU  H'0001'
TXB0D22          EQU  H'0002'
TXB0D23          EQU  H'0003'
TXB0D24          EQU  H'0004'
TXB0D25          EQU  H'0005'
TXB0D26          EQU  H'0006'
TXB0D27          EQU  H'0007'


;----- TXB0D3 Bits -----------------------------------------------------
TXB0D30          EQU  H'0000'
TXB0D31          EQU  H'0001'
TXB0D32          EQU  H'0002'
TXB0D33          EQU  H'0003'
TXB0D34          EQU  H'0004'
TXB0D35          EQU  H'0005'
TXB0D36          EQU  H'0006'
TXB0D37          EQU  H'0007'


;----- TXB0D4 Bits -----------------------------------------------------
TXB0D40          EQU  H'0000'
TXB0D41          EQU  H'0001'
TXB0D42          EQU  H'0002'
TXB0D43          EQU  H'0003'
TXB0D44          EQU  H'0004'
TXB0D45          EQU  H'0005'
TXB0D46          EQU  H'0006'
TXB0D47          EQU  H'0007'


;----- TXB0D5 Bits -----------------------------------------------------
TXB0D50          EQU  H'0000'
TXB0D51          EQU  H'0001'
TXB0D52          EQU  H'0002'
TXB0D53          EQU  H'0003'
TXB0D54          EQU  H'0004'
TXB0D55          EQU  H'0005'
TXB0D56          EQU  H'0006'
TXB0D57          EQU  H'0007'


;----- TXB0D6 Bits -----------------------------------------------------
TXB0D60          EQU  H'0000'
TXB0D61          EQU  H'0001'
TXB0D62          EQU  H'0002'
TXB0D63          EQU  H'0003'
TXB0D64          EQU  H'0004'
TXB0D65          EQU  H'0005'
TXB0D66          EQU  H'0006'
TXB0D67          EQU  H'0007'


;----- TXB0D7 Bits -----------------------------------------------------
TXB0D70          EQU  H'0000'
TXB0D71          EQU  H'0001'
TXB0D72          EQU  H'0002'
TXB0D73          EQU  H'0003'
TXB0D74          EQU  H'0004'
TXB0D75          EQU  H'0005'
TXB0D76          EQU  H'0006'
TXB0D77          EQU  H'0007'


;----- CANSTATRO1 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_R02 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_RO2 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- RXB1CON Bits -----------------------------------------------------
FILHIT0          EQU  H'0000'
FILHIT1          EQU  H'0001'
FILHIT2          EQU  H'0002'
RXRTRRO          EQU  H'0003'
RXM0             EQU  H'0005'
RXM1             EQU  H'0006'
RXFUL            EQU  H'0007'


;----- RXB1SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXB1SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXID             EQU  H'0003'
SRR              EQU  H'0004'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'


;----- RXB1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXB1EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXB1DLC Bits -----------------------------------------------------
DLC0             EQU  H'0000'
DLC1             EQU  H'0001'
DLC2             EQU  H'0002'
DLC3             EQU  H'0003'
RESB0            EQU  H'0004'
RESB1            EQU  H'0005'
RXRTR            EQU  H'0006'

RESBO            EQU  H'0004'
RTR              EQU  H'0006'


;----- RXB1D0 Bits -----------------------------------------------------
RXB1D00          EQU  H'0000'
RXB1D01          EQU  H'0001'
RXB1D02          EQU  H'0002'
RXB1D03          EQU  H'0003'
RXB1D04          EQU  H'0004'
RXB1D05          EQU  H'0005'
RXB1D06          EQU  H'0006'
RXB1D07          EQU  H'0007'


;----- RXB1D1 Bits -----------------------------------------------------
RXB1D10          EQU  H'0000'
RXB1D11          EQU  H'0001'
RXB1D12          EQU  H'0002'
RXB1D13          EQU  H'0003'
RXB1D14          EQU  H'0004'
RXB1D15          EQU  H'0005'
RXB1D16          EQU  H'0006'
RXB1D17          EQU  H'0007'


;----- RXB1D2 Bits -----------------------------------------------------
RXB1D20          EQU  H'0000'
RXB1D21          EQU  H'0001'
RXB1D22          EQU  H'0002'
RXB1D23          EQU  H'0003'
RXB1D24          EQU  H'0004'
RXB1D25          EQU  H'0005'
RXB1D26          EQU  H'0006'
RXB1D27          EQU  H'0007'


;----- RXB1D3 Bits -----------------------------------------------------
RXB1D30          EQU  H'0000'
RXB1D31          EQU  H'0001'
RXB1D32          EQU  H'0002'
RXB1D33          EQU  H'0003'
RXB1D34          EQU  H'0004'
RXB1D35          EQU  H'0005'
RXB1D36          EQU  H'0006'
RXB1D37          EQU  H'0007'


;----- RXB1D4 Bits -----------------------------------------------------
RXB1D40          EQU  H'0000'
RXB1D41          EQU  H'0001'
RXB1D42          EQU  H'0002'
RXB1D43          EQU  H'0003'
RXB1D44          EQU  H'0004'
RXB1D45          EQU  H'0005'
RXB1D46          EQU  H'0006'
RXB1D47          EQU  H'0007'


;----- RXB1D5 Bits -----------------------------------------------------
RXB1D50          EQU  H'0000'
RXB1D51          EQU  H'0001'
RXB1D52          EQU  H'0002'
RXB1D53          EQU  H'0003'
RXB1D54          EQU  H'0004'
RXB1D55          EQU  H'0005'
RXB1D56          EQU  H'0006'
RXB1D57          EQU  H'0007'


;----- RXB1D6 Bits -----------------------------------------------------
RXB1D60          EQU  H'0000'
RXB1D61          EQU  H'0001'
RXB1D62          EQU  H'0002'
RXB1D63          EQU  H'0003'
RXB1D64          EQU  H'0004'
RXB1D65          EQU  H'0005'
RXB1D66          EQU  H'0006'
RXB1D67          EQU  H'0007'


;----- RXB1D7 Bits -----------------------------------------------------
RXB1D70          EQU  H'0000'
RXB1D71          EQU  H'0001'
RXB1D72          EQU  H'0002'
RXB1D73          EQU  H'0003'
RXB1D74          EQU  H'0004'
RXB1D75          EQU  H'0005'
RXB1D76          EQU  H'0006'
RXB1D77          EQU  H'0007'


;----- CANSTATRO0 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_R01 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- CANSTAT_RO1 Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'


;----- RXB0CON Bits -----------------------------------------------------
FILHIT0          EQU  H'0000'
JTOFF            EQU  H'0001'
RXB0DBEN         EQU  H'0002'
RXRTRRO          EQU  H'0003'
RXM0             EQU  H'0005'
RXM1             EQU  H'0006'
RXFUL            EQU  H'0007'

RX0DBEN          EQU  H'0002'


;----- RXB0SIDH Bits -----------------------------------------------------
SID3             EQU  H'0000'
SID4             EQU  H'0001'
SID5             EQU  H'0002'
SID6             EQU  H'0003'
SID7             EQU  H'0004'
SID8             EQU  H'0005'
SID9             EQU  H'0006'
SID10            EQU  H'0007'


;----- RXB0SIDL Bits -----------------------------------------------------
EID16            EQU  H'0000'
EID17            EQU  H'0001'
EXID             EQU  H'0003'
SRR              EQU  H'0004'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'


;----- RXB0EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


;----- RXB0EIDL Bits -----------------------------------------------------
EID0             EQU  H'0000'
EID1             EQU  H'0001'
EID2             EQU  H'0002'
EID3             EQU  H'0003'
EID4             EQU  H'0004'
EID5             EQU  H'0005'
EID6             EQU  H'0006'
EID7             EQU  H'0007'


;----- RXB0DLC Bits -----------------------------------------------------
DLC0             EQU  H'0000'
DLC1             EQU  H'0001'
DLC2             EQU  H'0002'
DLC3             EQU  H'0003'
RESB0            EQU  H'0004'
RESB1            EQU  H'0005'
RXRTR            EQU  H'0006'

RTR              EQU  H'0006'


;----- RXB0D0 Bits -----------------------------------------------------
RXB0D00          EQU  H'0000'
RXB0D01          EQU  H'0001'
RXB0D02          EQU  H'0002'
RXB0D03          EQU  H'0003'
RXB0D04          EQU  H'0004'
RXB0D05          EQU  H'0005'
RXB0D06          EQU  H'0006'
RXB0D07          EQU  H'0007'

RB0D00           EQU  H'0000'
RB0D01           EQU  H'0001'
RB0D02           EQU  H'0002'
RB0D03           EQU  H'0003'
RB0D04           EQU  H'0004'
RB0D05           EQU  H'0005'
RB0D06           EQU  H'0006'
RB0D07           EQU  H'0007'


;----- RXB0D1 Bits -----------------------------------------------------
RXB0D10          EQU  H'0000'
RXB0D11          EQU  H'0001'
RXB0D12          EQU  H'0002'
RXB0D13          EQU  H'0003'
RXB0D14          EQU  H'0004'
RXB0D15          EQU  H'0005'
RXB0D16          EQU  H'0006'
RXB0D17          EQU  H'0007'

RB0D10           EQU  H'0000'
RB0D11           EQU  H'0001'
RB0D12           EQU  H'0002'
RB0D13           EQU  H'0003'
RB0D14           EQU  H'0004'
RB0D15           EQU  H'0005'
RB0D16           EQU  H'0006'
RB0D17           EQU  H'0007'


;----- RXB0D2 Bits -----------------------------------------------------
RXB0D20          EQU  H'0000'
RXB0D21          EQU  H'0001'
RXB0D22          EQU  H'0002'
RXB0D23          EQU  H'0003'
RXB0D24          EQU  H'0004'
RXB0D25          EQU  H'0005'
RXB0D26          EQU  H'0006'
RXB0D27          EQU  H'0007'

RB0D20           EQU  H'0000'
RB0D21           EQU  H'0001'
RB0D22           EQU  H'0002'
RB0D23           EQU  H'0003'
RB0D24           EQU  H'0004'
RB0D25           EQU  H'0005'
RB0D26           EQU  H'0006'
RB0D27           EQU  H'0007'


;----- RXB0D3 Bits -----------------------------------------------------
RXB0D30          EQU  H'0000'
RXB0D31          EQU  H'0001'
RXB0D32          EQU  H'0002'
RXB0D33          EQU  H'0003'
RXB0D34          EQU  H'0004'
RXB0D35          EQU  H'0005'
RXB0D36          EQU  H'0006'
RXB0D37          EQU  H'0007'

RB0D30           EQU  H'0000'
RB0D31           EQU  H'0001'
RB0D32           EQU  H'0002'
RB0D33           EQU  H'0003'
RB0D34           EQU  H'0004'
RB0D35           EQU  H'0005'
RB0D36           EQU  H'0006'
RB0D37           EQU  H'0007'


;----- RXB0D4 Bits -----------------------------------------------------
RXB0D40          EQU  H'0000'
RXB0D41          EQU  H'0001'
RXB0D42          EQU  H'0002'
RXB0D43          EQU  H'0003'
RXB0D44          EQU  H'0004'
RXB0D45          EQU  H'0005'
RXB0D46          EQU  H'0006'
RXB0D47          EQU  H'0007'

RB0D40           EQU  H'0000'
RB0D41           EQU  H'0001'
RB0D42           EQU  H'0002'
RB0D43           EQU  H'0003'
RB0D44           EQU  H'0004'
RB0D45           EQU  H'0005'
RB0D46           EQU  H'0006'
RB0D47           EQU  H'0007'


;----- RXB0D5 Bits -----------------------------------------------------
RXB0D50          EQU  H'0000'
RXB0D51          EQU  H'0001'
RXB0D52          EQU  H'0002'
RXB0D53          EQU  H'0003'
RXB0D54          EQU  H'0004'
RXB0D55          EQU  H'0005'
RXB0D56          EQU  H'0006'
RXB0D57          EQU  H'0007'

RB0D50           EQU  H'0000'
RB0D51           EQU  H'0001'
RB0D52           EQU  H'0002'
RB0D53           EQU  H'0003'
RB0D54           EQU  H'0004'
RB0D55           EQU  H'0005'
RB0D56           EQU  H'0006'
RB0D57           EQU  H'0007'


;----- RXB0D6 Bits -----------------------------------------------------
RXB0D60          EQU  H'0000'
RXB0D61          EQU  H'0001'
RXB0D62          EQU  H'0002'
RXB0D63          EQU  H'0003'
RXB0D64          EQU  H'0004'
RXB0D65          EQU  H'0005'
RXB0D66          EQU  H'0006'
RXB0D67          EQU  H'0007'

RB0D60           EQU  H'0000'
RB0D61           EQU  H'0001'
RB0D62           EQU  H'0002'
RB0D63           EQU  H'0003'
RB0D64           EQU  H'0004'
RB0D65           EQU  H'0005'
RB0D66           EQU  H'0006'
RB0D67           EQU  H'0007'


;----- RXB0D7 Bits -----------------------------------------------------
RXB0D70          EQU  H'0000'
RXB0D71          EQU  H'0001'
RXB0D72          EQU  H'0002'
RXB0D73          EQU  H'0003'
RXB0D74          EQU  H'0004'
RXB0D75          EQU  H'0005'
RXB0D76          EQU  H'0006'
RXB0D77          EQU  H'0007'

RB0D70           EQU  H'0000'
RB0D71           EQU  H'0001'
RB0D72           EQU  H'0002'
RB0D73           EQU  H'0003'
RB0D74           EQU  H'0004'
RB0D75           EQU  H'0005'
RB0D76           EQU  H'0006'
RB0D77           EQU  H'0007'


;----- CANSTAT Bits -----------------------------------------------------
ICODE0           EQU  H'0001'
ICODE1           EQU  H'0002'
ICODE2           EQU  H'0003'
OPMODE0          EQU  H'0005'
OPMODE1          EQU  H'0006'
OPMODE2          EQU  H'0007'

ICOED0           EQU  H'0001'


;----- CANCON Bits -----------------------------------------------------
WIN0             EQU  H'0001'
WIN1             EQU  H'0002'
WIN2             EQU  H'0003'
ABAT             EQU  H'0004'
REQOP0           EQU  H'0005'
REQOP1           EQU  H'0006'
REQOP2           EQU  H'0007'


;----- BRGCON1 Bits -----------------------------------------------------
BRP0             EQU  H'0000'
BRP1             EQU  H'0001'
BRP2             EQU  H'0002'
BRP3             EQU  H'0003'
BRP4             EQU  H'0004'
BRP5             EQU  H'0005'
SJW0             EQU  H'0006'
SJW1             EQU  H'0007'


;----- BRGCON2 Bits -----------------------------------------------------
PRSEG0           EQU  H'0000'
PRSEG1           EQU  H'0001'
PRSEG2           EQU  H'0002'
SEG1PH0          EQU  H'0003'
SEG1PH1          EQU  H'0004'
SEG1PH2          EQU  H'0005'
SAM              EQU  H'0006'
SEG2PHTS         EQU  H'0007'


;----- BRGCON3 Bits -----------------------------------------------------
SEG2PH0          EQU  H'0000'
SEG2PH1          EQU  H'0001'
SEG2PH2          EQU  H'0002'
WAKFIL           EQU  H'0006'


;----- CIOCON Bits -----------------------------------------------------
CANCAP           EQU  H'0004'
ENDRHI           EQU  H'0005'
TX1EN            EQU  H'0006'
TX1SRC           EQU  H'0007'


;----- COMSTAT Bits -----------------------------------------------------
EWARN            EQU  H'0000'
RXWARN           EQU  H'0001'
TXWARN           EQU  H'0002'
RXBP             EQU  H'0003'
TXBP             EQU  H'0004'
TXBO             EQU  H'0005'
RXB1OVFL         EQU  H'0006'
RXB0OVFL         EQU  H'0007'

RX1OVFL          EQU  H'0006'
RX0OVFL          EQU  H'0007'


;----- RXERRCNT Bits -----------------------------------------------------
REC0             EQU  H'0000'
REC1             EQU  H'0001'
REC2             EQU  H'0002'
REC3             EQU  H'0003'
REC4             EQU  H'0004'
REC5             EQU  H'0005'
REC6             EQU  H'0006'
REC7             EQU  H'0007'


;----- TXERRCNT Bits -----------------------------------------------------
TEC0             EQU  H'0000'
TEC1             EQU  H'0001'
TEC2             EQU  H'0002'
TEC3             EQU  H'0003'
TEC4             EQU  H'0004'
TEC5             EQU  H'0005'
TEC6             EQU  H'0006'
TEC7             EQU  H'0007'


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
AN4              EQU  H'0005'
OSC2             EQU  H'0006'

VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
T0CKI            EQU  H'0004'
SS               EQU  H'0005'
CLK0             EQU  H'0006'

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
SCK              EQU  H'0003'
SDI              EQU  H'0004'
SDO              EQU  H'0005'
TX               EQU  H'0006'
RX               EQU  H'0007'

T1CKI            EQU  H'0000'
CCP1             EQU  H'0002'
SCL              EQU  H'0003'
SDA              EQU  H'0004'
CK               EQU  H'0006'
; DT is a reserved word
; DT               EQU  H'0007'


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


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'

NOT_RD           EQU  H'0000'
NOT_WR           EQU  H'0001'
NOT_CS           EQU  H'0002'
CCP2             EQU  H'0007'

AN5              EQU  H'0000'


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


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'

CANTX1           EQU  H'0000'
CANTX2           EQU  H'0001'
CANRX            EQU  H'0002'


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
CMIE             EQU  H'0006'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMR3IF           EQU  H'0001'
LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'
CMIF             EQU  H'0006'


;----- IPR2 Bits -----------------------------------------------------
CCP2IP           EQU  H'0000'
TMR3IP           EQU  H'0001'
LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'
CMIP             EQU  H'0006'


;----- PIE3 Bits -----------------------------------------------------
RXB0IE           EQU  H'0000'
RXB1IE           EQU  H'0001'
TXB0IE           EQU  H'0002'
TXB1IE           EQU  H'0003'
TXB2IE           EQU  H'0004'
ERRIE            EQU  H'0005'
WAKIE            EQU  H'0006'
IRXIE            EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
RXB0IF           EQU  H'0000'
RXB1IF           EQU  H'0001'
TXB0IF           EQU  H'0002'
TXB1IF           EQU  H'0003'
TXB2IF           EQU  H'0004'
ERRIF            EQU  H'0005'
WAKIF            EQU  H'0006'
IRXIF            EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
RXB0IP           EQU  H'0000'
RXB1IP           EQU  H'0001'
TXB0IP           EQU  H'0002'
TXB1IP           EQU  H'0003'
TXB2IP           EQU  H'0004'
ERRIP            EQU  H'0005'
WAKIP            EQU  H'0006'
IRXIP            EQU  H'0007'


;----- COM1CON Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADEN             EQU  H'0003'


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


;----- COM1STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


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


;----- CMCON Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT            EQU  H'0006'
C2OUT            EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- CVRCON Bits -----------------------------------------------------
VRSS             EQU  H'0004'
VRR              EQU  H'0005'
VROEN            EQU  H'0006'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'
CRR              EQU  H'0005'
VROE             EQU  H'0006'
CVREN            EQU  H'0007'


;----- VRCON Bits -----------------------------------------------------
VRSS             EQU  H'0004'
VRR              EQU  H'0005'
VROEN            EQU  H'0006'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'
CRR              EQU  H'0005'
VROE             EQU  H'0006'
CVREN            EQU  H'0007'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'

CCPM3            EQU  H'0003'
CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'

DCCPX            EQU  H'0005'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'

CCPM3            EQU  H'0003'
CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


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

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'

NOT_DONE         EQU  H'0001'

DONE             EQU  H'0001'

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
LWRT             EQU  H'0006'
IPEN             EQU  H'0007'

BOR              EQU  H'0000'
POR              EQU  H'0001'
PD               EQU  H'0002'
TO               EQU  H'0003'
RI               EQU  H'0004'
NOT_LWRT         EQU  H'0006'
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
       __BADRAM  H'0600'-H'0EFF'
       __BADRAM  H'0F2F'
       __BADRAM  H'0F3F'
       __BADRAM  H'0F4F'
       __BADRAM  H'0F5F'
       __BADRAM  H'0F77'-H'0F7F'
       __BADRAM  H'0F87'-H'0F88'
       __BADRAM  H'0F90'-H'0F91'
       __BADRAM  H'0F99'-H'0F9C'
       __BADRAM  H'0FA6'-H'0FAA'
       __BADRAM  H'0FB6'-H'0FB9'
       __BADRAM  H'0FD4'

;==========================================================================
;
;   IMPORTANT: For the PIC18 devices, the __CONFIG directive has been
;              superseded by the CONFIG directive.  The following settings
;              are available for this device.
;
;   Code Protection bits:
;     CP = ON              All of program memory code protected
;     CP = OFF             Program memory code protection off
;
;   Oscillator Selection bits:
;     OSC = LP             LP oscillator
;     OSC = XT             XT oscillator
;     OSC = HS             HS oscillator
;     OSC = RC             RC oscillator
;     OSC = EC             EC oscillator w/ OSC2 configured as divide by 4 clock output
;     OSC = ECIO           EC oscillator w/ OSC2 configured as RA6
;     OSC = HSPLL          HS4 oscillator with PLL enabled/Clock frequency = (4 x Fosc)
;     OSC = RCIO           RC oscillator w/ OSC2 configured as RA6
;
;   Oscillator System Clock Switch Enable bit:
;     OSCS = ON            Oscillator system clock switch option is enabled (Oscillator switching is enabled)
;     OSCS = OFF           Oscillator system clock switch option is disabled (Main oscillator is source)
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
;   Stack Full/Underflow RESET Enable bit:
;     STVR = OFF           Stack Full/Underflow will not cause RESET
;     STVR = ON            Stack Full/Underflow will cause RESET
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
;   CONFIG4L        300006h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG0        EQU  H'300000'
_CONFIG1        EQU  H'300001'
_CONFIG2        EQU  H'300002'
_CONFIG3        EQU  H'300003'
_CONFIG6        EQU  H'300006'

;----- CONFIG1L Options --------------------------------------------------
_CP_ON_0             EQU  H'00'    ; All of program memory code protected
_CP_OFF_0            EQU  H'FF'    ; Program memory code protection off

;----- CONFIG1H Options --------------------------------------------------
_LP_OSC_1            EQU  H'F8'    ; LP oscillator
_XT_OSC_1            EQU  H'F9'    ; XT oscillator
_HS_OSC_1            EQU  H'FA'    ; HS oscillator
_RC_OSC_1            EQU  H'FB'    ; RC oscillator
_EC_OSC_1            EQU  H'FC'    ; EC oscillator w/ OSC2 configured as divide by 4 clock output
_ECIO_OSC_1          EQU  H'FD'    ; EC oscillator w/ OSC2 configured as RA6
_HSPLL_OSC_1         EQU  H'FE'    ; HS4 oscillator with PLL enabled/Clock frequency = (4 x Fosc)
_RCIO_OSC_1          EQU  H'FF'    ; RC oscillator w/ OSC2 configured as RA6

_OSCS_ON_1           EQU  H'DF'    ; Oscillator system clock switch option is enabled (Oscillator switching is enabled)
_OSCS_OFF_1          EQU  H'FF'    ; Oscillator system clock switch option is disabled (Main oscillator is source)

;----- CONFIG2L Options --------------------------------------------------
_PWRT_ON_2           EQU  H'FE'    ; PWRT enabled
_PWRT_OFF_2          EQU  H'FF'    ; PWRT disabled

_BOR_OFF_2           EQU  H'FD'    ; Brown-out Reset disabled
_BOR_ON_2            EQU  H'FF'    ; Brown-out Reset enabled

_BORV_45_2           EQU  H'F3'    ; VBOR set to 4.5V
_BORV_42_2           EQU  H'F7'    ; VBOR set to 4.2V
_BORV_27_2           EQU  H'FB'    ; VBOR set to 2.7V
_BORV_25_2           EQU  H'FF'    ; VBOR set to 2.5V

;----- CONFIG2H Options --------------------------------------------------
_WDT_OFF_3           EQU  H'FE'    ; WDT disabled (control is placed on the SWDTEN bit)
_WDT_ON_3            EQU  H'FF'    ; WDT enabled

_WDTPS_1_3           EQU  H'F1'    ; 1:1
_WDTPS_2_3           EQU  H'F3'    ; 1:2
_WDTPS_4_3           EQU  H'F5'    ; 1:4
_WDTPS_8_3           EQU  H'F7'    ; 1:8
_WDTPS_16_3          EQU  H'F9'    ; 1:16
_WDTPS_32_3          EQU  H'FB'    ; 1:32
_WDTPS_64_3          EQU  H'FD'    ; 1:64
_WDTPS_128_3         EQU  H'FF'    ; 1:128

;----- CONFIG4L Options --------------------------------------------------
_STVR_OFF_6          EQU  H'FE'    ; Stack Full/Underflow will not cause RESET
_STVR_ON_6           EQU  H'FF'    ; Stack Full/Underflow will cause RESET


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
