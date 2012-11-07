
#include <stdio.h>
#include "hecmw_msg.h"


struct hecmw_msgent hecmw_msg_table[] = {
	{HECMW_ALL_E0001,"HECMW-ALL-E0001","Fatal error"},
	{HECMW_ALL_E0101,"HECMW-ALL-E0101","Illegal argument error"},
	{HECMW_ALL_E0102,"HECMW-ALL-E0102","NULL poiner error"},
	{HECMW_ALL_E1001,"HECMW-ALL-E1001","MPI initialization failed"},
	{HECMW_ALL_E1002,"HECMW-ALL-E1002","MPI not initialized yet"},
	{HECMW_ALL_E1003,"HECMW-ALL-E1003","MPI operation failed"},
	{HECMW_COUPLE_E1001,"HECMW-COUPLE-E1001","Invalid argument is found"},
	{HECMW_COUPLE_E1002,"HECMW-COUPLE-E1002","Invalid NULL pointer is found"},
	{HECMW_COUPLE_E1101,"HECMW-COUPLE-E1101","Invalid element type is found"},
	{HECMW_COUPLE_E1102,"HECMW-COUPLE-E1102","Unsupported element type is found"},
	{HECMW_COUPLE_E2001,"HECMW-COUPLE-E2001","Invalid token is found"},
	{HECMW_COUPLE_E2002,"HECMW-COUPLE-E2002","Too long name"},
	{HECMW_COUPLE_E2101,"HECMW-COUPLE-E2101","Error occured in !COUPLE UNIT section"},
	{HECMW_COUPLE_E2111,"HECMW-COUPLE-E2111","NAME option is not specified in !COUPLE UNIT section"},
	{HECMW_COUPLE_E2112,"HECMW-COUPLE-E2112","NPROC option is not specified in !COUPLE UNIT section"},
	{HECMW_COUPLE_E2113,"HECMW-COUPLE-E2113","Number of ranks specified in !COUPLE UNIT section is unmatched"},
	{HECMW_COUPLE_E2201,"HECMW-COUPLE-E2201","Error occured in !COUPLE section"},
	{HECMW_COUPLE_E2211,"HECMW-COUPLE-E2211","NAME option is not specified in !COUPLE section"},
	{HECMW_COUPLE_E2212,"HECMW-COUPLE-E2212","TYPE option is not specified in !COUPLE section"},
	{HECMW_COUPLE_E2213,"HECMW-COUPLE-E2213","UNIT1 option is not specified in !COUPLE section"},
	{HECMW_COUPLE_E2214,"HECMW-COUPLE-E2214","UNIT2 option is not specified in !COUPLE section"},
	{HECMW_COUPLE_E2301,"HECMW-COUPLE-E2301","Error occured in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2311,"HECMW-COUPLE-E2311","NAME option is not specified in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2312,"HECMW-COUPLE-E2312","COUPLE option is not specified in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2313,"HECMW-COUPLE-E2313","DIRECTION option is not specified in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2321,"HECMW-COUPLE-E2321","!UNIT1 sub-section is not specified in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2322,"HECMW-COUPLE-E2322","!UNIT2 sub-section is not specified in !COUPLE BOUNDARY section"},
	{HECMW_COUPLE_E2323,"HECMW-COUPLE-E2323","GEOM option is not specified in !UNIT1 or !UNIT2 sub-section"},
	{HECMW_COUPLE_E2324,"HECMW-COUPLE-E2324","DATA option is not specified in !UNIT1 or !UNIT2 sub-section"},
	{HECMW_COUPLE_E2325,"HECMW-COUPLE-E2325","Group name is not specified in !UNIT1 or !UNIT2 sub-section"},
	{HECMW_COUPLE_E2326,"HECMW-COUPLE-E2326","GEOM and DATA options in !UNIT1 or !UNIT2 sub-section are inconsistent"},
	{HECMW_COUPLE_E3001,"HECMW-COUPLE-E3001","Undefined couple id is specified"},
	{HECMW_COUPLE_E3002,"HECMW-COUPLE-E3002","Undefined coupling unit id is specified"},
	{HECMW_COUPLE_E3003,"HECMW-COUPLE-E3003","Undefined coupling boundary id is specified"},
	{HECMW_COUPLE_E3011,"HECMW-COUPLE-E3011","Undefined group name is specified"},
	{HECMW_COUPLE_E3101,"HECMW-COUPLE-E3101","Invalid number of processes is specified"},
	{HECMW_COUPLE_E3102,"HECMW-COUPLE-E3102","Number of processes is not matched"},
	{HECMW_COUPLE_E3103,"HECMW-COUPLE-E3103","Invalid process number is specified"},
	{HECMW_COUPLE_E3104,"HECMW-COUPLE-E3104","process numbers are discontinuous"},
	{HECMW_COUPLE_E3111,"HECMW-COUPLE-E3111","Invalid couple type specifier is found"},
	{HECMW_COUPLE_E3112,"HECMW-COUPLE-E3112","Several coupling type are specified"},
	{HECMW_COUPLE_E3121,"HECMW-COUPLE-E3121","Invalid coupling direction specifier is found"},
	{HECMW_COUPLE_E3122,"HECMW-COUPLE-E3122","Invalid group type specifier is found"},
	{HECMW_COUPLE_E3123,"HECMW-COUPLE-E3123","Invalid group type specifier for geometry data is found"},
	{HECMW_COUPLE_E3124,"HECMW-COUPLE-E3124","Invalid group type specifier for data is found"},
	{HECMW_COUPLE_E3125,"HECMW-COUPLE-E3125","Invalid coupling unit specifier is found"},
	{HECMW_COUPLE_E3126,"HECMW-COUPLE-E3126","Invalid mapping type specifier is found"},
	{HECMW_COUPLE_E3127,"HECMW-COUPLE-E3127","Invalid interpolation type specifier is found"},
	{HECMW_COUPLE_E3201,"HECMW-COUPLE-E3201","Nonsupport element type is found"},
	{HECMW_COUPLE_E3202,"HECMW-COUPLE-E3202","Nonsupport geometry type on couple boundary is found"},
	{HECMW_COUPLE_E8001,"HECMW-COUPLE-E8001","Error in MPI function"},
	{HECMW_COUPLE_E8011,"HECMW-COUPLE-E8011","Invalid HECMW_Datatype is specified"},
	{HECMW_COUPLE_E8012,"HECMW-COUPLE-E8012","Invalid HECMW_Op is specified"},
	{HECMW_COUPLE_E9999,"HECMW-COUPLE-E9999","Error occures in coupling interface module"},
	{HECMW_COUPLE_W1001,"HECMW-COUPLE-W1001","Invalid argument is found"},
	{HECMW_IO_ABAQUS_E0001,"HECMW-IO-ABAQUS-E0001","Failed to open ABAQUS mesh file"},
	{HECMW_IO_ABAQUS_E0002,"HECMW-IO-ABAQUS-E0002","Failed to close ABAQUS mesh file"},
	{HECMW_IO_ABAQUS_E0003,"HECMW-IO-ABAQUS-E0003","Unexpected EOF found"},
	{HECMW_IO_ABAQUS_E0096,"HECMW-IO-ABAQUS-E0096","This keyword must be appeared after *MATERIAL"},
	{HECMW_IO_ABAQUS_E0098,"HECMW-IO-ABAQUS-E0098","Invalid token found while reading keyword"},
	{HECMW_IO_ABAQUS_E0100,"HECMW-IO-ABAQUS-E0100","*AMPLITUDE: Invalid token"},
	{HECMW_IO_ABAQUS_E0101,"HECMW-IO-ABAQUS-E0101","*AMPLITUDE: Missing NAME"},
	{HECMW_IO_ABAQUS_E0200,"HECMW-IO-ABAQUS-E0200","*CONNECTIVITY: Invalid token"},
	{HECMW_IO_ABAQUS_E0300,"HECMW-IO-ABAQUS-E0300","*ECOPY: Invalid token"},
	{HECMW_IO_ABAQUS_E0400,"HECMW-IO-ABAQUS-E0400","*EGEN: Invalid token"},
	{HECMW_IO_ABAQUS_E0500,"HECMW-IO-ABAQUS-E0500","*ELSET: Invalid token"},
	{HECMW_IO_ABAQUS_E0501,"HECMW-IO-ABAQUS-E0501","*ELSET: Missing EGRP"},
	{HECMW_IO_ABAQUS_E0502,"HECMW-IO-ABAQUS-E0502","*ELSET: elem1,elem2 and increment must be positive integer"},
	{HECMW_IO_ABAQUS_E0503,"HECMW-IO-ABAQUS-E0503","*ELSET: Cannot generate element ID"},
	{HECMW_IO_ABAQUS_E0600,"HECMW-IO-ABAQUS-E0600","*ELEMENT: Invalid token"},
	{HECMW_IO_ABAQUS_E0601,"HECMW-IO-ABAQUS-E0601","*ELEMENT: Unsuppotred element type"},
	{HECMW_IO_ABAQUS_E0603,"HECMW-IO-ABAQUS-E0603","*ELEMENT: Element ID must be posivive integer"},
	{HECMW_IO_ABAQUS_E0604,"HECMW-IO-ABAQUS-E0604","*ELEMENT: Connectivity must be posivive integer"},
	/* {HECMW_IO_ABAQUS_E0605,"HECMW-IO-ABAQUS-E0605","*ELEMENT: Existent node required for connectiviy"}, */
	{HECMW_IO_ABAQUS_E0606,"HECMW-IO-ABAQUS-E0606","*ELEMENT: Missing TYPE"},
	{HECMW_IO_ABAQUS_E0700,"HECMW-IO-ABAQUS-E0700","*EQUATION: Invalid token"},
	{HECMW_IO_ABAQUS_E0701,"HECMW-IO-ABAQUS-E0701","*EQUATION: NEQ must be greater than 1"},
	{HECMW_IO_ABAQUS_E0702,"HECMW-IO-ABAQUS-E0702","*EQUATION: Node must be defined by same type(Node ID or NGRP)"},
	{HECMW_IO_ABAQUS_E0703,"HECMW-IO-ABAQUS-E0703","*EQUATION: DOF must be between 1 and 6"},
	{HECMW_IO_ABAQUS_E0800,"HECMW-IO-ABAQUS-E0800","*HEADING: Invalid token"},
	{HECMW_IO_ABAQUS_E0900,"HECMW-IO-ABAQUS-E0900","*INCLUDE: Invalid token"},
	{HECMW_IO_ABAQUS_E0901,"HECMW-IO-ABAQUS-E0901","*INCLUDE: Missing INPUT"},
	{HECMW_IO_ABAQUS_E1000,"HECMW-IO-ABAQUS-E1000","*INITIAL CONDITION: Invalid token"},
	{HECMW_IO_ABAQUS_E1001,"HECMW-IO-ABAQUS-E1001","*INITIAL CONDITION: Missing TYPE"},
	{HECMW_IO_ABAQUS_E1002,"HECMW-IO-ABAQUS-E1002","*INITIAL CONDITION: Node ID must be posivive integer"},
	{HECMW_IO_ABAQUS_E1100,"HECMW-IO-ABAQUS-E1100","*MATERIAL: Invalid token"},
	{HECMW_IO_ABAQUS_E1101,"HECMW-IO-ABAQUS-E1101","*MATERIAL: Missing NAME"},
	{HECMW_IO_ABAQUS_E1102,"HECMW-IO-ABAQUS-E1102","*MATERIAL: Duplicated material name"},
	{HECMW_IO_ABAQUS_E1103,"HECMW-IO-ABAQUS-E1103","*MATERIAL: ITEM must be positive integer"},
	{HECMW_IO_ABAQUS_E1104,"HECMW-IO-ABAQUS-E1104","*MATERIAL: *ITEM value must be positive integer"},
	{HECMW_IO_ABAQUS_E1105,"HECMW-IO-ABAQUS-E1105","*MATERIAL: *ITEM value must be 1 to SUBITEM"},
	{HECMW_IO_ABAQUS_E1106,"HECMW-IO-ABAQUS-E1106","*MATERIAL: SUBITEM value must be positive integer"},
	{HECMW_IO_ABAQUS_E1107,"HECMW-IO-ABAQUS-E1107","*MATERIAL: Temperature must be greater than previous one"},
	{HECMW_IO_ABAQUS_E1200,"HECMW-IO-ABAQUS-E1200","*NCOPY: Invalid token"},
	{HECMW_IO_ABAQUS_E1300,"HECMW-IO-ABAQUS-E1300","*NFILL: Invalid token"},
	{HECMW_IO_ABAQUS_E1400,"HECMW-IO-ABAQUS-E1400","*NGEN: Invalid token"},
	{HECMW_IO_ABAQUS_E1500,"HECMW-IO-ABAQUS-E1500","*NSET: Invalid token"},
	{HECMW_IO_ABAQUS_E1501,"HECMW-IO-ABAQUS-E1501","*NSET: Missing NGRP"},
	{HECMW_IO_ABAQUS_E1502,"HECMW-IO-ABAQUS-E1502","*NSET: nod1,nod2 and increment must be positive integer"},
	{HECMW_IO_ABAQUS_E1503,"HECMW-IO-ABAQUS-E1503","*NSET: Cannot generate node ID"},
	{HECMW_IO_ABAQUS_E1600,"HECMW-IO-ABAQUS-E1600","*NODE: Invalid token"},
	{HECMW_IO_ABAQUS_E1601,"HECMW-IO-ABAQUS-E1601","*NODE: Node ID must be positive integer"},
	{HECMW_IO_ABAQUS_E1700,"HECMW-IO-ABAQUS-E1700","*SHELL SECTION: Invalid token"},
	{HECMW_IO_ABAQUS_E1701,"HECMW-IO-ABAQUS-E1701","*SHELL SECTION: Missing TYPE"},
	{HECMW_IO_ABAQUS_E1702,"HECMW-IO-ABAQUS-E1702","*SHELL SECTION: Missing ELSET"},
	{HECMW_IO_ABAQUS_E1703,"HECMW-IO-ABAQUS-E1703","*SHELL SECTION: MATERIAL and COMPOSITE are mutually exclusive"},
	{HECMW_IO_ABAQUS_E1704,"HECMW-IO-ABAQUS-E1704","*SHELL SECTION: COMPOSITE value must be positive integer"},
	{HECMW_IO_ABAQUS_E1705,"HECMW-IO-ABAQUS-E1705","*SHELL SECTION: THICKNESS must be greater than 0.0"},
	{HECMW_IO_ABAQUS_E1706,"HECMW-IO-ABAQUS-E1706","*SHELL SECTION: INTEGPOINTS must be positive integer"},
	{HECMW_IO_ABAQUS_E1707,"HECMW-IO-ABAQUS-E1707","*SHELL SECTION: Missing MATERIAL or COMPOSITE"},
	{HECMW_IO_ABAQUS_E1800,"HECMW-IO-ABAQUS-E1800","*SGROUP: Invalid token"},
	{HECMW_IO_ABAQUS_E1801,"HECMW-IO-ABAQUS-E1801","*SGROUP: Missing SGRP"},
	{HECMW_IO_ABAQUS_E1900,"HECMW-IO-ABAQUS-E1900","*SYSTEM: Invalid token"},
	{HECMW_IO_ABAQUS_E2000,"HECMW-IO-ABAQUS-E2000","*ZERO: Invalid token"},
	{HECMW_IO_ABAQUS_E2100,"HECMW-IO-ABAQUS-E2100","*SOLID SECTION: Invalid token"},
	{HECMW_IO_ABAQUS_E2101,"HECMW-IO-ABAQUS-E2101","*SOLID SECTION: Missing TYPE"},
	{HECMW_IO_ABAQUS_E2102,"HECMW-IO-ABAQUS-E2102","*SOLID SECTION: Missing ELSET"},
	{HECMW_IO_ABAQUS_E2103,"HECMW-IO-ABAQUS-E2103","*SOLID SECTION: MATERIAL and COMPOSITE are mutually exclusive"},
	{HECMW_IO_ABAQUS_E2104,"HECMW-IO-ABAQUS-E2104","*SOLID SECTION: COMPOSITE value must be positive integer"},
	{HECMW_IO_ABAQUS_E2105,"HECMW-IO-ABAQUS-E2105","*SOLID SECTION: THICKNESS must be greater than 0.0"},
	{HECMW_IO_ABAQUS_E2106,"HECMW-IO-ABAQUS-E2106","*SOLID SECTION: INTEGPOINTS must be positive integer"},
	{HECMW_IO_ABAQUS_E2107,"HECMW-IO-ABAQUS-E2107","*SOLID SECTION: Only one secopt can be allowed in element group"},
	{HECMW_IO_ABAQUS_E2108,"HECMW-IO-ABAQUS-E2108","*SOLID SECTION: Missing MATERIAL or COMPOSITE"},
	{HECMW_IO_ABAQUS_E2200,"HECMW-IO-ABAQUS-E2200","*DENSITY: Invalid token"},
	{HECMW_IO_ABAQUS_E2300,"HECMW-IO-ABAQUS-E2300","*ELASTIC: Invalid token"},
	{HECMW_IO_ABAQUS_E2400,"HECMW-IO-ABAQUS-E2400","*SPECIFIC HEAT: Invalid token"},
	{HECMW_IO_ABAQUS_E2500,"HECMW-IO-ABAQUS-E2500","*CONDUCTIVITY: Invalid token"},
	{HECMW_IO_ABAQUS_W0095,"HECMW-IO-ABAQUS-W0095","Redefined material information, updated"},
	{HECMW_IO_ABAQUS_W0097,"HECMW-IO-ABAQUS-W0097","Unsupported keyword found"},
	{HECMW_IO_ABAQUS_W0099,"HECMW-IO-ABAQUS-W0099","Skipped unsupported keyword"},
	{HECMW_IO_E0001,"HECMW-IO-E0001","Too long name"},
	{HECMW_IO_E0002,"HECMW-IO-E0002","Too long file name"},
	{HECMW_IO_E0003,"HECMW-IO-E0003","Cannot use reserved name"},
	{HECMW_IO_E0004,"HECMW-IO-E0004","Nested include not allowed"},
	{HECMW_IO_E0005,"HECMW-IO-E0005","Failed to open include file"},
	{HECMW_IO_E0006,"HECMW-IO-E0006","Failed to close include file"},
	{HECMW_IO_E0007,"HECMW-IO-E0007","TYPE mismatch for name_ID"},
	{HECMW_IO_E1012,"HECMW-IO-E1012","Element doesn't have section"},
	{HECMW_IO_E1013,"HECMW-IO-E1013","Cannot set section"},
	{HECMW_IO_E1014,"HECMW-IO-E1014","No nodes defined"},
	{HECMW_IO_E1015,"HECMW-IO-E1015","No elements defined"},
	{HECMW_IO_E1018,"HECMW-IO-E1018","INITIAL CONDITON: Cannot initialize node twice"},
	{HECMW_IO_E1021,"HECMW-IO-E1021","EQUATION: # of node in node groups must be same, ignored"},
	{HECMW_IO_E1022,"HECMW-IO-E1022","EQUATION: Same pair of Node and DOF not allowed"},
	{HECMW_IO_E1023,"HECMW-IO-E1023","No sections defined"},
	{HECMW_IO_E1024,"HECMW-IO-E1024","SECTION: Element group not found"},
	{HECMW_IO_E1025,"HECMW-IO-E1025","SECTION: MATERIAL not found"},
	{HECMW_IO_E1026,"HECMW-IO-E1026","SECTION: Invalid element type found in element group"},
	{HECMW_IO_E1027,"HECMW-IO-E1027","ELEMENT: Existent node requied for connectiviy"},
	{HECMW_IO_E1027,"HECMW-IO-E1028","CONTACT: Surface group not found"},
	{HECMW_IO_E1027,"HECMW-IO-E1029","CONTACT: Node group not found"},
	{HECMW_IO_E5001,"HECMW-IO-E5001","Failed to open distributed mesh file"},
	{HECMW_IO_E5002,"HECMW-IO-E5002","Failed to close distributed mesh file"},
	{HECMW_IO_E5003,"HECMW-IO-E5003","Unexpected EOF found in distributed mesh file"},
	{HECMW_IO_E5004,"HECMW-IO-E5004","IO error occured while readig distributed mesh file"},
	{HECMW_IO_E5005,"HECMW-IO-E5005","Not a distributed mesh file"},
	{HECMW_IO_E5006,"HECMW-IO-E5006","Invalid header in distributed mesh file"},
	{HECMW_IO_GEOFEM_E0001,"HECMW-IO-GEOFEM-E0001","Failed to open GeoFEM mesh file"},
	{HECMW_IO_GEOFEM_E0002,"HECMW-IO-GEOFEM-E0002","Failed to close GeoFEM mesh file"},
	{HECMW_IO_GEOFEM_E0003,"HECMW-IO-GEOFEM-E0003","Unexpected EOF found in GeoFEM mesh file"},
	{HECMW_IO_GEOFEM_E0004,"HECMW-IO-GEOFEM-E0004","Invalid data"},
	{HECMW_IO_GEOFEM_E0301,"HECMW-IO-GEOFEM-E0301","NEIBPEtot must be 0 or more"},
	{HECMW_IO_GEOFEM_E0302,"HECMW-IO-GEOFEM-E0302","NEIBPEtot must be 0 for initial mesh"},
	{HECMW_IO_GEOFEM_E0303,"HECMW-IO-GEOFEM-E0303","NEIBPE must be less than NEIBPEtot"},
	{HECMW_IO_GEOFEM_E0311,"HECMW-IO-GEOFEM-E0311","NODtot must be  greater than 0"},
	{HECMW_IO_GEOFEM_E0312,"HECMW-IO-GEOFEM-E0312","intNODtot must be greater than 0"},
	{HECMW_IO_GEOFEM_E0313,"HECMW-IO-GEOFEM-E0313","NODtot must be equal to intNODtot for initial mesh"},
	{HECMW_IO_GEOFEM_E0314,"HECMW-IO-GEOFEM-E0314","nGlobalID must be greater than 0"},
	{HECMW_IO_GEOFEM_E0321,"HECMW-IO-GEOFEM-E0321","ELMtot must be ID must be greater than 0"},
	{HECMW_IO_GEOFEM_E0322,"HECMW-IO-GEOFEM-E0322","Unsupported Element type"},
	{HECMW_IO_GEOFEM_E0323,"HECMW-IO-GEOFEM-E0323","Connectivity must be greater than 0 and >= NODtot"},
	{HECMW_IO_GEOFEM_E0324,"HECMW-IO-GEOFEM-E0324","eGlobalID must be greater than 0"},
	{HECMW_IO_GEOFEM_E0331,"HECMW-IO-GEOFEM-E0331","IMPORT/EXPORTindex must be greater than 0"},
	{HECMW_IO_GEOFEM_E0332,"HECMW-IO-GEOFEM-E0332","IMPORT/EXPORTnode must be greater than 0 and >= NODtot"},
	{HECMW_IO_GEOFEM_E0341,"HECMW-IO-GEOFEM-E0341","NODgrpTOT must be 0 or more"},
	{HECMW_IO_GEOFEM_E0342,"HECMW-IO-GEOFEM-E0342","NODgrpINDEX must be greater than 0"},
	{HECMW_IO_GEOFEM_E0343,"HECMW-IO-GEOFEM-E0343","NODgrpITEM must be greater than 0 and >= NODtot"},
	{HECMW_IO_GEOFEM_E0351,"HECMW-IO-GEOFEM-E0351","ELMgrpTOT must be 0 or more"},
	{HECMW_IO_GEOFEM_E0352,"HECMW-IO-GEOFEM-E0352","ELMgrpINDEX must be greater than 0"},
	{HECMW_IO_GEOFEM_E0353,"HECMW-IO-GEOFEM-E0353","ELMgrpITEM must be greater than 0 and >= ELMtot"},
	{HECMW_IO_GEOFEM_E0361,"HECMW-IO-GEOFEM-E0361","SUFgrpTOT must be 0 or more"},
	{HECMW_IO_GEOFEM_E0362,"HECMW-IO-GEOFEM-E0362","SUFgrpINDEX must be greater than 0"},
	{HECMW_IO_GEOFEM_E0363,"HECMW-IO-GEOFEM-E0363","SUFgrpITEM must be greater than 0"},
	{HECMW_IO_HEC_E0001,"HECMW-IO-HEC-E0001","Failed to open ENTIRE mesh file"},
	{HECMW_IO_HEC_E0002,"HECMW-IO-HEC-E0002","Failed to close ENTIRE mesh file"},
	{HECMW_IO_HEC_E0003,"HECMW-IO-HEC-E0003","Unexpected EOF found"},
	{HECMW_IO_HEC_E0098,"HECMW-IO-HEC-E0098","Invalid token found while reading header"},
	{HECMW_IO_HEC_E0099,"HECMW-IO-HEC-E0099","Unsupported header"},
	{HECMW_IO_HEC_E0100,"HECMW-IO-HEC-E0100","!AMPLITUDE: Invalid token"},
	{HECMW_IO_HEC_E0101,"HECMW-IO-HEC-E0101","!AMPLITUDE: Missing NAME"},
	{HECMW_IO_HEC_E0200,"HECMW-IO-HEC-E0200","!CONNECTIVITY: Invalid token"},
	{HECMW_IO_HEC_E0300,"HECMW-IO-HEC-E0300","!ECOPY: Invalid token"},
	{HECMW_IO_HEC_E0400,"HECMW-IO-HEC-E0400","!EGEN: Invalid token"},
	{HECMW_IO_HEC_E0500,"HECMW-IO-HEC-E0500","!EGROUP: Invalid token"},
	{HECMW_IO_HEC_E0501,"HECMW-IO-HEC-E0501","!EGROUP: Missing EGRP"},
	{HECMW_IO_HEC_E0502,"HECMW-IO-HEC-E0502","!EGROUP: elem1,elem2 and increment must be positive integer"},
	{HECMW_IO_HEC_E0503,"HECMW-IO-HEC-E0503","!EGROUP: Cannot generate element ID"},
	{HECMW_IO_HEC_E0600,"HECMW-IO-HEC-E0600","!ELEMENT: Invalid token"},
	{HECMW_IO_HEC_E0601,"HECMW-IO-HEC-E0601","!ELEMENT: Unsuppotred element type"},
	{HECMW_IO_HEC_E0602,"HECMW-IO-HEC-E0602","!ELEMENT: MATITEM must be posivive integer"},
	{HECMW_IO_HEC_E0603,"HECMW-IO-HEC-E0603","!ELEMENT: Element ID must be posivive integer"},
	{HECMW_IO_HEC_E0604,"HECMW-IO-HEC-E0604","!ELEMENT: Connectivity must be posivive integer"},
	/* {HECMW_IO_HEC_E0605,"HECMW-IO-HEC-E0605","!ELEMENT: Requied existent node for connectiviy"}, */
	{HECMW_IO_HEC_E0606,"HECMW-IO-HEC-E0606","!ELEMENT: Missing TYPE"},
	{HECMW_IO_HEC_E0700,"HECMW-IO-HEC-E0700","!EQUATION: Invalid token"},
	{HECMW_IO_HEC_E0701,"HECMW-IO-HEC-E0701","!EQUATION: NEQ must be greater than 1"},
	{HECMW_IO_HEC_E0702,"HECMW-IO-HEC-E0702","!EQUATION: Node must be defined by same type(Node ID or NGRP)"},
	{HECMW_IO_HEC_E0703,"HECMW-IO-HEC-E0703","!EQUATION: DOF must be between 1 and 6"},
	{HECMW_IO_HEC_E0800,"HECMW-IO-HEC-E0800","!HEADER: Invalid token"},
	{HECMW_IO_HEC_E0900,"HECMW-IO-HEC-E0900","!INCLUDE: Invalid token"},
	{HECMW_IO_HEC_E0901,"HECMW-IO-HEC-E0901","!INCLUDE: Missing INPUT"},
	{HECMW_IO_HEC_E1000,"HECMW-IO-HEC-E1000","!INITIAL CONDITION: Invalid token"},
	{HECMW_IO_HEC_E1001,"HECMW-IO-HEC-E1001","!INITIAL CONDITION: Missing TYPE"},
	{HECMW_IO_HEC_E1002,"HECMW-IO-HEC-E1002","!INITIAL CONDITION: Node ID must be posivive integer"},
	{HECMW_IO_HEC_E1100,"HECMW-IO-HEC-E1100","!MATERIAL: Invalid token"},
	{HECMW_IO_HEC_E1101,"HECMW-IO-HEC-E1101","!MATERIAL: Missing NAME"},
	{HECMW_IO_HEC_E1102,"HECMW-IO-HEC-E1102","!MATERIAL: Duplicated material name"},
	{HECMW_IO_HEC_E1103,"HECMW-IO-HEC-E1103","!MATERIAL: ITEM must be positive integer"},
	{HECMW_IO_HEC_E1104,"HECMW-IO-HEC-E1104","!MATERIAL: !ITEM value must be positive integer"},
	{HECMW_IO_HEC_E1105,"HECMW-IO-HEC-E1105","!MATERIAL: !ITEM value must be from 1 to SUBITEM"},
	{HECMW_IO_HEC_E1106,"HECMW-IO-HEC-E1106","!MATERIAL: SUBITEM value must be positive integer"},
	{HECMW_IO_HEC_E1107,"HECMW-IO-HEC-E1107","!MATERIAL: Temperature must be greater than previous one"},
	{HECMW_IO_HEC_E1200,"HECMW-IO-HEC-E1200","!NCOPY: Invalid token"},
	{HECMW_IO_HEC_E1300,"HECMW-IO-HEC-E1300","!NFILL: Invalid token"},
	{HECMW_IO_HEC_E1400,"HECMW-IO-HEC-E1400","!NGEN: Invalid token"},
	{HECMW_IO_HEC_E1500,"HECMW-IO-HEC-E1500","!NGROUP: Invalid token"},
	{HECMW_IO_HEC_E1501,"HECMW-IO-HEC-E1501","!NGROUP: Missing NGRP"},
	{HECMW_IO_HEC_E1502,"HECMW-IO-HEC-E1502","!NGROUP: nod1,nod2 and increment must be positive integer"},
	{HECMW_IO_HEC_E1503,"HECMW-IO-HEC-E1503","!NGROUP: Cannot generate node ID"},
	{HECMW_IO_HEC_E1600,"HECMW-IO-HEC-E1600","!NODE: Invalid token"},
	{HECMW_IO_HEC_E1601,"HECMW-IO-HEC-E1601","!NODE: Node ID must be positive integer"},
	{HECMW_IO_HEC_E1700,"HECMW-IO-HEC-E1700","!SECTION: Invalid token"},
	{HECMW_IO_HEC_E1701,"HECMW-IO-HEC-E1701","!SECTION: Missing TYPE"},
	{HECMW_IO_HEC_E1702,"HECMW-IO-HEC-E1702","!SECTION: Missing EGRP"},
	{HECMW_IO_HEC_E1703,"HECMW-IO-HEC-E1703","!SECTION: MATERIAL and COMPOSITE are mutually exclusive"},
	{HECMW_IO_HEC_E1704,"HECMW-IO-HEC-E1704","!SECTION: COMPOSITE value must be positive integer"},
	{HECMW_IO_HEC_E1705,"HECMW-IO-HEC-E1705","!SECTION: THICKNESS must be greater than 0.0"},
	{HECMW_IO_HEC_E1706,"HECMW-IO-HEC-E1706","!SECTION: INTEGPOINTS must be positive integer"},
	{HECMW_IO_HEC_E1800,"HECMW-IO-HEC-E1800","!SGROUP: Invalid token"},
	{HECMW_IO_HEC_E1801,"HECMW-IO-HEC-E1801","!SGROUP: Missing SGRP"},
	{HECMW_IO_HEC_E1900,"HECMW-IO-HEC-E1900","!SYSTEM: Invalid token"},
	{HECMW_IO_HEC_E2000,"HECMW-IO-HEC-E2000","!ZERO: Invalid token"},
	{HECMW_IO_HEC_E2100,"HECMW-IO-HEC-E2100","!CONTACT PAIR: Invalid token"},
	{HECMW_IO_HEC_E2101,"HECMW-IO-HEC-E2101","!CONTACT PAIR: Missing NAME"},
	{HECMW_IO_W1001,"HECMW-IO-W1001","Checking element: Element(s) defined more than once, updated"},
	{HECMW_IO_W1002,"HECMW-IO-W1002","Checking element group: Element not found, ignored"},
	{HECMW_IO_W1003,"HECMW-IO-W1003","Checking element group: Duplicate element(s) found, ignored"},
	{HECMW_IO_W1004,"HECMW-IO-W1004","Checking node: Node(s) defined more than once, updated"},
	{HECMW_IO_W1005,"HECMW-IO-W1005","Checking node group: Node not found, ignored"},
	{HECMW_IO_W1006,"HECMW-IO-W1006","Checking node group: Duplicate node(s) found, ignored"},
	{HECMW_IO_W1007,"HECMW-IO-W1007","Checking surface group: Element not found, ignored"},
	{HECMW_IO_W1008,"HECMW-IO-W1008","Checking surface group: Invalid combination of element and surface, ignored"},
	{HECMW_IO_W1009,"HECMW-IO-W1009","Checking surface gorup: Duplicate pair(s) of element and surface found, ignored"},
	{HECMW_IO_W1010,"HECMW-IO-W1010","Header updated"},
	{HECMW_IO_W1011,"HECMW-IO-W1011","Zero temperature updated"},
	{HECMW_IO_W1016,"HECMW-IO-W1016","INITIAL CONDITION: Node not found, ignored"},
	{HECMW_IO_W1017,"HECMW-IO-W1017","INITIAL CONDITION: Node group not found, ignored"},
	{HECMW_IO_W1019,"HECMW-IO-W1019","EQUATION: Node not found, ignored"},
	{HECMW_IO_W1020,"HECMW-IO-W1020","EQUATION: Node grourp not found, ignored"},
	{HECMW_PART_E0001,"HECMW-PART-E0001","No such file or directory"},
	{HECMW_PART_E0002,"HECMW-PART-E0002","File close error"},
	{HECMW_PART_E0003,"HECMW-PART-E0003","Too long file name"},
	{HECMW_PART_E0004,"HECMW-PART-E0004","NULL pointer found"},
	{HECMW_PART_E0005,"HECMW-PART-E0005","Invalid EOF found"},
	{HECMW_PART_E0006,"HECMW-PART-E0006","Invalid argument found"},
	{HECMW_PART_E0101,"HECMW-PART-E0101","Invalid token found"},
	{HECMW_PART_E0111,"HECMW-PART-E0111","'TYPE' must not be ommited"},
	{HECMW_PART_E0112,"HECMW-PART-E0112","'TYPE' must be 'NODE-BASED' or 'ELEMENT-BASED'"},
	{HECMW_PART_E0113,"HECMW-PART-E0113","'=' required after 'TYPE'"},
	{HECMW_PART_E0121,"HECMW-PART-E0121","'METHOD' must not be ommited"},
	{HECMW_PART_E0122,"HECMW-PART-E0122","'METHOD' must be 'RCB', 'KMETIS' or 'PMETIS'"},
	{HECMW_PART_E0123,"HECMW-PART-E0123","'=' required after 'METHOD'"},
	{HECMW_PART_E0124,"HECMW-PART-E0124","Partitioner was compiled without -DHECMW_PART_WITH_METIS, but 'PMETIS' is specfied in 'METHOD'."},
	{HECMW_PART_E0125,"HECMW-PART-E0125","Partitioner was compiled without -DHECMW_PART_WITH_METIS, but 'KMETIS' is specfied in 'METHOD'."},
	{HECMW_PART_E0131,"HECMW-PART-E0131","'DOMAIN' must not be ommited"},
	{HECMW_PART_E0132,"HECMW-PART-E0132","'DOMAIN' must be natural number"},
	{HECMW_PART_E0133,"HECMW-PART-E0133","'=' required after 'DOMAIN'"},
	{HECMW_PART_E0134,"HECMW-PART-E0134","'METHOD' is 'RCB', but 'DOMAIN' is not n-th power of 2"},
	{HECMW_PART_E0141,"HECMW-PART-E0141","'DEPTH' must be natural number"},
	{HECMW_PART_E0142,"HECMW-PART-E0142","'=' required after 'DEPTH'"},
	{HECMW_PART_E0151,"HECMW-PART-E0151","UCD file name is too long"},
	{HECMW_PART_E0152,"HECMW-PART-E0152","'=' required after 'UCD'"},
	{HECMW_PART_E0153,"HECMW-PART-E0153","UCD file name must start with number, alphabet, '.', '-', '_' or '/'"},
	{HECMW_PART_E0154,"HECMW-PART-E0154","'CONTACT' must be 'AGGREGATE' or 'DEFAULT'"},
	{HECMW_PART_E0161,"HECMW-PART-E0161","Partitioning directions must be 'x', 'y' or 'z'"},
	{HECMW_PART_E0162,"HECMW-PART-E0162","Partitioning directions are not enough"},
	{HECMW_PART_E0164,"HECMW-PART-E0164","Partitioning directions must not be ommited, if 'METHOD' is 'RCB'"},
	{HECMW_PART_E0201,"HECMW-PART-E0201","Invalid partitioning type found"},
	{HECMW_PART_E0202,"HECMW-PART-E0202","Invalid partitioning method found"},
	{HECMW_PART_E0203,"HECMW-PART-E0203","Invalid element type found"},
	{HECMW_PART_E0204,"HECMW-PART-E0204","Invalid partitioning direction found"},
	{HECMW_PART_E0205,"HECMW-PART-E0205","Invalid number of sub-domains found"},
	{HECMW_PART_E0206,"HECMW-PART-E0206","Invalid overlapping depth found"},
	{HECMW_PART_E0211,"HECMW-PART-E0211","Stack overflow"},
	{HECMW_PART_E0301,"HECMW-PART-E0301","Sub-domain number must be grater than or equal to 0"},
	{HECMW_PART_E0302,"HECMW-PART-E0302","Sub-domain number must be less than the number of sub-domains"},
	{HECMW_PART_E0311,"HECMW-PART-E0311","Number of nodes must be natural number"},
	{HECMW_PART_E0312,"HECMW-PART-E0312","Number of internal nodes must be grater than or equal to 0"},
	{HECMW_PART_E0313,"HECMW-PART-E0313","Number of internal nodes must be less than or equal to the number of nodes"},
	{HECMW_PART_E0321,"HECMW-PART-E0321","Number of elements must be natural number"},
	{HECMW_PART_E0322,"HECMW-PART-E0322","Number of internal elements must be grater than or equal to 0"},
	{HECMW_PART_E0323,"HECMW-PART-E0323","Number of internal elements must be less than or equal to the number of elements"},
	{HECMW_PART_E0331,"HECMW-PART-E0331","Number of neighboring sub-domains must be grater than or equal to 0"},
	{HECMW_PART_E0501,"HECMW-PART-E0501","Log file not initialized yet"},
	{HECMW_PART_W0163,"HECMW-PART-W0163","Too many partitioning directions specified"},
	{HECMW_PART_W0165,"HECMW-PART-W0165","Partitioning directions are specified, although 'METHOD' is not 'RCB'"},
	{HECMW_PART_W0401,"HECMW-PART-W0401","EQUATION_BLOCK not found"},
	{HECMW_PART_W0502,"HECMW-PART-W0502","Log file for partitioner already initialized"},
	{HECMW_UTIL_E0001,"HECMW-UTIL-E0001","Failed to open control file"},
	{HECMW_UTIL_E0002,"HECMW-UTIL-E0002","Failed to close control file"},
	{HECMW_UTIL_E0003,"HECMW-UTIL-E0003","Unexpected EOF found in control file"},
	{HECMW_UTIL_E0004,"HECMW-UTIL-E0004","Unsupported header in control file"},
	{HECMW_UTIL_E0005,"HECMW-UTIL-E0005","Invalid token while reading header in control file"},
	{HECMW_UTIL_E0010,"HECMW-UTIL-E0010","!MESH: Invalid token in control file"},
	{HECMW_UTIL_E0011,"HECMW-UTIL-E0011","!MESH: Missing NAME"},
	{HECMW_UTIL_E0012,"HECMW-UTIL-E0012","!MESH: Missing TYPE"},
	{HECMW_UTIL_E0013,"HECMW-UTIL-E0013","!MESH: This NAME already defined"},
	{HECMW_UTIL_E0014,"HECMW-UTIL-E0014","No !MESH or no such NAME in !MESH"},
	{HECMW_UTIL_E0020,"HECMW-UTIL-E0020","!RESULT: Invalid token in control file"},
	{HECMW_UTIL_E0021,"HECMW-UTIL-E0021","!RESULT: Missing NAME"},
	{HECMW_UTIL_E0022,"HECMW-UTIL-E0022","!RESULT: Missing IO"},
	{HECMW_UTIL_E0023,"HECMW-UTIL-E0023","!RESULT: NAME already defined"},
	{HECMW_UTIL_E0024,"HECMW-UTIL-E0024","No !RESULT or no such NAME in !RESULT"},
	{HECMW_UTIL_E0025,"HECMW-UTIL-E0025","No !RESULT or no such IO in !RESULT"},
	{HECMW_UTIL_E0030,"HECMW-UTIL-E0030","!CONTROL: Invalid token in control file"},
	{HECMW_UTIL_E0031,"HECMW-UTIL-E0031","!CONTROL: Missing NAME"},
	{HECMW_UTIL_E0032,"HECMW-UTIL-E0032","!CONTROL: NAME already defined"},
	{HECMW_UTIL_E0033,"HECMW-UTIL-E0033","No !CONTROL or no such NAME in !CONTROL"},
	{HECMW_UTIL_E0040,"HECMW-UTIL-E0040","!RESTART: Invalid token in control file"},
	{HECMW_UTIL_E0041,"HECMW-UTIL-E0041","!RESTART: Missing NAME"},
	{HECMW_UTIL_E0042,"HECMW-UTIL-E0042","!RESTART: Missing IO"},
	{HECMW_UTIL_E0043,"HECMW-UTIL-E0043","!RESTART: NAME already defined"},
	{HECMW_UTIL_E0044,"HECMW-UTIL-E0044","!RESTART: No !RESTART or no such NAME in !RESTART"},
	{HECMW_UTIL_E0045,"HECMW-UTIL-E0045","!RESTART: No !RESTART or no such IO in !RESTART"},
	{HECMW_UTIL_E0050,"HECMW-UTIL-E0050","!MESH GROUP: Invalid token in control file"},
	{HECMW_UTIL_E0051,"HECMW-UTIL-E0051","!MESH GROUP: Missing NAME"},
	{HECMW_UTIL_E0052,"HECMW-UTIL-E0052","!MESH GROUP: NAME not defined in !MESH"},
	{HECMW_UTIL_E0053,"HECMW-UTIL-E0053","!MESH GROUP: NAME already defined"},
	{HECMW_UTIL_E0054,"HECMW-UTIL-E0054","!MESH GROUP: No !MESH GROUP or no such NAME in !MESH GROUP"},
	{HECMW_UTIL_E0055,"HECMW-UTIL-E0055","!MESH GROUP: TYPE mismatch"},
	{HECMW_UTIL_E0060,"HECMW-UTIL-E0060","!SUBDIR: Invalid token in control file"},
	{HECMW_UTIL_E0061,"HECMW-UTIL-E0061","!SUBDIR: Missing ON/OFF"},
	{HECMW_UTIL_E0101,"HECMW-UTIL-E0101","Failed to open restart file"},
	{HECMW_UTIL_E0102,"HECMW-UTIL-E0102","Failed to close restart file"},
	{HECMW_UTIL_E0103,"HECMW-UTIL-E0103","Restart file not opened yet"},
	{HECMW_UTIL_E0104,"HECMW-UTIL-E0104","Unexpected EOF found in restart file"},
	{HECMW_UTIL_E0105,"HECMW-UTIL-E0105","IO error occured while readig restart file"},
	{HECMW_UTIL_E0201,"HECMW-UTIL-E0201","Failed to open result file"},
	{HECMW_UTIL_E0202,"HECMW-UTIL-E0202","Failed to close result file"},
	{HECMW_UTIL_E0203,"HECMW-UTIL-E0203","Result file not opened yet"},
	{HECMW_UTIL_E0204,"HECMW-UTIL-E0204","Unexpected EOF found in result file"},
	{HECMW_UTIL_E0205,"HECMW-UTIL-E0205","IO error occured while reading result file"},
	{HECMW_UTIL_E0206,"HECMW-UTIL-E0206","Invalid flag for result data(must be 1:node or 2:elem)"},
	{HECMW_UTIL_E0207,"HECMW-UTIL-E0207","Invalid label for result data"},
	{HECMW_UTIL_E9001,"HECMW-UTIL-E9001","HEC-MW memory check: No such allocated memory"},
	{HECMW_UTIL_E9011,"HECMW-UTIL-E9011","HEC-MW log: Failed to open log file"},
	{HECMW_UTIL_E9012,"HECMW-UTIL-E9012","HEC-MW log: Failed to output log file"},
	{HECMW_UTIL_E9013,"HECMW-UTIL-E9013","HEC-MW log: Failed to close log file"},
	{-1,NULL,NULL}
};
