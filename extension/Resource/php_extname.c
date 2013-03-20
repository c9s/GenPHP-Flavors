#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_{{ extname }}.h"

static zend_function_entry {{ extname }}_functions[] = {
    PHP_FE({{extname}}_test, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry {{extname}}_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_{{extname_uc}}_EXTNAME,
    {{extname}}_functions, // zend_function_entry
    NULL,   // PHP_MINIT({{extname}}) 
    NULL,   // 
    NULL,   // PHP_RINIT({{extname}})
    NULL,   // PHP_RSHUTDOWN({{extname}})
    NULL,   // PHP_MINFO({{extname}})
#if ZEND_MODULE_API_NO >= 20010901
    PHP_{{extname_uc}}_VERSION,  // your extension version
#endif
    STANDARD_MODULE_PROPERTIES, // PHP_MODULE_GLOBALS({{extname}}),
    NULL,    // PHP_GINIT({{ extname }})
    NULL    // TODO
};

#ifdef COMPILE_DL_{{extname_uc}}
ZEND_GET_MODULE({{extname}})
#endif

PHP_FUNCTION({{extname}}_test)
{
    RETURN_STRING("Hello World", 1);
}


