/*** System Control Block ***/
typedef struct
{
                                // Off  Acc Register Description
    volatile uint32_t CPUID;    // 0x00 r   CPUID Base
    volatile uint32_t ICSR;     // 0x04 rw  Interrupt Control and State 
    volatile uint32_t VTOR;     // 0x08 rw  Vector Table Offset
    volatile uint32_t AIRCR;    // 0x0C rw  Application Interrupt and Reset Control 
    volatile uint32_t SCR;      // 0x10 rw  System Control
    volatile uint32_t CCR;      // 0x14 rw  Configuration Control
    volatile uint8_t  SHP[12];  // 0x18 rw  System Handlers Priority Registers (4-7, 8-11, 12-15) */
    volatile uint32_t SHCSR;    // 0x24 rw  System Handler Control and State
    volatile uint32_t CFSR;     // 0x28 rw  Configurable Fault Status
    volatile uint32_t HFSR;     // 0x2C rw  HardFault Status
    volatile uint32_t DFSR;     // 0x30 rw  Debug Fault Status
    volatile uint32_t MMFAR;    // 0x34 rw  MemManage Fault Address
    volatile uint32_t BFAR;     // 0x38 rw  BusFault Address
    volatile uint32_t AFSR;     // 0x3C rw  Auxiliary Fault Status
    volatile  uint32_t PFR[2];  // 0x40 r  Processor Feature
    volatile  uint32_t DFR;     // 0x48 r  Debug Feature
    volatile  uint32_t ADR;     // 0x4C r  Auxiliary Feature
    volatile  uint32_t MMFR[4]  // 0x50 r  Memory Model Feature
    volatile  uint32_t ISAR[5]  // 0x60 r  Instruction Set Attributes
    uint32_t RESERVED0[5];
    volatile uint32_t CPACR;    // 0x88 rw Coprocessor Access Control
} SCB_Type;

/* SCB CPUID Register Definitions */
#define SCB_CPUID_IMPLEMENTER_Pos    24   // SCB CPUID: IMPLEMENTER Position
#define SCB_CPUID_IMPLEMENTER_Msk   (0xFFUL << SCB_CPUID_IMPLEMENTER_Pos)          // SCB CPUID: IMPLEMENTER Mask */

#define SCB_CPUID_VARIANT_Pos     20    // SCB CPUID: VARIANT Position
#define SCB_CPUID_VARIANT_Msk    (0xFUL << SCB_CPUID_VARIANT_Pos)  // SCB CPUID: VARIANT Mask */

#define SCB_CPUID_ARCHITECTURE_Pos 16 // SCB CPUID: ARCHITECTURE Position */
#define SCB_CPUID_ARCHITECTURE_Msk (0xFUL << SCB_CPUID_ARCHITECTURE_Pos)          // SCB CPUID: ARCHITECTURE Mask */

#define SCB_CPUID_PARTNO_Pos 4 // SCB CPUID: PARTNO Position */
#define SCB_CPUID_PARTNO_Msk  (0xFFFUL << SCB_CPUID_PARTNO_Pos)              // SCB CPUID: PARTNO Mask */

#define SCB_CPUID_REVISION_Pos 0                                             // SCB CPUID: REVISION Position */
#define SCB_CPUID_REVISION_Msk (0xFUL << SCB_CPUID_REVISION_Pos)              // SCB CPUID: REVISION Mask */

/* SCB Interrupt Control State Register Definitions */
#define SCB_ICSR_NMIPENDSET_Pos 31                                             // SCB ICSR: NMIPENDSET Position */
#define SCB_ICSR_NMIPENDSET_Msk (1UL << SCB_ICSR_NMIPENDSET_Pos)               // SCB ICSR: NMIPENDSET Mask */

#define SCB_ICSR_PENDSVSET_Pos  28                                             // SCB ICSR: PENDSVSET Position */
#define SCB_ICSR_PENDSVSET_Msk             (1UL << SCB_ICSR_PENDSVSET_Pos)                // SCB ICSR: PENDSVSET Mask */

#define SCB_ICSR_PENDSVCLR_Pos             27                                             // SCB ICSR: PENDSVCLR Position */
#define SCB_ICSR_PENDSVCLR_Msk             (1UL << SCB_ICSR_PENDSVCLR_Pos)                // SCB ICSR: PENDSVCLR Mask */

#define SCB_ICSR_PENDSTSET_Pos             26                                             // SCB ICSR: PENDSTSET Position */
#define SCB_ICSR_PENDSTSET_Msk             (1UL << SCB_ICSR_PENDSTSET_Pos)                // SCB ICSR: PENDSTSET Mask */

#define SCB_ICSR_PENDSTCLR_Pos             25                                             // SCB ICSR: PENDSTCLR Position */
#define SCB_ICSR_PENDSTCLR_Msk             (1UL << SCB_ICSR_PENDSTCLR_Pos)                // SCB ICSR: PENDSTCLR Mask */

#define SCB_ICSR_ISRPREEMPT_Pos            23                                             // SCB ICSR: ISRPREEMPT Position */
#define SCB_ICSR_ISRPREEMPT_Msk            (1UL << SCB_ICSR_ISRPREEMPT_Pos)               // SCB ICSR: ISRPREEMPT Mask */

#define SCB_ICSR_ISRPENDING_Pos            22                                             // SCB ICSR: ISRPENDING Position */
#define SCB_ICSR_ISRPENDING_Msk            (1UL << SCB_ICSR_ISRPENDING_Pos)               // SCB ICSR: ISRPENDING Mask */

#define SCB_ICSR_VECTPENDING_Pos           12                                             // SCB ICSR: VECTPENDING Position */
#define SCB_ICSR_VECTPENDING_Msk           (0x1FFUL << SCB_ICSR_VECTPENDING_Pos)          // SCB ICSR: VECTPENDING Mask */

#define SCB_ICSR_RETTOBASE_Pos             11                                             // SCB ICSR: RETTOBASE Position */
#define SCB_ICSR_RETTOBASE_Msk             (1UL << SCB_ICSR_RETTOBASE_Pos)                // SCB ICSR: RETTOBASE Mask */

#define SCB_ICSR_VECTACTIVE_Pos             0                                             // SCB ICSR: VECTACTIVE Position */
#define SCB_ICSR_VECTACTIVE_Msk            (0x1FFUL << SCB_ICSR_VECTACTIVE_Pos)           // SCB ICSR: VECTACTIVE Mask */

/* SCB Vector Table Offset Register Definitions */
#define SCB_VTOR_TBLOFF_Pos                 7                                             // SCB VTOR: TBLOFF Position */
#define SCB_VTOR_TBLOFF_Msk                (0x1FFFFFFUL << SCB_VTOR_TBLOFF_Pos)           // SCB VTOR: TBLOFF Mask */

/* SCB Application Interrupt and Reset Control Register Definitions */
#define SCB_AIRCR_VECTKEY_Pos              16                                             // SCB AIRCR: VECTKEY Position */
#define SCB_AIRCR_VECTKEY_Msk              (0xFFFFUL << SCB_AIRCR_VECTKEY_Pos)            // SCB AIRCR: VECTKEY Mask */

#define SCB_AIRCR_VECTKEYSTAT_Pos          16                                             // SCB AIRCR: VECTKEYSTAT Position */
#define SCB_AIRCR_VECTKEYSTAT_Msk          (0xFFFFUL << SCB_AIRCR_VECTKEYSTAT_Pos)        // SCB AIRCR: VECTKEYSTAT Mask */

#define SCB_AIRCR_ENDIANESS_Pos            15                                             // SCB AIRCR: ENDIANESS Position */
#define SCB_AIRCR_ENDIANESS_Msk            (1UL << SCB_AIRCR_ENDIANESS_Pos)               // SCB AIRCR: ENDIANESS Mask */

#define SCB_AIRCR_PRIGROUP_Pos              8                                             // SCB AIRCR: PRIGROUP Position */
#define SCB_AIRCR_PRIGROUP_Msk             (7UL << SCB_AIRCR_PRIGROUP_Pos)                // SCB AIRCR: PRIGROUP Mask */

#define SCB_AIRCR_SYSRESETREQ_Pos           2                                             // SCB AIRCR: SYSRESETREQ Position */
#define SCB_AIRCR_SYSRESETREQ_Msk          (1UL << SCB_AIRCR_SYSRESETREQ_Pos)             // SCB AIRCR: SYSRESETREQ Mask */

#define SCB_AIRCR_VECTCLRACTIVE_Pos         1                                             // SCB AIRCR: VECTCLRACTIVE Position */
#define SCB_AIRCR_VECTCLRACTIVE_Msk        (1UL << SCB_AIRCR_VECTCLRACTIVE_Pos)           // SCB AIRCR: VECTCLRACTIVE Mask */

#define SCB_AIRCR_VECTRESET_Pos             0                                             // SCB AIRCR: VECTRESET Position */
#define SCB_AIRCR_VECTRESET_Msk            (1UL << SCB_AIRCR_VECTRESET_Pos)               // SCB AIRCR: VECTRESET Mask */

/* SCB System Control Register Definitions */
#define SCB_SCR_SEVONPEND_Pos               4                                             // SCB SCR: SEVONPEND Position */
#define SCB_SCR_SEVONPEND_Msk              (1UL << SCB_SCR_SEVONPEND_Pos)                 // SCB SCR: SEVONPEND Mask */

#define SCB_SCR_SLEEPDEEP_Pos               2                                             // SCB SCR: SLEEPDEEP Position */
#define SCB_SCR_SLEEPDEEP_Msk              (1UL << SCB_SCR_SLEEPDEEP_Pos)                 // SCB SCR: SLEEPDEEP Mask */

#define SCB_SCR_SLEEPONEXIT_Pos             1                                             // SCB SCR: SLEEPONEXIT Position */
#define SCB_SCR_SLEEPONEXIT_Msk            (1UL << SCB_SCR_SLEEPONEXIT_Pos)               // SCB SCR: SLEEPONEXIT Mask */

/* SCB Configuration Control Register Definitions */
#define SCB_CCR_STKALIGN_Pos                9                                             // SCB CCR: STKALIGN Position */
#define SCB_CCR_STKALIGN_Msk               (1UL << SCB_CCR_STKALIGN_Pos)                  // SCB CCR: STKALIGN Mask */

#define SCB_CCR_BFHFNMIGN_Pos               8                                             // SCB CCR: BFHFNMIGN Position */
#define SCB_CCR_BFHFNMIGN_Msk              (1UL << SCB_CCR_BFHFNMIGN_Pos)                 // SCB CCR: BFHFNMIGN Mask */

#define SCB_CCR_DIV_0_TRP_Pos               4                                             // SCB CCR: DIV_0_TRP Position */
#define SCB_CCR_DIV_0_TRP_Msk              (1UL << SCB_CCR_DIV_0_TRP_Pos)                 // SCB CCR: DIV_0_TRP Mask */

#define SCB_CCR_UNALIGN_TRP_Pos             3                                             // SCB CCR: UNALIGN_TRP Position */
#define SCB_CCR_UNALIGN_TRP_Msk            (1UL << SCB_CCR_UNALIGN_TRP_Pos)               // SCB CCR: UNALIGN_TRP Mask */

#define SCB_CCR_USERSETMPEND_Pos            1                                             // SCB CCR: USERSETMPEND Position */
#define SCB_CCR_USERSETMPEND_Msk           (1UL << SCB_CCR_USERSETMPEND_Pos)              // SCB CCR: USERSETMPEND Mask */

#define SCB_CCR_NONBASETHRDENA_Pos          0                                             // SCB CCR: NONBASETHRDENA Position */
#define SCB_CCR_NONBASETHRDENA_Msk         (1UL << SCB_CCR_NONBASETHRDENA_Pos)            // SCB CCR: NONBASETHRDENA Mask */

/* SCB System Handler Control and State Register Definitions */
#define SCB_SHCSR_USGFAULTENA_Pos          18                                             // SCB SHCSR: USGFAULTENA Position */
#define SCB_SHCSR_USGFAULTENA_Msk          (1UL << SCB_SHCSR_USGFAULTENA_Pos)             // SCB SHCSR: USGFAULTENA Mask */

#define SCB_SHCSR_BUSFAULTENA_Pos          17                                             // SCB SHCSR: BUSFAULTENA Position */
#define SCB_SHCSR_BUSFAULTENA_Msk          (1UL << SCB_SHCSR_BUSFAULTENA_Pos)             // SCB SHCSR: BUSFAULTENA Mask */

#define SCB_SHCSR_MEMFAULTENA_Pos          16                                             // SCB SHCSR: MEMFAULTENA Position */
#define SCB_SHCSR_MEMFAULTENA_Msk          (1UL << SCB_SHCSR_MEMFAULTENA_Pos)             // SCB SHCSR: MEMFAULTENA Mask */

#define SCB_SHCSR_SVCALLPENDED_Pos         15                                             // SCB SHCSR: SVCALLPENDED Position */
#define SCB_SHCSR_SVCALLPENDED_Msk         (1UL << SCB_SHCSR_SVCALLPENDED_Pos)            // SCB SHCSR: SVCALLPENDED Mask */

#define SCB_SHCSR_BUSFAULTPENDED_Pos       14                                             // SCB SHCSR: BUSFAULTPENDED Position */
#define SCB_SHCSR_BUSFAULTPENDED_Msk       (1UL << SCB_SHCSR_BUSFAULTPENDED_Pos)          // SCB SHCSR: BUSFAULTPENDED Mask */

#define SCB_SHCSR_MEMFAULTPENDED_Pos       13                                             // SCB SHCSR: MEMFAULTPENDED Position */
#define SCB_SHCSR_MEMFAULTPENDED_Msk       (1UL << SCB_SHCSR_MEMFAULTPENDED_Pos)          // SCB SHCSR: MEMFAULTPENDED Mask */

#define SCB_SHCSR_USGFAULTPENDED_Pos       12                                             // SCB SHCSR: USGFAULTPENDED Position */
#define SCB_SHCSR_USGFAULTPENDED_Msk       (1UL << SCB_SHCSR_USGFAULTPENDED_Pos)          // SCB SHCSR: USGFAULTPENDED Mask */

#define SCB_SHCSR_SYSTICKACT_Pos           11                                             // SCB SHCSR: SYSTICKACT Position */
#define SCB_SHCSR_SYSTICKACT_Msk           (1UL << SCB_SHCSR_SYSTICKACT_Pos)              // SCB SHCSR: SYSTICKACT Mask */

#define SCB_SHCSR_PENDSVACT_Pos            10                                             // SCB SHCSR: PENDSVACT Position */
#define SCB_SHCSR_PENDSVACT_Msk            (1UL << SCB_SHCSR_PENDSVACT_Pos)               // SCB SHCSR: PENDSVACT Mask */

#define SCB_SHCSR_MONITORACT_Pos            8                                             // SCB SHCSR: MONITORACT Position */
#define SCB_SHCSR_MONITORACT_Msk           (1UL << SCB_SHCSR_MONITORACT_Pos)              // SCB SHCSR: MONITORACT Mask */

#define SCB_SHCSR_SVCALLACT_Pos             7                                             // SCB SHCSR: SVCALLACT Position */
#define SCB_SHCSR_SVCALLACT_Msk            (1UL << SCB_SHCSR_SVCALLACT_Pos)               // SCB SHCSR: SVCALLACT Mask */

#define SCB_SHCSR_USGFAULTACT_Pos           3                                             // SCB SHCSR: USGFAULTACT Position */
#define SCB_SHCSR_USGFAULTACT_Msk          (1UL << SCB_SHCSR_USGFAULTACT_Pos)             // SCB SHCSR: USGFAULTACT Mask */

#define SCB_SHCSR_BUSFAULTACT_Pos           1                                             // SCB SHCSR: BUSFAULTACT Position */
#define SCB_SHCSR_BUSFAULTACT_Msk          (1UL << SCB_SHCSR_BUSFAULTACT_Pos)             // SCB SHCSR: BUSFAULTACT Mask */

#define SCB_SHCSR_MEMFAULTACT_Pos           0                                             // SCB SHCSR: MEMFAULTACT Position */
#define SCB_SHCSR_MEMFAULTACT_Msk          (1UL << SCB_SHCSR_MEMFAULTACT_Pos)             // SCB SHCSR: MEMFAULTACT Mask */

/* SCB Configurable Fault Status Registers Definitions */
#define SCB_CFSR_USGFAULTSR_Pos            16                                             // SCB CFSR: Usage Fault Status Register Position */
#define SCB_CFSR_USGFAULTSR_Msk            (0xFFFFUL << SCB_CFSR_USGFAULTSR_Pos)          // SCB CFSR: Usage Fault Status Register Mask */

#define SCB_CFSR_BUSFAULTSR_Pos             8                                             // SCB CFSR: Bus Fault Status Register Position */
#define SCB_CFSR_BUSFAULTSR_Msk            (0xFFUL << SCB_CFSR_BUSFAULTSR_Pos)            // SCB CFSR: Bus Fault Status Register Mask */

#define SCB_CFSR_MEMFAULTSR_Pos             0                                             // SCB CFSR: Memory Manage Fault Status Register Position */
#define SCB_CFSR_MEMFAULTSR_Msk            (0xFFUL << SCB_CFSR_MEMFAULTSR_Pos)            // SCB CFSR: Memory Manage Fault Status Register Mask */

/* SCB Hard Fault Status Registers Definitions */
#define SCB_HFSR_DEBUGEVT_Pos              31                                             // SCB HFSR: DEBUGEVT Position */
#define SCB_HFSR_DEBUGEVT_Msk              (1UL << SCB_HFSR_DEBUGEVT_Pos)                 // SCB HFSR: DEBUGEVT Mask */

#define SCB_HFSR_FORCED_Pos                30                                             // SCB HFSR: FORCED Position */
#define SCB_HFSR_FORCED_Msk                (1UL << SCB_HFSR_FORCED_Pos)                   // SCB HFSR: FORCED Mask */

#define SCB_HFSR_VECTTBL_Pos                1                                             // SCB HFSR: VECTTBL Position */
#define SCB_HFSR_VECTTBL_Msk               (1UL << SCB_HFSR_VECTTBL_Pos)                  // SCB HFSR: VECTTBL Mask */

/* SCB Debug Fault Status Register Definitions */
#define SCB_DFSR_EXTERNAL_Pos               4                                             // SCB DFSR: EXTERNAL Position */
#define SCB_DFSR_EXTERNAL_Msk              (1UL << SCB_DFSR_EXTERNAL_Pos)                 // SCB DFSR: EXTERNAL Mask */

#define SCB_DFSR_VCATCH_Pos                 3                                             // SCB DFSR: VCATCH Position */
#define SCB_DFSR_VCATCH_Msk                (1UL << SCB_DFSR_VCATCH_Pos)                   // SCB DFSR: VCATCH Mask */

#define SCB_DFSR_DWTTRAP_Pos                2                                             // SCB DFSR: DWTTRAP Position */
#define SCB_DFSR_DWTTRAP_Msk               (1UL << SCB_DFSR_DWTTRAP_Pos)                  // SCB DFSR: DWTTRAP Mask */

#define SCB_DFSR_BKPT_Pos                   1                                             // SCB DFSR: BKPT Position */
#define SCB_DFSR_BKPT_Msk                  (1UL << SCB_DFSR_BKPT_Pos)                     // SCB DFSR: BKPT Mask */

#define SCB_DFSR_HALTED_Pos                 0                                             // SCB DFSR: HALTED Position */
#define SCB_DFSR_HALTED_Msk                (1UL << SCB_DFSR_HALTED_Pos)                   // SCB DFSR: HALTED Mask */

/*@} end of group CMSIS_SCB */


/** \ingroup  CMSIS_core_register
    \defgroup CMSIS_SCnSCB System Controls not in SCB (SCnSCB)
    \brief      Type definitions for the System Control and ID Register not in the SCB
  @{
 */

/** \brief  Structure type to access the System Control and ID Register not in the SCB.
 */
typedef struct
{
       uint32_t RESERVED0[1];
  volatile  uint32_t ICTR;                    // 0x04 r  Interrupt Controller Type Register      */
  volatile uint32_t ACTLR;                   // 0x08 rw  Auxiliary Control Register              */
} SCnSCB_Type;

/* Interrupt Controller Type Register Definitions */
#define SCnSCB_ICTR_INTLINESNUM_Pos         0                                          // ICTR: INTLINESNUM Position */
#define SCnSCB_ICTR_INTLINESNUM_Msk        (0xFUL << SCnSCB_ICTR_INTLINESNUM_Pos)      // ICTR: INTLINESNUM Mask */

/* Auxiliary Control Register Definitions */
#define SCnSCB_ACTLR_DISOOFP_Pos            9                                          // ACTLR: DISOOFP Position */
#define SCnSCB_ACTLR_DISOOFP_Msk           (1UL << SCnSCB_ACTLR_DISOOFP_Pos)           // ACTLR: DISOOFP Mask */

#define SCnSCB_ACTLR_DISFPCA_Pos            8                                          // ACTLR: DISFPCA Position */
#define SCnSCB_ACTLR_DISFPCA_Msk           (1UL << SCnSCB_ACTLR_DISFPCA_Pos)           // ACTLR: DISFPCA Mask */

#define SCnSCB_ACTLR_DISFOLD_Pos            2                                          // ACTLR: DISFOLD Position */
#define SCnSCB_ACTLR_DISFOLD_Msk           (1UL << SCnSCB_ACTLR_DISFOLD_Pos)           // ACTLR: DISFOLD Mask */

#define SCnSCB_ACTLR_DISDEFWBUF_Pos         1                                          // ACTLR: DISDEFWBUF Position */
#define SCnSCB_ACTLR_DISDEFWBUF_Msk        (1UL << SCnSCB_ACTLR_DISDEFWBUF_Pos)        // ACTLR: DISDEFWBUF Mask */

#define SCnSCB_ACTLR_DISMCYCINT_Pos         0                                          // ACTLR: DISMCYCINT Position */
#define SCnSCB_ACTLR_DISMCYCINT_Msk        (1UL << SCnSCB_ACTLR_DISMCYCINT_Pos)        // ACTLR: DISMCYCINT Mask */

/*@} end of group CMSIS_SCnotSCB */


