        LIST

;==========================================================================
; Build date : Oct 21 2015
;  MPASM PIC18F258 processor include
; 
;  (c) Copyright 1999-2015 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC18F258 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC18F258
;       2. LIST directive in the source file
;               LIST   P=PIC18F258
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __18F258
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
RXF1EIDH         EQU  H'0F06'
RXF1EIDL         EQU  H'0F07'
RXF2SIDH         EQU  H'0F08'
RXF2SIDL         EQU  H'0F09'
RXF2EIDH         EQU  H'0F0A'
RXF2EIDL         EQU  H'0F0B'
RXF3SIDH         EQU  H'0F0C'
RXF3SIDL         EQU  H'0F0D'
RXF3EIDH         EQU  H'0F0E'
RXF3EIDL         EQU  H'0F0F'
RXF4SIDH         EQU  H'0F10'
RXF4SIDL         EQU  H'0F11'
RXF4EIDH         EQU  H'0F12'
RXF4EIDL         EQU  H'0F13'
RXF5SIDH         EQU  H'0F14'
RXF5SIDL         EQU  H'0F15'
RXF5EIDH         EQU  H'0F16'
RXF5EIDL         EQU  H'0F17'
RXM0SIDH         EQU  H'0F18'
RXM0SIDL         EQU  H'0F19'
RXM0EIDH         EQU  H'0F1A'
RXM0EIDL         EQU  H'0F1B'
RXM1SIDH         EQU  H'0F1C'
RXM1SIDL         EQU  H'0F1D'
RXM1EIDH         EQU  H'0F1E'
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
CANSTATRO4       EQU  H'0F2E'
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
CANSTATRO3       EQU  H'0F3E'
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
CANSTATRO2       EQU  H'0F4E'
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
CANSTATRO1       EQU  H'0F5E'
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
LATA             EQU  H'0F89'
LATB             EQU  H'0F8A'
LATC             EQU  H'0F8B'
DDRA             EQU  H'0F92'
TRISA            EQU  H'0F92'
DDRB             EQU  H'0F93'
TRISB            EQU  H'0F93'
DDRC             EQU  H'0F94'
TRISC            EQU  H'0F94'
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
RCSTA            EQU  H'0FAB'
TXSTA            EQU  H'0FAC'
TXREG            EQU  H'0FAD'
RCREG            EQU  H'0FAE'
SPBRG            EQU  H'0FAF'
T3CON            EQU  H'0FB1'
TMR3             EQU  H'0FB2'
TMR3L            EQU  H'0FB2'
TMR3H            EQU  H'0FB3'
CCP1CON          EQU  H'0FBD'
CCPR1            EQU  H'0FBE'
CCPR1L           EQU  H'0FBE'
CCPR1H           EQU  H'0FBF'
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


;----- RXF1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXF2EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXF3EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXF4EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXF5EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXM0EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- RXM1EIDH Bits -----------------------------------------------------
EID8             EQU  H'0000'
EID9             EQU  H'0001'
EID10            EQU  H'0002'
EID11            EQU  H'0003'
EID12            EQU  H'0004'
EID13            EQU  H'0005'
EID14            EQU  H'0006'
EID15            EQU  H'0007'


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


;----- CANSTATRO4 Bits -----------------------------------------------------
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


;----- CANSTATRO3 Bits -----------------------------------------------------
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
EXIDE            EQU  H'0003'
SID0             EQU  H'0005'
SID1             EQU  H'0006'
SID2             EQU  H'0007'


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


;----- CANSTATRO2 Bits -----------------------------------------------------
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
RB0_RXB1DLC      EQU  H'0004'
RB1_RXB1DLC      EQU  H'0005'
RXRTR            EQU  H'0006'

RESB0            EQU  H'0004'
RESB1            EQU  H'0005'


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


;----- CANSTATRO1 Bits -----------------------------------------------------
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
RB0_RXB0DLC      EQU  H'0004'
RB1_RXB0DLC      EQU  H'0005'
RXRTR            EQU  H'0006'

RESB0            EQU  H'0004'
RESB1            EQU  H'0005'


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


;----- COMSTAT Bits -----------------------------------------------------
EWARN            EQU  H'0000'
RXWARN           EQU  H'0001'
TXWARN           EQU  H'0002'
RXBP             EQU  H'0003'
TXBP             EQU  H'0004'
TXBO             EQU  H'0005'
RXB1OVFL         EQU  H'0006'
RXB0OVFL         EQU  H'0007'

RX2OVFL          EQU  H'0006'
RX1OVFL          EQU  H'0007'


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

CVREF            EQU  H'0000'
VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
T0CKI            EQU  H'0004'
NOT_SS           EQU  H'0005'
CLKO             EQU  H'0006'

SS               EQU  H'0005'

LVDIN            EQU  H'0005'


;----- PORTB Bits -----------------------------------------------------
RB0_PORTB        EQU  H'0000'
RB1_PORTB        EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'

INT0             EQU  H'0000'
INT1             EQU  H'0001'
CANTX            EQU  H'0002'
CANRX            EQU  H'0003'
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

RB0_DDRB         EQU  H'0000'
RB1_DDRB         EQU  H'0001'
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

RB0_TRISB        EQU  H'0000'
RB1_TRISB        EQU  H'0001'
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


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'


;----- IPR1 Bits -----------------------------------------------------
TMR1IP           EQU  H'0000'
TMR2IP           EQU  H'0001'
CCP1IP           EQU  H'0002'
SSPIP            EQU  H'0003'
TXIP             EQU  H'0004'
RCIP             EQU  H'0005'
ADIP             EQU  H'0006'


;----- PIE2 Bits -----------------------------------------------------
TMR3IE           EQU  H'0001'
LVDIE            EQU  H'0002'
BCLIE            EQU  H'0003'
EEIE             EQU  H'0004'


;----- PIR2 Bits -----------------------------------------------------
TMR3IF           EQU  H'0001'
LVDIF            EQU  H'0002'
BCLIF            EQU  H'0003'
EEIF             EQU  H'0004'


;----- IPR2 Bits -----------------------------------------------------
TMR3IP           EQU  H'0001'
LVDIP            EQU  H'0002'
BCLIP            EQU  H'0003'
EEIP             EQU  H'0004'


;----- PIE3 Bits -----------------------------------------------------
RXB0IE           EQU  H'0000'
RXB1IE           EQU  H'0001'
TXB0IE           EQU  H'0002'
TXB1IE           EQU  H'0003'
TXB2IE           EQU  H'0004'
ERRIE            EQU  H'0005'
WAKIE            EQU  H'0006'
IRXIE            EQU  H'0007'

RX0IE            EQU  H'0000'
RX1IE            EQU  H'0001'
TX0IE            EQU  H'0002'
TX1IE            EQU  H'0003'
TX2IE            EQU  H'0004'
IVRE             EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
RXB0IF           EQU  H'0000'
RXB1IF           EQU  H'0001'
TXB0IF           EQU  H'0002'
TXB1IF           EQU  H'0003'
TXB2IF           EQU  H'0004'
ERRIF            EQU  H'0005'
WAKIF            EQU  H'0006'
IRXIF            EQU  H'0007'

RX0IF            EQU  H'0000'
RX1IF            EQU  H'0001'
TX0IF            EQU  H'0002'
TX1IF            EQU  H'0003'
TX2IF            EQU  H'0004'
IVRF             EQU  H'0007'


;----- IPR3 Bits -----------------------------------------------------
RXB0IP           EQU  H'0000'
RXB1IP           EQU  H'0001'
TXB0IP           EQU  H'0002'
TXB1IP           EQU  H'0003'
TXB2IP           EQU  H'0004'
ERRIP            EQU  H'0005'
WAKIP            EQU  H'0006'
IRXIP            EQU  H'0007'

IVRP             EQU  H'0007'


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
RC9              EQU  H'0006'

RC8_9            EQU  H'0006'

NOT_RC8          EQU  H'0006'


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


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
TMR3CS           EQU  H'0001'
NOT_T3SYNC       EQU  H'0002'
T3CCP1           EQU  H'0003'
T3ECCP1          EQU  H'0006'
RD16             EQU  H'0007'

T3INSYNC         EQU  H'0002'
T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'

T3SYNC           EQU  H'0002'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
ADCS2            EQU  H'0006'
ADFM             EQU  H'0007'

PCFG0            EQU  H'0000'
PCFG1            EQU  H'0001'
PCFG2            EQU  H'0002'
PCFG3            EQU  H'0003'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0002'

DONE             EQU  H'0002'
CHS0             EQU  H'0003'
CHS1             EQU  H'0004'
CHS2             EQU  H'0005'
ADCS0            EQU  H'0006'
ADCS1            EQU  H'0007'

GO_DONE          EQU  H'0002'

GO               EQU  H'0002'

NOT_DONE         EQU  H'0002'


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

T1INSYNC         EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'

T1SYNC           EQU  H'0002'


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
IVRST            EQU  H'0005'


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
       __BADRAM  H'0F83'-H'0F88'
       __BADRAM  H'0F8C'-H'0F91'
       __BADRAM  H'0F95'-H'0F9C'
       __BADRAM  H'0FAA'
       __BADRAM  H'0FB0'
       __BADRAM  H'0FB4'-H'0FBC'
       __BADRAM  H'0FC0'
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
;     OSC = RC             RC oscillator
;     OSC = EC             EC oscillator w/ OSC2 configured as divide-by-4 clock output
;     OSC = ECIO           EC oscillator w/ OSC2 configured as RA6
;     OSC = HSPLL          HS oscillator with PLL enabled/Clock frequency = (4 x FOSC)
;     OSC = RCIO           RC oscillator w/ OSC2 configured as RA6
;
;   Oscillator System Clock Switch Enable bit:
;     OSCS = ON            Oscillator system clock switch option is enabled (oscillator switching is enabled)
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
;   Stack Full/Underflow Reset Enable bit:
;     STVR = OFF           Stack Full/Underflow will not cause Reset
;     STVR = ON            Stack Full/Underflow will cause Reset
;
;   Low-Voltage ICSP Enable bit:
;     LVP = OFF            Low-Voltage ICSP disabled
;     LVP = ON             Low-Voltage ICSP enabled
;
;   Background Debugger Enable bit:
;     DEBUG = ON           Background Debugger enabled. RB6 and RB7 are dedicated to In-Circuit Debug.
;     DEBUG = OFF          Background Debugger disabled. RB6 and RB7 configured as general purpose I/O pins.
;
;   Code Protection bit:
;     CP0 = ON             Block 0 (000200-001FFFh) code protected
;     CP0 = OFF            Block 0 (000200-001FFFh) not code protected
;
;   Code Protection bit:
;     CP1 = ON             Block 1 (002000-003FFFh) code protected
;     CP1 = OFF            Block 1 (002000-003FFFh) not code protected
;
;   Code Protection bit:
;     CP2 = ON             Block 2 (004000-005FFFh) code protected
;     CP2 = OFF            Block 2 (004000-005FFFh) not code protected
;
;   Code Protection bit:
;     CP3 = ON             Block 3 (006000-007FFFh) code protected
;     CP3 = OFF            Block 3 (006000-007FFFh) not code protected
;
;   Boot Block Code Protection bit:
;     CPB = ON             Boot Block (000000-0001FFh) code protected
;     CPB = OFF            Boot Block (000000-0001FFh) not code protected
;
;   Data EEPROM Code Protection bit:
;     CPD = ON             Data EEPROM code protected
;     CPD = OFF            Data EEPROM not code protected
;
;   Write Protection bit:
;     WRT0 = ON            Block 0 (000200-001FFFh) write protected
;     WRT0 = OFF           Block 0 (000200-001FFFh) not write protected
;
;   Write Protection bit:
;     WRT1 = ON            Block 1 (002000-003FFFh) write protected
;     WRT1 = OFF           Block 1 (002000-003FFFh) not write protected
;
;   Write Protection bit:
;     WRT2 = ON            Block 2 (004000-005FFFh) write protected
;     WRT2 = OFF           Block 2 (004000-005FFFh) not write protected
;
;   Write Protection bit:
;     WRT3 = ON            Block 3 (006000-007FFFh) write protected
;     WRT3 = OFF           Block 3 (006000-007FFFh) not write protected
;
;   Configuration Register Write Protection bit:
;     WRTC = ON            Configuration registers (300000-3000FFh) write protected
;     WRTC = OFF           Configuration registers (300000-3000FFh) not write protected
;
;   Boot Block Write Protection bit:
;     WRTB = ON            Boot Block (000000-0001FFh) write protected
;     WRTB = OFF           Boot Block (000000-0001FFh) not write protected
;
;   Data EEPROM Write Protection bit:
;     WRTD = ON            Data EEPROM write protected
;     WRTD = OFF           Data EEPROM not write protected
;
;   Table Read Protection bit:
;     EBTR0 = ON           Block 0 (000200-001FFFh) protected from Table Reads executed in other blocks
;     EBTR0 = OFF          Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR1 = ON           Block 1 (002000-003FFFh) protected from Table Reads executed in other blocks
;     EBTR1 = OFF          Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR2 = ON           Block 2 (004000-005FFFh) protected from Table Reads executed in other blocks
;     EBTR2 = OFF          Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks
;
;   Table Read Protection bit:
;     EBTR3 = ON           Block 3 (006000-007FFFh) protected from Table Reads executed in other blocks
;     EBTR3 = OFF          Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks
;
;   Boot Block Table Read Protection bit:
;     EBTRB = ON           Boot Block (000000-0001FFh) protected from Table Reads executed in other blocks
;     EBTRB = OFF          Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks
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
_RC_OSC              EQU  H'FB'    ; RC oscillator
_RC_OSC_1H           EQU  H'FB'    ; RC oscillator
_EC_OSC              EQU  H'FC'    ; EC oscillator w/ OSC2 configured as divide-by-4 clock output
_EC_OSC_1H           EQU  H'FC'    ; EC oscillator w/ OSC2 configured as divide-by-4 clock output
_ECIO_OSC            EQU  H'FD'    ; EC oscillator w/ OSC2 configured as RA6
_ECIO_OSC_1H         EQU  H'FD'    ; EC oscillator w/ OSC2 configured as RA6
_HSPLL_OSC           EQU  H'FE'    ; HS oscillator with PLL enabled/Clock frequency = (4 x FOSC)
_HSPLL_OSC_1H        EQU  H'FE'    ; HS oscillator with PLL enabled/Clock frequency = (4 x FOSC)
_RCIO_OSC            EQU  H'FF'    ; RC oscillator w/ OSC2 configured as RA6
_RCIO_OSC_1H         EQU  H'FF'    ; RC oscillator w/ OSC2 configured as RA6

_OSCS_ON_1H          EQU  H'DF'    ; Oscillator system clock switch option is enabled (oscillator switching is enabled)
_OSCS_OFF_1H         EQU  H'FF'    ; Oscillator system clock switch option is disabled (main oscillator is source)

;----- CONFIG2L Options --------------------------------------------------
_PWRT_ON_2L          EQU  H'FE'    ; PWRT enabled
_PWRT_OFF_2L         EQU  H'FF'    ; PWRT disabled

_BOR_OFF_2L          EQU  H'FD'    ; Brown-out Reset disabled
_BOR_ON_2L           EQU  H'FF'    ; Brown-out Reset enabled

_BORV_45_2L          EQU  H'F3'    ; VBOR set to 4.5V
_BORV_42_2L          EQU  H'F7'    ; VBOR set to 4.2V
_BORV_27_2L          EQU  H'FB'    ; VBOR set to 2.7V
_BORV_25             EQU  H'FF'    ; VBOR set to 2.5V
_BORV_25_2L          EQU  H'FF'    ; VBOR set to 2.5V

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

;----- CONFIG4L Options --------------------------------------------------
_STVR_OFF_4L         EQU  H'FE'    ; Stack Full/Underflow will not cause Reset
_STVR_ON_4L          EQU  H'FF'    ; Stack Full/Underflow will cause Reset

_LVP_OFF_4L          EQU  H'FB'    ; Low-Voltage ICSP disabled
_LVP_ON_4L           EQU  H'FF'    ; Low-Voltage ICSP enabled

_DEBUG_ON_4L         EQU  H'7F'    ; Background Debugger enabled. RB6 and RB7 are dedicated to In-Circuit Debug.
_DEBUG_OFF_4L        EQU  H'FF'    ; Background Debugger disabled. RB6 and RB7 configured as general purpose I/O pins.

;----- CONFIG5L Options --------------------------------------------------
_CP0_ON_5L           EQU  H'FE'    ; Block 0 (000200-001FFFh) code protected
_CP0_OFF_5L          EQU  H'FF'    ; Block 0 (000200-001FFFh) not code protected

_CP1_ON_5L           EQU  H'FD'    ; Block 1 (002000-003FFFh) code protected
_CP1_OFF_5L          EQU  H'FF'    ; Block 1 (002000-003FFFh) not code protected

_CP2_ON_5L           EQU  H'FB'    ; Block 2 (004000-005FFFh) code protected
_CP2_OFF_5L          EQU  H'FF'    ; Block 2 (004000-005FFFh) not code protected

_CP3_ON_5L           EQU  H'F7'    ; Block 3 (006000-007FFFh) code protected
_CP3_OFF_5L          EQU  H'FF'    ; Block 3 (006000-007FFFh) not code protected

;----- CONFIG5H Options --------------------------------------------------
_CPB_ON_5H           EQU  H'BF'    ; Boot Block (000000-0001FFh) code protected
_CPB_OFF_5H          EQU  H'FF'    ; Boot Block (000000-0001FFh) not code protected

_CPD_ON_5H           EQU  H'7F'    ; Data EEPROM code protected
_CPD_OFF_5H          EQU  H'FF'    ; Data EEPROM not code protected

;----- CONFIG6L Options --------------------------------------------------
_WRT0_ON_6L          EQU  H'FE'    ; Block 0 (000200-001FFFh) write protected
_WRT0_OFF_6L         EQU  H'FF'    ; Block 0 (000200-001FFFh) not write protected

_WRT1_ON_6L          EQU  H'FD'    ; Block 1 (002000-003FFFh) write protected
_WRT1_OFF_6L         EQU  H'FF'    ; Block 1 (002000-003FFFh) not write protected

_WRT2_ON_6L          EQU  H'FB'    ; Block 2 (004000-005FFFh) write protected
_WRT2_OFF_6L         EQU  H'FF'    ; Block 2 (004000-005FFFh) not write protected

_WRT3_ON_6L          EQU  H'F7'    ; Block 3 (006000-007FFFh) write protected
_WRT3_OFF_6L         EQU  H'FF'    ; Block 3 (006000-007FFFh) not write protected

;----- CONFIG6H Options --------------------------------------------------
_WRTC_ON_6H          EQU  H'DF'    ; Configuration registers (300000-3000FFh) write protected
_WRTC_OFF_6H         EQU  H'FF'    ; Configuration registers (300000-3000FFh) not write protected

_WRTB_ON_6H          EQU  H'BF'    ; Boot Block (000000-0001FFh) write protected
_WRTB_OFF_6H         EQU  H'FF'    ; Boot Block (000000-0001FFh) not write protected

_WRTD_ON_6H          EQU  H'7F'    ; Data EEPROM write protected
_WRTD_OFF_6H         EQU  H'FF'    ; Data EEPROM not write protected

;----- CONFIG7L Options --------------------------------------------------
_EBTR0_ON_7L         EQU  H'FE'    ; Block 0 (000200-001FFFh) protected from Table Reads executed in other blocks
_EBTR0_OFF_7L        EQU  H'FF'    ; Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks

_EBTR1_ON_7L         EQU  H'FD'    ; Block 1 (002000-003FFFh) protected from Table Reads executed in other blocks
_EBTR1_OFF_7L        EQU  H'FF'    ; Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks

_EBTR2_ON_7L         EQU  H'FB'    ; Block 2 (004000-005FFFh) protected from Table Reads executed in other blocks
_EBTR2_OFF_7L        EQU  H'FF'    ; Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks

_EBTR3_ON_7L         EQU  H'F7'    ; Block 3 (006000-007FFFh) protected from Table Reads executed in other blocks
_EBTR3_OFF_7L        EQU  H'FF'    ; Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks

;----- CONFIG7H Options --------------------------------------------------
_EBTRB_ON_7H         EQU  H'BF'    ; Boot Block (000000-0001FFh) protected from Table Reads executed in other blocks
_EBTRB_OFF_7H        EQU  H'FF'    ; Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks


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
