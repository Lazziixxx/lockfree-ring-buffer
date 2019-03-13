#ifndef _queuetype_h
#define _queuetype_h 1

#if RING_BUFFER_USE
#include "common_ring.h"
#define QUEUE_NAME "common ring"
#elif LIST_USE
#include "list.h"
#define QUEUE_NAME "list"
#elif LOCKFREE_USE
#include "lockfree.h"
#define QUEUE_NAME "lockfree"
#else
#error "unknown test type"
#endif

#endif
