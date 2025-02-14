
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Interface for Phalcon\Acl\Role
 */
ZEPHIR_INIT_CLASS(Phalcon_Acl_RoleInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalcon\\Acl, RoleInterface, phalcon, acl_roleinterface, phalcon_acl_roleinterface_method_entry);

	return SUCCESS;

}

/**
 * Returns the role name
 */
ZEPHIR_DOC_METHOD(Phalcon_Acl_RoleInterface, getName);
/**
 * Returns role description
 */
ZEPHIR_DOC_METHOD(Phalcon_Acl_RoleInterface, getDescription);
/**
 * Magic method __toString
 */
ZEPHIR_DOC_METHOD(Phalcon_Acl_RoleInterface, __toString);
