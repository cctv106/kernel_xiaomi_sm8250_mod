#undef TRACE_SYSTEM
#define TRACE_SYSTEM ksu_trace

#if !defined(_TRACE_KSU_TRACE_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_KSU_TRACE_H

#include <linux/tracepoint.h>
#include <linux/fs.h>

DECLARE_TRACE(ksu_do_execve_hook,
	TP_PROTO(int *fd, struct filename **filename_ptr, void *argv, void *envp, int *flags),
	TP_ARGS(fd, filename_ptr, argv, envp, flags));

#endif

#include <trace/define_trace.h>