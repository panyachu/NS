#include "AvHConstants.h"
#include <cstring>

const int slashchr =  '\\';
#define kAvHModDir					((const char*)("ns")) // shouldnt it be ns??? // was nsp

const char* getModDirectory(void)
{
	return kAvHModDir;
}

const char* getModName(void)
{
	return kAvHGameName;
}
