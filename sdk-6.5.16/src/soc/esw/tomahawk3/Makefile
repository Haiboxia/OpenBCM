# 
#
# This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
# 
# Copyright 2007-2019 Broadcom Inc. All rights reserved.
# Makefile for Tomahawk3 SOC driver Library
#

LOCALDIR = src/soc/esw/tomahawk3

include ${SDK}/make/Make.config

SUBDIR_TOMAHAWK3_INIT = init
SUBDIR_TOMAHAWK3_TRAFFICMNGR = traffic_manager
SUBDIR_TOMAHAWK3_FLEXPORT = flexport

subdirs := $(SUBDIR_TOMAHAWK3_INIT) $(SUBDIR_TOMAHAWK3_TRAFFICMNGR) $(SUBDIR_TOMAHAWK3_FLEXPORT)

lib = libsoc_tomahawk3

include ${SDK}/make/Make.subdirs

include ${SDK}/make/Make.lib
include ${SDK}/make/Make.depend

