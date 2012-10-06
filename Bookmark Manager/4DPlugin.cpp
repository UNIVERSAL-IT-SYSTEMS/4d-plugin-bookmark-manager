/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.c
 #	source generated by 4D Plugin Wizard
 #	Project : Bookmark Manager
 #	author : miyako
 #	2012/10/06
 #
 # --------------------------------------------------------------------------------*/


#include "4DPluginAPI.h"
#include "4DPlugin.h"

#include "functions_bkmk.h"

void PluginMain(int32_t selector, PA_PluginParameters params)
{
	try
	{
		int32_t pProcNum = selector;
		sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
		PackagePtr pParams = (PackagePtr)params->fParameters;

		CommandDispatcher(pProcNum, pResult, pParams); 
	}
	catch(...)
	{

	}
}

void CommandDispatcher (int32_t pProcNum, sLONG_PTR *pResult, PackagePtr pParams)
{
	switch(pProcNum)
	{
// --- Bookmarks

		case 1 :
			BOOKMARK_Create(pResult, pParams);
			break;

		case 2 :
			BOOKMARK_Resolve(pResult, pParams);
			break;

		case 3 :
			BOOKMARK_Export_to_file(pResult, pParams);
			break;

	}
}