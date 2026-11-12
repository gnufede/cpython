/*[clinic input]
preserve
[clinic start generated code]*/

#if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
#  include "pycore_gc.h"          // PyGC_Head
#  include "pycore_runtime.h"     // _Py_ID()
#endif
#include "pycore_modsupport.h"    // _PyArg_CheckPositional()

PyDoc_STRVAR(monitoring_use_tool_id__doc__,
"use_tool_id($module, tool_id, name, /)\n"
"--\n"
"\n");

#define MONITORING_USE_TOOL_ID_METHODDEF    \
    {"use_tool_id", _PyCFunction_CAST(monitoring_use_tool_id), METH_FASTCALL, monitoring_use_tool_id__doc__},

static PyObject *
monitoring_use_tool_id_impl(PyObject *module, int tool_id, PyObject *name);

static PyObject *
monitoring_use_tool_id(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int tool_id;
    PyObject *name;

    if (!_PyArg_CheckPositional("use_tool_id", nargs, 2, 2)) {
        goto exit;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    name = args[1];
    return_value = monitoring_use_tool_id_impl(module, tool_id, name);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_clear_tool_id__doc__,
"clear_tool_id($module, tool_id, /)\n"
"--\n"
"\n");

#define MONITORING_CLEAR_TOOL_ID_METHODDEF    \
    {"clear_tool_id", (PyCFunction)monitoring_clear_tool_id, METH_O, monitoring_clear_tool_id__doc__},

static PyObject *
monitoring_clear_tool_id_impl(PyObject *module, int tool_id);

static PyObject *
monitoring_clear_tool_id(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    int tool_id;

    tool_id = PyLong_AsInt(arg);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = monitoring_clear_tool_id_impl(module, tool_id);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_free_tool_id__doc__,
"free_tool_id($module, tool_id, /)\n"
"--\n"
"\n");

#define MONITORING_FREE_TOOL_ID_METHODDEF    \
    {"free_tool_id", (PyCFunction)monitoring_free_tool_id, METH_O, monitoring_free_tool_id__doc__},

static PyObject *
monitoring_free_tool_id_impl(PyObject *module, int tool_id);

static PyObject *
monitoring_free_tool_id(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    int tool_id;

    tool_id = PyLong_AsInt(arg);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = monitoring_free_tool_id_impl(module, tool_id);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_get_tool__doc__,
"get_tool($module, tool_id, /)\n"
"--\n"
"\n");

#define MONITORING_GET_TOOL_METHODDEF    \
    {"get_tool", (PyCFunction)monitoring_get_tool, METH_O, monitoring_get_tool__doc__},

static PyObject *
monitoring_get_tool_impl(PyObject *module, int tool_id);

static PyObject *
monitoring_get_tool(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    int tool_id;

    tool_id = PyLong_AsInt(arg);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = monitoring_get_tool_impl(module, tool_id);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_register_callback__doc__,
"register_callback($module, tool_id, event, func, /)\n"
"--\n"
"\n");

#define MONITORING_REGISTER_CALLBACK_METHODDEF    \
    {"register_callback", _PyCFunction_CAST(monitoring_register_callback), METH_FASTCALL, monitoring_register_callback__doc__},

static PyObject *
monitoring_register_callback_impl(PyObject *module, int tool_id, int event,
                                  PyObject *func);

static PyObject *
monitoring_register_callback(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int tool_id;
    int event;
    PyObject *func;

    if (!_PyArg_CheckPositional("register_callback", nargs, 3, 3)) {
        goto exit;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    event = PyLong_AsInt(args[1]);
    if (event == -1 && PyErr_Occurred()) {
        goto exit;
    }
    func = args[2];
    return_value = monitoring_register_callback_impl(module, tool_id, event, func);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_get_events__doc__,
"get_events($module, tool_id, /)\n"
"--\n"
"\n");

#define MONITORING_GET_EVENTS_METHODDEF    \
    {"get_events", (PyCFunction)monitoring_get_events, METH_O, monitoring_get_events__doc__},

static int
monitoring_get_events_impl(PyObject *module, int tool_id);

static PyObject *
monitoring_get_events(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    int tool_id;
    int _return_value;

    tool_id = PyLong_AsInt(arg);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    _return_value = monitoring_get_events_impl(module, tool_id);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyLong_FromLong((long)_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_set_events__doc__,
"set_events($module, tool_id, event_set, /)\n"
"--\n"
"\n");

#define MONITORING_SET_EVENTS_METHODDEF    \
    {"set_events", _PyCFunction_CAST(monitoring_set_events), METH_FASTCALL, monitoring_set_events__doc__},

static PyObject *
monitoring_set_events_impl(PyObject *module, int tool_id, int event_set);

static PyObject *
monitoring_set_events(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int tool_id;
    int event_set;

    if (!_PyArg_CheckPositional("set_events", nargs, 2, 2)) {
        goto exit;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    event_set = PyLong_AsInt(args[1]);
    if (event_set == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = monitoring_set_events_impl(module, tool_id, event_set);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_get_local_events__doc__,
"get_local_events($module, tool_id, code, /)\n"
"--\n"
"\n");

#define MONITORING_GET_LOCAL_EVENTS_METHODDEF    \
    {"get_local_events", _PyCFunction_CAST(monitoring_get_local_events), METH_FASTCALL, monitoring_get_local_events__doc__},

static int
monitoring_get_local_events_impl(PyObject *module, int tool_id,
                                 PyObject *code);

static PyObject *
monitoring_get_local_events(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int tool_id;
    PyObject *code;
    int _return_value;

    if (!_PyArg_CheckPositional("get_local_events", nargs, 2, 2)) {
        goto exit;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    code = args[1];
    _return_value = monitoring_get_local_events_impl(module, tool_id, code);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyLong_FromLong((long)_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_set_local_events__doc__,
"set_local_events($module, tool_id, code, event_set, /)\n"
"--\n"
"\n");

#define MONITORING_SET_LOCAL_EVENTS_METHODDEF    \
    {"set_local_events", _PyCFunction_CAST(monitoring_set_local_events), METH_FASTCALL, monitoring_set_local_events__doc__},

static PyObject *
monitoring_set_local_events_impl(PyObject *module, int tool_id,
                                 PyObject *code, int event_set);

static PyObject *
monitoring_set_local_events(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int tool_id;
    PyObject *code;
    int event_set;

    if (!_PyArg_CheckPositional("set_local_events", nargs, 3, 3)) {
        goto exit;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
    code = args[1];
    event_set = PyLong_AsInt(args[2]);
    if (event_set == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = monitoring_set_local_events_impl(module, tool_id, code, event_set);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring_restart_events__doc__,
"restart_events($module, /, tool_id=-1)\n"
"--\n"
"\n");

#define MONITORING_RESTART_EVENTS_METHODDEF    \
    {"restart_events", _PyCFunction_CAST(monitoring_restart_events), METH_FASTCALL|METH_KEYWORDS, monitoring_restart_events__doc__},

static PyObject *
monitoring_restart_events_impl(PyObject *module, int tool_id);

static PyObject *
monitoring_restart_events(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    #if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)

    #define NUM_KEYWORDS 1
    static struct {
        PyGC_Head _this_is_not_used;
        PyObject_VAR_HEAD
        Py_hash_t ob_hash;
        PyObject *ob_item[NUM_KEYWORDS];
    } _kwtuple = {
        .ob_base = PyVarObject_HEAD_INIT(&PyTuple_Type, NUM_KEYWORDS)
        .ob_hash = -1,
        .ob_item = { &_Py_ID(tool_id), },
    };
    #undef NUM_KEYWORDS
    #define KWTUPLE (&_kwtuple.ob_base.ob_base)

    #else  // !Py_BUILD_CORE
    #  define KWTUPLE NULL
    #endif  // !Py_BUILD_CORE

    static const char * const _keywords[] = {"tool_id", NULL};
    static _PyArg_Parser _parser = {
        .keywords = _keywords,
        .fname = "restart_events",
        .kwtuple = KWTUPLE,
    };
    #undef KWTUPLE
    PyObject *argsbuf[1];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 0;
    int tool_id = -1;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser,
            /*minpos*/ 0, /*maxpos*/ 1, /*minkw*/ 0, /*varpos*/ 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_pos;
    }
    tool_id = PyLong_AsInt(args[0]);
    if (tool_id == -1 && PyErr_Occurred()) {
        goto exit;
    }
skip_optional_pos:
    return_value = monitoring_restart_events_impl(module, tool_id);

exit:
    return return_value;
}

PyDoc_STRVAR(monitoring__all_events__doc__,
"_all_events($module, /)\n"
"--\n"
"\n");

#define MONITORING__ALL_EVENTS_METHODDEF    \
    {"_all_events", (PyCFunction)monitoring__all_events, METH_NOARGS, monitoring__all_events__doc__},

static PyObject *
monitoring__all_events_impl(PyObject *module);

static PyObject *
monitoring__all_events(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return monitoring__all_events_impl(module);
}
/*[clinic end generated code: output=fd2613cee8962b17 input=a9049054013a1b77]*/
