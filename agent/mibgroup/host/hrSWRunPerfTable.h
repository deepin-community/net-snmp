/*
 * Note: this file originally auto-generated by mib2c using
 *  : mib2c.container.conf,v 1.8 2006/07/26 15:58:26 dts12 Exp $
 */
/* Portions of this file are subject to the following copyright(s).  See
 * the Net-SNMP's COPYING file for more details and other copyrights
 * that may apply:
 */
/*
 * Portions of this file are copyrighted by:
 * Copyright (C) 2007 Apple, Inc. All rights reserved.
 * Use is subject to license terms specified in the COPYING file
 * distributed with the Net-SNMP package.
 */
#ifndef HRSWRUNPERFTABLE_H
#define HRSWRUNPERFTABLE_H

config_require(host/hrSWRunTable);

/*
 * function declarations 
 */
void            init_hrSWRunPerfTable(void);
void            shutdown_hrSWRunPerfTable(void);
void            initialize_table_hrSWRunPerfTable(void);
void            shutdown_table_hrSWRunPerfTable(void);
Netsnmp_Node_Handler hrSWRunPerfTable_handler;

/*
 * column number definitions for table hrSWRunPerfTable 
 */
#define COLUMN_HRSWRUNPERFCPU		1
#define COLUMN_HRSWRUNPERFMEM		2
#endif                          /* HRSWRUNPERFTABLE_H */
