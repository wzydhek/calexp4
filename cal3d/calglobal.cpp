#include "stdafx.h"
//****************************************************************************//
// global.cpp                                                                 //
// Copyright (C) 2001, 2002 Bruno 'Beosil' Heidelberger                       //
//****************************************************************************//
// This library is free software; you can redistribute it and/or modify it    //
// under the terms of the GNU Lesser General Public License as published by   //
// the Free Software Foundation; either version 2.1 of the License, or (at    //
// your option) any later version.                                            //
//****************************************************************************//

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

//****************************************************************************//
// Includes                                                                   //
//****************************************************************************//

#include "calglobal.h"

//****************************************************************************//

void WriteLog(const char *msg)
{
#if _DEBUG
	// open the file
	std::ofstream file;
	file.open("C:\\tmp\\debug.log", std::ios::binary | std::ios::app);
	if (!file)
	{
		return;
	}

	file.write(msg, strlen(msg));
	file.write("\r\n", 2);


	// explicitly close the file
	file.close();
#endif
}
void WriteLog(const char *var, int val)
{
#if _DEBUG
	// open the file
	std::ofstream file;
	file.open("C:\\tmp\\debug.log", std::ios::binary | std::ios::app);
	if (!file)
	{
		return;
	}
	char msg[256];
	sprintf(msg, "%s: %d", var, val);

	file.write(msg, strlen(msg));
	file.write("\r\n", 2);


	// explicitly close the file
	file.close();
#endif
}
