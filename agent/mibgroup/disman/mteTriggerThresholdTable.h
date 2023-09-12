/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent. 
 */


#ifndef _MIBGROUP_MTETRIGGERTHRESHOLDTABLE_H
#define _MIBGROUP_MTETRIGGERTHRESHOLDTABLE_H


/*
 * we may use header_complex from the header_complex module 
 */


config_require(header_complex);

    /*
     * enum definitions from the covered mib sections 
     */
#define MTETRIGGERTHRESHOLDSTARTUP_RISING        1
#define MTETRIGGERTHRESHOLDSTARTUP_FALLING       2
#define MTETRIGGERTHRESHOLDSTARTUP_RISINGORFALLING 3
    /*
     * function prototypes 
     */
     void            init_mteTriggerThresholdTable(void);
     FindVarMethod   var_mteTriggerThresholdTable;

#ifndef NETSNMP_NO_WRITE_SUPPORT
     WriteMethod     write_mteTriggerThresholdStartup;
     WriteMethod     write_mteTriggerThresholdRising;
     WriteMethod     write_mteTriggerThresholdFalling;
     WriteMethod     write_mteTriggerThresholdDeltaRising;
     WriteMethod     write_mteTriggerThresholdDeltaFalling;
     WriteMethod     write_mteTriggerThresholdObjectsOwner;
     WriteMethod     write_mteTriggerThresholdObjects;
     WriteMethod     write_mteTriggerThresholdRisingEventOwner;
     WriteMethod     write_mteTriggerThresholdRisingEvent;
     WriteMethod     write_mteTriggerThresholdFallingEventOwner;
     WriteMethod     write_mteTriggerThresholdFallingEvent;
     WriteMethod     write_mteTriggerThresholdDeltaRisingEventOwner;
     WriteMethod     write_mteTriggerThresholdDeltaRisingEvent;
     WriteMethod     write_mteTriggerThresholdDeltaFallingEventOwner;
     WriteMethod     write_mteTriggerThresholdDeltaFallingEvent;
#endif /* !NETSNMP_NO_WRITE_SUPPORT */

#endif                          /* _MIBGROUP_MTETRIGGERTHRESHOLDTABLE_H */
