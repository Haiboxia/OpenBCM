/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2019 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_ipv4_pat_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat,
        sizeof(ARAD_PP_SW_DB_IPV4_PAT_TREE),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->ipv4_pat);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_set(int unit, int occ_bm_hndl_idx_0, SOC_SAND_OCC_BM_PTR occ_bm_hndl){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.verify( unit, occ_bm_hndl_idx_0));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl[occ_bm_hndl_idx_0],
        occ_bm_hndl,
        SOC_SAND_OCC_BM_PTR,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_get(int unit, int occ_bm_hndl_idx_0, SOC_SAND_OCC_BM_PTR *occ_bm_hndl){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.verify( unit, occ_bm_hndl_idx_0));
    *occ_bm_hndl = sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl[occ_bm_hndl_idx_0];
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_alloc(int unit, int nof_instances_to_alloc){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl,
        nof_instances_to_alloc * sizeof(SOC_SAND_OCC_BM_PTR),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_verify(int unit, int occ_bm_hndl_idx_0){
    uint32 allocated_size = 0;
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl);
    _SOC_IF_ERR_EXIT(shr_sw_state_allocated_size_get (unit, (uint8*)sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl, &allocated_size));
    SW_STATE_OUT_OF_BOUND_CHECK( occ_bm_hndl_idx_0, allocated_size /
        sizeof(*(sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->occ_bm_hndl)) - 1, "occ_bm_hndl");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_nof_set(int unit, int nof){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.nof.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->nof,
        nof,
        int,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_nof_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_nof_get(int unit, int *nof){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.nof.verify( unit));
    *nof = sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->nof;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_nof_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_counter_set(int unit, int counter){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.counter.verify( unit));
    SHR_SW_STATE_SET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->counter,
        counter,
        int,
        SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_ipv4_pat_counter_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_counter_get(int unit, int *counter){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.counter.verify( unit));
    *counter = sw_state[unit]->dpp.soc.arad.pp->ipv4_pat->counter;
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_ipv4_pat_counter_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_soc_arad_pp_ipv4_pat_access_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.alloc = sw_state_dpp_soc_arad_pp_ipv4_pat_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.is_allocated = sw_state_dpp_soc_arad_pp_ipv4_pat_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.free = sw_state_dpp_soc_arad_pp_ipv4_pat_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.verify = sw_state_dpp_soc_arad_pp_ipv4_pat_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.set = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.get = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.alloc = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.is_allocated = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.free = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.occ_bm_hndl.verify = sw_state_dpp_soc_arad_pp_ipv4_pat_occ_bm_hndl_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.nof.set = sw_state_dpp_soc_arad_pp_ipv4_pat_nof_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.nof.get = sw_state_dpp_soc_arad_pp_ipv4_pat_nof_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.nof.verify = sw_state_dpp_soc_arad_pp_ipv4_pat_nof_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.counter.set = sw_state_dpp_soc_arad_pp_ipv4_pat_counter_set;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.counter.get = sw_state_dpp_soc_arad_pp_ipv4_pat_counter_get;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_access[unit].dpp.soc.arad.pp.ipv4_pat.counter.verify = sw_state_dpp_soc_arad_pp_ipv4_pat_counter_verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME