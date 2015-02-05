
#ifndef _SNG_PYTHON_LOGMSG_H
#define _SNG_PYTHON_LOGMSG_H

#include "syslog-ng.h"
#include <Python.h>

PyObject *py_log_message_new(LogMessage *msg);
void python_log_message_init(void);

#endif
