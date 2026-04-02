/* enc extension for PHP */

#ifndef PHP_ENC_H
# define PHP_ENC_H

extern zend_module_entry enc_module_entry;
# define phpext_enc_ptr &enc_module_entry

#define PHP_ENC_VERSION "1.0.1" /* Replace with version number for your extension */

# if defined(ZTS) && defined(COMPILE_DL_ENC)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_ENC_H */
