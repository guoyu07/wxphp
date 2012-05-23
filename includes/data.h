/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_DATA_H_GUARD
#define WXPHP_DATA_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_data_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxAcceleratorEntry;
extern zend_class_entry *php_wxAcceleratorEntry_entry;
void php_wxAcceleratorEntry_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxAcceleratorEntry_php: public wxAcceleratorEntry{
	public:
	
	wxAcceleratorEntry_php(const wxAcceleratorEntry& entry):wxAcceleratorEntry(entry){}
	wxAcceleratorEntry_php(int flags=0, int keyCode=0, int cmd=0, wxMenuItem* item=NULL):wxAcceleratorEntry(flags, keyCode, cmd, item){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAcceleratorEntry_functions[] = {
	PHP_ME(php_wxAcceleratorEntry, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAcceleratorEntry, ToString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, Set, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, GetMenuItem, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, GetKeyCode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, GetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, GetCommand, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorEntry, FromString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxAcceleratorTable;
extern zend_class_entry *php_wxAcceleratorTable_entry;
void php_wxAcceleratorTable_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxAcceleratorTable_php: public wxAcceleratorTable{
	public:
	
	wxAcceleratorTable_php():wxAcceleratorTable(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAcceleratorTable_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorTable, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAcceleratorTable, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxCalendarDateAttr;
extern zend_class_entry *php_wxCalendarDateAttr_entry;
void php_wxCalendarDateAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCalendarDateAttr_php: public wxCalendarDateAttr{
	public:
	
	wxCalendarDateAttr_php(wxCalendarDateBorder border, const wxColour& colBorder=wxNullColour):wxCalendarDateAttr(border, colBorder){}
	wxCalendarDateAttr_php(const wxColour& colText=wxNullColour, const wxColour& colBack=wxNullColour, const wxColour& colBorder=wxNullColour, const wxFont& font=wxNullFont, wxCalendarDateBorder border=wxCAL_BORDER_NONE):wxCalendarDateAttr(colText, colBack, colBorder, font, border){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxCalendarDateAttr_functions[] = {
	PHP_ME(php_wxCalendarDateAttr, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxCalendarDateAttr, SetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetHoliday, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetBorderColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, IsHoliday, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, HasTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, HasFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, HasBorderColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, HasBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, HasBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetMark, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetBorderColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCalendarDateAttr, SetMark, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxPageSetupDialogData;
extern zend_class_entry *php_wxPageSetupDialogData_entry;
void php_wxPageSetupDialogData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPageSetupDialogData_php: public wxPageSetupDialogData{
	public:
	
	wxPageSetupDialogData_php():wxPageSetupDialogData(){}
	wxPageSetupDialogData_php(const wxPrintData& printData):wxPageSetupDialogData(printData){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPageSetupDialogData_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, EnableHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, EnableMargins, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, EnableOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, EnablePaper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, EnablePrinter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetDefaultInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetDefaultMinMargins, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetEnableHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetEnableMargins, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetEnableOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetEnablePaper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetEnablePrinter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetMarginBottomRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetMarginTopLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetMinMarginBottomRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetMinMarginTopLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetPaperId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetPaperSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, GetPrintData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetDefaultInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetDefaultMinMargins, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetMarginBottomRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetMarginTopLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetMinMarginBottomRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetMinMarginTopLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetPaperId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetPaperSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, SetPrintData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPageSetupDialogData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxPrintData;
extern zend_class_entry *php_wxPrintData_entry;
void php_wxPrintData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPrintData_php: public wxPrintData{
	public:
	
	wxPrintData_php():wxPrintData(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrintData_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetBin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetCollate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetDuplex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetFilename, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetNoCopies, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetPaperId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetPrintMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetPrinterName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, GetQuality, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetBin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetCollate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetDuplex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetFilename, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetNoCopies, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetPaperId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetPrintMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetPrinterName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, SetQuality, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxRealPoint;
extern zend_class_entry *php_wxRealPoint_entry;
void php_wxRealPoint_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxRealPoint_php: public wxRealPoint{
	public:
	
	wxRealPoint_php():wxRealPoint(){}
	wxRealPoint_php(double x, double y):wxRealPoint(x, y){}
	wxRealPoint_php(const wxPoint& pt):wxRealPoint(pt){}
		
		
	void InitProperties(){
		properties = new void*[2];

		properties[0] = &x;
		properties[1] = &y;
		
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxRealPoint_functions[] = {
	PHP_ME(php_wxRealPoint, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxRealPoint, __get, wxphp_data_get_args, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxRect;
extern zend_class_entry *php_wxRect_entry;
void php_wxRect_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxRect_php: public wxRect{
	public:
	
	wxRect_php():wxRect(){}
	wxRect_php(int x, int y, int width, int height):wxRect(x, y, width, height){}
	wxRect_php(const wxPoint& topLeft, const wxPoint& bottomRight):wxRect(topLeft, bottomRight){}
	wxRect_php(const wxPoint& pos, const wxSize& size):wxRect(pos, size){}
	wxRect_php(const wxSize& size):wxRect(size){}
		
		
	void InitProperties(){
		properties = new void*[4];

		properties[0] = &height;
		properties[1] = &width;
		properties[2] = &x;
		properties[3] = &y;
		
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxRect_functions[] = {
	PHP_ME(php_wxRect, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxRect, SetX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, SetY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Union, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, SetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, SetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, SetHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Offset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, IsEmpty, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Intersects, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Intersect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Inflate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetTopRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetTopLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetTop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, CenterIn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, CentreIn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Contains, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, Deflate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetBottom, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetBottomLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetBottomRight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, GetLeft, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRect, __get, wxphp_data_get_args, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxPoint;
extern zend_class_entry *php_wxPoint_entry;
void php_wxPoint_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPoint_php: public wxPoint{
	public:
	
	wxPoint_php():wxPoint(){}
	wxPoint_php(int x, int y):wxPoint(x, y){}
	wxPoint_php(const wxRealPoint& pt):wxPoint(pt){}
		
		
	void InitProperties(){
		properties = new void*[2];

		properties[0] = &x;
		properties[1] = &y;
		
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPoint_functions[] = {
	PHP_ME(php_wxPoint, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxPoint, IsFullySpecified, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPoint, __get, wxphp_data_get_args, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxSize;
extern zend_class_entry *php_wxSize_entry;
void php_wxSize_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxSize_php: public wxSize{
	public:
	
	wxSize_php():wxSize(){}
	wxSize_php(int width, int height):wxSize(width, height){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSize_functions[] = {
	PHP_ME(php_wxSize, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxSize, SetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, SetHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, SetDefaults, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, Set, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, GetHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, GetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, IsFullySpecified, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, Scale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, DecTo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSize, IncTo, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxListItemAttr;
extern zend_class_entry *php_wxListItemAttr_entry;
void php_wxListItemAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxListItemAttr_php: public wxListItemAttr{
	public:
	
	wxListItemAttr_php():wxListItemAttr(){}
	wxListItemAttr_php(const wxColour& colText, const wxColour& colBack, const wxFont& font):wxListItemAttr(colText, colBack, font){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxListItemAttr_functions[] = {
	PHP_ME(php_wxListItemAttr, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxListItemAttr, SetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, HasTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, HasFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, HasBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, GetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItemAttr, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxListItem;
extern zend_class_entry *php_wxListItem_entry;
void php_wxListItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxListItem_php: public wxListItem{
	public:
	
	wxListItem_php():wxListItem(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxListItem_functions[] = {
	PHP_ME(php_wxListItem, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxListItem, SetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetStateMask, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetState, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetMask, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetImage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetColumn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, SetAlign, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetTextColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetState, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetMask, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetImage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetAlign, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetColumn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxListItem, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxFileType;
extern zend_class_entry *php_wxFileType_entry;
void php_wxFileType_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileType_php: public wxFileType{
	public:
	
	wxFileType_php(const wxFileTypeInfo& ftInfo):wxFileType(ftInfo){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileType_functions[] = {
	PHP_ME(php_wxFileType, GetDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileType, GetExtensions, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileType, GetMimeType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileType, GetMimeTypes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileType, GetOpenCommand, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileType, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxPosition;
extern zend_class_entry *php_wxPosition_entry;
void php_wxPosition_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPosition_php: public wxPosition{
	public:
	
	wxPosition_php():wxPosition(){}
	wxPosition_php(int row, int col):wxPosition(row, col){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPosition_functions[] = {
	PHP_ME(php_wxPosition, GetCol, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, GetColumn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, GetRow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, SetCol, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, SetColumn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, SetRow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPosition, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxRegion;
extern zend_class_entry *php_wxRegion_entry;
void php_wxRegion_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxRegion_php: public wxRegion{
	public:
	
	wxRegion_php():wxRegion(){}
	wxRegion_php(wxCoord x, wxCoord y, wxCoord width, wxCoord height):wxRegion(x, y, width, height){}
	wxRegion_php(const wxPoint& topLeft, const wxPoint& bottomRight):wxRegion(topLeft, bottomRight){}
	wxRegion_php(const wxRect& rect):wxRegion(rect){}
	wxRegion_php(const wxRegion& region):wxRegion(region){}
	wxRegion_php(size_t n, const wxPoint* points, wxPolygonFillMode fillStyle=wxODDEVEN_RULE):wxRegion(n, points, fillStyle){}
	wxRegion_php(const wxBitmap& bmp):wxRegion(bmp){}
	wxRegion_php(const wxBitmap& bmp, const wxColour& transColour, int tolerance=0):wxRegion(bmp, transColour, tolerance){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxRegion_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Contains, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, ConvertToBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, GetBox, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Intersect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, IsEmpty, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, IsEqual, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Offset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Subtract, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Union, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, Xor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRegion, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxStatusBarPane;
extern zend_class_entry *php_wxStatusBarPane_entry;
void php_wxStatusBarPane_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxStatusBarPane_php: public wxStatusBarPane{
	public:
	
	wxStatusBarPane_php(int style=wxSB_NORMAL, size_t width=0):wxStatusBarPane(style, width){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxStatusBarPane_functions[] = {
	PHP_ME(php_wxStatusBarPane, GetText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStatusBarPane, GetStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStatusBarPane, GetWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStatusBarPane, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxTreeItemId;
extern zend_class_entry *php_wxTreeItemId_entry;
void php_wxTreeItemId_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxTreeItemId_php: public wxTreeItemId{
	public:
	
	wxTreeItemId_php():wxTreeItemId(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTreeItemId_functions[] = {
	PHP_ME(php_wxTreeItemId, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxTreeItemId, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxVariant;
extern zend_class_entry *php_wxVariant_entry;
void php_wxVariant_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxVariant_php: public wxVariant{
	public:
	
	wxVariant_php(const wxString& value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(long value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(bool value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(double value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(void* value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(wxObject* value, const wxString& name=wxEmptyString):wxVariant(value, name){}
	wxVariant_php(const wxDateTime& val, const wxString& name=wxEmptyString):wxVariant(val, name){}
	wxVariant_php(const wxArrayString& val, const wxString& name=wxEmptyString):wxVariant(val, name){}
	wxVariant_php(const wxVariant& variant):wxVariant(variant){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxVariant_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Append, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, ClearList, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Convert, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Delete, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetArrayString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetBool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetDateTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetDouble, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetLong, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetVoidPtr, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetWxObjectPtr, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Insert, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, IsNull, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, IsValueKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, MakeNull, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, MakeString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, Member, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, IsType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, GetCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, NullList, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, SetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariant, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxVariantData;
extern zend_class_entry *php_wxVariantData_entry;
void php_wxVariantData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxVariantData_php: public wxVariantData{
	public:
	
	wxVariantData_php():wxVariantData(){}
		
	bool Eq(wxVariantData& data) const;
	wxString GetType() const;
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxVariantData_functions[] = {
	PHP_ME(php_wxVariantData, Clone, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, DecRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, GetValueClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, IncRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVariantData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxVersionInfo;
extern zend_class_entry *php_wxVersionInfo_entry;
void php_wxVersionInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxVersionInfo_php: public wxVersionInfo{
	public:
	
	wxVersionInfo_php(const wxString& name=wxString(), int major=0, int minor=0, int micro=0, const wxString& description=wxString(), const wxString& copyright=wxString()):wxVersionInfo(name, major, minor, micro, description, copyright){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxVersionInfo_functions[] = {
	PHP_ME(php_wxVersionInfo, ToString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, HasCopyright, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetVersionString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetMinor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetMicro, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetMajor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, GetCopyright, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxVersionInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxVersionInfo, HasDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

#endif //WXPHP_DATA_H_GUARD
