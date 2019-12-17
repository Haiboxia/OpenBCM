/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCM_CUSTOM_H__
#define __BCM_CUSTOM_H__

#include <bcm/types.h>

#if !defined(BCM_CUSTOM_ARGS_MAX)
#define BCM_CUSTOM_ARGS_MAX     256        
#endif

#define BCM_CUSTOM_SET          1          
#define BCM_CUSTOM_GET          2          

/* bcm_custom_cb_t */
typedef int (*bcm_custom_cb_t)(
    int unit, 
    bcm_port_t port, 
    int setget, 
    int type, 
    int length, 
    uint32 *args, 
    int *actual_length, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Register a custom callback function. */
extern int bcm_custom_register(
    int unit, 
    bcm_custom_cb_t func, 
    void *user_data);

/* Register a custom callback function. */
extern int bcm_custom_unregister(
    int unit);

/* Invoke a custom handler for a port. */
extern int bcm_custom_port_set(
    int unit, 
    bcm_port_t port, 
    int type, 
    int len, 
    uint32 *args);

/* Invoke a custom handler for a port. */
extern int bcm_custom_port_get(
    int unit, 
    bcm_port_t port, 
    int type, 
    int max_len, 
    uint32 *args, 
    int *actual_len);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_CUSTOM_H__ */