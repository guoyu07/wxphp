/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * File that holds the functions code of the wxWidgets extension
 * 
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

#include "php_wxwidgets.h"
#include "functions.h"

<?php print $header_files ?>

/**
 * Predefined handcoded set of functions
 */
 
/* {{{ proto bool wxInitialize()
   Initialize the library (may be called as many times as needed, but each call to wxInitialize() must be matched by wxUninitialize()). */
PHP_FUNCTION(php_wxInitialize)
{
	wxInitAllImageHandlers();
	RETVAL_BOOL(wxInitialize());
}

/* {{{ proto void wxInitAllImageHandlers()
   Initializes all available image handlers. */
PHP_FUNCTION(php_wxInitAllImageHandlers)
{
	wxInitAllImageHandlers();
	RETVAL_TRUE;
}

/* {{{ proto int wxExecute(string command)
   Executes another program in Unix or Windows. */
PHP_FUNCTION(php_wxExecute)
{
	char* _argStr0;
	int _argStr0_len;
	
	char parse_parameters[] = "s";
    
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &_argStr0 , &_argStr0_len ) == SUCCESS)
	{
		long ret0;
		ret0 = wxExecute(wxString(_argStr0, wxConvUTF8));
		
		RETURN_LONG((long)ret0)
	}
}

/* {{{ proto int wxEntry()
   This function initializes wxWidgets in a platform-dependent way. */
PHP_FUNCTION(php_wxEntry)
{
	int argc = 1;
	char application_name[] = "wxPHP";
	char *argv[2] = { application_name, NULL };
	
	RETVAL_LONG(wxEntry(argc,argv));
}

/* {{{ proto void wxAboutBox(wxAboutDialogInfo info, wxWindow parent)
   This function shows the standard about dialog containing the information specified in info. */
PHP_FUNCTION(php_wxAboutBox)
{
    zval **tmp;
	int id_to_find;
	wxAboutDialogInfo *property;
	zval *objvar;
	char _wxResource[] = "wxResource";
	
	char parse_parameters[] = "O";
	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &objvar, php_wxAboutDialogInfo_entry) == FAILURE)
	{
		RETURN_NULL();
	}
	
	if(zend_hash_find(Z_OBJPROP_P(objvar), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	
	id_to_find = Z_LVAL_PP(tmp);
	
	property = (wxAboutDialogInfo*) zend_list_find(id_to_find, &le_wxAboutDialogInfo);
	
	wxAboutBox(*property);
}

/* {{{ proto object wxC2D(object wxwidgets_object_constant)
   Converts a wxWidgets constant object to dynamic in order to be able to access its methods like wxC2D(wxNORMAL_FONT)->GetPointSize(). */
PHP_FUNCTION(php_wxC2D)
{	
	zval* constant_object = 0;
	
	char parse_parameters[] = "z";
    
    if(ZEND_NUM_ARGS() == 1)
    {
		if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &constant_object ) == SUCCESS)
		{	
			*return_value = *constant_object;
			zval_add_ref(&constant_object);
			return;
		}
	}
	
	zend_error(E_ERROR, "Ivalid count or type of argument for wxCD(), you should pass a constant object to transform to dynamic.");
}

/**
 * Space reserved for autogenerated functions
 */
 
<?php print $functions ?>