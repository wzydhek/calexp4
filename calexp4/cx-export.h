#pragma once
////////////////////////////////////////////////////////////////////////////
//
// To export a MAX Model or Animation, simply call CalExportModel or
// CalExportAnimation, passing in the configuration parameters.  If the
// exporter returns an error message, display it.  These functions present
// no dialog boxes.
//
////////////////////////////////////////////////////////////////////////////

wchar_t *CalExportModel(IObjParam *iobjparams,
	wchar_t   *conf_filename,
	bool    conf_progmesh,
	bool    conf_springsys,
	int    *conf_bumpid,
	int    *conf_bumpmap,
	int     conf_bumpcount,
	int     conf_maxbones,
	double  conf_minweight,
	wchar_t  **conf_itemlist,
	int     conf_itemcount);

wchar_t *CalExportAnimation(IObjParam *iobjparams,
	wchar_t   *conf_filename,
	int     conf_animstart,
	int     conf_animstop,
	double  conf_animrate,
	wchar_t  **conf_itemlist,
	int     conf_itemcount);

