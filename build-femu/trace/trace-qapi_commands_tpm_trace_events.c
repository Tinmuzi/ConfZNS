/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_tpm_trace_events.h"

uint16_t _TRACE_QMP_ENTER_QUERY_TPM_MODELS_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_TPM_MODELS_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_TPM_TYPES_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_TPM_TYPES_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_TPM_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_TPM_DSTATE;
TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_MODELS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_tpm_models",
    .sstate = TRACE_QMP_ENTER_QUERY_TPM_MODELS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_TPM_MODELS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_MODELS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_tpm_models",
    .sstate = TRACE_QMP_EXIT_QUERY_TPM_MODELS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_TPM_MODELS_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_TYPES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_tpm_types",
    .sstate = TRACE_QMP_ENTER_QUERY_TPM_TYPES_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_TPM_TYPES_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_TYPES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_tpm_types",
    .sstate = TRACE_QMP_EXIT_QUERY_TPM_TYPES_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_TPM_TYPES_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_query_tpm",
    .sstate = TRACE_QMP_ENTER_QUERY_TPM_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_TPM_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_query_tpm",
    .sstate = TRACE_QMP_EXIT_QUERY_TPM_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_TPM_DSTATE 
};
TraceEvent *qapi_commands_tpm_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_QUERY_TPM_MODELS_EVENT,
    &_TRACE_QMP_EXIT_QUERY_TPM_MODELS_EVENT,
    &_TRACE_QMP_ENTER_QUERY_TPM_TYPES_EVENT,
    &_TRACE_QMP_EXIT_QUERY_TPM_TYPES_EVENT,
    &_TRACE_QMP_ENTER_QUERY_TPM_EVENT,
    &_TRACE_QMP_EXIT_QUERY_TPM_EVENT,
  NULL,
};

static void trace_qapi_commands_tpm_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_tpm_trace_events_trace_events);
}
trace_init(trace_qapi_commands_tpm_trace_events_register_events)