///////////////////////////////////////////////////////////////////////////////
// Untitled1Services.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Untitled1 = 0x3F000000;
#define SRVNAME_UNTITLED1 "Untitled1"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_Untitled1CModule1 = {0xaf24c236,0x18c9,0x48d0,{0xae,0x48,0x2b,0xe6,0x16,0xef,0x5c,0xe1}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1Parameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _Module1Parameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} Module1Parameter, *PModule1Parameter;

typedef struct _Module1Inputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
} Module1Inputs, *PModule1Inputs;

typedef struct _Module1Outputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
} Module1Outputs, *PModule1Outputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>