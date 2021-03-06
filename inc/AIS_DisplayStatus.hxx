// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DisplayStatus_HeaderFile
#define _AIS_DisplayStatus_HeaderFile

#include <Standard_PrimitiveTypes.hxx>


//! To give the display status of an Interactive Object.
//! This will be one of the following:
//! -   DS_Displayed: the Interactive Object is
//! displayed in the main viewer;
//! -   DS_Erased: the Interactive Object is hidden in main viewer;
//! -   DS_Temporary: the Interactive Object is temporarily displayed;
//! -   DS_None: the Interactive Object is nowhere displayed.
enum AIS_DisplayStatus
{
AIS_DS_Displayed,
AIS_DS_Erased,
AIS_DS_Temporary,
AIS_DS_None
};

#endif // _AIS_DisplayStatus_HeaderFile
