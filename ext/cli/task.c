
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          Rack Lin <racklin@gmail.com>                                  |
  +------------------------------------------------------------------------+
*/

#include "php_phalcon.h"

#include "cli/task.h"
#include "di/injectable.h"

#include "kernel/main.h"

/**
 * Phalcon\CLI\Task
 *
 * Every command-line task should extend this class that encapsulates all the task functionality
 *
 * A task can be used to run "tasks" such as migrations, cronjobs, unit-tests, or anything that you want.
 * The Task class should at least have a "mainAction" method
 *
 *<code>
 *
 *class HelloTask extends \Phalcon\CLI\Task
 *{
 *
 *  //This action will be executed by default
 *  public function mainAction()
 *  {
 *
 *  }
 *
 *  public function findAction()
 *  {
 *
 *  }
 *
 *}
 *
 *</code>
 */
zend_class_entry *phalcon_cli_task_ce;

PHALCON_INIT_FUNCS(phalcon_cli_task_method_entry){
	PHP_FE_END
};



/**
 * Phalcon\CLI\Task initializer
 */
PHALCON_INIT_CLASS(Phalcon_CLI_Task){

	PHALCON_REGISTER_CLASS_EX(Phalcon\\CLI, Task, cli_task, phalcon_di_injectable_ce, phalcon_cli_task_method_entry, 0);

	return SUCCESS;
}
