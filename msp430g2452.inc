.define __MSP430_HEADER_VERSION__ 1064
.define BIT0                (0x0001)
.define BIT1                (0x0002)
.define BIT2                (0x0004)
.define BIT3                (0x0008)
.define BIT4                (0x0010)
.define BIT5                (0x0020)
.define BIT6                (0x0040)
.define BIT7                (0x0080)
.define BIT8                (0x0100)
.define BIT9                (0x0200)
.define BITA                (0x0400)
.define BITB                (0x0800)
.define BITC                (0x1000)
.define BITD                (0x2000)
.define BITE                (0x4000)
.define BITF                (0x8000)
.define C                   (0x0001)
.define Z                   (0x0002)
.define N                   (0x0004)
.define V                   (0x0100)
.define GIE                 (0x0008)
.define CPUOFF              (0x0010)
.define OSCOFF              (0x0020)
.define SCG0                (0x0040)
.define SCG1                (0x0080)
.define LPM0                (CPUOFF)
.define LPM1                (SCG0+CPUOFF)
.define LPM2                (SCG1+CPUOFF)
.define LPM3                (SCG1+SCG0+CPUOFF)
.define LPM4                (SCG1+SCG0+OSCOFF+CPUOFF)
.define IE1_                  0x0000    ; Interrupt Enable 1
.define IE1 IE1_
.define WDTIE               (0x01)    ; Watchdog Interrupt Enable
.define OFIE                (0x02)    ; Osc. Fault  Interrupt Enable
.define NMIIE               (0x10)    ; NMI Interrupt Enable
.define ACCVIE              (0x20)    ; Flash Access Violation Interrupt Enable
.define IFG1_                 0x0002    ; Interrupt Flag 1
.define IFG1 IFG1_
.define WDTIFG              (0x01)    ; Watchdog Interrupt Flag
.define OFIFG               (0x02)    ; Osc. Fault Interrupt Flag
.define PORIFG              (0x04)    ; Power On Interrupt Flag
.define RSTIFG              (0x08)    ; Reset Interrupt Flag
.define NMIIFG              (0x10)    ; NMI Interrupt Flag
.define ADC10DTC0_            0x0048    ; ADC10 Data Transfer Control 0
.define ADC10DTC0 ADC10DTC0_
.define ADC10DTC1_            0x0049    ; ADC10 Data Transfer Control 1
.define ADC10DTC1 ADC10DTC1_
.define ADC10AE0_             0x004A    ; ADC10 Analog Enable 0
.define ADC10AE0 ADC10AE0_
.define ADC10CTL0_            0x01B0    ; ADC10 Control 0
.define ADC10CTL0 ADC10CTL0_
.define ADC10CTL1_            0x01B2    ; ADC10 Control 1
.define ADC10CTL1 ADC10CTL1_
.define ADC10MEM_             0x01B4    ; ADC10 Memory
.define ADC10MEM ADC10MEM_
.define ADC10SA_              0x01BC    ; ADC10 Data Transfer Start Address
.define ADC10SA ADC10SA_
.define ADC10SC             (0x001)     ; ADC10 Start Conversion
.define ENC                 (0x002)     ; ADC10 Enable Conversion
.define ADC10IFG            (0x004)     ; ADC10 Interrupt Flag
.define ADC10IE             (0x008)     ; ADC10 Interrupt Enalbe
.define ADC10ON             (0x010)     ; ADC10 On/Enable
.define REFON               (0x020)     ; ADC10 Reference on
.define REF2_5V             (0x040)     ; ADC10 Ref 0:1.5V / 1:2.5V
.define MSC                 (0x080)     ; ADC10 Multiple SampleConversion
.define REFBURST            (0x100)     ; ADC10 Reference Burst Mode
.define REFOUT              (0x200)     ; ADC10 Enalbe output of Ref.
.define ADC10SR             (0x400)     ; ADC10 Sampling Rate 0:200ksps / 1:50ksps
.define ADC10SHT0           (0x800)     ; ADC10 Sample Hold Select Bit: 0
.define ADC10SHT1           (0x1000)    ; ADC10 Sample Hold Select Bit: 1
.define SREF0               (0x2000)    ; ADC10 Reference Select Bit: 0
.define SREF1               (0x4000)    ; ADC10 Reference Select Bit: 1
.define SREF2               (0x8000)    ; ADC10 Reference Select Bit: 2
.define ADC10SHT_0          (0x0000)   ; 4 x ADC10CLKs
.define ADC10SHT_1          (0x0800)   ; 8 x ADC10CLKs
.define ADC10SHT_2          (0x1000)   ; 16 x ADC10CLKs
.define ADC10SHT_3          (0x1800)   ; 64 x ADC10CLKs
.define SREF_0              (0x0000)  ; VR+ = AVCC and VR- = AVSS
.define SREF_1              (0x2000)  ; VR+ = VREF+ and VR- = AVSS
.define SREF_2              (0x4000)  ; VR+ = VEREF+ and VR- = AVSS
.define SREF_3              (0x6000)  ; VR+ = VEREF+ and VR- = AVSS
.define SREF_4              (0x8000)  ; VR+ = AVCC and VR- = VREF-/VEREF-
.define SREF_5              (0xA000)  ; VR+ = VREF+ and VR- = VREF-/VEREF-
.define SREF_6              (0xC000)  ; VR+ = VEREF+ and VR- = VREF-/VEREF-
.define SREF_7              (0xE000)  ; VR+ = VEREF+ and VR- = VREF-/VEREF-
.define ADC10BUSY           (0x0001)    ; ADC10 BUSY
.define CONSEQ0             (0x0002)    ; ADC10 Conversion Sequence Select 0
.define CONSEQ1             (0x0004)    ; ADC10 Conversion Sequence Select 1
.define ADC10SSEL0          (0x0008)    ; ADC10 Clock Source Select Bit: 0
.define ADC10SSEL1          (0x0010)    ; ADC10 Clock Source Select Bit: 1
.define ADC10DIV0           (0x0020)    ; ADC10 Clock Divider Select Bit: 0
.define ADC10DIV1           (0x0040)    ; ADC10 Clock Divider Select Bit: 1
.define ADC10DIV2           (0x0080)    ; ADC10 Clock Divider Select Bit: 2
.define ISSH                (0x0100)    ; ADC10 Invert Sample Hold Signal
.define ADC10DF             (0x0200)    ; ADC10 Data Format 0:binary 1:2's complement
.define SHS0                (0x0400)    ; ADC10 Sample/Hold Source Bit: 0
.define SHS1                (0x0800)    ; ADC10 Sample/Hold Source Bit: 1
.define INCH0               (0x1000)    ; ADC10 Input Channel Select Bit: 0
.define INCH1               (0x2000)    ; ADC10 Input Channel Select Bit: 1
.define INCH2               (0x4000)    ; ADC10 Input Channel Select Bit: 2
.define INCH3               (0x8000)    ; ADC10 Input Channel Select Bit: 3
.define CONSEQ_0            (0x0000)       ; Single channel single conversion
.define CONSEQ_1            (0x0002)       ; Sequence of channels
.define CONSEQ_2            (0x0004)       ; Repeat single channel
.define CONSEQ_3            (0x0006)       ; Repeat sequence of channels
.define ADC10SSEL_0         (0x0000)       ; ADC10OSC
.define ADC10SSEL_1         (0x0008)       ; ACLK
.define ADC10SSEL_2         (0x0010)       ; MCLK
.define ADC10SSEL_3         (0x0018)       ; SMCLK
.define ADC10DIV_0          (0x0000)    ; ADC10 Clock Divider Select 0
.define ADC10DIV_1          (0x0020)    ; ADC10 Clock Divider Select 1
.define ADC10DIV_2          (0x0040)    ; ADC10 Clock Divider Select 2
.define ADC10DIV_3          (0x0060)    ; ADC10 Clock Divider Select 3
.define ADC10DIV_4          (0x0080)    ; ADC10 Clock Divider Select 4
.define ADC10DIV_5          (0x00A0)    ; ADC10 Clock Divider Select 5
.define ADC10DIV_6          (0x00C0)    ; ADC10 Clock Divider Select 6
.define ADC10DIV_7          (0x00E0)    ; ADC10 Clock Divider Select 7
.define SHS_0               (0x0000)   ; ADC10SC
.define SHS_1               (0x0400)   ; TA3 OUT1
.define SHS_2               (0x0800)   ; TA3 OUT0
.define SHS_3               (0x0C00)   ; TA3 OUT2
.define INCH_0              (0x0000)  ; Selects Channel 0
.define INCH_1              (0x1000)  ; Selects Channel 1
.define INCH_2              (0x2000)  ; Selects Channel 2
.define INCH_3              (0x3000)  ; Selects Channel 3
.define INCH_4              (0x4000)  ; Selects Channel 4
.define INCH_5              (0x5000)  ; Selects Channel 5
.define INCH_6              (0x6000)  ; Selects Channel 6
.define INCH_7              (0x7000)  ; Selects Channel 7
.define INCH_8              (0x8000)  ; Selects Channel 8
.define INCH_9              (0x9000)  ; Selects Channel 9
.define INCH_10             (0xA000) ; Selects Channel 10
.define INCH_11             (0xB000) ; Selects Channel 11
.define INCH_12             (0xC000) ; Selects Channel 12
.define INCH_13             (0xD000) ; Selects Channel 13
.define INCH_14             (0xE000) ; Selects Channel 14
.define INCH_15             (0xF000) ; Selects Channel 15
.define ADC10FETCH          (0x001)     ; This bit should normally be reset
.define ADC10B1             (0x002)     ; ADC10 block one
.define ADC10CT             (0x004)     ; ADC10 continuous transfer
.define ADC10TB             (0x008)     ; ADC10 two-block mode
.define ADC10DISABLE        (0x000)     ; ADC10DTC1
.define DCOCTL_               0x0056    ; DCO Clock Frequency Control
.define DCOCTL DCOCTL_
.define BCSCTL1_              0x0057    ; Basic Clock System Control 1
.define BCSCTL1 BCSCTL1_
.define BCSCTL2_              0x0058    ; Basic Clock System Control 2
.define BCSCTL2 BCSCTL2_
.define BCSCTL3_              0x0053    ; Basic Clock System Control 3
.define BCSCTL3 BCSCTL3_
.define MOD0                (0x01)   ; Modulation Bit 0
.define MOD1                (0x02)   ; Modulation Bit 1
.define MOD2                (0x04)   ; Modulation Bit 2
.define MOD3                (0x08)   ; Modulation Bit 3
.define MOD4                (0x10)   ; Modulation Bit 4
.define DCO0                (0x20)   ; DCO Select Bit 0
.define DCO1                (0x40)   ; DCO Select Bit 1
.define DCO2                (0x80)   ; DCO Select Bit 2
.define RSEL0               (0x01)   ; Range Select Bit 0
.define RSEL1               (0x02)   ; Range Select Bit 1
.define RSEL2               (0x04)   ; Range Select Bit 2
.define RSEL3               (0x08)   ; Range Select Bit 3
.define DIVA0               (0x10)   ; ACLK Divider 0
.define DIVA1               (0x20)   ; ACLK Divider 1
.define XTS                 (0x40)   ; LFXTCLK 0:Low Freq. / 1: High Freq.
.define XT2OFF              (0x80)   ; Enable XT2CLK
.define DIVA_0              (0x00)   ; ACLK Divider 0: /1
.define DIVA_1              (0x10)   ; ACLK Divider 1: /2
.define DIVA_2              (0x20)   ; ACLK Divider 2: /4
.define DIVA_3              (0x30)   ; ACLK Divider 3: /8
.define DIVS0               (0x02)   ; SMCLK Divider 0
.define DIVS1               (0x04)   ; SMCLK Divider 1
.define SELS                (0x08)   ; SMCLK Source Select 0:DCOCLK / 1:XT2CLK/LFXTCLK
.define DIVM0               (0x10)   ; MCLK Divider 0
.define DIVM1               (0x20)   ; MCLK Divider 1
.define SELM0               (0x40)   ; MCLK Source Select 0
.define SELM1               (0x80)   ; MCLK Source Select 1
.define DIVS_0              (0x00)   ; SMCLK Divider 0: /1
.define DIVS_1              (0x02)   ; SMCLK Divider 1: /2
.define DIVS_2              (0x04)   ; SMCLK Divider 2: /4
.define DIVS_3              (0x06)   ; SMCLK Divider 3: /8
.define DIVM_0              (0x00)   ; MCLK Divider 0: /1
.define DIVM_1              (0x10)   ; MCLK Divider 1: /2
.define DIVM_2              (0x20)   ; MCLK Divider 2: /4
.define DIVM_3              (0x30)   ; MCLK Divider 3: /8
.define SELM_0              (0x00)   ; MCLK Source Select 0: DCOCLK
.define SELM_1              (0x40)   ; MCLK Source Select 1: DCOCLK
.define SELM_2              (0x80)   ; MCLK Source Select 2: XT2CLK/LFXTCLK
.define SELM_3              (0xC0)   ; MCLK Source Select 3: LFXTCLK
.define LFXT1OF             (0x01)   ; Low/high Frequency Oscillator Fault Flag
.define XT2OF               (0x02)   ; High frequency oscillator 2 fault flag
.define XCAP0               (0x04)   ; XIN/XOUT Cap 0
.define XCAP1               (0x08)   ; XIN/XOUT Cap 1
.define LFXT1S0             (0x10)   ; Mode 0 for LFXT1 (XTS = 0)
.define LFXT1S1             (0x20)   ; Mode 1 for LFXT1 (XTS = 0)
.define XT2S0               (0x40)   ; Mode 0 for XT2
.define XT2S1               (0x80)   ; Mode 1 for XT2
.define XCAP_0              (0x00)   ; XIN/XOUT Cap : 0 pF
.define XCAP_1              (0x04)   ; XIN/XOUT Cap : 6 pF
.define XCAP_2              (0x08)   ; XIN/XOUT Cap : 10 pF
.define XCAP_3              (0x0C)   ; XIN/XOUT Cap : 12.5 pF
.define LFXT1S_0            (0x00)   ; Mode 0 for LFXT1 : Normal operation
.define LFXT1S_1            (0x10)   ; Mode 1 for LFXT1 : Reserved
.define LFXT1S_2            (0x20)   ; Mode 2 for LFXT1 : VLO
.define LFXT1S_3            (0x30)   ; Mode 3 for LFXT1 : Digital input signal
.define XT2S_0              (0x00)   ; Mode 0 for XT2 : 0.4 - 1 MHz
.define XT2S_1              (0x40)   ; Mode 1 for XT2 : 1 - 4 MHz
.define XT2S_2              (0x80)   ; Mode 2 for XT2 : 2 - 16 MHz
.define XT2S_3              (0xC0)   ; Mode 3 for XT2 : Digital input signal
.define CACTL1_               0x0059    ; Comparator A Control 1
.define CACTL1 CACTL1_
.define CACTL2_               0x005A    ; Comparator A Control 2
.define CACTL2 CACTL2_
.define CAPD_                 0x005B    ; Comparator A Port Disable
.define CAPD CAPD_
.define CAIFG               (0x01)    ; Comp. A Interrupt Flag
.define CAIE                (0x02)    ; Comp. A Interrupt Enable
.define CAIES               (0x04)    ; Comp. A Int. Edge Select: 0:rising / 1:falling
.define CAON                (0x08)    ; Comp. A enable
.define CAREF0              (0x10)    ; Comp. A Internal Reference Select 0
.define CAREF1              (0x20)    ; Comp. A Internal Reference Select 1
.define CARSEL              (0x40)    ; Comp. A Internal Reference Enable
.define CAEX                (0x80)    ; Comp. A Exchange Inputs
.define CAREF_0             (0x00)    ; Comp. A Int. Ref. Select 0 : Off
.define CAREF_1             (0x10)    ; Comp. A Int. Ref. Select 1 : 0.25*Vcc
.define CAREF_2             (0x20)    ; Comp. A Int. Ref. Select 2 : 0.5*Vcc
.define CAREF_3             (0x30)    ; Comp. A Int. Ref. Select 3 : Vt
.define CAOUT               (0x01)    ; Comp. A Output
.define CAF                 (0x02)    ; Comp. A Enable Output Filter
.define P2CA0               (0x04)    ; Comp. A +Terminal Multiplexer
.define P2CA1               (0x08)    ; Comp. A -Terminal Multiplexer
.define P2CA2               (0x10)    ; Comp. A -Terminal Multiplexer
.define P2CA3               (0x20)    ; Comp. A -Terminal Multiplexer
.define P2CA4               (0x40)    ; Comp. A +Terminal Multiplexer
.define CASHORT             (0x80)    ; Comp. A Short + and - Terminals
.define CAPD0               (0x01)    ; Comp. A Disable Input Buffer of Port Register .0
.define CAPD1               (0x02)    ; Comp. A Disable Input Buffer of Port Register .1
.define CAPD2               (0x04)    ; Comp. A Disable Input Buffer of Port Register .2
.define CAPD3               (0x08)    ; Comp. A Disable Input Buffer of Port Register .3
.define CAPD4               (0x10)    ; Comp. A Disable Input Buffer of Port Register .4
.define CAPD5               (0x20)    ; Comp. A Disable Input Buffer of Port Register .5
.define CAPD6               (0x40)    ; Comp. A Disable Input Buffer of Port Register .6
.define CAPD7               (0x80)    ; Comp. A Disable Input Buffer of Port Register .7
.define FCTL1_                0x0128    ; FLASH Control 1
.define FCTL1 FCTL1_
.define FCTL2_                0x012A    ; FLASH Control 2
.define FCTL2 FCTL2_
.define FCTL3_                0x012C    ; FLASH Control 3
.define FCTL3 FCTL3_
.define FRKEY               (0x9600)  ; Flash key returned by read
.define FWKEY               (0xA500)  ; Flash key for write
.define FXKEY               (0x3300)  ; for use with XOR instruction
.define ERASE               (0x0002)  ; Enable bit for Flash segment erase
.define MERAS               (0x0004)  ; Enable bit for Flash mass erase
.define WRT                 (0x0040)  ; Enable bit for Flash write
.define BLKWRT              (0x0080)  ; Enable bit for Flash segment write
.define SEGWRT              (0x0080)  ; old definition
.define FN0                 (0x0001)  ; Divide Flash clock by 1 to 64 using FN0 to FN5 according to:
.define FN1                 (0x0002)  ;  32*FN5 + 16*FN4 + 8*FN3 + 4*FN2 + 2*FN1 + FN0 + 1
.define FN2                 (0x0004)
.define FN3                 (0x0008)
.define FN4                 (0x0010)
.define FN5                 (0x0020)
.define FSSEL0              (0x0040)  ; Flash clock select 0
.define FSSEL1              (0x0080)  ; Flash clock select 1
.define FSSEL_0             (0x0000)  ; Flash clock select: 0 - ACLK
.define FSSEL_1             (0x0040)  ; Flash clock select: 1 - MCLK
.define FSSEL_2             (0x0080)  ; Flash clock select: 2 - SMCLK
.define FSSEL_3             (0x00C0)  ; Flash clock select: 3 - SMCLK
.define BUSY                (0x0001)  ; Flash busy: 1
.define KEYV                (0x0002)  ; Flash Key violation flag
.define ACCVIFG             (0x0004)  ; Flash Access violation flag
.define WAIT                (0x0008)  ; Wait flag for segment write
.define LOCK                (0x0010)  ; Lock bit: 1 - Flash is locked (read only)
.define EMEX                (0x0020)  ; Flash Emergency Exit
.define LOCKA               (0x0040)  ; Segment A Lock bit: read = 1 - Segment is locked (read only)
.define FAIL                (0x0080)  ; Last Program or Erase failed
.define P1IN_                 0x0020    ; Port 1 Input
.define P1OUT_                0x0021    ; Port 1 Output
.define P1OUT P1OUT_
.define P1DIR_                0x0022    ; Port 1 Direction
.define P1DIR P1DIR_
.define P1IFG_                0x0023    ; Port 1 Interrupt Flag
.define P1IFG P1IFG_
.define P1IES_                0x0024    ; Port 1 Interrupt Edge Select
.define P1IES P1IES_
.define P1IE_                 0x0025    ; Port 1 Interrupt Enable
.define P1IE P1IE_
.define P1SEL_                0x0026    ; Port 1 Selection
.define P1SEL P1SEL_
.define P1SEL2_               0x0041    ; Port 1 Selection 2
.define P1SEL2 P1SEL2_
.define P1REN_                0x0027    ; Port 1 Resistor Enable
.define P1REN P1REN_
.define P2IN_                 0x0028    ; Port 2 Input
.define P2OUT_                0x0029    ; Port 2 Output
.define P2OUT P2OUT_
.define P2DIR_                0x002A    ; Port 2 Direction
.define P2DIR P2DIR_
.define P2IFG_                0x002B    ; Port 2 Interrupt Flag
.define P2IFG P2IFG_
.define P2IES_                0x002C    ; Port 2 Interrupt Edge Select
.define P2IES P2IES_
.define P2IE_                 0x002D    ; Port 2 Interrupt Enable
.define P2IE P2IE_
.define P2SEL_                0x002E    ; Port 2 Selection
.define P2SEL P2SEL_
.define P2SEL2_               0x0042    ; Port 2 Selection 2
.define P2SEL2 P2SEL2_
.define P2REN_                0x002F    ; Port 2 Resistor Enable
.define P2REN P2REN_
.define TA0IV_                0x012E    ; Timer0_A3 Interrupt Vector Word
.define TA0CTL_               0x0160    ; Timer0_A3 Control
.define TA0CTL TA0CTL_
.define TA0CCTL0_             0x0162    ; Timer0_A3 Capture/Compare Control 0
.define TA0CCTL0 TA0CCTL0_
.define TA0CCTL1_             0x0164    ; Timer0_A3 Capture/Compare Control 1
.define TA0CCTL1 TA0CCTL1_
.define TA0CCTL2_             0x0166    ; Timer0_A3 Capture/Compare Control 2
.define TA0CCTL2 TA0CCTL2_
.define TA0R_                 0x0170    ; Timer0_A3
.define TA0R TA0R_
.define TA0CCR0_              0x0172    ; Timer0_A3 Capture/Compare 0
.define TA0CCR0 TA0CCR0_
.define TA0CCR1_              0x0174    ; Timer0_A3 Capture/Compare 1
.define TA0CCR1 TA0CCR1_
.define TA0CCR2_              0x0176    ; Timer0_A3 Capture/Compare 2
.define TA0CCR2 TA0CCR2_
.define TAIV                TA0IV     ; Timer A Interrupt Vector Word
.define TACTL               TA0CTL    ; Timer A Control
.define TACCTL0             TA0CCTL0  ; Timer A Capture/Compare Control 0
.define TACCTL1             TA0CCTL1  ; Timer A Capture/Compare Control 1
.define TACCTL2             TA0CCTL2  ; Timer A Capture/Compare Control 2
.define TAR                 TA0R      ; Timer A
.define TACCR0              TA0CCR0   ; Timer A Capture/Compare 0
.define TACCR1              TA0CCR1   ; Timer A Capture/Compare 1
.define TACCR2              TA0CCR2   ; Timer A Capture/Compare 2
.define TAIV_               TA0IV_    ; Timer A Interrupt Vector Word
.define TACTL_              TA0CTL_   ; Timer A Control
.define TACCTL0_            TA0CCTL0_ ; Timer A Capture/Compare Control 0
.define TACCTL1_            TA0CCTL1_ ; Timer A Capture/Compare Control 1
.define TACCTL2_            TA0CCTL2_ ; Timer A Capture/Compare Control 2
.define TAR_                TA0R_     ; Timer A
.define TACCR0_             TA0CCR0_  ; Timer A Capture/Compare 0
.define TACCR1_             TA0CCR1_  ; Timer A Capture/Compare 1
.define TACCR2_             TA0CCR2_  ; Timer A Capture/Compare 2
.define CCTL0               TACCTL0   ; Timer A Capture/Compare Control 0
.define CCTL1               TACCTL1   ; Timer A Capture/Compare Control 1
.define CCTL2               TACCTL2   ; Timer A Capture/Compare Control 2
.define CCR0                TACCR0    ; Timer A Capture/Compare 0
.define CCR1                TACCR1    ; Timer A Capture/Compare 1
.define CCR2                TACCR2    ; Timer A Capture/Compare 2
.define CCTL0_              TACCTL0_  ; Timer A Capture/Compare Control 0
.define CCTL1_              TACCTL1_  ; Timer A Capture/Compare Control 1
.define CCTL2_              TACCTL2_  ; Timer A Capture/Compare Control 2
.define CCR0_               TACCR0_   ; Timer A Capture/Compare 0
.define CCR1_               TACCR1_   ; Timer A Capture/Compare 1
.define CCR2_               TACCR2_   ; Timer A Capture/Compare 2
.define TASSEL1             (0x0200)  ; Timer A clock source select 1
.define TASSEL0             (0x0100)  ; Timer A clock source select 0
.define ID1                 (0x0080)  ; Timer A clock input divider 1
.define ID0                 (0x0040)  ; Timer A clock input divider 0
.define MC1                 (0x0020)  ; Timer A mode control 1
.define MC0                 (0x0010)  ; Timer A mode control 0
.define TACLR               (0x0004)  ; Timer A counter clear
.define TAIE                (0x0002)  ; Timer A counter interrupt enable
.define TAIFG               (0x0001)  ; Timer A counter interrupt flag
.define MC_0                (0x0000)  ; Timer A mode control: 0 - Stop
.define MC_1                (0x0010)  ; Timer A mode control: 1 - Up to CCR0
.define MC_2                (0x0020)  ; Timer A mode control: 2 - Continous up
.define MC_3                (0x0030)  ; Timer A mode control: 3 - Up/Down
.define ID_0                (0x0000)  ; Timer A input divider: 0 - /1
.define ID_1                (0x0040)  ; Timer A input divider: 1 - /2
.define ID_2                (0x0080)  ; Timer A input divider: 2 - /4
.define ID_3                (0x00C0)  ; Timer A input divider: 3 - /8
.define TASSEL_0            (0x0000) ; Timer A clock source select: 0 - TACLK
.define TASSEL_1            (0x0100) ; Timer A clock source select: 1 - ACLK
.define TASSEL_2            (0x0200) ; Timer A clock source select: 2 - SMCLK
.define TASSEL_3            (0x0300) ; Timer A clock source select: 3 - INCLK
.define CM1                 (0x8000)  ; Capture mode 1
.define CM0                 (0x4000)  ; Capture mode 0
.define CCIS1               (0x2000)  ; Capture input select 1
.define CCIS0               (0x1000)  ; Capture input select 0
.define SCS                 (0x0800)  ; Capture sychronize
.define SCCI                (0x0400)  ; Latched capture signal (read)
.define CAP                 (0x0100)  ; Capture mode: 1 /Compare mode : 0
.define OUTMOD2             (0x0080)  ; Output mode 2
.define OUTMOD1             (0x0040)  ; Output mode 1
.define OUTMOD0             (0x0020)  ; Output mode 0
.define CCIE                (0x0010)  ; Capture/compare interrupt enable
.define CCI                 (0x0008)  ; Capture input signal (read)
.define OUT                 (0x0004)  ; PWM Output signal if output mode 0
.define COV                 (0x0002)  ; Capture/compare overflow flag
.define CCIFG               (0x0001)  ; Capture/compare interrupt flag
.define OUTMOD_0            (0x0000)  ; PWM output mode: 0 - output only
.define OUTMOD_1            (0x0020)  ; PWM output mode: 1 - set
.define OUTMOD_2            (0x0040)  ; PWM output mode: 2 - PWM toggle/reset
.define OUTMOD_3            (0x0060)  ; PWM output mode: 3 - PWM set/reset
.define OUTMOD_4            (0x0080)  ; PWM output mode: 4 - toggle
.define OUTMOD_5            (0x00A0)  ; PWM output mode: 5 - Reset
.define OUTMOD_6            (0x00C0)  ; PWM output mode: 6 - PWM toggle/set
.define OUTMOD_7            (0x00E0)  ; PWM output mode: 7 - PWM reset/set
.define CCIS_0              (0x0000) ; Capture input select: 0 - CCIxA
.define CCIS_1              (0x1000) ; Capture input select: 1 - CCIxB
.define CCIS_2              (0x2000) ; Capture input select: 2 - GND
.define CCIS_3              (0x3000) ; Capture input select: 3 - Vcc
.define CM_0                (0x0000) ; Capture mode: 0 - disabled
.define CM_1                (0x4000) ; Capture mode: 1 - pos. edge
.define CM_2                (0x8000) ; Capture mode: 1 - neg. edge
.define CM_3                (0xC000) ; Capture mode: 1 - both edges
.define TA0IV_NONE          (0x0000)    ; No Interrupt pending
.define TA0IV_TACCR1        (0x0002)    ; TA0CCR1_CCIFG
.define TA0IV_TACCR2        (0x0004)    ; TA0CCR2_CCIFG
.define TA0IV_6             (0x0006)    ; Reserved
.define TA0IV_8             (0x0008)    ; Reserved
.define TA0IV_TAIFG         (0x000A)    ; TA0IFG
.define USICTL0_              0x0078    ; USI  Control Register 0
.define USICTL0 USICTL0_
.define USICTL1_              0x0079    ; USI  Control Register 1
.define USICTL1 USICTL1_
.define USICKCTL_             0x007A    ; USI  Clock Control Register
.define USICKCTL USICKCTL_
.define USICNT_               0x007B    ; USI  Bit Counter Register
.define USICNT USICNT_
.define USISRL_               0x007C    ; USI  Low Byte Shift Register
.define USISRL USISRL_
.define USISRH_               0x007D    ; USI  High Byte Shift Register
.define USISRH USISRH_
.define USICTL_               0x0078    ; USI  Control Register
.define USICTL USICTL_
.define USICCTL_              0x007A    ; USI  Clock and Counter Control Register
.define USICCTL USICCTL_
.define USISR_                0x007C    ; USI  Shift Register
.define USISR USISR_
.define USIPE7              (0x80)    ; USI  Port Enable Px.7
.define USIPE6              (0x40)    ; USI  Port Enable Px.6
.define USIPE5              (0x20)    ; USI  Port Enable Px.5
.define USILSB              (0x10)    ; USI  LSB first  1:LSB / 0:MSB
.define USIMST              (0x08)    ; USI  Master Select  0:Slave / 1:Master
.define USIGE               (0x04)    ; USI  General Output Enable Latch
.define USIOE               (0x02)    ; USI  Output Enable
.define USISWRST            (0x01)    ; USI  Software Reset
.define USICKPH             (0x80)    ; USI  Sync. Mode: Clock Phase
.define USII2C              (0x40)    ; USI  I2C Mode
.define USISTTIE            (0x20)    ; USI  START Condition interrupt enable
.define USIIE               (0x10)    ; USI  Counter Interrupt enable
.define USIAL               (0x08)    ; USI  Arbitration Lost
.define USISTP              (0x04)    ; USI  STOP Condition received
.define USISTTIFG           (0x02)    ; USI  START Condition interrupt Flag
.define USIIFG              (0x01)    ; USI  Counter Interrupt Flag
.define USIDIV2             (0x80)    ; USI  Clock Divider 2
.define USIDIV1             (0x40)    ; USI  Clock Divider 1
.define USIDIV0             (0x20)    ; USI  Clock Divider 0
.define USISSEL2            (0x10)    ; USI  Clock Source Select 2
.define USISSEL1            (0x08)    ; USI  Clock Source Select 1
.define USISSEL0            (0x04)    ; USI  Clock Source Select 0
.define USICKPL             (0x02)    ; USI  Clock Polarity 0:Inactive=Low / 1:Inactive=High
.define USISWCLK            (0x01)    ; USI  Software Clock
.define USIDIV_0            (0x00)    ; USI  Clock Divider: 0
.define USIDIV_1            (0x20)    ; USI  Clock Divider: 1
.define USIDIV_2            (0x40)    ; USI  Clock Divider: 2
.define USIDIV_3            (0x60)    ; USI  Clock Divider: 3
.define USIDIV_4            (0x80)    ; USI  Clock Divider: 4
.define USIDIV_5            (0xA0)    ; USI  Clock Divider: 5
.define USIDIV_6            (0xC0)    ; USI  Clock Divider: 6
.define USIDIV_7            (0xE0)    ; USI  Clock Divider: 7
.define USISSEL_0           (0x00)    ; USI  Clock Source: 0
.define USISSEL_1           (0x04)    ; USI  Clock Source: 1
.define USISSEL_2           (0x08)    ; USI  Clock Source: 2
.define USISSEL_3           (0x0C)    ; USI  Clock Source: 3
.define USISSEL_4           (0x10)    ; USI  Clock Source: 4
.define USISSEL_5           (0x14)    ; USI  Clock Source: 5
.define USISSEL_6           (0x18)    ; USI  Clock Source: 6
.define USISSEL_7           (0x1C)    ; USI  Clock Source: 7
.define USISCLREL           (0x80)    ; USI  SCL Released
.define USI16B              (0x40)    ; USI  16 Bit Shift Register Enable
.define USIIFGCC            (0x20)    ; USI  Interrupt Flag Clear Control
.define USICNT4             (0x10)    ; USI  Bit Count 4
.define USICNT3             (0x08)    ; USI  Bit Count 3
.define USICNT2             (0x04)    ; USI  Bit Count 2
.define USICNT1             (0x02)    ; USI  Bit Count 1
.define USICNT0             (0x01)    ; USI  Bit Count 0
.define WDTCTL_               0x0120    ; Watchdog Timer Control
.define WDTCTL WDTCTL_
.define WDTIS0              (0x0001)
.define WDTIS1              (0x0002)
.define WDTSSEL             (0x0004)
.define WDTCNTCL            (0x0008)
.define WDTTMSEL            (0x0010)
.define WDTNMI              (0x0020)
.define WDTNMIES            (0x0040)
.define WDTHOLD             (0x0080)
.define WDTPW               (0x5A00)
.define WDT_MDLY_32         (WDTPW+WDTTMSEL+WDTCNTCL)                         ; 32ms interval (default)
.define WDT_MDLY_8          (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS0)                  ; 8ms     "
.define WDT_MDLY_0_5        (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS1)                  ; 0.5ms   "
.define WDT_MDLY_0_064      (WDTPW+WDTTMSEL+WDTCNTCL+WDTIS1+WDTIS0)           ; 0.064ms "
.define WDT_ADLY_1000       (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL)                 ; 1000ms  "
.define WDT_ADLY_250        (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS0)          ; 250ms   "
.define WDT_ADLY_16         (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS1)          ; 16ms    "
.define WDT_ADLY_1_9        (WDTPW+WDTTMSEL+WDTCNTCL+WDTSSEL+WDTIS1+WDTIS0)   ; 1.9ms   "
.define WDT_MRST_32         (WDTPW+WDTCNTCL)                                  ; 32ms interval (default)
.define WDT_MRST_8          (WDTPW+WDTCNTCL+WDTIS0)                           ; 8ms     "
.define WDT_MRST_0_5        (WDTPW+WDTCNTCL+WDTIS1)                           ; 0.5ms   "
.define WDT_MRST_0_064      (WDTPW+WDTCNTCL+WDTIS1+WDTIS0)                    ; 0.064ms "
.define WDT_ARST_1000       (WDTPW+WDTCNTCL+WDTSSEL)                          ; 1000ms  "
.define WDT_ARST_250        (WDTPW+WDTCNTCL+WDTSSEL+WDTIS0)                   ; 250ms   "
.define WDT_ARST_16         (WDTPW+WDTCNTCL+WDTSSEL+WDTIS1)                   ; 16ms    "
.define WDT_ARST_1_9        (WDTPW+WDTCNTCL+WDTSSEL+WDTIS1+WDTIS0)            ; 1.9ms   "
.define CALDCO_16MHZ_         0x10F8    ; DCOCTL  Calibration Data for 16MHz
.define CALBC1_16MHZ_         0x10F9    ; BCSCTL1 Calibration Data for 16MHz
.define CALDCO_12MHZ_         0x10FA    ; DCOCTL  Calibration Data for 12MHz
.define CALBC1_12MHZ_         0x10FB    ; BCSCTL1 Calibration Data for 12MHz
.define CALDCO_8MHZ_          0x10FC    ; DCOCTL  Calibration Data for 8MHz
.define CALBC1_8MHZ_          0x10FD    ; BCSCTL1 Calibration Data for 8MHz
.define CALDCO_1MHZ_          0x10FE    ; DCOCTL  Calibration Data for 1MHz
.define CALBC1_1MHZ_          0x10FF    ; BCSCTL1 Calibration Data for 1MHz
.define PORT1_VECTOR        (0x0004)  ; 0xFFE4 Port 1
.define PORT2_VECTOR        (0x0006)  ; 0xFFE6 Port 2
.define USI_VECTOR          (0x0008)  ; 0xFFE8 USI
.define ADC10_VECTOR        (0x000A)  ; 0xFFEA ADC10
.define TIMER0_A1_VECTOR    (0x0010)  ; 0xFFF0 Timer0_A CC1, TA
.define TIMER0_A0_VECTOR    (0x0012)  ; 0xFFF2 Timer0_A CC0
.define WDT_VECTOR          (0x0014) ; 0xFFF4 Watchdog Timer
.define COMPARATORA_VECTOR  (0x0016) ; 0xFFF6 Comparator A
.define NMI_VECTOR          (0x001C) ; 0xFFFC Non-maskable
.define RESET_VECTOR        (0x001E) ; 0xFFFE Reset [Highest Priority]
