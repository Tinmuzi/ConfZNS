/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_9pfs.h"

uint16_t _TRACE_V9FS_RCANCEL_DSTATE;
uint16_t _TRACE_V9FS_RERROR_DSTATE;
uint16_t _TRACE_V9FS_VERSION_DSTATE;
uint16_t _TRACE_V9FS_VERSION_RETURN_DSTATE;
uint16_t _TRACE_V9FS_ATTACH_DSTATE;
uint16_t _TRACE_V9FS_ATTACH_RETURN_DSTATE;
uint16_t _TRACE_V9FS_STAT_DSTATE;
uint16_t _TRACE_V9FS_STAT_RETURN_DSTATE;
uint16_t _TRACE_V9FS_GETATTR_DSTATE;
uint16_t _TRACE_V9FS_GETATTR_RETURN_DSTATE;
uint16_t _TRACE_V9FS_WALK_DSTATE;
uint16_t _TRACE_V9FS_WALK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_OPEN_DSTATE;
uint16_t _TRACE_V9FS_OPEN_RETURN_DSTATE;
uint16_t _TRACE_V9FS_LCREATE_DSTATE;
uint16_t _TRACE_V9FS_LCREATE_RETURN_DSTATE;
uint16_t _TRACE_V9FS_FSYNC_DSTATE;
uint16_t _TRACE_V9FS_CLUNK_DSTATE;
uint16_t _TRACE_V9FS_READ_DSTATE;
uint16_t _TRACE_V9FS_READ_RETURN_DSTATE;
uint16_t _TRACE_V9FS_READDIR_DSTATE;
uint16_t _TRACE_V9FS_READDIR_RETURN_DSTATE;
uint16_t _TRACE_V9FS_WRITE_DSTATE;
uint16_t _TRACE_V9FS_WRITE_RETURN_DSTATE;
uint16_t _TRACE_V9FS_CREATE_DSTATE;
uint16_t _TRACE_V9FS_CREATE_RETURN_DSTATE;
uint16_t _TRACE_V9FS_SYMLINK_DSTATE;
uint16_t _TRACE_V9FS_SYMLINK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_FLUSH_DSTATE;
uint16_t _TRACE_V9FS_LINK_DSTATE;
uint16_t _TRACE_V9FS_REMOVE_DSTATE;
uint16_t _TRACE_V9FS_WSTAT_DSTATE;
uint16_t _TRACE_V9FS_MKNOD_DSTATE;
uint16_t _TRACE_V9FS_MKNOD_RETURN_DSTATE;
uint16_t _TRACE_V9FS_LOCK_DSTATE;
uint16_t _TRACE_V9FS_LOCK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_GETLOCK_DSTATE;
uint16_t _TRACE_V9FS_GETLOCK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_MKDIR_DSTATE;
uint16_t _TRACE_V9FS_MKDIR_RETURN_DSTATE;
uint16_t _TRACE_V9FS_XATTRWALK_DSTATE;
uint16_t _TRACE_V9FS_XATTRWALK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_XATTRCREATE_DSTATE;
uint16_t _TRACE_V9FS_READLINK_DSTATE;
uint16_t _TRACE_V9FS_READLINK_RETURN_DSTATE;
uint16_t _TRACE_V9FS_SETATTR_DSTATE;
uint16_t _TRACE_V9FS_SETATTR_RETURN_DSTATE;
TraceEvent _TRACE_V9FS_RCANCEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_rcancel",
    .sstate = TRACE_V9FS_RCANCEL_ENABLED,
    .dstate = &_TRACE_V9FS_RCANCEL_DSTATE 
};
TraceEvent _TRACE_V9FS_RERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_rerror",
    .sstate = TRACE_V9FS_RERROR_ENABLED,
    .dstate = &_TRACE_V9FS_RERROR_DSTATE 
};
TraceEvent _TRACE_V9FS_VERSION_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_version",
    .sstate = TRACE_V9FS_VERSION_ENABLED,
    .dstate = &_TRACE_V9FS_VERSION_DSTATE 
};
TraceEvent _TRACE_V9FS_VERSION_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_version_return",
    .sstate = TRACE_V9FS_VERSION_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_VERSION_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_ATTACH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_attach",
    .sstate = TRACE_V9FS_ATTACH_ENABLED,
    .dstate = &_TRACE_V9FS_ATTACH_DSTATE 
};
TraceEvent _TRACE_V9FS_ATTACH_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_attach_return",
    .sstate = TRACE_V9FS_ATTACH_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_ATTACH_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_STAT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_stat",
    .sstate = TRACE_V9FS_STAT_ENABLED,
    .dstate = &_TRACE_V9FS_STAT_DSTATE 
};
TraceEvent _TRACE_V9FS_STAT_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_stat_return",
    .sstate = TRACE_V9FS_STAT_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_STAT_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_GETATTR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_getattr",
    .sstate = TRACE_V9FS_GETATTR_ENABLED,
    .dstate = &_TRACE_V9FS_GETATTR_DSTATE 
};
TraceEvent _TRACE_V9FS_GETATTR_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_getattr_return",
    .sstate = TRACE_V9FS_GETATTR_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_GETATTR_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_WALK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_walk",
    .sstate = TRACE_V9FS_WALK_ENABLED,
    .dstate = &_TRACE_V9FS_WALK_DSTATE 
};
TraceEvent _TRACE_V9FS_WALK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_walk_return",
    .sstate = TRACE_V9FS_WALK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_WALK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_OPEN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_open",
    .sstate = TRACE_V9FS_OPEN_ENABLED,
    .dstate = &_TRACE_V9FS_OPEN_DSTATE 
};
TraceEvent _TRACE_V9FS_OPEN_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_open_return",
    .sstate = TRACE_V9FS_OPEN_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_OPEN_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_LCREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_lcreate",
    .sstate = TRACE_V9FS_LCREATE_ENABLED,
    .dstate = &_TRACE_V9FS_LCREATE_DSTATE 
};
TraceEvent _TRACE_V9FS_LCREATE_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_lcreate_return",
    .sstate = TRACE_V9FS_LCREATE_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_LCREATE_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_FSYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_fsync",
    .sstate = TRACE_V9FS_FSYNC_ENABLED,
    .dstate = &_TRACE_V9FS_FSYNC_DSTATE 
};
TraceEvent _TRACE_V9FS_CLUNK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_clunk",
    .sstate = TRACE_V9FS_CLUNK_ENABLED,
    .dstate = &_TRACE_V9FS_CLUNK_DSTATE 
};
TraceEvent _TRACE_V9FS_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_read",
    .sstate = TRACE_V9FS_READ_ENABLED,
    .dstate = &_TRACE_V9FS_READ_DSTATE 
};
TraceEvent _TRACE_V9FS_READ_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_read_return",
    .sstate = TRACE_V9FS_READ_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_READ_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_READDIR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_readdir",
    .sstate = TRACE_V9FS_READDIR_ENABLED,
    .dstate = &_TRACE_V9FS_READDIR_DSTATE 
};
TraceEvent _TRACE_V9FS_READDIR_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_readdir_return",
    .sstate = TRACE_V9FS_READDIR_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_READDIR_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_write",
    .sstate = TRACE_V9FS_WRITE_ENABLED,
    .dstate = &_TRACE_V9FS_WRITE_DSTATE 
};
TraceEvent _TRACE_V9FS_WRITE_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_write_return",
    .sstate = TRACE_V9FS_WRITE_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_WRITE_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_CREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_create",
    .sstate = TRACE_V9FS_CREATE_ENABLED,
    .dstate = &_TRACE_V9FS_CREATE_DSTATE 
};
TraceEvent _TRACE_V9FS_CREATE_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_create_return",
    .sstate = TRACE_V9FS_CREATE_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_CREATE_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_SYMLINK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_symlink",
    .sstate = TRACE_V9FS_SYMLINK_ENABLED,
    .dstate = &_TRACE_V9FS_SYMLINK_DSTATE 
};
TraceEvent _TRACE_V9FS_SYMLINK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_symlink_return",
    .sstate = TRACE_V9FS_SYMLINK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_SYMLINK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_FLUSH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_flush",
    .sstate = TRACE_V9FS_FLUSH_ENABLED,
    .dstate = &_TRACE_V9FS_FLUSH_DSTATE 
};
TraceEvent _TRACE_V9FS_LINK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_link",
    .sstate = TRACE_V9FS_LINK_ENABLED,
    .dstate = &_TRACE_V9FS_LINK_DSTATE 
};
TraceEvent _TRACE_V9FS_REMOVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_remove",
    .sstate = TRACE_V9FS_REMOVE_ENABLED,
    .dstate = &_TRACE_V9FS_REMOVE_DSTATE 
};
TraceEvent _TRACE_V9FS_WSTAT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_wstat",
    .sstate = TRACE_V9FS_WSTAT_ENABLED,
    .dstate = &_TRACE_V9FS_WSTAT_DSTATE 
};
TraceEvent _TRACE_V9FS_MKNOD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_mknod",
    .sstate = TRACE_V9FS_MKNOD_ENABLED,
    .dstate = &_TRACE_V9FS_MKNOD_DSTATE 
};
TraceEvent _TRACE_V9FS_MKNOD_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_mknod_return",
    .sstate = TRACE_V9FS_MKNOD_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_MKNOD_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_LOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_lock",
    .sstate = TRACE_V9FS_LOCK_ENABLED,
    .dstate = &_TRACE_V9FS_LOCK_DSTATE 
};
TraceEvent _TRACE_V9FS_LOCK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_lock_return",
    .sstate = TRACE_V9FS_LOCK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_LOCK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_GETLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_getlock",
    .sstate = TRACE_V9FS_GETLOCK_ENABLED,
    .dstate = &_TRACE_V9FS_GETLOCK_DSTATE 
};
TraceEvent _TRACE_V9FS_GETLOCK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_getlock_return",
    .sstate = TRACE_V9FS_GETLOCK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_GETLOCK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_MKDIR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_mkdir",
    .sstate = TRACE_V9FS_MKDIR_ENABLED,
    .dstate = &_TRACE_V9FS_MKDIR_DSTATE 
};
TraceEvent _TRACE_V9FS_MKDIR_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_mkdir_return",
    .sstate = TRACE_V9FS_MKDIR_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_MKDIR_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_XATTRWALK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_xattrwalk",
    .sstate = TRACE_V9FS_XATTRWALK_ENABLED,
    .dstate = &_TRACE_V9FS_XATTRWALK_DSTATE 
};
TraceEvent _TRACE_V9FS_XATTRWALK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_xattrwalk_return",
    .sstate = TRACE_V9FS_XATTRWALK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_XATTRWALK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_XATTRCREATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_xattrcreate",
    .sstate = TRACE_V9FS_XATTRCREATE_ENABLED,
    .dstate = &_TRACE_V9FS_XATTRCREATE_DSTATE 
};
TraceEvent _TRACE_V9FS_READLINK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_readlink",
    .sstate = TRACE_V9FS_READLINK_ENABLED,
    .dstate = &_TRACE_V9FS_READLINK_DSTATE 
};
TraceEvent _TRACE_V9FS_READLINK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_readlink_return",
    .sstate = TRACE_V9FS_READLINK_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_READLINK_RETURN_DSTATE 
};
TraceEvent _TRACE_V9FS_SETATTR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_setattr",
    .sstate = TRACE_V9FS_SETATTR_ENABLED,
    .dstate = &_TRACE_V9FS_SETATTR_DSTATE 
};
TraceEvent _TRACE_V9FS_SETATTR_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "v9fs_setattr_return",
    .sstate = TRACE_V9FS_SETATTR_RETURN_ENABLED,
    .dstate = &_TRACE_V9FS_SETATTR_RETURN_DSTATE 
};
TraceEvent *hw_9pfs_trace_events[] = {
    &_TRACE_V9FS_RCANCEL_EVENT,
    &_TRACE_V9FS_RERROR_EVENT,
    &_TRACE_V9FS_VERSION_EVENT,
    &_TRACE_V9FS_VERSION_RETURN_EVENT,
    &_TRACE_V9FS_ATTACH_EVENT,
    &_TRACE_V9FS_ATTACH_RETURN_EVENT,
    &_TRACE_V9FS_STAT_EVENT,
    &_TRACE_V9FS_STAT_RETURN_EVENT,
    &_TRACE_V9FS_GETATTR_EVENT,
    &_TRACE_V9FS_GETATTR_RETURN_EVENT,
    &_TRACE_V9FS_WALK_EVENT,
    &_TRACE_V9FS_WALK_RETURN_EVENT,
    &_TRACE_V9FS_OPEN_EVENT,
    &_TRACE_V9FS_OPEN_RETURN_EVENT,
    &_TRACE_V9FS_LCREATE_EVENT,
    &_TRACE_V9FS_LCREATE_RETURN_EVENT,
    &_TRACE_V9FS_FSYNC_EVENT,
    &_TRACE_V9FS_CLUNK_EVENT,
    &_TRACE_V9FS_READ_EVENT,
    &_TRACE_V9FS_READ_RETURN_EVENT,
    &_TRACE_V9FS_READDIR_EVENT,
    &_TRACE_V9FS_READDIR_RETURN_EVENT,
    &_TRACE_V9FS_WRITE_EVENT,
    &_TRACE_V9FS_WRITE_RETURN_EVENT,
    &_TRACE_V9FS_CREATE_EVENT,
    &_TRACE_V9FS_CREATE_RETURN_EVENT,
    &_TRACE_V9FS_SYMLINK_EVENT,
    &_TRACE_V9FS_SYMLINK_RETURN_EVENT,
    &_TRACE_V9FS_FLUSH_EVENT,
    &_TRACE_V9FS_LINK_EVENT,
    &_TRACE_V9FS_REMOVE_EVENT,
    &_TRACE_V9FS_WSTAT_EVENT,
    &_TRACE_V9FS_MKNOD_EVENT,
    &_TRACE_V9FS_MKNOD_RETURN_EVENT,
    &_TRACE_V9FS_LOCK_EVENT,
    &_TRACE_V9FS_LOCK_RETURN_EVENT,
    &_TRACE_V9FS_GETLOCK_EVENT,
    &_TRACE_V9FS_GETLOCK_RETURN_EVENT,
    &_TRACE_V9FS_MKDIR_EVENT,
    &_TRACE_V9FS_MKDIR_RETURN_EVENT,
    &_TRACE_V9FS_XATTRWALK_EVENT,
    &_TRACE_V9FS_XATTRWALK_RETURN_EVENT,
    &_TRACE_V9FS_XATTRCREATE_EVENT,
    &_TRACE_V9FS_READLINK_EVENT,
    &_TRACE_V9FS_READLINK_RETURN_EVENT,
    &_TRACE_V9FS_SETATTR_EVENT,
    &_TRACE_V9FS_SETATTR_RETURN_EVENT,
  NULL,
};

static void trace_hw_9pfs_register_events(void)
{
    trace_event_register_group(hw_9pfs_trace_events);
}
trace_init(trace_hw_9pfs_register_events)